#include <hxcpp.h>

#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_native_events_TouchEvent
#include <native/events/TouchEvent.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Touch
#include <org/flixel/system/input/Touch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_TouchManager
#include <org/flixel/system/input/TouchManager.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void TouchManager_obj::__construct()
{
HX_STACK_PUSH("TouchManager::new","org/flixel/system/input/TouchManager.hx",34);
{
	HX_STACK_LINE(35)
	this->touches = Array_obj< ::org::flixel::system::input::Touch >::__new();
	HX_STACK_LINE(36)
	this->_inactiveTouches = Array_obj< ::org::flixel::system::input::Touch >::__new();
	HX_STACK_LINE(37)
	this->_touchesCache = ::IntHash_obj::__new();
}
;
	return null();
}

TouchManager_obj::~TouchManager_obj() { }

Dynamic TouchManager_obj::__CreateEmpty() { return  new TouchManager_obj; }
hx::ObjectPtr< TouchManager_obj > TouchManager_obj::__new()
{  hx::ObjectPtr< TouchManager_obj > result = new TouchManager_obj();
	result->__construct();
	return result;}

Dynamic TouchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchManager_obj > result = new TouchManager_obj();
	result->__construct();
	return result;}

::org::flixel::system::input::Touch TouchManager_obj::recycle( Float X,Float Y,int PointID){
	HX_STACK_PUSH("TouchManager::recycle","org/flixel/system/input/TouchManager.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(PointID,"PointID");
	HX_STACK_LINE(245)
	if (((this->_inactiveTouches->length > (int)0))){
		HX_STACK_LINE(247)
		::org::flixel::system::input::Touch touch = this->_inactiveTouches->pop();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(248)
		touch->reset(X,Y,PointID);
		HX_STACK_LINE(249)
		return this->add(touch);
	}
	HX_STACK_LINE(252)
	return this->add(::org::flixel::system::input::Touch_obj::__new(X,Y,PointID));
}


HX_DEFINE_DYNAMIC_FUNC3(TouchManager_obj,recycle,return )

::org::flixel::system::input::Touch TouchManager_obj::add( ::org::flixel::system::input::Touch touch){
	HX_STACK_PUSH("TouchManager::add","org/flixel/system/input/TouchManager.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(touch,"touch");
	HX_STACK_LINE(231)
	this->touches->push(touch);
	HX_STACK_LINE(232)
	this->_touchesCache->set(touch->get_touchPointID(),touch);
	HX_STACK_LINE(233)
	return touch;
}


HX_DEFINE_DYNAMIC_FUNC1(TouchManager_obj,add,return )

Array< ::org::flixel::system::input::Touch > TouchManager_obj::justReleasedTouches( Array< ::org::flixel::system::input::Touch > TouchArray){
	HX_STACK_PUSH("TouchManager::justReleasedTouches","org/flixel/system/input/TouchManager.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(202)
	if (((TouchArray == null()))){
		HX_STACK_LINE(203)
		TouchArray = Array_obj< ::org::flixel::system::input::Touch >::__new();
	}
	HX_STACK_LINE(207)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(208)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(209)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(213)
	{
		HX_STACK_LINE(213)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::input::Touch > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(213)
		while(((_g < _g1->length))){
			HX_STACK_LINE(213)
			::org::flixel::system::input::Touch touch = _g1->__get(_g);		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(213)
			++(_g);
			HX_STACK_LINE(215)
			if (((touch->_current == (int)-1))){
				HX_STACK_LINE(216)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(221)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(TouchManager_obj,justReleasedTouches,return )

Array< ::org::flixel::system::input::Touch > TouchManager_obj::justStartedTouches( Array< ::org::flixel::system::input::Touch > TouchArray){
	HX_STACK_PUSH("TouchManager::justStartedTouches","org/flixel/system/input/TouchManager.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(173)
	if (((TouchArray == null()))){
		HX_STACK_LINE(174)
		TouchArray = Array_obj< ::org::flixel::system::input::Touch >::__new();
	}
	HX_STACK_LINE(178)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(179)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(180)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::input::Touch > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		while(((_g < _g1->length))){
			HX_STACK_LINE(184)
			::org::flixel::system::input::Touch touch = _g1->__get(_g);		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(184)
			++(_g);
			HX_STACK_LINE(186)
			if (((touch->_current == (int)2))){
				HX_STACK_LINE(187)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(192)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(TouchManager_obj,justStartedTouches,return )

Void TouchManager_obj::handleTouchMove( ::native::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("TouchManager::handleTouchMove","org/flixel/system/input/TouchManager.hx",158);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(159)
		::org::flixel::system::input::Touch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(160)
		if (((touch != null()))){
			HX_STACK_LINE(161)
			touch->updateTouchPosition(FlashEvent->stageX,FlashEvent->stageY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TouchManager_obj,handleTouchMove,(void))

Void TouchManager_obj::handleTouchEnd( ::native::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("TouchManager::handleTouchEnd","org/flixel/system/input/TouchManager.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(139)
		::org::flixel::system::input::Touch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(140)
		if (((touch != null()))){
			HX_STACK_LINE(141)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(143)
				touch->_current = (int)-1;
			}
			else{
				HX_STACK_LINE(147)
				touch->_current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TouchManager_obj,handleTouchEnd,(void))

Void TouchManager_obj::handleTouchBegin( ::native::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("TouchManager::handleTouchBegin","org/flixel/system/input/TouchManager.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(114)
		::org::flixel::system::input::Touch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(115)
		if (((touch != null()))){
			HX_STACK_LINE(116)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(118)
				touch->_current = (int)1;
			}
			else{
				HX_STACK_LINE(122)
				touch->_current = (int)2;
			}
		}
		else{
			HX_STACK_LINE(128)
			touch = this->recycle(FlashEvent->stageX,FlashEvent->stageY,FlashEvent->touchPointID);
			HX_STACK_LINE(129)
			touch->_current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TouchManager_obj,handleTouchBegin,(void))

Void TouchManager_obj::reset( ){
{
		HX_STACK_PUSH("TouchManager::reset","org/flixel/system/input/TouchManager.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(94)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_touchesCache->keys());  __it->hasNext(); ){
			int key = __it->next();
			this->_touchesCache->remove(key);
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::input::Touch > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			while(((_g < _g1->length))){
				HX_STACK_LINE(99)
				::org::flixel::system::input::Touch touch = _g1->__get(_g);		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(99)
				++(_g);
				HX_STACK_LINE(101)
				touch->deactivate();
				HX_STACK_LINE(102)
				this->_inactiveTouches->push(touch);
			}
		}
		HX_STACK_LINE(105)
		this->touches->splice((int)0,this->touches->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TouchManager_obj,reset,(void))

Void TouchManager_obj::update( ){
{
		HX_STACK_PUSH("TouchManager::update","org/flixel/system/input/TouchManager.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		int i = (this->touches->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(67)
		::org::flixel::system::input::Touch touch;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(68)
		while(((i >= (int)0))){
			HX_STACK_LINE(70)
			touch = this->touches->__get(i);
			HX_STACK_LINE(73)
			if (((touch->_current == (int)0))){
				HX_STACK_LINE(75)
				touch->deactivate();
				HX_STACK_LINE(76)
				this->_touchesCache->remove(touch->get_touchPointID());
				HX_STACK_LINE(77)
				this->touches->splice(i,(int)1);
				HX_STACK_LINE(78)
				this->_inactiveTouches->push(touch);
			}
			else{
				HX_STACK_LINE(81)
				touch->update();
			}
			HX_STACK_LINE(85)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TouchManager_obj,update,(void))

Void TouchManager_obj::destroy( ){
{
		HX_STACK_PUSH("TouchManager::destroy","org/flixel/system/input/TouchManager.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::input::Touch > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			while(((_g < _g1->length))){
				HX_STACK_LINE(45)
				::org::flixel::system::input::Touch touch = _g1->__get(_g);		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(45)
				++(_g);
				HX_STACK_LINE(47)
				touch->destroy();
			}
		}
		HX_STACK_LINE(49)
		this->touches = null();
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::input::Touch > _g1 = this->_inactiveTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(51)
			while(((_g < _g1->length))){
				HX_STACK_LINE(51)
				::org::flixel::system::input::Touch touch = _g1->__get(_g);		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(51)
				++(_g);
				HX_STACK_LINE(53)
				touch->destroy();
			}
		}
		HX_STACK_LINE(55)
		this->_inactiveTouches = null();
		HX_STACK_LINE(57)
		this->_touchesCache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TouchManager_obj,destroy,(void))


TouchManager_obj::TouchManager_obj()
{
}

void TouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchManager);
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(touches,"touches");
	HX_MARK_END_CLASS();
}

void TouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(touches,"touches");
}

Dynamic TouchManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"touches") ) { return touches; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return _touchesCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return handleTouchEnd_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return handleTouchMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return handleTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return _inactiveTouches; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justStartedTouches") ) { return justStartedTouches_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justReleasedTouches") ) { return justReleasedTouches_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"touches") ) { touches=inValue.Cast< Array< ::org::flixel::system::input::Touch > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast< ::IntHash >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< Array< ::org::flixel::system::input::Touch > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_touchesCache"));
	outFields->push(HX_CSTRING("_inactiveTouches"));
	outFields->push(HX_CSTRING("touches"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("recycle"),
	HX_CSTRING("add"),
	HX_CSTRING("justReleasedTouches"),
	HX_CSTRING("justStartedTouches"),
	HX_CSTRING("handleTouchMove"),
	HX_CSTRING("handleTouchEnd"),
	HX_CSTRING("handleTouchBegin"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_touchesCache"),
	HX_CSTRING("_inactiveTouches"),
	HX_CSTRING("touches"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchManager_obj::__mClass,"__mClass");
};

Class TouchManager_obj::__mClass;

void TouchManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.TouchManager"), hx::TCanCast< TouchManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TouchManager_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
