// -*-Java-*-
/*!
 * @file  ManipulatorCommonInterface_MiddleSVC_impl.java
 * @brief Service implementation code of ManipulatorCommonInterface_Middle.idl
 *
 */
import JARA_ARM.ManipulatorCommonInterface_MiddlePOA;
/**
 * ManipulatorCommonInterface_MiddleSVC_impl
 * <p>
 * Example class implementing IDL interface JARA_ARM::ManipulatorCommonInterface_Middle
 */
public class ManipulatorCommonInterface_MiddleSVC_impl extends ManipulatorCommonInterface_MiddlePOA{
    
    public ManipulatorCommonInterface_MiddleSVC_impl() {
        // Please add extra constructor code here.
    }

    /*
     * Methods corresponding to IDL attributes and operations
     */
    public JARA_ARM.RETURN_ID closeGripper() {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID closeGripper()>"
        return null;
    }

    public JARA_ARM.RETURN_ID getBaseOffset(JARA_ARM.HgMatrixHolder offset) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getBaseOffset(HgMatrix offset)>"
        return null;
    }

    public JARA_ARM.RETURN_ID getFeedbackPosCartesian(JARA_ARM.CarPosWithElbowHolder pos) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getFeedbackPosCartesian(CarPosWithElbow pos)>"
        return null;
    }

    public JARA_ARM.RETURN_ID getMaxSpeedCartesian(JARA_ARM.CartesianSpeedHolder speed) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getMaxSpeedCartesian(CartesianSpeed speed)>"
        return null;
    }

    public JARA_ARM.RETURN_ID getMaxSpeedJoint(JARA_ARM.DoubleSeqHolder speed) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getMaxSpeedJoint(DoubleSeq speed)>"
        return null;
    }

    public JARA_ARM.RETURN_ID getMinAccelTimeCartesian(org.omg.CORBA.DoubleHolder aclTime) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getMinAccelTimeCartesian(org.omg.CORBA.DoubleHolder aclTime)>"
        return null;
    }

    public JARA_ARM.RETURN_ID getMinAccelTimeJoint(org.omg.CORBA.DoubleHolder aclTime) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getMinAccelTimeJoint(org.omg.CORBA.DoubleHolder aclTime)>"
        return null;
    }

    public JARA_ARM.RETURN_ID getSoftLimitCartesian(JARA_ARM.LimitValueHolder xLimit, JARA_ARM.LimitValueHolder yLimit, JARA_ARM.LimitValueHolder zLimit) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getSoftLimitCartesian(LimitValue xLimit, LimitValue yLimit, LimitValue zLimit)>"
        return null;
    }

    public JARA_ARM.RETURN_ID moveGripper(int angleRatio) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID moveGripper(ULONG angleRatio)>"
        return null;
    }

    public JARA_ARM.RETURN_ID moveLinearCartesianAbs(JARA_ARM.CarPosWithElbow carPoint) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID moveLinearCartesianAbs(CarPosWithElbow carPoint)>"
        return null;
    }

    public JARA_ARM.RETURN_ID moveLinearCartesianRel(JARA_ARM.CarPosWithElbow carPoint) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID moveLinearCartesianRel(CarPosWithElbow carPoint)>"
        return null;
    }

    public JARA_ARM.RETURN_ID movePTPCartesianAbs(JARA_ARM.CarPosWithElbow carPoint) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID movePTPCartesianAbs(CarPosWithElbow carPoint)>"
        return null;
    }

    public JARA_ARM.RETURN_ID movePTPCartesianRel(JARA_ARM.CarPosWithElbow carPoint) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID movePTPCartesianRel(CarPosWithElbow carPoint)>"
        return null;
    }

    public JARA_ARM.RETURN_ID movePTPJointAbs(double[] jointPoints) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID movePTPJointAbs(JointPos jointPoints)>"
        return null;
    }

    public JARA_ARM.RETURN_ID movePTPJointRel(double[] jointPoints) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID movePTPJointRel(JointPos jointPoints)>"
        return null;
    }

    public JARA_ARM.RETURN_ID openGripper() {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID openGripper()>"
        return null;
    }

    public JARA_ARM.RETURN_ID pause() {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID pause()>"
        return null;
    }

    public JARA_ARM.RETURN_ID resume() {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID resume()>"
        return null;
    }

    public JARA_ARM.RETURN_ID stop() {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID stop()>"
        return null;
    }

    public JARA_ARM.RETURN_ID setAccelTimeCartesian(double aclTime) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setAccelTimeCartesian(double aclTime)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setAccelTimeJoint(double aclTime) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setAccelTimeJoint(double aclTime)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setBaseOffset(double[][] offset) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setBaseOffset(HgMatrix offset)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setControlPointOffset(double[][] offset) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setControlPointOffset(HgMatrix offset)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setMaxSpeedCartesian(JARA_ARM.CartesianSpeed speed) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setMaxSpeedCartesian(CartesianSpeed speed)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setMaxSpeedJoint(double[] speed) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setMaxSpeedJoint(DoubleSeq speed)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setMinAccelTimeCartesian(double aclTime) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setMinAccelTimeCartesian(double aclTime)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setMinAccelTimeJoint(double aclTime) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setMinAccelTimeJoint(double aclTime)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setSoftLimitCartesian(JARA_ARM.LimitValue xLimit, JARA_ARM.LimitValue yLimit, JARA_ARM.LimitValue zLimit) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setSoftLimitCartesian(LimitValue xLimit, LimitValue yLimit, LimitValue zLimit)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setSpeedCartesian(int spdRatio) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setSpeedCartesian(ULONG spdRatio)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setSpeedJoint(int spdRatio) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setSpeedJoint(ULONG spdRatio)>"
        return null;
    }

    public JARA_ARM.RETURN_ID moveCircularCartesianAbs(JARA_ARM.CarPosWithElbow carPointR, JARA_ARM.CarPosWithElbow carPointT) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID moveCircularCartesianAbs(CarPosWithElbow carPointR, CarPosWithElbow carPointT)>"
        return null;
    }

    public JARA_ARM.RETURN_ID moveCircularCartesianRel(JARA_ARM.CarPosWithElbow carPointR, JARA_ARM.CarPosWithElbow carPointT) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID moveCircularCartesianRel(CarPosWithElbow carPointR, CarPosWithElbow carPointT)>"
        return null;
    }

    public JARA_ARM.RETURN_ID setHome(double[] jointPoint) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID setHome(JointPos jointPoint)>"
        return null;
    }

    public JARA_ARM.RETURN_ID getHome(JARA_ARM.JointPosHolder jointPoint) {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID getHome(JointPos jointPoint)>"
        return null;
    }

    public JARA_ARM.RETURN_ID goHome() {
        // Please insert your code here and remove the following warning pragma
        // TODO "Code missing in function <RETURN_ID goHome()>"
        return null;
    }

//  End of example implementational code
}
