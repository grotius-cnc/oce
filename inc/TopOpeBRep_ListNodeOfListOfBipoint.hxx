// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_ListNodeOfListOfBipoint_HeaderFile
#define _TopOpeBRep_ListNodeOfListOfBipoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRep_ListNodeOfListOfBipoint.hxx>

#include <TopOpeBRep_Bipoint.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopOpeBRep_Bipoint;
class TopOpeBRep_ListOfBipoint;
class TopOpeBRep_ListIteratorOfListOfBipoint;



class TopOpeBRep_ListNodeOfListOfBipoint : public TCollection_MapNode
{

public:

  
    TopOpeBRep_ListNodeOfListOfBipoint(const TopOpeBRep_Bipoint& I, const TCollection_MapNodePtr& n);
  
      TopOpeBRep_Bipoint& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRep_ListNodeOfListOfBipoint)

protected:




private: 


  TopOpeBRep_Bipoint myValue;


};

#define Item TopOpeBRep_Bipoint
#define Item_hxx <TopOpeBRep_Bipoint.hxx>
#define TCollection_ListNode TopOpeBRep_ListNodeOfListOfBipoint
#define TCollection_ListNode_hxx <TopOpeBRep_ListNodeOfListOfBipoint.hxx>
#define TCollection_ListIterator TopOpeBRep_ListIteratorOfListOfBipoint
#define TCollection_ListIterator_hxx <TopOpeBRep_ListIteratorOfListOfBipoint.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRep_ListNodeOfListOfBipoint
#define TCollection_ListNode_Type_() TopOpeBRep_ListNodeOfListOfBipoint_Type_()
#define TCollection_List TopOpeBRep_ListOfBipoint
#define TCollection_List_hxx <TopOpeBRep_ListOfBipoint.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TopOpeBRep_ListNodeOfListOfBipoint_HeaderFile
