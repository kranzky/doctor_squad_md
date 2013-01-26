#include <hxcpp.h>

#ifndef INCLUDED_haxe_FastCell
#include <haxe/FastCell.h>
#endif
#ifndef INCLUDED_haxe_FastList
#include <haxe/FastList.h>
#endif
#ifndef INCLUDED_haxe__FastList_FastListIterator
#include <haxe/_FastList/FastListIterator.h>
#endif
namespace haxe{

Void FastList_obj::__construct()
{
HX_STACK_PUSH("FastList::new","/usr/lib/haxe/std/haxe/FastList.hx",63);
{
}
;
	return null();
}

FastList_obj::~FastList_obj() { }

Dynamic FastList_obj::__CreateEmpty() { return  new FastList_obj; }
hx::ObjectPtr< FastList_obj > FastList_obj::__new()
{  hx::ObjectPtr< FastList_obj > result = new FastList_obj();
	result->__construct();
	return result;}

Dynamic FastList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastList_obj > result = new FastList_obj();
	result->__construct();
	return result;}

::String FastList_obj::toString( ){
	HX_STACK_PUSH("FastList::toString","/usr/lib/haxe/std/haxe/FastList.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_LINE(157)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(158)
	::haxe::FastCell l = this->head;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(159)
	while(((l != null()))){
		HX_STACK_LINE(160)
		a->__Field(HX_CSTRING("push"),true)(l->elt);
		HX_STACK_LINE(161)
		l = l->next;
	}
	HX_STACK_LINE(163)
	return ((HX_CSTRING("{") + a->__Field(HX_CSTRING("join"),true)(HX_CSTRING(","))) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(FastList_obj,toString,return )

Dynamic FastList_obj::iterator( ){
	HX_STACK_PUSH("FastList::iterator","/usr/lib/haxe/std/haxe/FastList.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(129)
	return ::haxe::_FastList::FastListIterator_obj::__new(this->head);
}


HX_DEFINE_DYNAMIC_FUNC0(FastList_obj,iterator,return )

bool FastList_obj::remove( Dynamic v){
	HX_STACK_PUSH("FastList::remove","/usr/lib/haxe/std/haxe/FastList.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(108)
	Dynamic prev = null();		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(109)
	::haxe::FastCell l = this->head;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(110)
	while(((l != null()))){
		HX_STACK_LINE(111)
		if (((l->elt == v))){
			HX_STACK_LINE(112)
			if (((prev == null()))){
				HX_STACK_LINE(113)
				this->head = l->next;
			}
			else{
				HX_STACK_LINE(115)
				prev->__FieldRef(HX_CSTRING("next")) = l->next;
			}
			HX_STACK_LINE(116)
			break;
		}
		HX_STACK_LINE(118)
		prev = l;
		HX_STACK_LINE(119)
		l = l->next;
	}
	HX_STACK_LINE(121)
	return (l != null());
}


HX_DEFINE_DYNAMIC_FUNC1(FastList_obj,remove,return )

bool FastList_obj::isEmpty( ){
	HX_STACK_PUSH("FastList::isEmpty","/usr/lib/haxe/std/haxe/FastList.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_LINE(99)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(FastList_obj,isEmpty,return )

Dynamic FastList_obj::pop( ){
	HX_STACK_PUSH("FastList::pop","/usr/lib/haxe/std/haxe/FastList.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	::haxe::FastCell k = this->head;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(88)
	if (((k == null()))){
		HX_STACK_LINE(89)
		return null();
	}
	else{
		HX_STACK_LINE(91)
		this->head = k->next;
		HX_STACK_LINE(92)
		return k->elt;
	}
	HX_STACK_LINE(88)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FastList_obj,pop,return )

Dynamic FastList_obj::first( ){
	HX_STACK_PUSH("FastList::first","/usr/lib/haxe/std/haxe/FastList.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(77)
	return (  (((this->head == null()))) ? Dynamic(null()) : Dynamic(this->head->elt) );
}


HX_DEFINE_DYNAMIC_FUNC0(FastList_obj,first,return )

Void FastList_obj::add( Dynamic item){
{
		HX_STACK_PUSH("FastList::add","/usr/lib/haxe/std/haxe/FastList.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(item,"item");
		HX_STACK_LINE(69)
		this->head = ::haxe::FastCell_obj::__new(item,this->head);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastList_obj,add,(void))


FastList_obj::FastList_obj()
{
}

void FastList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastList);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void FastList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic FastList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FastList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::haxe::FastCell >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("head"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("iterator"),
	HX_CSTRING("remove"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("pop"),
	HX_CSTRING("first"),
	HX_CSTRING("add"),
	HX_CSTRING("head"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastList_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastList_obj::__mClass,"__mClass");
};

Class FastList_obj::__mClass;

void FastList_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.FastList"), hx::TCanCast< FastList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FastList_obj::__boot()
{
}

} // end namespace haxe
