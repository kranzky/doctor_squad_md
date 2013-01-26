#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTimer
#include <org/flixel/FlxTimer.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_TimerManager
#include <org/flixel/plugin/TimerManager.h>
#endif
namespace org{
namespace flixel{

Void FlxTimer_obj::__construct()
{
HX_STACK_PUSH("FlxTimer::new","org/flixel/FlxTimer.hx",48);
{
	HX_STACK_LINE(49)
	this->time = (int)0;
	HX_STACK_LINE(50)
	this->loops = (int)0;
	HX_STACK_LINE(51)
	this->_callback = null();
	HX_STACK_LINE(52)
	this->_timeCounter = (int)0;
	HX_STACK_LINE(53)
	this->_loopsCounter = (int)0;
	HX_STACK_LINE(55)
	this->paused = false;
	HX_STACK_LINE(56)
	this->finished = false;
}
;
	return null();
}

FlxTimer_obj::~FlxTimer_obj() { }

Dynamic FlxTimer_obj::__CreateEmpty() { return  new FlxTimer_obj; }
hx::ObjectPtr< FlxTimer_obj > FlxTimer_obj::__new()
{  hx::ObjectPtr< FlxTimer_obj > result = new FlxTimer_obj();
	result->__construct();
	return result;}

Dynamic FlxTimer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTimer_obj > result = new FlxTimer_obj();
	result->__construct();
	return result;}

Float FlxTimer_obj::getProgress( ){
	HX_STACK_PUSH("FlxTimer::getProgress","org/flixel/FlxTimer.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_LINE(167)
	if (((this->time > (int)0))){
		HX_STACK_LINE(169)
		return (Float(this->_timeCounter) / Float(this->time));
	}
	else{
		HX_STACK_LINE(173)
		return (int)0;
	}
	HX_STACK_LINE(167)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,getProgress,return )

int FlxTimer_obj::getLoopsLeft( ){
	HX_STACK_PUSH("FlxTimer::getLoopsLeft","org/flixel/FlxTimer.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(157)
	return (this->loops - this->_loopsCounter);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,getLoopsLeft,return )

Float FlxTimer_obj::getTimeLeft( ){
	HX_STACK_PUSH("FlxTimer::getTimeLeft","org/flixel/FlxTimer.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(147)
	return (this->time - this->_timeCounter);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,getTimeLeft,return )

Void FlxTimer_obj::stop( ){
{
		HX_STACK_PUSH("FlxTimer::stop","org/flixel/FlxTimer.hx",132);
		HX_STACK_THIS(this);
		HX_STACK_LINE(133)
		this->finished = true;
		HX_STACK_LINE(134)
		::org::flixel::plugin::TimerManager timerManager = ::org::flixel::FlxTimer_obj::getManager();		HX_STACK_VAR(timerManager,"timerManager");
		HX_STACK_LINE(135)
		if (((timerManager != null()))){
			HX_STACK_LINE(136)
			timerManager->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,stop,(void))

::org::flixel::FlxTimer FlxTimer_obj::start( hx::Null< Float >  __o_Time,hx::Null< int >  __o_Loops,Dynamic Callback){
Float Time = __o_Time.Default(1);
int Loops = __o_Loops.Default(1);
	HX_STACK_PUSH("FlxTimer::start","org/flixel/FlxTimer.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Time,"Time");
	HX_STACK_ARG(Loops,"Loops");
	HX_STACK_ARG(Callback,"Callback");
{
		HX_STACK_LINE(105)
		::org::flixel::plugin::TimerManager timerManager = ::org::flixel::FlxTimer_obj::getManager();		HX_STACK_VAR(timerManager,"timerManager");
		HX_STACK_LINE(106)
		if (((timerManager != null()))){
			HX_STACK_LINE(107)
			timerManager->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(111)
		if ((this->paused)){
			HX_STACK_LINE(113)
			this->paused = false;
			HX_STACK_LINE(114)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(117)
		this->paused = false;
		HX_STACK_LINE(118)
		this->finished = false;
		HX_STACK_LINE(119)
		this->time = Time;
		HX_STACK_LINE(120)
		if (((Loops < (int)1))){
			HX_STACK_LINE(120)
			Loops = (int)1;
		}
		HX_STACK_LINE(121)
		this->loops = Loops;
		HX_STACK_LINE(122)
		this->_callback = Callback;
		HX_STACK_LINE(123)
		this->_timeCounter = (int)0;
		HX_STACK_LINE(124)
		this->_loopsCounter = (int)0;
		HX_STACK_LINE(125)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTimer_obj,start,return )

Void FlxTimer_obj::update( ){
{
		HX_STACK_PUSH("FlxTimer::update","org/flixel/FlxTimer.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_LINE(76)
		hx::AddEq(this->_timeCounter,::org::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(77)
		while(((bool((bool((this->_timeCounter >= this->time)) && bool(!(this->paused)))) && bool(!(this->finished))))){
			HX_STACK_LINE(79)
			hx::SubEq(this->_timeCounter,this->time);
			HX_STACK_LINE(81)
			(this->_loopsCounter)++;
			HX_STACK_LINE(82)
			if (((bool((this->loops > (int)0)) && bool((this->_loopsCounter >= this->loops))))){
				HX_STACK_LINE(83)
				this->stop();
			}
			HX_STACK_LINE(87)
			if (((this->_callback_dyn() != null()))){
				HX_STACK_LINE(88)
				this->_callback(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,update,(void))

Void FlxTimer_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTimer::destroy","org/flixel/FlxTimer.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_LINE(64)
		this->stop();
		HX_STACK_LINE(65)
		this->_callback = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,destroy,(void))

::org::flixel::plugin::TimerManager FlxTimer_obj::manager;

::org::flixel::plugin::TimerManager FlxTimer_obj::getManager( ){
	HX_STACK_PUSH("FlxTimer::getManager","org/flixel/FlxTimer.hx",181);
	HX_STACK_LINE(181)
	return hx::TCast< org::flixel::plugin::TimerManager >::cast(::org::flixel::FlxG_obj::getPlugin(hx::ClassOf< ::org::flixel::plugin::TimerManager >()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,getManager,return )


FlxTimer_obj::FlxTimer_obj()
{
}

void FlxTimer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimer);
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(loopsLeft,"loopsLeft");
	HX_MARK_MEMBER_NAME(timeLeft,"timeLeft");
	HX_MARK_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_MARK_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_END_CLASS();
}

void FlxTimer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(loopsLeft,"loopsLeft");
	HX_VISIT_MEMBER_NAME(timeLeft,"timeLeft");
	HX_VISIT_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_VISIT_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(time,"time");
}

Dynamic FlxTimer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"loops") ) { return loops; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return inCallProp ? getManager() : manager; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return inCallProp ? getProgress() : progress; }
		if (HX_FIELD_EQ(inName,"timeLeft") ) { return inCallProp ? getTimeLeft() : timeLeft; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopsLeft") ) { return inCallProp ? getLoopsLeft() : loopsLeft; }
		if (HX_FIELD_EQ(inName,"_callback") ) { return _callback; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getManager") ) { return getManager_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getProgress") ) { return getProgress_dyn(); }
		if (HX_FIELD_EQ(inName,"getTimeLeft") ) { return getTimeLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getLoopsLeft") ) { return getLoopsLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { return _timeCounter; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { return _loopsCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTimer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::org::flixel::plugin::TimerManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeLeft") ) { timeLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopsLeft") ) { loopsLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { _timeCounter=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { _loopsCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("progress"));
	outFields->push(HX_CSTRING("loopsLeft"));
	outFields->push(HX_CSTRING("timeLeft"));
	outFields->push(HX_CSTRING("_loopsCounter"));
	outFields->push(HX_CSTRING("_timeCounter"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("loops"));
	outFields->push(HX_CSTRING("time"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("getManager"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getProgress"),
	HX_CSTRING("progress"),
	HX_CSTRING("getLoopsLeft"),
	HX_CSTRING("loopsLeft"),
	HX_CSTRING("getTimeLeft"),
	HX_CSTRING("timeLeft"),
	HX_CSTRING("stop"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_loopsCounter"),
	HX_CSTRING("_timeCounter"),
	HX_CSTRING("_callback"),
	HX_CSTRING("finished"),
	HX_CSTRING("paused"),
	HX_CSTRING("loops"),
	HX_CSTRING("time"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTimer_obj::manager,"manager");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::manager,"manager");
};

Class FlxTimer_obj::__mClass;

void FlxTimer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxTimer"), hx::TCanCast< FlxTimer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTimer_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
