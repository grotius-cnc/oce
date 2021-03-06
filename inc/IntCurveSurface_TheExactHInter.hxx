// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_TheExactHInter_HeaderFile
#define _IntCurveSurface_TheExactHInter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <Standard_Real.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
class StdFail_NotDone;
class Standard_DomainError;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class Adaptor3d_HCurve;
class IntCurveSurface_TheHCurveTool;
class IntCurveSurface_TheCSFunctionOfHInter;
class math_FunctionSetRoot;
class gp_Pnt;



class IntCurveSurface_TheExactHInter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntCurveSurface_TheExactHInter(const Standard_Real U, const Standard_Real V, const Standard_Real W, const IntCurveSurface_TheCSFunctionOfHInter& F, const Standard_Real TolTangency, const Standard_Real MarginCoef = 0.0);
  
  Standard_EXPORT IntCurveSurface_TheExactHInter(const IntCurveSurface_TheCSFunctionOfHInter& F, const Standard_Real TolTangency);
  
  Standard_EXPORT   void Perform (const Standard_Real U, const Standard_Real V, const Standard_Real W, math_FunctionSetRoot& Rsnld, const Standard_Real u0, const Standard_Real v0, const Standard_Real u1, const Standard_Real v1, const Standard_Real w0, const Standard_Real w1) ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT  const  gp_Pnt& Point()  const;
  
  Standard_EXPORT   Standard_Real ParameterOnCurve()  const;
  
  Standard_EXPORT   void ParameterOnSurface (Standard_Real& U, Standard_Real& V)  const;
  
  Standard_EXPORT   IntCurveSurface_TheCSFunctionOfHInter& Function() ;




protected:





private:



  Standard_Boolean done;
  Standard_Boolean empty;
  IntCurveSurface_TheCSFunctionOfHInter myFunction;
  Standard_Real w;
  Standard_Real u;
  Standard_Real v;
  Standard_Real tol;


};







#endif // _IntCurveSurface_TheExactHInter_HeaderFile
