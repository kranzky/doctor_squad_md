#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Touch
#include <org/flixel/system/input/Touch.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void Touch_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{
HX_STACK_PUSH("Touch::new","org/flixel/system/input/Touch.hx",54);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int PointID = __o_PointID.Default(0);
{
	HX_STACK_LINE(55)
	super::__construct(null(),null());
	HX_STACK_LINE(56)
	this->screenX = (int)0;
	HX_STACK_LINE(57)
	this->screenY = (int)0;
	HX_STACK_LINE(58)
	this->_current = (int)0;
	HX_STACK_LINE(59)
	this->_last = (int)0;
	HX_STACK_LINE(60)
	this->_point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(61)
	this->_globalScreenPosition = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(63)
	this->_flashPoint = ::native::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(64)
	this->updateTouchPosition(X,Y);
	HX_STACK_LINE(65)
	this->_touchPointID = PointID;
}
;
	return null();
}

Touch_obj::~Touch_obj() { }

Dynamic Touch_obj::__CreateEmpty() { return  new Touch_obj; }
hx::ObjectPtr< Touch_obj > Touch_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{  hx::ObjectPtr< Touch_obj > result = new Touch_obj();
	result->__construct(__o_X,__o_Y,__o_PointID);
	return result;}

Dynamic Touch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Touch_obj > result = new Touch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool Touch_obj::isActive( ){
	HX_STACK_PUSH("Touch::isActive","org/flixel/system/input/Touch.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(218)
	return (this->_current != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,isActive,return )

bool Touch_obj::justReleased( ){
	HX_STACK_PUSH("Touch::justReleased","org/flixel/system/input/Touch.hx",212);
	HX_STACK_THIS(this);
	HX_STACK_LINE(212)
	return (this->_current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,justReleased,return )

bool Touch_obj::justPressed( ){
	HX_STACK_PUSH("Touch::justPressed","org/flixel/system/input/Touch.hx",206);
	HX_STACK_THIS(this);
	HX_STACK_LINE(206)
	return (this->_current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,justPressed,return )

bool Touch_obj::pressed( ){
	HX_STACK_PUSH("Touch::pressed","org/flixel/system/input/Touch.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(200)
	return (this->_current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,pressed,return )

Void Touch_obj::deactivate( ){
{
		HX_STACK_PUSH("Touch::deactivate","org/flixel/system/input/Touch.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_LINE(192)
		this->_current = (int)0;
		HX_STACK_LINE(193)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,deactivate,(void))

Void Touch_obj::reset( Float X,Float Y,int PointID){
{
		HX_STACK_PUSH("Touch::reset","org/flixel/system/input/Touch.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(PointID,"PointID");
		HX_STACK_LINE(184)
		this->updateTouchPosition(X,Y);
		HX_STACK_LINE(185)
		this->_touchPointID = PointID;
		HX_STACK_LINE(186)
		this->_current = (int)0;
		HX_STACK_LINE(187)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Touch_obj,reset,(void))

::org::flixel::FlxPoint Touch_obj::getScreenPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point){
	HX_STACK_PUSH("Touch::getScreenPosition","org/flixel/system/input/Touch.hx",165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(166)
	if (((Camera == null()))){
		HX_STACK_LINE(167)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(170)
	if (((point == null()))){
		HX_STACK_LINE(171)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(174)
	point->x = (Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom));
	HX_STACK_LINE(175)
	point->y = (Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom));
	HX_STACK_LINE(176)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(Touch_obj,getScreenPosition,return )

::org::flixel::FlxPoint Touch_obj::getWorldPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point){
	HX_STACK_PUSH("Touch::getWorldPosition","org/flixel/system/input/Touch.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(143)
	if (((Camera == null()))){
		HX_STACK_LINE(144)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(147)
	if (((point == null()))){
		HX_STACK_LINE(148)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(151)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(152)
	point->x = (this->_point->x + Camera->scroll->x);
	HX_STACK_LINE(153)
	point->y = (this->_point->y + Camera->scroll->y);
	HX_STACK_LINE(154)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(Touch_obj,getWorldPosition,return )

Void Touch_obj::updateCursor( ){
{
		HX_STACK_PUSH("Touch::updateCursor","org/flixel/system/input/Touch.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_LINE(127)
		::org::flixel::FlxCamera camera = ::org::flixel::FlxG_obj::camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(128)
		this->screenX = ::Math_obj::floor((Float(((this->_globalScreenPosition->x - camera->x))) / Float(camera->zoom)));
		HX_STACK_LINE(129)
		this->screenY = ::Math_obj::floor((Float(((this->_globalScreenPosition->y - camera->y))) / Float(camera->zoom)));
		HX_STACK_LINE(130)
		this->x = (this->screenX + camera->scroll->x);
		HX_STACK_LINE(131)
		this->y = (this->screenY + camera->scroll->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,updateCursor,(void))

Void Touch_obj::updateTouchPosition( Float X,Float Y){
{
		HX_STACK_PUSH("Touch::updateTouchPosition","org/flixel/system/input/Touch.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(111)
		this->_flashPoint->x = X;
		HX_STACK_LINE(112)
		this->_flashPoint->y = Y;
		HX_STACK_LINE(113)
		this->_flashPoint = ::org::flixel::FlxG_obj::_game->globalToLocal(this->_flashPoint);
		HX_STACK_LINE(115)
		this->_globalScreenPosition->x = this->_flashPoint->x;
		HX_STACK_LINE(116)
		this->_globalScreenPosition->y = this->_flashPoint->y;
		HX_STACK_LINE(117)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Touch_obj,updateTouchPosition,(void))

Void Touch_obj::update( ){
{
		HX_STACK_PUSH("Touch::update","org/flixel/system/input/Touch.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		if (((bool((this->_last == (int)-1)) && bool((this->_current == (int)-1))))){
			HX_STACK_LINE(94)
			this->_current = (int)0;
		}
		else{
			HX_STACK_LINE(97)
			if (((bool((this->_last == (int)2)) && bool((this->_current == (int)2))))){
				HX_STACK_LINE(98)
				this->_current = (int)1;
			}
		}
		HX_STACK_LINE(101)
		this->_last = this->_current;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,update,(void))

int Touch_obj::get_touchPointID( ){
	HX_STACK_PUSH("Touch::get_touchPointID","org/flixel/system/input/Touch.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return this->_touchPointID;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_touchPointID,return )

Void Touch_obj::destroy( ){
{
		HX_STACK_PUSH("Touch::destroy","org/flixel/system/input/Touch.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		this->_point = null();
		HX_STACK_LINE(74)
		this->_globalScreenPosition = null();
		HX_STACK_LINE(75)
		this->_flashPoint = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,destroy,(void))


Touch_obj::Touch_obj()
{
}

void Touch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Touch);
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(_touchPointID,"_touchPointID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Touch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(_touchPointID,"_touchPointID");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Touch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return inCallProp ? get_touchPointID() : touchPointID; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { return _touchPointID; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touchPointID") ) { return get_touchPointID_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchPosition") ) { return updateTouchPosition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Touch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { _touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Touch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("touchPointID"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("_touchPointID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isActive"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("reset"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("updateTouchPosition"),
	HX_CSTRING("update"),
	HX_CSTRING("get_touchPointID"),
	HX_CSTRING("touchPointID"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_point"),
	HX_CSTRING("_last"),
	HX_CSTRING("_current"),
	HX_CSTRING("screenY"),
	HX_CSTRING("screenX"),
	HX_CSTRING("_touchPointID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

Class Touch_obj::__mClass;

void Touch_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.Touch"), hx::TCanCast< Touch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Touch_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
