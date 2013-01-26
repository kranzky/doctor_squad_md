#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_com_squad_dr_DrSquad
#include <com/squad/dr/DrSquad.h>
#endif
#ifndef INCLUDED_com_squad_dr_Lobby
#include <com/squad/dr/Lobby.h>
#endif
#ifndef INCLUDED_com_squad_dr_PubNub
#include <com/squad/dr/PubNub.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
namespace com{
namespace squad{
namespace dr{

Void DrSquad_obj::__construct()
{
HX_STACK_PUSH("DrSquad::new","com/squad/dr/DrSquad.hx",11);
{
	HX_STACK_LINE(12)
	int stageWidth = ::nme::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(stageWidth,"stageWidth");
	HX_STACK_LINE(13)
	int stageHeight = ::nme::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(stageHeight,"stageHeight");
	HX_STACK_LINE(14)
	Float ratioX = (Float(stageWidth) / Float((int)640));		HX_STACK_VAR(ratioX,"ratioX");
	HX_STACK_LINE(15)
	Float ratioY = (Float(stageHeight) / Float((int)480));		HX_STACK_VAR(ratioY,"ratioY");
	HX_STACK_LINE(16)
	Float ratio = ::Math_obj::min(ratioX,ratioY);		HX_STACK_VAR(ratio,"ratio");
	HX_STACK_LINE(17)
	super::__construct(::Math_obj::floor((Float(stageWidth) / Float(ratio))),::Math_obj::floor((Float(stageHeight) / Float(ratio))),hx::ClassOf< ::com::squad::dr::Lobby >(),ratio,(int)30,(int)30,null());
	HX_STACK_LINE(18)
	this->forceDebugger = true;
	HX_STACK_LINE(20)
	::String pub_key = HX_CSTRING("pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472");		HX_STACK_VAR(pub_key,"pub_key");
	HX_STACK_LINE(21)
	::String sub_key = HX_CSTRING("sub-c-132a21ec-66ec-11e2-903d-12313f022c90");		HX_STACK_VAR(sub_key,"sub_key");
	HX_STACK_LINE(22)
	::String channel = HX_CSTRING("kranzky");		HX_STACK_VAR(channel,"channel");
	HX_STACK_LINE(23)
	this->_pubnub = ::com::squad::dr::PubNub_obj::__new(pub_key,sub_key,channel);
}
;
	return null();
}

DrSquad_obj::~DrSquad_obj() { }

Dynamic DrSquad_obj::__CreateEmpty() { return  new DrSquad_obj; }
hx::ObjectPtr< DrSquad_obj > DrSquad_obj::__new()
{  hx::ObjectPtr< DrSquad_obj > result = new DrSquad_obj();
	result->__construct();
	return result;}

Dynamic DrSquad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrSquad_obj > result = new DrSquad_obj();
	result->__construct();
	return result;}


DrSquad_obj::DrSquad_obj()
{
}

void DrSquad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrSquad);
	HX_MARK_MEMBER_NAME(_pubnub,"_pubnub");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DrSquad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pubnub,"_pubnub");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DrSquad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_pubnub") ) { return _pubnub; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrSquad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_pubnub") ) { _pubnub=inValue.Cast< ::com::squad::dr::PubNub >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrSquad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pubnub"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_pubnub"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrSquad_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrSquad_obj::__mClass,"__mClass");
};

Class DrSquad_obj::__mClass;

void DrSquad_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.squad.dr.DrSquad"), hx::TCanCast< DrSquad_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DrSquad_obj::__boot()
{
}

} // end namespace com
} // end namespace squad
} // end namespace dr
