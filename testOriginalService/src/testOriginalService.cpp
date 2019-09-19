// -*- C++ -*-
/*!
 * @file  testOriginalService.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testOriginalService.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testoriginalservice_spec[] =
  {
    "implementation_id", "testOriginalService",
    "type_name",         "testOriginalService",
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
testOriginalService::testOriginalService(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_servicePort("service")

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testOriginalService::~testOriginalService()
{
}



RTC::ReturnCode_t testOriginalService::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  m_servicePort.registerProvider("sampleinterface", "Sample::SampleInterface", m_sampleinterface);
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  addPort(m_servicePort);
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testOriginalService::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOriginalService::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void testOriginalServiceInit(RTC::Manager* manager)
  {
    coil::Properties profile(testoriginalservice_spec);
    manager->registerFactory(profile,
                             RTC::Create<testOriginalService>,
                             RTC::Delete<testOriginalService>);
  }
  
};


