// -*- C++ -*-
/*!
 * @file  testConfiguration.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testConfiguration.h"

// Module specification
// <rtc-template block="module_spec">
static const char* const testconfiguration_spec[] =
  {
    "implementation_id", "testConfiguration",
    "type_name",         "testConfiguration",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "VenderName",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    "conf.default.param1", "0.0",
    "conf.default.param2", "1",
    "conf.default.param3", "2.0",
    "conf.default.param4", "test",

    // Widget
    "conf.__widget__.param1", "slider.0.1",
    "conf.__widget__.param2", "radio",
    "conf.__widget__.param3", "spin.0.1",
    "conf.__widget__.param4", "text",
    // Constraints
    "conf.__constraints__.param1", "-10.0<x<10.0",
    "conf.__constraints__.param2", "(1,0)",
    "conf.__constraints__.param3", "0.0<x<5.0",

    "conf.__type__.param1", "double",
    "conf.__type__.param2", "short",
    "conf.__type__.param3", "float",
    "conf.__type__.param4", "string",

    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
testConfiguration::testConfiguration(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testConfiguration::~testConfiguration()
{
}



RTC::ReturnCode_t testConfiguration::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("param1", m_param1, "0.0");
  bindParameter("param2", m_param2, "1");
  bindParameter("param3", m_param3, "2.0");
  bindParameter("param4", m_param4, "test");
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testConfiguration::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testConfiguration::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void testConfigurationInit(RTC::Manager* manager)
  {
    coil::Properties profile(testconfiguration_spec);
    manager->registerFactory(profile,
                             RTC::Create<testConfiguration>,
                             RTC::Delete<testConfiguration>);
  }
  
};


