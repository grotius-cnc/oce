// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Unit_HeaderFile
#define _StepBasic_Unit_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_NamedUnit.hxx>
#include <Handle_StepBasic_DerivedUnit.hxx>
class Standard_Transient;
class StepBasic_NamedUnit;
class StepBasic_DerivedUnit;


//! Implements a select type unit (NamedUnit or DerivedUnit)
class StepBasic_Unit  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates empty object
  Standard_EXPORT StepBasic_Unit();
  
  //! Recognizes a type of Unit Entity
  //! 1 -> NamedUnit
  //! 2 -> DerivedUnit
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a NamedUnit (Null if another type)
  Standard_EXPORT   Handle(StepBasic_NamedUnit) NamedUnit()  const;
  
  //! returns Value as a DerivedUnit (Null if another type)
  Standard_EXPORT   Handle(StepBasic_DerivedUnit) DerivedUnit()  const;




protected:





private:





};







#endif // _StepBasic_Unit_HeaderFile
