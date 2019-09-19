// -*- Java -*-
/*!
 * @file testConfigurationjavaTest.java
 * @date $Date$
 *
 * $Id$
 */

import jp.go.aist.rtm.RTC.Manager;
import jp.go.aist.rtm.RTC.RTObject_impl;
import jp.go.aist.rtm.RTC.RtcDeleteFunc;
import jp.go.aist.rtm.RTC.RtcNewFunc;
import jp.go.aist.rtm.RTC.RegisterModuleFunc;
import jp.go.aist.rtm.RTC.util.Properties;

/*!
 * @class testConfigurationjavaTest
 * @brief ModuleDescription
 */
public class testConfigurationjavaTest implements RtcNewFunc, RtcDeleteFunc, RegisterModuleFunc {

//  Module specification
//  <rtc-template block="module_spec">
    public static String component_conf[] = {
    	    "implementation_id", "testConfigurationjavaTest",
    	    "type_name",         "testConfigurationjavaTest",
    	    "description",       "ModuleDescription",
    	    "version",           "1.0.0",
    	    "vendor",            "VenderName",
    	    "category",          "Category",
    	    "activity_type",     "STATIC",
    	    "max_instance",      "1",
    	    "language",          "Java",
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
//  </rtc-template>

    public RTObject_impl createRtc(Manager mgr) {
        return new testConfigurationjavaTestImpl(mgr);
    }

    public void deleteRtc(RTObject_impl rtcBase) {
        rtcBase = null;
    }
    public void registerModule() {
        Properties prop = new Properties(component_conf);
        final Manager manager = Manager.instance();
        manager.registerFactory(prop, new testConfigurationjavaTest(), new testConfigurationjavaTest());
    }
}
