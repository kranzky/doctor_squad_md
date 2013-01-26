#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_com_squad_dr_DrSquad
#include <com/squad/dr/DrSquad.h>
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
#ifndef INCLUDED_native_display_StageAlign
#include <native/display/StageAlign.h>
#endif
#ifndef INCLUDED_native_display_StageScaleMode
#include <native/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_KeyboardEvent
#include <native/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_native_ui_Keyboard
#include <native/ui/Keyboard.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","Main.hx",20);
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(23)
	if (((this->get_stage() != null()))){
		HX_STACK_LINE(24)
		this->init(null());
	}
	else{
		HX_STACK_LINE(26)
		this->addEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
	}
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::initialize( ){
{
		HX_STACK_PUSH("Main::initialize","Main.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		::nme::Lib_obj::get_current()->get_stage()->set_align(::native::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_STACK_LINE(59)
		::nme::Lib_obj::get_current()->get_stage()->set_scaleMode(::native::display::StageScaleMode_obj::NO_SCALE_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,initialize,(void))

Void Main_obj::onKeyUP( ::native::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Main::onKeyUP","Main.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(48)
		if (((e->keyCode == ::native::ui::Keyboard_obj::ESCAPE))){
			HX_STACK_LINE(50)
			::nme::Lib_obj::exit();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onKeyUP,(void))

Void Main_obj::init( ::native::events::Event e){
{
		HX_STACK_PUSH("Main::init","Main.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(31)
		if ((this->hasEventListener(::native::events::Event_obj::ADDED_TO_STAGE))){
			HX_STACK_LINE(32)
			this->removeEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		}
		HX_STACK_LINE(36)
		this->initialize();
		HX_STACK_LINE(38)
		::org::flixel::FlxGame demo = ::com::squad::dr::DrSquad_obj::__new();		HX_STACK_VAR(demo,"demo");
		HX_STACK_LINE(39)
		this->addChild(demo);
		HX_STACK_LINE(42)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(::native::events::KeyboardEvent_obj::KEY_UP,this->onKeyUP_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

Void Main_obj::main( ){
{
		HX_STACK_PUSH("Main::main","Main.hx",63);
		HX_STACK_LINE(63)
		::nme::Lib_obj::get_current()->addChild(::Main_obj::__new());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUP") ) { return onKeyUP_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("initialize"),
	HX_CSTRING("onKeyUP"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
}

