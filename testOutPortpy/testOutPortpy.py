﻿#!/usr/bin/env python
# -*- coding: utf-8 -*-
# -*- Python -*-

"""
 @file testOutPortpy.py
 @brief ModuleDescription
 @date $Date$


"""
import Img
import RTC
import OpenRTM_aist
import cv2
import sys
import time
sys.path.append(".")
# Import RTM module


# Import Service implementation class
# <rtc-template block="service_impl">

# </rtc-template>

# Import Service stub modules
# <rtc-template block="consumer_import">
# </rtc-template>


# This module's spesification
# <rtc-template block="module_spec">
testoutportpy_spec = ["implementation_id", "testOutPortpy",
                      "type_name",         "testOutPortpy",
                      "description",       "ModuleDescription",
                      "version",           "1.0.0",
                      "vendor",            "VenderName",
                      "category",          "Category",
                      "activity_type",     "STATIC",
                      "max_instance",      "1",
                      "language",          "Python",
                      "lang_type",         "SCRIPT",
                      "conf.default.filename", "test0.png",

                      "conf.__widget__.filename", "text",

                      "conf.__type__.filename", "string",

                      ""]
# </rtc-template>

##
# @class testOutPortpy
# @brief ModuleDescription
#
#


class testOutPortpy(OpenRTM_aist.DataFlowComponentBase):

    ##
    # @brief constructor
    # @param manager Maneger Object
    #
    def __init__(self, manager):
        OpenRTM_aist.DataFlowComponentBase.__init__(self, manager)

        self._d_out = OpenRTM_aist.instantiateDataType(Img.TimedCameraImage)
        """
		"""
        self._outOut = OpenRTM_aist.OutPort("out", self._d_out)

        # initialize of configuration-data.
        # <rtc-template block="init_conf_param">
        """

		 - Name:  filename
		 - DefaultValue: test0.png
		"""
        self._filename = ['test0.png']

        # </rtc-template>

    ##
    #
    # The initialize action (on CREATED->ALIVE transition)
    # formaer rtc_init_entry()
    #
    # @return RTC::ReturnCode_t
    #
    #

    def onInitialize(self):
        # Bind variables and configuration variable
        self.bindParameter("filename", self._filename, "test0.png")

        # Set InPort buffers

        # Set OutPort buffers
        self.addOutPort("out", self._outOut)

        # Set service provider to Ports

        # Set service consumers to Ports

        # Set CORBA Service Ports

        return RTC.RTC_OK

    ###
    ##
    # The finalize action (on ALIVE->END transition)
    # formaer rtc_exiting_entry()
    ##
    # @return RTC::ReturnCode_t
    #
    ##
    # def onFinalize(self):
    #
    #	return RTC.RTC_OK

    ###
    ##
    # The startup action when ExecutionContext startup
    # former rtc_starting_entry()
    ##
    # @param ec_id target ExecutionContext Id
    ##
    # @return RTC::ReturnCode_t
    ##
    ##
    # def onStartup(self, ec_id):
    #
    #	return RTC.RTC_OK

    ###
    ##
    # The shutdown action when ExecutionContext stop
    # former rtc_stopping_entry()
    ##
    # @param ec_id target ExecutionContext Id
    ##
    # @return RTC::ReturnCode_t
    ##
    ##
    # def onShutdown(self, ec_id):
    #
    #	return RTC.RTC_OK

    ##
    #
    # The activated action (Active state entry action)
    # former rtc_active_entry()
    #
    # @param ec_id target ExecutionContext Id
    #
    # @return RTC::ReturnCode_t
    #
    #
    def onActivated(self, ec_id):
        self._img = cv2.imread(self._filename[0], 1)
        if self._img is None:
            return RTC.RTC_ERROR
        print(type(self._img))
        return RTC.RTC_OK

    ##
    #
    # The deactivated action (Active state exit action)
    # former rtc_active_exit()
    #
    # @param ec_id target ExecutionContext Id
    #
    # @return RTC::ReturnCode_t
    #
    #
    def onDeactivated(self, ec_id):

        return RTC.RTC_OK

    ##
    #
    # The execution action that is invoked periodically
    # former rtc_active_do()
    #
    # @param ec_id target ExecutionContext Id
    #
    # @return RTC::ReturnCode_t
    #
    #
    def onExecute(self, ec_id):
        self._d_out.data.intrinsic.matrix_element = [0.0] * 5
        self._d_out.data.extrinsic = [[0.0]*4]*4
        self._d_out.data.image.format = Img.RGB
        self._d_out.data.image.width = self._img.shape[1]
        self._d_out.data.image.height = self._img.shape[0]
        self._d_out.data.image.raw_data = self._img.tobytes()
        self._outOut.write()
        return RTC.RTC_OK

    ###
    ##
    # The aborting action when main logic error occurred.
    # former rtc_aborting_entry()
    ##
    # @param ec_id target ExecutionContext Id
    ##
    # @return RTC::ReturnCode_t
    ##
    ##
    # def onAborting(self, ec_id):
    #
    #	return RTC.RTC_OK

    ###
    ##
    # The error action in ERROR state
    # former rtc_error_do()
    ##
    # @param ec_id target ExecutionContext Id
    ##
    # @return RTC::ReturnCode_t
    ##
    ##
    # def onError(self, ec_id):
    #
    #	return RTC.RTC_OK

    ###
    ##
    # The reset action that is invoked resetting
    # This is same but different the former rtc_init_entry()
    ##
    # @param ec_id target ExecutionContext Id
    ##
    # @return RTC::ReturnCode_t
    ##
    ##
    # def onReset(self, ec_id):
    #
    #	return RTC.RTC_OK

    ###
    ##
    # The state update action that is invoked after onExecute() action
    # no corresponding operation exists in OpenRTm-aist-0.2.0
    ##
    # @param ec_id target ExecutionContext Id
    ##
    # @return RTC::ReturnCode_t
    ##

    ##
    # def onStateUpdate(self, ec_id):
    #
    #	return RTC.RTC_OK

    ###
    ##
    # The action that is invoked when execution context's rate is changed
    # no corresponding operation exists in OpenRTm-aist-0.2.0
    ##
    # @param ec_id target ExecutionContext Id
    ##
    # @return RTC::ReturnCode_t
    ##
    ##
    # def onRateChanged(self, ec_id):
    #
    #	return RTC.RTC_OK


def testOutPortpyInit(manager):
    profile = OpenRTM_aist.Properties(defaults_str=testoutportpy_spec)
    manager.registerFactory(profile,
                            testOutPortpy,
                            OpenRTM_aist.Delete)


def MyModuleInit(manager):
    testOutPortpyInit(manager)

    # Create a component
    comp = manager.createComponent("testOutPortpy")


def main():
    mgr = OpenRTM_aist.Manager.init(sys.argv)
    mgr.setModuleInitProc(MyModuleInit)
    mgr.activateManager()
    mgr.runManager()


if __name__ == "__main__":
    main()
