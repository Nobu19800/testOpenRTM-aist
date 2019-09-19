#!/usr/bin/env python
# -*- coding: utf-8 -*-
# -*- Python -*-

"""
 @file testInPortpy.py
 @brief ModuleDescription
 @date $Date$


"""
import cv2
import OpenRTM_aist
import RTC
import Img
import sys
import time
import numpy
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
testinportpy_spec = ["implementation_id", "testInPortpy",
                     "type_name",         "testInPortpy",
                     "description",       "ModuleDescription",
                     "version",           "1.0.0",
                     "vendor",            "VenderName",
                     "category",          "Category",
                     "activity_type",     "STATIC",
                     "max_instance",      "1",
                     "language",          "Python",
                     "lang_type",         "SCRIPT",
                     ""]
# </rtc-template>

##
# @class testInPortpy
# @brief ModuleDescription
#
#


class testInPortpy(OpenRTM_aist.DataFlowComponentBase):

    ##
    # @brief constructor
    # @param manager Maneger Object
    #
    def __init__(self, manager):
        OpenRTM_aist.DataFlowComponentBase.__init__(self, manager)

        self._d_in = OpenRTM_aist.instantiateDataType(Img.TimedCameraImage)
        """
		"""
        self._inIn = OpenRTM_aist.InPort("in", self._d_in)

        # initialize of configuration-data.
        # <rtc-template block="init_conf_param">

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

        # Set InPort buffers
        self.addInPort("in", self._inIn)

        # Set OutPort buffers

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
        cv2.namedWindow("CaptureImage", cv2.WINDOW_NORMAL)
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
        cv2.destroyWindow("CaptureImage")
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
        cv2.waitKey(1)
        if not self._inIn.isNew():
            return RTC.RTC_OK

        data = self._inIn.read()
        # img = numpy.frombuffer(
        #    data.data.image.raw_data, dtype='int8').reshape((data.data.image.height, data.data.image.width, 3))

        # img = cv2.cvtColor(img, cv2.COLOR_RGB2BGR)
        img = numpy.frombuffer(data.data.image.raw_data, numpy.uint8).reshape(
            (data.data.image.height, data.data.image.width, 3))
        img = cv2.cvtColor(img, cv2.COLOR_BGRA2BGR)

        cv2.imshow("CaptureImage", img)
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

    ##
    #
    # The reset action that is invoked resetting
    # This is same but different the former rtc_init_entry()
    #
    # @param ec_id target ExecutionContext Id
    #
    # @return RTC::ReturnCode_t
    #
    #
    def onReset(self, ec_id):

        return RTC.RTC_OK

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


def testInPortpyInit(manager):
    profile = OpenRTM_aist.Properties(defaults_str=testinportpy_spec)
    manager.registerFactory(profile,
                            testInPortpy,
                            OpenRTM_aist.Delete)


def MyModuleInit(manager):
    testInPortpyInit(manager)

    # Create a component
    comp = manager.createComponent("testInPortpy")


def main():
    mgr = OpenRTM_aist.Manager.init(sys.argv)
    mgr.setModuleInitProc(MyModuleInit)
    mgr.activateManager()
    mgr.runManager()


if __name__ == "__main__":
    main()
