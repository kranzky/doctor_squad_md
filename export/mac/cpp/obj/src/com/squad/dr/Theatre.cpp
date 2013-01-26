#include <hxcpp.h>

#ifndef INCLUDED_com_squad_dr_Theatre
#include <com/squad/dr/Theatre.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
namespace com{
namespace squad{
namespace dr{

Void Theatre_obj::__construct()
{
HX_STACK_PUSH("Theatre::new","com/squad/dr/Theatre.hx",8);
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

Theatre_obj::~Theatre_obj() { }

Dynamic Theatre_obj::__CreateEmpty() { return  new Theatre_obj; }
hx::ObjectPtr< Theatre_obj > Theatre_obj::__new()
{  hx::ObjectPtr< Theatre_obj > result = new Theatre_obj();
	result->__construct();
	return result;}

Dynamic Theatre_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theatre_obj > result = new Theatre_obj();
	result->__construct();
	return result;}

Void Theatre_obj::update( ){
{
		HX_STACK_PUSH("Theatre::update","com/squad/dr/Theatre.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		this->super::update();
	}
return null();
}


Void Theatre_obj::create( ){
{
		HX_STACK_PUSH("Theatre::create","com/squad/dr/Theatre.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->controls = ::org::flixel::FlxText_obj::__new((int)0,(int)0,(int)360,HX_CSTRING("Press Ctrl to Fire! ---------- Press 1 / 2 / 3 to change Fire Type!"),null());
		HX_STACK_LINE(22)
		this->debug = ::org::flixel::FlxText_obj::__new((int)0,(int)10,(int)200,HX_CSTRING(""),null());
		HX_STACK_LINE(25)
		this->add(this->debug);
		HX_STACK_LINE(26)
		this->add(this->controls);
	}
return null();
}



Theatre_obj::Theatre_obj()
{
}

void Theatre_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theatre);
	HX_MARK_MEMBER_NAME(controls,"controls");
	HX_MARK_MEMBER_NAME(debug,"debug");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Theatre_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controls,"controls");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Theatre_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { return controls; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theatre_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { controls=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theatre_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("controls"));
	outFields->push(HX_CSTRING("debug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("create"),
	HX_CSTRING("controls"),
	HX_CSTRING("debug"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theatre_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theatre_obj::__mClass,"__mClass");
};

Class Theatre_obj::__mClass;

void Theatre_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.squad.dr.Theatre"), hx::TCanCast< Theatre_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Theatre_obj::__boot()
{
}

} // end namespace com
} // end namespace squad
} // end namespace dr
