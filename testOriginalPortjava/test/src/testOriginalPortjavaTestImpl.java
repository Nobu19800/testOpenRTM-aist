// -*- Java -*-
/*!
 * @file  testOriginalPortjavaTestImpl.java
 * @brief ModuleDescription
 * @date  $Date$
 *
 * $Id$
 */

import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

import Sample.SampleDataType;
import jp.go.aist.rtm.RTC.DataFlowComponentBase;
import jp.go.aist.rtm.RTC.Manager;
import jp.go.aist.rtm.RTC.port.InPort;
import jp.go.aist.rtm.RTC.port.OutPort;
import jp.go.aist.rtm.RTC.util.DataRef;
import RTC.ReturnCode_t;

/*!
 * @class testOriginalPortjavaTestImpl
 * @brief ModuleDescription
 *
 */
public class testOriginalPortjavaTestImpl extends DataFlowComponentBase {

  /*!
   * @brief constructor
   * @param manager Maneger Object
   */
	public testOriginalPortjavaTestImpl(Manager manager) {  
        super(manager);
        // <rtc-template block="initializer">
        m_out_val = new SampleDataType();
        initializeParam(m_out_val);
        m_out = new DataRef<SampleDataType>(m_out_val);
        m_outIn = new InPort<SampleDataType>("out", m_out);
        m_in_val = new SampleDataType();
        m_in = new DataRef<SampleDataType>(m_in_val);
        m_inOut = new OutPort<SampleDataType>("in", m_in);
        // </rtc-template>

    }

    /**
     *
     * The initialize action (on CREATED->ALIVE transition)
     * formaer rtc_init_entry() 
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
    @Override
    protected ReturnCode_t onInitialize() {
        // Registration: InPort/OutPort/Service
        // <rtc-template block="registration">
        // Set InPort buffers
        addInPort("out", m_outIn);
        
        // Set OutPort buffer
        addOutPort("in", m_inOut);
        // </rtc-template>
        return super.onInitialize();
    }

    /***
     *
     * The finalize action (on ALIVE->END transition)
     * formaer rtc_exiting_entry()
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onFinalize() {
//        return super.onFinalize();
//    }

    /***
     *
     * The startup action when ExecutionContext startup
     * former rtc_starting_entry()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onStartup(int ec_id) {
//        return super.onStartup(ec_id);
//    }

    /***
     *
     * The shutdown action when ExecutionContext stop
     * former rtc_stopping_entry()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onShutdown(int ec_id) {
//        return super.onShutdown(ec_id);
//    }

    /***
     *
     * The activated action (Active state entry action)
     * former rtc_active_entry()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onActivated(int ec_id) {
//        return super.onActivated(ec_id);
//    }

    /***
     *
     * The deactivated action (Active state exit action)
     * former rtc_active_exit()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onDeactivated(int ec_id) {
//        return super.onDeactivated(ec_id);
//    }

    /***
     *
     * The execution action that is invoked periodically
     * former rtc_active_do()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onExecute(int ec_id) {
//        return super.onExecute(ec_id);
//    }

    /***
     *
     * The aborting action when main logic error occurred.
     * former rtc_aborting_entry()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//  @Override
//  public ReturnCode_t onAborting(int ec_id) {
//      return super.onAborting(ec_id);
//  }

    /***
     *
     * The error action in ERROR state
     * former rtc_error_do()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    public ReturnCode_t onError(int ec_id) {
//        return super.onError(ec_id);
//    }

    /***
     *
     * The reset action that is invoked resetting
     * This is same but different the former rtc_init_entry()
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onReset(int ec_id) {
//        return super.onReset(ec_id);
//    }

    /***
     *
     * The state update action that is invoked after onExecute() action
     * no corresponding operation exists in OpenRTm-aist-0.2.0
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onStateUpdate(int ec_id) {
//        return super.onStateUpdate(ec_id);
//    }

    /***
     *
     * The action that is invoked when execution context's rate is changed
     * no corresponding operation exists in OpenRTm-aist-0.2.0
     *
     * @param ec_id target ExecutionContext Id
     *
     * @return RTC::ReturnCode_t
     * 
     * 
     */
//    @Override
//    protected ReturnCode_t onRateChanged(int ec_id) {
//        return super.onRateChanged(ec_id);
//    }
//
    // DataInPort declaration
    // <rtc-template block="inport_declare">
    protected SampleDataType m_out_val;
    protected DataRef<SampleDataType> m_out;
    /*!
     */
    protected InPort<SampleDataType> m_outIn;

    
    // </rtc-template>

    // DataOutPort declaration
    // <rtc-template block="outport_declare">
    protected SampleDataType m_in_val;
    protected DataRef<SampleDataType> m_in;
    /*!
     */
    protected OutPort<SampleDataType> m_inOut;

    
    // </rtc-template>

    // CORBA Port declaration
    // <rtc-template block="corbaport_declare">
    
    // </rtc-template>

    // Service declaration
    // <rtc-template block="service_declare">
    
    // </rtc-template>

    // Consumer declaration
    // <rtc-template block="consumer_declare">
    
    // </rtc-template>


	private void initializeParam(Object target) {
		Class<?> targetClass = target.getClass();
		ClassLoader loader = target.getClass().getClassLoader();
		//
		Field[] fields = targetClass.getFields();
		for(Field field : fields) {
			if(field.getType().isPrimitive()) continue;
			
			try {
				if(field.getType().isArray()) {
					Object arrayValue = null;
					Class<?> clazz = null;
					if(field.getType().getComponentType().isPrimitive()) {
						clazz = field.getType().getComponentType();
					} else {
							clazz = loader.loadClass(field.getType().getComponentType().getName());
					}
					arrayValue = Array.newInstance(clazz, 0);
					field.set(target, arrayValue);
					
				} else {
					Constructor<?>[] constList = field.getType().getConstructors();
					if(constList.length==0) {
						Method[] methodList = field.getType().getMethods();
						for(Method method : methodList) {
							if(method.getName().equals("from_int")==false) continue;
							Object objFld = method.invoke(target, new Object[]{ new Integer(0) });
							field.set(target, objFld);
							break;
						}
						
					} else {
			            Class<?> classFld = Class.forName(field.getType().getName(), true, loader);
						Object objFld = classFld.newInstance();
						initializeParam(objFld);
						field.set(target, objFld);
					}
				}
			} catch (ClassNotFoundException e) {
				e.printStackTrace();
			} catch (InstantiationException e) {
				e.printStackTrace();
			} catch (IllegalAccessException e) {
				e.printStackTrace();
			} catch (IllegalArgumentException e) {
				e.printStackTrace();
			} catch (InvocationTargetException e) {
				e.printStackTrace();
			}
		}
	}
}
