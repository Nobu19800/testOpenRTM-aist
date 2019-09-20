// -*-C++-*-
/*!
 * @file  ManipulatorCommonInterface_MiddleSVC_impl.cpp
 * @brief Service implementation code of ManipulatorCommonInterface_Middle.idl
 *
 */

#include "ManipulatorCommonInterface_MiddleSVC_impl.h"
#include <iostream>

/*
 * Example implementational code for IDL interface JARA_ARM::ManipulatorCommonInterface_Middle
 */
JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl()
{
  // Please add extra constructor code here.
}


JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::~JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::closeGripper()
{
	JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
    #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::closeGripper()>"
#endif
        std::cout << "closeGripper" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getBaseOffset(JARA_ARM::HgMatrix offset)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getBaseOffset(JARA_ARM::HgMatrix offset)>"
#endif
      std::cout << "getBaseOffset" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getFeedbackPosCartesian(JARA_ARM::CarPosWithElbow& pos)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getFeedbackPosCartesian(JARA_ARM::CarPosWithElbow& pos)>"
#endif
      std::cout << "pos" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedCartesian(JARA_ARM::CartesianSpeed& speed)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedCartesian(JARA_ARM::CartesianSpeed& speed)>"
#endif
      std::cout << "speed" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedJoint(JARA_ARM::DoubleSeq_out speed)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedJoint(JARA_ARM::DoubleSeq_out speed)>"
#endif
      std::cout << "getMaxSpeedJoint" << std::endl;
  speed = new JARA_ARM::DoubleSeq();
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeCartesian(::CORBA::Double& aclTime)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeCartesian(::CORBA::Double& aclTime)>"
#endif
      std::cout << "getMinAccelTimeCartesian" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeJoint(::CORBA::Double& aclTime)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeJoint(::CORBA::Double& aclTime)>"
#endif
      std::cout << "getMinAccelTimeJoint" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getSoftLimitCartesian(JARA_ARM::LimitValue& xLimit, JARA_ARM::LimitValue& yLimit, JARA_ARM::LimitValue& zLimit)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getSoftLimitCartesian(JARA_ARM::LimitValue& xLimit, JARA_ARM::LimitValue& yLimit, JARA_ARM::LimitValue& zLimit)>"
#endif
      std::cout << "getSoftLimitCartesian" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveGripper(JARA_ARM::ULONG angleRatio)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveGripper(JARA_ARM::ULONG angleRatio)>"
#endif
      std::cout << "moveGripper" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)>"
#endif
      std::cout << "moveLinearCartesianAbs" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)>"
#endif
      std::cout << "moveLinearCartesianRel" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)>"
#endif
      std::cout << "movePTPCartesianAbs" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)>"
#endif
      std::cout << "movePTPCartesianRel" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointAbs(const JARA_ARM::JointPos& jointPoints)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointAbs(const JARA_ARM::JointPos& jointPoints)>"
#endif
      std::cout << "movePTPJointAbs" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointRel(const JARA_ARM::JointPos& jointPoints)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointRel(const JARA_ARM::JointPos& jointPoints)>"
#endif
      std::cout << "movePTPJointRel" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::openGripper()
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::openGripper()>"
#endif
      std::cout << "openGripper" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::pause()
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::pause()>"
#endif
      std::cout << "pause" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::resume()
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::resume()>"
#endif
      std::cout << "resume" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::stop()
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::stop()>"
#endif
      std::cout << "stop" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeCartesian(::CORBA::Double aclTime)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeCartesian(::CORBA::Double aclTime)>"
#endif
      std::cout << "setAccelTimeCartesian" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeJoint(::CORBA::Double aclTime)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeJoint(::CORBA::Double aclTime)>"
#endif
      std::cout << "setAccelTimeJoint" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setBaseOffset(const JARA_ARM::HgMatrix offset)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setBaseOffset(const JARA_ARM::HgMatrix offset)>"
#endif
      std::cout << "setBaseOffset" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setControlPointOffset(const JARA_ARM::HgMatrix offset)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setControlPointOffset(const JARA_ARM::HgMatrix offset)>"
#endif
      std::cout << "setControlPointOffset" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedCartesian(const JARA_ARM::CartesianSpeed& speed)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedCartesian(const JARA_ARM::CartesianSpeed& speed)>"
#endif
      std::cout << "setMaxSpeedCartesian" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedJoint(const JARA_ARM::DoubleSeq& speed)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedJoint(const JARA_ARM::DoubleSeq& speed)>"
#endif
      std::cout << "setMaxSpeedJoint" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeCartesian(::CORBA::Double aclTime)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeCartesian(::CORBA::Double aclTime)>"
#endif
      std::cout << "setMinAccelTimeCartesian" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeJoint(::CORBA::Double aclTime)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeJoint(::CORBA::Double aclTime)>"
#endif
      std::cout << "setMinAccelTimeJoint" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSoftLimitCartesian(const JARA_ARM::LimitValue& xLimit, const JARA_ARM::LimitValue& yLimit, const JARA_ARM::LimitValue& zLimit)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSoftLimitCartesian(const JARA_ARM::LimitValue& xLimit, const JARA_ARM::LimitValue& yLimit, const JARA_ARM::LimitValue& zLimit)>"
#endif
      std::cout << "setSoftLimitCartesian" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSpeedCartesian(JARA_ARM::ULONG spdRatio)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSpeedCartesian(JARA_ARM::ULONG spdRatio)>"
#endif
      std::cout << "setSpeedCartesian" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSpeedJoint(JARA_ARM::ULONG spdRatio)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSpeedJoint(JARA_ARM::ULONG spdRatio)>"
#endif
      std::cout << "setSpeedJoint" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianAbs(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianAbs(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)>"
#endif
      std::cout << "moveCircularCartesianAbs" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianRel(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianRel(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)>"
#endif
      std::cout << "moveCircularCartesianRel" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setHome(const JARA_ARM::JointPos& jointPoint)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setHome(const JARA_ARM::JointPos& jointPoint)>"
#endif
      std::cout << "setHome" << std::endl;
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getHome(JARA_ARM::JointPos_out jointPoint)
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getHome(JARA_ARM::JointPos_out jointPoint)>"
#endif
      std::cout << "getHome" << std::endl;
  jointPoint = new JARA_ARM::JointPos();
  return result;
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::goHome()
{
    JARA_ARM::RETURN_ID* result = new JARA_ARM::RETURN_ID();
    result->id = 1;
    result->comment = CORBA::string_dup("test");
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::goHome()>"
#endif
      std::cout << "goHome" << std::endl;
  return result;
}



// End of example implementational code



