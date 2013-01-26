#include <hxcpp.h>

#ifndef INCLUDED_com_squad_dr_Lobby
#include <com/squad/dr/Lobby.h>
#endif
#ifndef INCLUDED_com_squad_dr_PubNub
#include <com/squad/dr/PubNub.h>
#endif
#ifndef INCLUDED_com_squad_dr_Theatre
#include <com/squad/dr/Theatre.h>
#endif
#ifndef INCLUDED_com_squad_dr_widgets_Generator
#include <com/squad/dr/widgets/Generator.h>
#endif
#ifndef INCLUDED_com_squad_dr_widgets_Widget
#include <com/squad/dr/widgets/Widget.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif
namespace com{
namespace squad{
namespace dr{

Void Lobby_obj::__construct()
{
HX_STACK_PUSH("Lobby::new","com/squad/dr/Lobby.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct();
}
;
	return null();
}

Lobby_obj::~Lobby_obj() { }

Dynamic Lobby_obj::__CreateEmpty() { return  new Lobby_obj; }
hx::ObjectPtr< Lobby_obj > Lobby_obj::__new()
{  hx::ObjectPtr< Lobby_obj > result = new Lobby_obj();
	result->__construct();
	return result;}

Dynamic Lobby_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lobby_obj > result = new Lobby_obj();
	result->__construct();
	return result;}

Void Lobby_obj::update( ){
{
		HX_STACK_PUSH("Lobby::update","com/squad/dr/Lobby.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		this->super::update();
	}
return null();
}


Void Lobby_obj::destroy( ){
{
		HX_STACK_PUSH("Lobby::destroy","com/squad/dr/Lobby.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(51)
		this->super::destroy();
	}
return null();
}


Void Lobby_obj::onStartClick( ){
{
		HX_STACK_PUSH("Lobby::onStartClick","com/squad/dr/Lobby.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		::org::flixel::FlxG_obj::switchState(::com::squad::dr::Theatre_obj::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Lobby_obj,onStartClick,(void))

Void Lobby_obj::create( ){
{
		HX_STACK_PUSH("Lobby::create","com/squad/dr/Lobby.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_LINE(24)
		::org::flixel::FlxG_obj::setBgColor((int)-15524837);
		HX_STACK_LINE(28)
		::org::flixel::FlxG_obj::mouse->show(null(),null(),null(),null());
		HX_STACK_LINE(35)
		::haxe::Log_obj::trace(HX_CSTRING("Making generator"),hx::SourceInfo(HX_CSTRING("Lobby.hx"),35,HX_CSTRING("com.squad.dr.Lobby"),HX_CSTRING("create")));
		HX_STACK_LINE(36)
		::com::squad::dr::widgets::Generator g = ::com::squad::dr::widgets::Generator_obj::__new((int)1,null(),true,true);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(37)
		::haxe::Log_obj::trace(HX_CSTRING("Adding generator"),hx::SourceInfo(HX_CSTRING("Lobby.hx"),37,HX_CSTRING("com.squad.dr.Lobby"),HX_CSTRING("create")));
		HX_STACK_LINE(38)
		this->add(g);
	}
return null();
}



Lobby_obj::Lobby_obj()
{
}

void Lobby_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lobby);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Lobby_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Lobby_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onStartClick") ) { return onStartClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lobby_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Lobby_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onStartClick"),
	HX_CSTRING("create"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lobby_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lobby_obj::__mClass,"__mClass");
};

Class Lobby_obj::__mClass;

void Lobby_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.squad.dr.Lobby"), hx::TCanCast< Lobby_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lobby_obj::__boot()
{
}

} // end namespace com
} // end namespace squad
} // end namespace dr
