#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
namespace org{
namespace flixel{
namespace tweens{

Void FlxTween_obj::__construct(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease)
{
HX_STACK_PUSH("FlxTween::new","org/flixel/tweens/FlxTween.hx",58);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(59)
	this->_target = duration;
	HX_STACK_LINE(60)
	if (((type == (int)0))){
		HX_STACK_LINE(61)
		type = (int)1;
	}
	else{
		HX_STACK_LINE(64)
		if (((type == (int)16))){
			HX_STACK_LINE(65)
			type = (int)17;
		}
	}
	HX_STACK_LINE(68)
	this->_type = type;
	HX_STACK_LINE(69)
	this->complete = complete;
	HX_STACK_LINE(70)
	this->_ease = ease;
	HX_STACK_LINE(71)
	this->_t = (int)0;
	HX_STACK_LINE(73)
	this->_backward = (((int(this->_type) & int((int)16))) > (int)0);
}
;
	return null();
}

FlxTween_obj::~FlxTween_obj() { }

Dynamic FlxTween_obj::__CreateEmpty() { return  new FlxTween_obj; }
hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(duration,__o_type,complete,ease);
	return result;}

Dynamic FlxTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float FlxTween_obj::getScale( ){
	HX_STACK_PUSH("FlxTween::getScale","org/flixel/tweens/FlxTween.hx",173);
	HX_STACK_THIS(this);
	HX_STACK_LINE(173)
	return this->_t;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,getScale,return )

Float FlxTween_obj::setPercent( Float value){
	HX_STACK_PUSH("FlxTween::setPercent","org/flixel/tweens/FlxTween.hx",170);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(170)
	this->_time = (this->_target * value);
	HX_STACK_LINE(170)
	return this->_time;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,setPercent,return )

Float FlxTween_obj::getPercent( ){
	HX_STACK_PUSH("FlxTween::getPercent","org/flixel/tweens/FlxTween.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	return (Float(this->_time) / Float(this->_target));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,getPercent,return )

Void FlxTween_obj::finish( ){
{
		HX_STACK_PUSH("FlxTween::finish","org/flixel/tweens/FlxTween.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_LINE(141)
		if (((this->complete_dyn() != null()))){
			HX_STACK_LINE(141)
			this->complete();
		}
		HX_STACK_LINE(143)
		switch( (int)((int(this->_type) & int((int)-17)))){
			case (int)1: {
				HX_STACK_LINE(146)
				this->_time = this->_target;
				HX_STACK_LINE(147)
				this->active = false;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(149)
				hx::ModEq(this->_time,this->_target);
				HX_STACK_LINE(150)
				this->_t = (Float(this->_time) / Float(this->_target));
				HX_STACK_LINE(151)
				if (((bool((bool((this->_ease_dyn() != null())) && bool((this->_t > (int)0)))) && bool((this->_t < (int)1))))){
					HX_STACK_LINE(151)
					this->_t = this->_ease(this->_t);
				}
				HX_STACK_LINE(152)
				this->start();
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(154)
				hx::ModEq(this->_time,this->_target);
				HX_STACK_LINE(155)
				this->_t = (Float(this->_time) / Float(this->_target));
				HX_STACK_LINE(156)
				if (((bool((bool((this->_ease_dyn() != null())) && bool((this->_t > (int)0)))) && bool((this->_t < (int)1))))){
					HX_STACK_LINE(156)
					this->_t = this->_ease(this->_t);
				}
				HX_STACK_LINE(157)
				if ((this->_backward)){
					HX_STACK_LINE(157)
					this->_t = ((int)1 - this->_t);
				}
				HX_STACK_LINE(158)
				this->_backward = !(this->_backward);
				HX_STACK_LINE(159)
				this->start();
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(161)
				this->_time = this->_target;
				HX_STACK_LINE(162)
				this->active = false;
				HX_STACK_LINE(163)
				this->_parent->removeTween(hx::ObjectPtr<OBJ_>(this),true);
			}
			;break;
		}
		HX_STACK_LINE(165)
		this->_finish = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

Void FlxTween_obj::cancel( ){
{
		HX_STACK_PUSH("FlxTween::cancel","org/flixel/tweens/FlxTween.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_LINE(131)
		this->active = false;
		HX_STACK_LINE(132)
		if (((this->_parent != null()))){
			HX_STACK_LINE(133)
			this->_parent->removeTween(hx::ObjectPtr<OBJ_>(this),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

Void FlxTween_obj::start( ){
{
		HX_STACK_PUSH("FlxTween::start","org/flixel/tweens/FlxTween.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_LINE(117)
		this->_time = (int)0;
		HX_STACK_LINE(118)
		if (((this->_target == (int)0))){
			HX_STACK_LINE(120)
			this->active = false;
			HX_STACK_LINE(121)
			return null();
		}
		HX_STACK_LINE(123)
		this->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,(void))

Void FlxTween_obj::update( ){
{
		HX_STACK_PUSH("FlxTween::update","org/flixel/tweens/FlxTween.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(88)
		hx::AddEq(this->_time,::org::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(89)
		this->_t = (Float(this->_time) / Float(this->_target));
		HX_STACK_LINE(90)
		if (((this->_ease_dyn() != null()))){
			HX_STACK_LINE(91)
			this->_t = this->_ease(this->_t);
		}
		HX_STACK_LINE(94)
		if ((this->_backward)){
			HX_STACK_LINE(95)
			this->_t = ((int)1 - this->_t);
		}
		HX_STACK_LINE(98)
		if (((this->_time >= this->_target))){
			HX_STACK_LINE(100)
			if ((!(this->_backward))){
				HX_STACK_LINE(101)
				this->_t = (int)1;
			}
			else{
				HX_STACK_LINE(105)
				this->_t = (int)0;
			}
			HX_STACK_LINE(108)
			this->_finish = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,update,(void))

Void FlxTween_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTween::destroy","org/flixel/tweens/FlxTween.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_LINE(78)
		this->complete = null();
		HX_STACK_LINE(79)
		this->_parent = null();
		HX_STACK_LINE(80)
		this->_ease = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

int FlxTween_obj::PERSIST;

int FlxTween_obj::LOOPING;

int FlxTween_obj::PINGPONG;

int FlxTween_obj::ONESHOT;

int FlxTween_obj::BACKWARD;


FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(_backward,"_backward");
	HX_MARK_MEMBER_NAME(_next,"_next");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_finish,"_finish");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_t,"_t");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_backward,"_backward");
	HX_VISIT_MEMBER_NAME(_next,"_next");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_finish,"_finish");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_t,"_t");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { return _t; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"scale") ) { return inCallProp ? getScale() : scale; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PERSIST") ) { return PERSIST; }
		if (HX_FIELD_EQ(inName,"LOOPING") ) { return LOOPING; }
		if (HX_FIELD_EQ(inName,"ONESHOT") ) { return ONESHOT; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_finish") ) { return _finish; }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"percent") ) { return inCallProp ? getPercent() : percent; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PINGPONG") ) { return PINGPONG; }
		if (HX_FIELD_EQ(inName,"BACKWARD") ) { return BACKWARD; }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_backward") ) { return _backward; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setPercent") ) { return setPercent_dyn(); }
		if (HX_FIELD_EQ(inName,"getPercent") ) { return getPercent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { _t=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_next") ) { _next=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PERSIST") ) { PERSIST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOOPING") ) { LOOPING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONESHOT") ) { ONESHOT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::org::flixel::FlxBasic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finish") ) { _finish=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp) return setPercent(inValue);percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PINGPONG") ) { PINGPONG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACKWARD") ) { BACKWARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_backward") ) { _backward=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_backward"));
	outFields->push(HX_CSTRING("_next"));
	outFields->push(HX_CSTRING("_prev"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_finish"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_t"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PERSIST"),
	HX_CSTRING("LOOPING"),
	HX_CSTRING("PINGPONG"),
	HX_CSTRING("ONESHOT"),
	HX_CSTRING("BACKWARD"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_backward"),
	HX_CSTRING("_next"),
	HX_CSTRING("_prev"),
	HX_CSTRING("_parent"),
	HX_CSTRING("_finish"),
	HX_CSTRING("_target"),
	HX_CSTRING("_time"),
	HX_CSTRING("_t"),
	HX_CSTRING("_ease"),
	HX_CSTRING("_type"),
	HX_CSTRING("getScale"),
	HX_CSTRING("scale"),
	HX_CSTRING("setPercent"),
	HX_CSTRING("getPercent"),
	HX_CSTRING("percent"),
	HX_CSTRING("finish"),
	HX_CSTRING("cancel"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("complete"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_MARK_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_MARK_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
};

Class FlxTween_obj::__mClass;

void FlxTween_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.tweens.FlxTween"), hx::TCanCast< FlxTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTween_obj::__boot()
{
	PERSIST= (int)1;
	LOOPING= (int)2;
	PINGPONG= (int)4;
	ONESHOT= (int)8;
	BACKWARD= (int)16;
}

} // end namespace org
} // end namespace flixel
} // end namespace tweens
