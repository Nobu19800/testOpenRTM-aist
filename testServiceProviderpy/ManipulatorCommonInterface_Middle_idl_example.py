#!/usr/bin/env python
# -*- coding: utf-8 -*-
# -*- Python -*-

"""
 @file ManipulatorCommonInterface_Middle_idl_examplefile.py
 @brief Python example implementations generated from ManipulatorCommonInterface_Middle.idl
 @date $Date$


"""

import omniORB
from omniORB import CORBA, PortableServer
import JARA_ARM
import JARA_ARM__POA


class ManipulatorCommonInterface_Middle_i (JARA_ARM__POA.ManipulatorCommonInterface_Middle):
    """
    @class ManipulatorCommonInterface_Middle_i
    Example class implementing IDL interface JARA_ARM.ManipulatorCommonInterface_Middle
    """

    def __init__(self):
        """
        @brief standard constructor
        Initialise member variables here
        """
        pass

    # RETURN_ID closeGripper()
    def closeGripper(self):
        print("closeGripper")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID getBaseOffset(out HgMatrix offset)
    def getBaseOffset(self):
        print("getBaseOffset")
        return JARA_ARM.RETURN_ID(1, "test"), [[0]*4]*3
        # *** Implement me
        # Must return: result, offset

    # RETURN_ID getFeedbackPosCartesian(out CarPosWithElbow pos)
    def getFeedbackPosCartesian(self):
        print("getFeedbackPosCartesian")
        return JARA_ARM.RETURN_ID(1, "test"), JARA_ARM.CarPosWithElbow([[0]*4]*3, 0,  0)
        # *** Implement me
        # Must return: result, pos

    # RETURN_ID getMaxSpeedCartesian(out CartesianSpeed speed)
    def getMaxSpeedCartesian(self):
        print("getMaxSpeedCartesian")
        return JARA_ARM.RETURN_ID(1, "test"), JARA_ARM.CartesianSpeed(0, 0)
        # *** Implement me
        # Must return: result, speed

    # RETURN_ID getMaxSpeedJoint(out DoubleSeq speed)
    def getMaxSpeedJoint(self):
        print("getMaxSpeedJoint")
        return JARA_ARM.RETURN_ID(1, "test"), []
        # *** Implement me
        # Must return: result, speed

    # RETURN_ID getMinAccelTimeCartesian(out double aclTime)
    def getMinAccelTimeCartesian(self):
        print("getMinAccelTimeCartesian")
        return JARA_ARM.RETURN_ID(1, "test"), 0
        # *** Implement me
        # Must return: result, aclTime

    # RETURN_ID getMinAccelTimeJoint(out double aclTime)
    def getMinAccelTimeJoint(self):
        print("getMinAccelTimeJoint")
        return JARA_ARM.RETURN_ID(1, "test"), 0
        # *** Implement me
        # Must return: result, aclTime

    # RETURN_ID getSoftLimitCartesian(out LimitValue xLimit, out LimitValue yLimit, out LimitValue zLimit)
    def getSoftLimitCartesian(self):
        print("getSoftLimitCartesian")
        return JARA_ARM.RETURN_ID(1, "test"), JARA_ARM.LimitValue(0, 0), JARA_ARM.LimitValue(0, 0), JARA_ARM.LimitValue(0, 0)
        # *** Implement me
        # Must return: result, xLimit, yLimit, zLimit

    # RETURN_ID moveGripper(in ULONG angleRatio)
    def moveGripper(self, angleRatio):
        print("moveGripper")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID moveLinearCartesianAbs(in CarPosWithElbow carPoint)
    def moveLinearCartesianAbs(self, carPoint):
        print("moveLinearCartesianAbs")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID moveLinearCartesianRel(in CarPosWithElbow carPoint)
    def moveLinearCartesianRel(self, carPoint):
        print("moveLinearCartesianRel")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID movePTPCartesianAbs(in CarPosWithElbow carPoint)
    def movePTPCartesianAbs(self, carPoint):
        print("movePTPCartesianAbs")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID movePTPCartesianRel(in CarPosWithElbow carPoint)
    def movePTPCartesianRel(self, carPoint):
        print("movePTPCartesianRel")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID movePTPJointAbs(in JointPos jointPoints)
    def movePTPJointAbs(self, jointPoints):
        print("movePTPJointAbs")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID movePTPJointRel(in JointPos jointPoints)
    def movePTPJointRel(self, jointPoints):
        print("movePTPJointRel")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID openGripper()
    def openGripper(self):
        print("openGripper")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID pause()
    def pause(self):
        print("pause")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID resume()
    def resume(self):
        print("resume")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID stop()
    def stop(self):
        print("stop")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setAccelTimeCartesian(in double aclTime)
    def setAccelTimeCartesian(self, aclTime):
        print("setAccelTimeCartesian")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setAccelTimeJoint(in double aclTime)
    def setAccelTimeJoint(self, aclTime):
        print("setAccelTimeJoint")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setBaseOffset(in HgMatrix offset)
    def setBaseOffset(self, offset):
        print("setBaseOffset")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setControlPointOffset(in HgMatrix offset)
    def setControlPointOffset(self, offset):
        print("setControlPointOffset")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setMaxSpeedCartesian(in CartesianSpeed speed)
    def setMaxSpeedCartesian(self, speed):
        print("setMaxSpeedCartesian")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setMaxSpeedJoint(in DoubleSeq speed)
    def setMaxSpeedJoint(self, speed):
        print("setMaxSpeedJoint")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setMinAccelTimeCartesian(in double aclTime)
    def setMinAccelTimeCartesian(self, aclTime):
        print("setMinAccelTimeCartesian")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setMinAccelTimeJoint(in double aclTime)
    def setMinAccelTimeJoint(self, aclTime):
        print("setMinAccelTimeJoint")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setSoftLimitCartesian(in LimitValue xLimit, in LimitValue yLimit, in LimitValue zLimit)
    def setSoftLimitCartesian(self, xLimit, yLimit, zLimit):
        print("setSoftLimitCartesian")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setSpeedCartesian(in ULONG spdRatio)
    def setSpeedCartesian(self, spdRatio):
        print("setSpeedCartesian")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setSpeedJoint(in ULONG spdRatio)
    def setSpeedJoint(self, spdRatio):
        print("setSpeedJoint")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID moveCircularCartesianAbs(in CarPosWithElbow carPointR, in CarPosWithElbow carPointT)
    def moveCircularCartesianAbs(self, carPointR, carPointT):
        print("moveCircularCartesianAbs")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID moveCircularCartesianRel(in CarPosWithElbow carPointR, in CarPosWithElbow carPointT)
    def moveCircularCartesianRel(self, carPointR, carPointT):
        print("moveCircularCartesianRel")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID setHome(in JointPos jointPoint)
    def setHome(self, jointPoint):
        print("setHome")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result

    # RETURN_ID getHome(out JointPos jointPoint)
    def getHome(self):
        print("getHome")
        return JARA_ARM.RETURN_ID(1, "test"), []
        # *** Implement me
        # Must return: result, jointPoint

    # RETURN_ID goHome()
    def goHome(self):
        print("goHome")
        return JARA_ARM.RETURN_ID(1, "test")
        # *** Implement me
        # Must return: result


if __name__ == "__main__":
    import sys

    # Initialise the ORB
    orb = CORBA.ORB_init(sys.argv)

    # As an example, we activate an object in the Root POA
    poa = orb.resolve_initial_references("RootPOA")

    # Create an instance of a servant class
    servant = ManipulatorCommonInterface_Middle_i()

    # Activate it in the Root POA
    poa.activate_object(servant)

    # Get the object reference to the object
    objref = servant._this()

    # Print a stringified IOR for it
    print(orb.object_to_string(objref))

    # Activate the Root POA's manager
    poa._get_the_POAManager().activate()

    # Run the ORB, blocking this thread
    orb.run()
