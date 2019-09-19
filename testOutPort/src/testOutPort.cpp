// -*- C++ -*-
/*!
 * @file  testOutPort.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testOutPort.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testoutport_spec[] =
  {
    "implementation_id", "testOutPort",
    "type_name",         "testOutPort",
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
    "conf.default.filename", "test0.png",

    // Widget
    "conf.__widget__.filename", "text",
    // Constraints

    "conf.__type__.filename", "string",

    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
testOutPort::testOutPort(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_outOut("out", m_out)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testOutPort::~testOutPort()
{
}



RTC::ReturnCode_t testOutPort::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  addOutPort("out", m_outOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("filename", m_filename, "test0.png");
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testOutPort::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOutPort::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOutPort::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t testOutPort::onActivated(RTC::UniqueId ec_id)
{
  m_img = cv::imread(m_filename, 1);
  if (m_img.empty())return RTC::RTC_ERROR;



  return RTC::RTC_OK;
}


RTC::ReturnCode_t testOutPort::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t testOutPort::onExecute(RTC::UniqueId ec_id)
{
  int len = m_img.channels() * m_img.size().width * m_img.size().height;


  /* 画面のサイズ情報を入れる */
  m_out.data.image.raw_data.length(len);
  m_out.data.image.width = m_img.size().width;
  m_out.data.image.height = m_img.size().height;

  memcpy((void *)&(m_out.data.image.raw_data[0]), m_img.data, len);

  m_outOut.write();

  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testOutPort::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOutPort::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOutPort::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOutPort::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testOutPort::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void testOutPortInit(RTC::Manager* manager)
  {
    coil::Properties profile(testoutport_spec);
    manager->registerFactory(profile,
                             RTC::Create<testOutPort>,
                             RTC::Delete<testOutPort>);
  }
  
};


