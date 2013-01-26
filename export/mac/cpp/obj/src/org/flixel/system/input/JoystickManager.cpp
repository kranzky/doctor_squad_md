#include <hxcpp.h>

#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_JoystickEvent
#include <native/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_JoyButton
#include <org/flixel/system/input/JoyButton.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Joystick
#include <org/flixel/system/input/Joystick.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_JoystickManager
#include <org/flixel/system/input/JoystickManager.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void JoystickManager_obj::__construct()
{
HX_STACK_PUSH("JoystickManager::new","org/flixel/system/input/JoystickManager.hx",30);
{
}
;
	return null();
}

JoystickManager_obj::~JoystickManager_obj() { }

Dynamic JoystickManager_obj::__CreateEmpty() { return  new JoystickManager_obj; }
hx::ObjectPtr< JoystickManager_obj > JoystickManager_obj::__new()
{  hx::ObjectPtr< JoystickManager_obj > result = new JoystickManager_obj();
	result->__construct();
	return result;}

Dynamic JoystickManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoystickManager_obj > result = new JoystickManager_obj();
	result->__construct();
	return result;}

Void JoystickManager_obj::handleHatMove( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("JoystickManager::handleHatMove","org/flixel/system/input/JoystickManager.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(141)
		::org::flixel::system::input::Joystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(142)
		joy->connected = true;
		HX_STACK_LINE(143)
		joy->hat->x = (  (((::Math_obj::abs(FlashEvent->x) < ::org::flixel::system::input::JoystickManager_obj::deadZone))) ? Float((int)0) : Float(FlashEvent->x) );
		HX_STACK_LINE(144)
		joy->hat->y = (  (((::Math_obj::abs(FlashEvent->y) < ::org::flixel::system::input::JoystickManager_obj::deadZone))) ? Float((int)0) : Float(FlashEvent->y) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JoystickManager_obj,handleHatMove,(void))

Void JoystickManager_obj::handleBallMove( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("JoystickManager::handleBallMove","org/flixel/system/input/JoystickManager.hx",128);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(129)
		::org::flixel::system::input::Joystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(130)
		joy->connected = true;
		HX_STACK_LINE(131)
		joy->ball->x = (  (((::Math_obj::abs(FlashEvent->x) < ::org::flixel::system::input::JoystickManager_obj::deadZone))) ? Float((int)0) : Float(FlashEvent->x) );
		HX_STACK_LINE(132)
		joy->ball->y = (  (((::Math_obj::abs(FlashEvent->y) < ::org::flixel::system::input::JoystickManager_obj::deadZone))) ? Float((int)0) : Float(FlashEvent->y) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JoystickManager_obj,handleBallMove,(void))

Void JoystickManager_obj::handleAxisMove( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("JoystickManager::handleAxisMove","org/flixel/system/input/JoystickManager.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(117)
		::org::flixel::system::input::Joystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(118)
		joy->connected = true;
		HX_STACK_LINE(119)
		joy->axis->x = (  (((::Math_obj::abs(FlashEvent->x) < ::org::flixel::system::input::JoystickManager_obj::deadZone))) ? Float((int)0) : Float(FlashEvent->x) );
		HX_STACK_LINE(120)
		joy->axis->y = (  (((::Math_obj::abs(FlashEvent->y) < ::org::flixel::system::input::JoystickManager_obj::deadZone))) ? Float((int)0) : Float(FlashEvent->y) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JoystickManager_obj,handleAxisMove,(void))

Void JoystickManager_obj::handleButtonUp( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("JoystickManager::handleButtonUp","org/flixel/system/input/JoystickManager.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(102)
		::org::flixel::system::input::Joystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(103)
		joy->connected = true;
		HX_STACK_LINE(105)
		::org::flixel::system::input::JoyButton object = joy->buttons->get(FlashEvent->id);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(106)
		if (((object == null()))){
			HX_STACK_LINE(106)
			return null();
		}
		HX_STACK_LINE(107)
		if (((object->current > (int)0))){
			HX_STACK_LINE(107)
			object->current = (int)-1;
		}
		else{
			HX_STACK_LINE(108)
			object->current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JoystickManager_obj,handleButtonUp,(void))

Void JoystickManager_obj::handleButtonDown( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("JoystickManager::handleButtonDown","org/flixel/system/input/JoystickManager.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(87)
		::org::flixel::system::input::Joystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(88)
		joy->connected = true;
		HX_STACK_LINE(90)
		::org::flixel::system::input::JoyButton o = joy->buttons->get(FlashEvent->id);		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(91)
		if (((o == null()))){
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(92)
		if (((o->current > (int)0))){
			HX_STACK_LINE(92)
			o->current = (int)1;
		}
		else{
			HX_STACK_LINE(93)
			o->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JoystickManager_obj,handleButtonDown,(void))

Void JoystickManager_obj::destroy( ){
{
		HX_STACK_PUSH("JoystickManager::destroy","org/flixel/system/input/JoystickManager.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::Joystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::Joystick >(::org::flixel::system::input::JoystickManager_obj::joysticks->iterator());  __it->hasNext(); ){
			::org::flixel::system::input::Joystick joy = __it->next();
			joy->destroy();
		}
		HX_STACK_LINE(78)
		::org::flixel::system::input::JoystickManager_obj::joysticks = ::IntHash_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JoystickManager_obj,destroy,(void))

Void JoystickManager_obj::reset( ){
{
		HX_STACK_PUSH("JoystickManager::reset","org/flixel/system/input/JoystickManager.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_LINE(61)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::Joystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::Joystick >(::org::flixel::system::input::JoystickManager_obj::joysticks->iterator());  __it->hasNext(); ){
			::org::flixel::system::input::Joystick joy = __it->next();
			joy->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JoystickManager_obj,reset,(void))

Void JoystickManager_obj::update( ){
{
		HX_STACK_PUSH("JoystickManager::update","org/flixel/system/input/JoystickManager.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::Joystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::Joystick >(::org::flixel::system::input::JoystickManager_obj::joysticks->iterator());  __it->hasNext(); ){
			::org::flixel::system::input::Joystick joy = __it->next();
			joy->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JoystickManager_obj,update,(void))

::org::flixel::system::input::Joystick JoystickManager_obj::joystick( int joystickID){
	HX_STACK_PUSH("JoystickManager::joystick","org/flixel/system/input/JoystickManager.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(joystickID,"joystickID");
	HX_STACK_LINE(37)
	::org::flixel::system::input::Joystick joy = ::org::flixel::system::input::JoystickManager_obj::joysticks->get(joystickID);		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(38)
	if (((joy == null()))){
		HX_STACK_LINE(40)
		joy = ::org::flixel::system::input::Joystick_obj::__new(joystickID);
		HX_STACK_LINE(41)
		::org::flixel::system::input::JoystickManager_obj::joysticks->set(joystickID,joy);
	}
	HX_STACK_LINE(43)
	return joy;
}


HX_DEFINE_DYNAMIC_FUNC1(JoystickManager_obj,joystick,return )

Float JoystickManager_obj::deadZone;

::IntHash JoystickManager_obj::joysticks;


JoystickManager_obj::JoystickManager_obj()
{
}

void JoystickManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoystickManager);
	HX_MARK_END_CLASS();
}

void JoystickManager_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic JoystickManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		if (HX_FIELD_EQ(inName,"joystick") ) { return joystick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"joysticks") ) { return joysticks; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JoystickManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"joysticks") ) { joysticks=inValue.Cast< ::IntHash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("deadZone"),
	HX_CSTRING("joysticks"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("handleHatMove"),
	HX_CSTRING("handleBallMove"),
	HX_CSTRING("handleAxisMove"),
	HX_CSTRING("handleButtonUp"),
	HX_CSTRING("handleButtonDown"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("joystick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JoystickManager_obj::deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(JoystickManager_obj::joysticks,"joysticks");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JoystickManager_obj::deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(JoystickManager_obj::joysticks,"joysticks");
};

Class JoystickManager_obj::__mClass;

void JoystickManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.JoystickManager"), hx::TCanCast< JoystickManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JoystickManager_obj::__boot()
{
	deadZone= 0.0;
	joysticks= ::IntHash_obj::__new();
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
