// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_DefType_HeaderFile
#define _IGESData_DefType_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Some fields of an IGES entity may be
//! - Undefined
//! - Defined as a positive integer
//! - Defined as a reference to a specialized entity.
//! A typical example of this kind of variation is color.
//! This enumeration allows you to identify which of the above is the case.
//! The semantics of the terms are as follows:
//! - DefVoid indicates that the item contained in the field is undefined
//! - DefValue indicates that the item is defined as an immediate
//! positive integer value (i.e. not a pointer)
//! - DefReference indicates that the item is defined as an entity
//! - DefAny indicates the item could not be determined
//! - ErrorVal indicates that the item is defined as an integer
//! but its value is incorrect (it could be out of range, for example)
//! - ErrorRef indicates that the item is defined as an entity but
//! is not of the required type.
enum IGESData_DefType
{
IGESData_DefVoid,
IGESData_DefValue,
IGESData_DefReference,
IGESData_DefAny,
IGESData_ErrorVal,
IGESData_ErrorRef
};

#endif // _IGESData_DefType_HeaderFile
