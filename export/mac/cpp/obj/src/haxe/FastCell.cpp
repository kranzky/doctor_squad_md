#include <hxcpp.h>

#ifndef INCLUDED_haxe_FastCell
#include <haxe/FastCell.h>
#endif
namespace haxe{

Void FastCell_obj::__construct(Dynamic elt,::haxe::FastCell next)
{
HX_STACK_PUSH("FastCell::new","/usr/lib/haxe/std/haxe/FastList.hx",33);
{
	HX_STACK_LINE(33)
	this->elt = elt;
	HX_STACK_LINE(33)
	this->next = next;
}
;
	return null();
}

FastCell_obj::~FastCell_obj() { }

Dynamic FastCell_obj::__CreateEmpty() { return  new FastCell_obj; }
hx::ObjectPtr< FastCell_obj > FastCell_obj::__new(Dynamic elt,::haxe::FastCell next)
{  hx::ObjectPtr< FastCell_obj > result = new FastCell_obj();
	result->__construct(elt,next);
	return result;}

Dynamic FastCell_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastCell_obj > result = new FastCell_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


FastCell_obj::FastCell_obj()
{
}

void FastCell_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastCell);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void FastCell_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic FastCell_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FastCell_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::haxe::FastCell >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastCell_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("elt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("elt"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastCell_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastCell_obj::__mClass,"__mClass");
};

Class FastCell_obj::__mClass;

void FastCell_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.FastCell"), hx::TCanCast< FastCell_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FastCell_obj::__boot()
{
}

} // end namespace haxe
