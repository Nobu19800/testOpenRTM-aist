// -*-C++-*-
/*!
 * @file  testServiceSVC_impl.h
 * @brief Service implementation header of testService.idl
 *
 */

#include "testSkel.h"
#include "BasicDataTypeSkel.h"

#include "testServiceSkel.h"

#ifndef TESTSERVICESVC_IMPL_H
#define TESTSERVICESVC_IMPL_H
 
/*!
 * @class Sample_SampleInterfaceSVC_impl
 * Example class implementing IDL interface Sample::SampleInterface
 */
class Sample_SampleInterfaceSVC_impl
 : public virtual POA_Sample::SampleInterface,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~Sample_SampleInterfaceSVC_impl();

 public:
  /*!
   * @brief standard constructor
   */
   Sample_SampleInterfaceSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~Sample_SampleInterfaceSVC_impl();

   // attributes and operations
   void echo(const Sample::SampleDataType& msg);

};



#endif // TESTSERVICESVC_IMPL_H


