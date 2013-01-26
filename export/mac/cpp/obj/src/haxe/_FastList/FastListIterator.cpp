#include <hxcpp.h>

#ifndef INCLUDED_haxe_FastCell
#include <haxe/FastCell.h>
#endif
#ifndef INCLUDED_haxe__FastList_FastListIterator
#include <haxe/_FastList/FastListIterator.h>
#endif
namespace haxe{
namespace _FastList{

Void FastListIterator_obj::__construct(::haxe::FastCell head)
{
HX_STACK_PUSH("FastListIterator::new","/usr/lib/haxe/std/haxe/FastList.hx",45);
{
	HX_STACK_LINE(45)
	this->current = head;
}
;
	return null();
}

FastListIterator_obj::~FastListIterator_obj() { }

Dynamic FastListIterator_obj::__CreateEmpty() { return  new FastListIterator_obj; }
hx::ObjectPtr< FastListIterator_obj > FastListIterator_obj::__new(::haxe::FastCell head)
{  hx::ObjectPtr< FastListIterator_obj > result = new FastListIterator_obj();
	result->__construct(head);
	return result;}

Dynamic FastListIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastListIterator_obj > result = new FastListIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic FastListIterator_obj::next( ){
	HX_STACK_PUSH("FastListIterator::next","/usr/lib/haxe/std/haxe/FastList.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	Dynamic result = this->current->elt;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(43)
	this->current = this->current->next;
	HX_STACK_LINE(43)
	return result;
}


bool FastListIterator_obj::hasNext( ){
	HX_STACK_PUSH("FastListIterator::hasNext","/usr/lib/haxe/std/haxe/FastList.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return (this->current != null());
}



FastListIterator_obj::FastListIterator_obj()
{
}

void FastListIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastListIterator);
	HX_MARK_MEMBER_NAME(current,"current");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FastListIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FastListIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FastListIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::haxe::FastCell >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastListIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("current"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("current"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastListIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastListIterator_obj::__mClass,"__mClass");
};

Class FastListIterator_obj::__mClass;

void FastListIterator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe._FastList.FastListIterator"), hx::TCanCast< FastListIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FastListIterator_obj::__boot()
{
}

} // end namespace haxe
} // end namespace _FastList
