// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESControl_Writer_HeaderFile
#define _IGESControl_Writer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Transfer_FinderProcess.hxx>
#include <Handle_IGESData_IGESModel.hxx>
#include <IGESData_BasicEditor.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Standard_OStream.hxx>
class Transfer_FinderProcess;
class IGESData_IGESModel;
class TopoDS_Shape;
class Standard_Transient;
class IGESData_IGESEntity;


//! This class creates and writes
//! IGES files from CAS.CADE models. An IGES file can be written to
//! an existing IGES file or to a new one.
//! The translation can be performed in one or several
//! operations. Each translation operation
//! outputs a distinct root entity in the IGES file.
//! To write an IGES file it is possible to use the following sequence:
//! To modify the IGES file header or to change translation
//! parameters it is necessary to use class Interface_Static (see
//! IGESParameters and GeneralParameters).
class IGESControl_Writer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a writer object with the
  //! default unit (millimeters) and write mode (Face).
  //! IGESControl_Writer (const Standard_CString unit,
  //! const Standard_Integer modecr = 0);
  Standard_EXPORT IGESControl_Writer();
  
  //! Creates a writer with given
  //! values for units and for write mode.
  //! unit may be any unit that is accepted by the IGES standard.
  //! By default, it is the millimeter.
  //! modecr defines the write mode and may be:
  //! - 0: Faces (default)
  //! - 1: BRep.
  Standard_EXPORT IGESControl_Writer(const Standard_CString unit, const Standard_Integer modecr = 0);
  
  //! Creates a writer object with the
  //! prepared IGES model model in write mode.
  //! modecr defines the write mode and may be:
  //! - 0: Faces (default)
  //! - 1: BRep.
  Standard_EXPORT IGESControl_Writer(const Handle(IGESData_IGESModel)& model, const Standard_Integer modecr = 0);
  
  //! Returns the IGES model to be written in output.
  Standard_EXPORT   Handle(IGESData_IGESModel) Model()  const;
  
  Standard_EXPORT   Handle(Transfer_FinderProcess) TransferProcess()  const;
  
  //! Returns/Sets the TransferProcess : it contains final results
  //! and if some, check messages
  Standard_EXPORT   void SetTransferProcess (const Handle(Transfer_FinderProcess)& TP) ;
  
  //! Translates a Shape to IGES Entities and adds them to the model
  //! Returns True if done, False if Shape not suitable for IGES or null
  Standard_EXPORT   Standard_Boolean AddShape (const TopoDS_Shape& sh) ;
  
  //! Translates a Geometry (Surface or Curve) to IGES Entities and
  //! adds them to the model
  //! Returns True if done, False if geom is neither a Surface or
  //! a Curve suitable for IGES or is null
  Standard_EXPORT   Standard_Boolean AddGeom (const Handle(Standard_Transient)& geom) ;
  
  //! Adds an IGES entity (and the ones it references) to the model
  Standard_EXPORT   Standard_Boolean AddEntity (const Handle(IGESData_IGESEntity)& ent) ;
  
  //! Computes the entities found in
  //! the model, which is ready to be written.
  //! This contrasts with the default computation of headers only.
  Standard_EXPORT   void ComputeModel() ;
  
  //! Computes then writes the model to an OStream
  //! Returns True when done, false in case of error
  Standard_EXPORT   Standard_Boolean Write (Standard_OStream& S, const Standard_Boolean fnes = Standard_False) ;
  
  //! Prepares and writes an IGES model
  //! either to an OStream, S or to a file name,CString.
  //! Returns True if the operation was performed correctly and
  //! False if an error occurred (for instance,
  //! if the processor could not create the file).
  Standard_EXPORT   Standard_Boolean Write (const Standard_CString file, const Standard_Boolean fnes = Standard_False) ;
  
  //! Prints Statistics about Transfer
  Standard_EXPORT   void PrintStatsTransfer (const Standard_Integer what, const Standard_Integer mode = 0)  const;




protected:





private:



  Handle(Transfer_FinderProcess) theTP;
  Handle(IGESData_IGESModel) themod;
  IGESData_BasicEditor thedit;
  Standard_Integer thecr;
  Standard_Boolean thest;


};







#endif // _IGESControl_Writer_HeaderFile
