#include <hxcpp.h>

#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
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
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
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
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Vis
#include <org/flixel/system/debug/Vis.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void Vis_obj::__construct()
{
HX_STACK_PUSH("Vis::new","org/flixel/system/debug/Vis.hx",28);
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(31)
	int spacing = (int)7;		HX_STACK_VAR(spacing,"spacing");
	HX_STACK_LINE(33)
	this->_bounds = ::native::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgBounds),null(),null());
	HX_STACK_LINE(34)
	this->addChild(this->_bounds);
	HX_STACK_LINE(36)
	this->unpress();
	HX_STACK_LINE(37)
	this->checkOver();
	HX_STACK_LINE(38)
	this->updateGUI();
	HX_STACK_LINE(40)
	this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

Vis_obj::~Vis_obj() { }

Dynamic Vis_obj::__CreateEmpty() { return  new Vis_obj; }
hx::ObjectPtr< Vis_obj > Vis_obj::__new()
{  hx::ObjectPtr< Vis_obj > result = new Vis_obj();
	result->__construct();
	return result;}

Dynamic Vis_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vis_obj > result = new Vis_obj();
	result->__construct();
	return result;}

Void Vis_obj::updateGUI( ){
{
		HX_STACK_PUSH("Vis::updateGUI","org/flixel/system/debug/Vis.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(164)
		if ((::org::flixel::FlxG_obj::visualDebug)){
			HX_STACK_LINE(166)
			if (((bool(this->_overBounds) && bool((this->_bounds->get_alpha() != 1.0))))){
				HX_STACK_LINE(168)
				this->_bounds->set_alpha(1.0);
			}
			else{
				HX_STACK_LINE(171)
				if (((bool(!(this->_overBounds)) && bool((this->_bounds->get_alpha() != 0.9))))){
					HX_STACK_LINE(172)
					this->_bounds->set_alpha(0.9);
				}
			}
		}
		else{
			HX_STACK_LINE(177)
			if (((bool(this->_overBounds) && bool((this->_bounds->get_alpha() != 0.6))))){
				HX_STACK_LINE(179)
				this->_bounds->set_alpha(0.6);
			}
			else{
				HX_STACK_LINE(182)
				if (((bool(!(this->_overBounds)) && bool((this->_bounds->get_alpha() != 0.5))))){
					HX_STACK_LINE(183)
					this->_bounds->set_alpha(0.5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vis_obj,updateGUI,(void))

Void Vis_obj::unpress( ){
{
		HX_STACK_PUSH("Vis::unpress","org/flixel/system/debug/Vis.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_LINE(156)
		this->_pressingBounds = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vis_obj,unpress,(void))

bool Vis_obj::checkOver( ){
	HX_STACK_PUSH("Vis::checkOver","org/flixel/system/debug/Vis.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	this->_overBounds = false;
	HX_STACK_LINE(141)
	if (((bool((bool((bool((this->get_mouseX() < (int)0)) || bool((this->get_mouseX() > this->get_width())))) || bool((this->get_mouseY() < (int)0)))) || bool((this->get_mouseY() > this->get_height()))))){
		HX_STACK_LINE(142)
		return false;
	}
	HX_STACK_LINE(145)
	if (((bool((this->get_mouseX() > this->_bounds->get_x())) || bool((this->get_mouseX() < (this->_bounds->get_x() + this->_bounds->get_width())))))){
		HX_STACK_LINE(146)
		this->_overBounds = true;
	}
	HX_STACK_LINE(149)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Vis_obj,checkOver,return )

Void Vis_obj::onMouseUp( ::native::events::MouseEvent E){
{
		HX_STACK_PUSH("Vis::onMouseUp","org/flixel/system/debug/Vis.hx",121);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(122)
		if (((bool(this->_overBounds) && bool(this->_pressingBounds)))){
			HX_STACK_LINE(123)
			this->onBounds();
		}
		HX_STACK_LINE(126)
		this->unpress();
		HX_STACK_LINE(127)
		this->checkOver();
		HX_STACK_LINE(128)
		this->updateGUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vis_obj,onMouseUp,(void))

Void Vis_obj::onMouseDown( ::native::events::MouseEvent E){
{
		HX_STACK_PUSH("Vis::onMouseDown","org/flixel/system/debug/Vis.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(108)
		this->unpress();
		HX_STACK_LINE(109)
		if ((this->_overBounds)){
			HX_STACK_LINE(110)
			this->_pressingBounds = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vis_obj,onMouseDown,(void))

Void Vis_obj::onMouseMove( ::native::events::MouseEvent E){
{
		HX_STACK_PUSH("Vis::onMouseMove","org/flixel/system/debug/Vis.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(95)
		if ((!(this->checkOver()))){
			HX_STACK_LINE(96)
			this->unpress();
		}
		HX_STACK_LINE(99)
		this->updateGUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vis_obj,onMouseMove,(void))

Void Vis_obj::init( ::native::events::Event E){
{
		HX_STACK_PUSH("Vis::init","org/flixel/system/debug/Vis.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(77)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(79)
			return null();
		}
		HX_STACK_LINE(82)
		this->removeEventListener(::native::events::Event_obj::ENTER_FRAME,this->init_dyn(),null());
		HX_STACK_LINE(84)
		this->get_parent()->addEventListener(::native::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(85)
		this->get_parent()->addEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(86)
		this->get_parent()->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vis_obj,init,(void))

Void Vis_obj::onBounds( ){
{
		HX_STACK_PUSH("Vis::onBounds","org/flixel/system/debug/Vis.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(62)
		::org::flixel::FlxG_obj::visualDebug = !(::org::flixel::FlxG_obj::visualDebug);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vis_obj,onBounds,(void))

Void Vis_obj::destroy( ){
{
		HX_STACK_PUSH("Vis::destroy","org/flixel/system/debug/Vis.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		this->removeChild(this->_bounds);
		HX_STACK_LINE(49)
		this->_bounds = null();
		HX_STACK_LINE(51)
		this->get_parent()->removeEventListener(::native::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null());
		HX_STACK_LINE(52)
		this->get_parent()->removeEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
		HX_STACK_LINE(53)
		this->get_parent()->removeEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vis_obj,destroy,(void))


Vis_obj::Vis_obj()
{
}

void Vis_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vis);
	HX_MARK_MEMBER_NAME(_pressingBounds,"_pressingBounds");
	HX_MARK_MEMBER_NAME(_overBounds,"_overBounds");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Vis_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pressingBounds,"_pressingBounds");
	HX_VISIT_MEMBER_NAME(_overBounds,"_overBounds");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Vis_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unpress") ) { return unpress_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onBounds") ) { return onBounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateGUI") ) { return updateGUI_dyn(); }
		if (HX_FIELD_EQ(inName,"checkOver") ) { return checkOver_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_overBounds") ) { return _overBounds; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_pressingBounds") ) { return _pressingBounds; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vis_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_overBounds") ) { _overBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_pressingBounds") ) { _pressingBounds=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vis_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pressingBounds"));
	outFields->push(HX_CSTRING("_overBounds"));
	outFields->push(HX_CSTRING("_bounds"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateGUI"),
	HX_CSTRING("unpress"),
	HX_CSTRING("checkOver"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("init"),
	HX_CSTRING("onBounds"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_pressingBounds"),
	HX_CSTRING("_overBounds"),
	HX_CSTRING("_bounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vis_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vis_obj::__mClass,"__mClass");
};

Class Vis_obj::__mClass;

void Vis_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.Vis"), hx::TCanCast< Vis_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Vis_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
