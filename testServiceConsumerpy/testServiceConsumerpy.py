﻿#!/usr/bin/env python
# -*- coding: utf-8 -*-
# -*- Python -*-

"""
 @file testServiceConsumerpy.py
 @brief ModuleDescription
 @date $Date$


"""
import OpenRTM_aist
import RTC
import sys
import time
import JARA_ARM
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
testserviceconsumerpy_spec = ["implementation_id", "testServiceConsumerpy",
                              "type_name",         "testServiceConsumerpy",
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
# @class testServiceConsumerpy
# @brief ModuleDescription
#
#


class testServiceConsumerpy(OpenRTM_aist.DataFlowComponentBase):

    ##
    # @brief constructor
    # @param manager Maneger Object
    #
    def __init__(self, manager):
        OpenRTM_aist.DataFlowComponentBase.__init__(self, manager)

        """
		"""
        self._ManipulatorCommonInterface_MiddlePortPort = OpenRTM_aist.CorbaPort(
            "ManipulatorCommonInterface_MiddlePort")

        """
		"""
        self._ManipulatorCommonInterface_Middle = OpenRTM_aist.CorbaConsumer(
            interfaceType=JARA_ARM.ManipulatorCommonInterface_Middle)

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

        # Set OutPort buffers

        # Set service provider to Ports

        # Set service consumers to Ports
        self._ManipulatorCommonInterface_MiddlePortPort.registerConsumer(
            "ManipulatorCommonInterface_Middle", "JARA_ARM::ManipulatorCommonInterface_Middle", self._ManipulatorCommonInterface_Middle)

        # Set CORBA Service Ports
        self.addPort(self._ManipulatorCommonInterface_MiddlePortPort)

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
        obj = self._ManipulatorCommonInterface_Middle._ptr()
        ret = obj.closeGripper()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, offset = obj.getBaseOffset()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, pos = obj.getFeedbackPosCartesian()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, speed = obj.getMaxSpeedCartesian()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, aclTime = obj.getMaxSpeedJoint()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, aclTime = obj.getMinAccelTimeCartesian()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, aclTime = obj.getMinAccelTimeJoint()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, xLimit, yLimit, zLimit = obj.getSoftLimitCartesian()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.moveGripper(0)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.moveLinearCartesianAbs(
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0))
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.moveLinearCartesianRel(
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0))
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.movePTPCartesianAbs(
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0))
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.movePTPCartesianRel(
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0))
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.movePTPJointAbs([])
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.movePTPJointRel([])
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.openGripper()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.pause()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.resume()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.stop()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setAccelTimeCartesian(0)
        if ret.id != 1:
            return RTC.RTC_ERROR
            ret = obj.setAccelTimeJoint(0)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setBaseOffset([[0]*4]*3)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setControlPointOffset([[0]*4]*3)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setMaxSpeedCartesian(JARA_ARM.CartesianSpeed(0, 0))
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setMaxSpeedJoint([])
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setMinAccelTimeCartesian(0)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setMinAccelTimeJoint(0)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setSoftLimitCartesian(
            JARA_ARM.LimitValue(0, 0), JARA_ARM.LimitValue(0, 0), JARA_ARM.LimitValue(0, 0))
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setSpeedCartesian(0)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setSpeedJoint(0)
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.moveCircularCartesianAbs(
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0),
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0)
        )
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.moveCircularCartesianRel(
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0),
            JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0)
        )
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.setHome([])
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret, jointPoint = obj.getHome()
        if ret.id != 1:
            return RTC.RTC_ERROR
        ret = obj.goHome()
        if ret.id != 1:
            return RTC.RTC_ERROR

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


def testServiceConsumerpyInit(manager):
    profile = OpenRTM_aist.Properties(defaults_str=testserviceconsumerpy_spec)
    manager.registerFactory(profile,
                            testServiceConsumerpy,
                            OpenRTM_aist.Delete)


def MyModuleInit(manager):
    testServiceConsumerpyInit(manager)

    # Create a component
    comp = manager.createComponent("testServiceConsumerpy")


def main():
    mgr = OpenRTM_aist.Manager.init(sys.argv)
    mgr.setModuleInitProc(MyModuleInit)
    mgr.activateManager()
    mgr.runManager()


if __name__ == "__main__":
    main()
