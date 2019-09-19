// -*- C++ -*-
/*!
 * @file  testServiceConsumer.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testServiceConsumer.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testserviceconsumer_spec[] =
  {
    "implementation_id", "testServiceConsumer",
    "type_name",         "testServiceConsumer",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "VenderName",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
testServiceConsumer::testServiceConsumer(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_ManipulatorCommonInterface_MiddlePortPort("ManipulatorCommonInterface_MiddlePort")

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testServiceConsumer::~testServiceConsumer()
{
}



RTC::ReturnCode_t testServiceConsumer::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  m_ManipulatorCommonInterface_MiddlePortPort.registerConsumer("ManipulatorCommonInterface_Middle", "JARA_ARM::ManipulatorCommonInterface_Middle", m_ManipulatorCommonInterface_Middle);
  
  // Set CORBA Service Ports
  addPort(m_ManipulatorCommonInterface_MiddlePortPort);
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testServiceConsumer::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testServiceConsumer::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testServiceConsumer::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t testServiceConsumer::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t testServiceConsumer::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t testServiceConsumer::onExecute(RTC::UniqueId ec_id)
{
    JARA_ARM::RETURN_ID* ret = m_ManipulatorCommonInterface_Middle._ptr()->closeGripper();
    if(ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->closeGripper();
    if (ret->id != 1)return RTC::RTC_ERROR;
    JARA_ARM::HgMatrix offset;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->getBaseOffset(offset);
    if (ret->id != 1)return RTC::RTC_ERROR;
    JARA_ARM::CarPosWithElbow pos;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->getFeedbackPosCartesian(pos);
    if (ret->id != 1)return RTC::RTC_ERROR;
    JARA_ARM::CartesianSpeed speed1;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->getMaxSpeedCartesian(speed1);
    if (ret->id != 1)return RTC::RTC_ERROR;

    //JARA_ARM::DoubleSeq_var speed2 = new JARA_ARM::DoubleSeq();
    //ret = m_ManipulatorCommonInterface_Middle._ptr()->getMaxSpeedJoint(speed2);
    //if (ret->id != 1)return RTC::RTC_ERROR;
    CORBA::Double aclTime;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->getMinAccelTimeCartesian(aclTime);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->getMinAccelTimeJoint(aclTime);
    if (ret->id != 1)return RTC::RTC_ERROR;
    JARA_ARM::LimitValue xLimit;
    JARA_ARM::LimitValue yLimit;
    JARA_ARM::LimitValue zLimit;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->getSoftLimitCartesian(xLimit, yLimit, zLimit);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->moveGripper(0);
    if (ret->id != 1)return RTC::RTC_ERROR;
    JARA_ARM::CarPosWithElbow carPoint;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->moveLinearCartesianAbs(carPoint);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->moveLinearCartesianRel(carPoint);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->movePTPCartesianAbs(carPoint);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->movePTPCartesianRel(carPoint);
    if (ret->id != 1)return RTC::RTC_ERROR;
    JARA_ARM::JointPos jointPoints;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->movePTPJointAbs(jointPoints);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->movePTPJointRel(jointPoints);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->openGripper();
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->pause();
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->resume();
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->stop();
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setAccelTimeCartesian(0.0);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setAccelTimeJoint(0.0);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setBaseOffset(offset);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setControlPointOffset(offset);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setMaxSpeedCartesian(speed1);
    if (ret->id != 1)return RTC::RTC_ERROR;
    //ret = m_ManipulatorCommonInterface_Middle._ptr()->setMaxSpeedJoint(speed2);
    //if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setMinAccelTimeCartesian(0);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setMinAccelTimeJoint(0);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setSoftLimitCartesian(xLimit, yLimit, zLimit);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setSpeedCartesian(0);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setSpeedJoint(0);
    if (ret->id != 1)return RTC::RTC_ERROR;
    JARA_ARM::CarPosWithElbow carPointR;
    JARA_ARM::CarPosWithElbow carPointT;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->moveCircularCartesianAbs(carPointR, carPointT);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->moveCircularCartesianRel(carPointR, carPointT);
    if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->setHome(jointPoints);
    if (ret->id != 1)return RTC::RTC_ERROR;
    //JARA_ARM::JointPos_var jointPoints2 = new JARA_ARM::JointPos();
    ///ret = m_ManipulatorCommonInterface_Middle._ptr()->getHome(jointPoints2);
    //if (ret->id != 1)return RTC::RTC_ERROR;
    ret = m_ManipulatorCommonInterface_Middle._ptr()->goHome();
    if (ret->id != 1)return RTC::RTC_ERROR;
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testServiceConsumer::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testServiceConsumer::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testServiceConsumer::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testServiceConsumer::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testServiceConsumer::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void testServiceConsumerInit(RTC::Manager* manager)
  {
    coil::Properties profile(testserviceconsumer_spec);
    manager->registerFactory(profile,
                             RTC::Create<testServiceConsumer>,
                             RTC::Delete<testServiceConsumer>);
  }
  
};


