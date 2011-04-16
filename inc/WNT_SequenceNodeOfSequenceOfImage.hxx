// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WNT_SequenceNodeOfSequenceOfImage_HeaderFile
#define _WNT_SequenceNodeOfSequenceOfImage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WNT_SequenceNodeOfSequenceOfImage_HeaderFile
#include <Handle_WNT_SequenceNodeOfSequenceOfImage.hxx>
#endif

#ifndef _Handle_WNT_Image_HeaderFile
#include <Handle_WNT_Image.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class WNT_Image;
class WNT_SequenceOfImage;



class WNT_SequenceNodeOfSequenceOfImage : public TCollection_SeqNode {

public:

  
      WNT_SequenceNodeOfSequenceOfImage(const Handle(WNT_Image)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_WNT_Image& Value() const;




  DEFINE_STANDARD_RTTI(WNT_SequenceNodeOfSequenceOfImage)

protected:




private: 


Handle_WNT_Image myValue;


};

#define SeqItem Handle_WNT_Image
#define SeqItem_hxx <WNT_Image.hxx>
#define TCollection_SequenceNode WNT_SequenceNodeOfSequenceOfImage
#define TCollection_SequenceNode_hxx <WNT_SequenceNodeOfSequenceOfImage.hxx>
#define Handle_TCollection_SequenceNode Handle_WNT_SequenceNodeOfSequenceOfImage
#define TCollection_SequenceNode_Type_() WNT_SequenceNodeOfSequenceOfImage_Type_()
#define TCollection_Sequence WNT_SequenceOfImage
#define TCollection_Sequence_hxx <WNT_SequenceOfImage.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif