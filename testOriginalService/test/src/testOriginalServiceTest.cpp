// -*- C++ -*-
/*!
 * @file  testOriginalServiceTest.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testOriginalServiceTest.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testoriginalservice_spec[] =
  {
    "implementation_id", "testOriginalServiceTest",
    "type_name",         "testOriginalServiceTest",
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
testOriginalServiceTest::testOriginalServiceTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_servicePort("service")

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testOriginalServiceTest::~testOriginalServiceTest()
{
}



RTC::ReturnCode_t testOriginalServiceTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  m_servicePort.registerConsumer("sampleinterface", "Sample::SampleInterface", m_sampleinterface);
  
  // Set CORBA Service Ports
  addPort(m_servicePort);
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testOriginalServiceTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalServiceTest::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void testOriginalServiceTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(testoriginalservice_spec);
    manager->registerFactory(profile,
                             RTC::Create<testOriginalServiceTest>,
                             RTC::Delete<testOriginalServiceTest>);
  }
  
};


