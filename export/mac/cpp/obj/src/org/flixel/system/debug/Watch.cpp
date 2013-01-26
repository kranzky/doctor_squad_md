#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_WatchEntry
#include <org/flixel/system/debug/WatchEntry.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void Watch_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor)
{
HX_STACK_PUSH("Watch::new","org/flixel/system/debug/Watch.hx",45);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(47)
	if (((BGColor == null()))){
		HX_STACK_LINE(48)
		BGColor = (int)2139062143;
	}
	HX_STACK_LINE(55)
	if (((TopColor == null()))){
		HX_STACK_LINE(56)
		TopColor = (int)2130706432;
	}
	HX_STACK_LINE(65)
	super::__construct(Title,Width,Height,Resizable,Bounds,BGColor,TopColor);
	HX_STACK_LINE(67)
	this->_names = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(68)
	this->_names->set_x((int)2);
	HX_STACK_LINE(69)
	this->_names->set_y((int)15);
	HX_STACK_LINE(70)
	this->addChild(this->_names);
	HX_STACK_LINE(72)
	this->_values = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(73)
	this->_values->set_x((int)2);
	HX_STACK_LINE(74)
	this->_values->set_y((int)15);
	HX_STACK_LINE(75)
	this->addChild(this->_values);
	HX_STACK_LINE(77)
	this->_watching = Array_obj< ::org::flixel::system::debug::WatchEntry >::__new();
	HX_STACK_LINE(79)
	this->editing = false;
	HX_STACK_LINE(81)
	this->removeAll();
}
;
	return null();
}

Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds,BGColor,TopColor);
	return result;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Watch_obj::updateSize( ){
{
		HX_STACK_PUSH("Watch::updateSize","org/flixel/system/debug/Watch.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_LINE(232)
		if (((::Std_obj::_int(this->_height) < ((this->_watching->length * (int)15) + (int)17)))){
			HX_STACK_LINE(233)
			this->_height = ((this->_watching->length * (int)15) + (int)17);
		}
		HX_STACK_LINE(237)
		this->super::updateSize();
		HX_STACK_LINE(239)
		this->_values->set_x(((Float(this->_width) / Float((int)2)) + (int)2));
		HX_STACK_LINE(241)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(242)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(243)
		while(((i < l))){
			HX_STACK_LINE(244)
			this->_watching->__get((i)++)->updateWidth((Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10));
		}
	}
return null();
}


Void Watch_obj::submit( ){
{
		HX_STACK_PUSH("Watch::submit","org/flixel/system/debug/Watch.hx",211);
		HX_STACK_THIS(this);
		HX_STACK_LINE(212)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(213)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(214)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(215)
		while(((i < l))){
			HX_STACK_LINE(217)
			watchEntry = this->_watching->__get((i)++);
			HX_STACK_LINE(218)
			if ((watchEntry->editing)){
				HX_STACK_LINE(219)
				watchEntry->submit();
			}
		}
		HX_STACK_LINE(223)
		this->editing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,submit,(void))

Void Watch_obj::update( ){
{
		HX_STACK_PUSH("Watch::update","org/flixel/system/debug/Watch.hx",194);
		HX_STACK_THIS(this);
		HX_STACK_LINE(195)
		this->editing = false;
		HX_STACK_LINE(196)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(197)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(198)
		while(((i < l))){
			HX_STACK_LINE(199)
			if ((!(this->_watching->__get((i)++)->updateValue()))){
				HX_STACK_LINE(201)
				this->editing = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,update,(void))

Void Watch_obj::removeAll( ){
{
		HX_STACK_PUSH("Watch::removeAll","org/flixel/system/debug/Watch.hx",174);
		HX_STACK_THIS(this);
		HX_STACK_LINE(175)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(176)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(177)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(178)
		while(((i < l))){
			HX_STACK_LINE(180)
			watchEntry = this->_watching->pop();
			HX_STACK_LINE(181)
			this->_names->removeChild(watchEntry->nameDisplay);
			HX_STACK_LINE(182)
			this->_values->removeChild(watchEntry->valueDisplay);
			HX_STACK_LINE(183)
			watchEntry->destroy();
			HX_STACK_LINE(184)
			(i)++;
		}
		HX_STACK_LINE(187)
		this->_watching = Array_obj< ::org::flixel::system::debug::WatchEntry >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

Void Watch_obj::remove( Dynamic AnyObject,::String VariableName){
{
		HX_STACK_PUSH("Watch::remove","org/flixel/system/debug/Watch.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_LINE(141)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(142)
		int i = (this->_watching->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(143)
		while(((i >= (int)0))){
			HX_STACK_LINE(145)
			watchEntry = this->_watching->__get(i);
			HX_STACK_LINE(146)
			if (((bool((watchEntry->object == AnyObject)) && bool(((bool((VariableName == null())) || bool((watchEntry->field == VariableName)))))))){
				HX_STACK_LINE(149)
				this->_watching[i] = this->_watching->__get((this->_watching->length - (int)1));
				HX_STACK_LINE(150)
				this->_watching->pop();
				HX_STACK_LINE(152)
				this->_names->removeChild(watchEntry->nameDisplay);
				HX_STACK_LINE(153)
				this->_values->removeChild(watchEntry->valueDisplay);
				HX_STACK_LINE(154)
				watchEntry->destroy();
			}
			HX_STACK_LINE(156)
			(i)--;
		}
		HX_STACK_LINE(158)
		watchEntry = null();
		HX_STACK_LINE(161)
		i = (int)0;
		HX_STACK_LINE(162)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(163)
		while(((i < l))){
			HX_STACK_LINE(165)
			this->_watching->__get(i)->setY((i * (int)15));
			HX_STACK_LINE(166)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,remove,(void))

Void Watch_obj::add( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_PUSH("Watch::add","org/flixel/system/debug/Watch.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_ARG(DisplayName,"DisplayName");
		HX_STACK_LINE(114)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(115)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(116)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(117)
		while(((i < l))){
			HX_STACK_LINE(119)
			watchEntry = this->_watching->__get((i)++);
			HX_STACK_LINE(120)
			if (((bool((watchEntry->object == AnyObject)) && bool((watchEntry->field == VariableName))))){
				HX_STACK_LINE(121)
				return null();
			}
		}
		HX_STACK_LINE(127)
		watchEntry = ::org::flixel::system::debug::WatchEntry_obj::__new((this->_watching->length * (int)15),(Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10),AnyObject,VariableName,DisplayName);
		HX_STACK_LINE(128)
		this->_names->addChild(watchEntry->nameDisplay);
		HX_STACK_LINE(129)
		this->_values->addChild(watchEntry->valueDisplay);
		HX_STACK_LINE(130)
		this->_watching->push(watchEntry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,add,(void))

Void Watch_obj::destroy( ){
{
		HX_STACK_PUSH("Watch::destroy","org/flixel/system/debug/Watch.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_LINE(89)
		this->removeChild(this->_names);
		HX_STACK_LINE(90)
		this->_names = null();
		HX_STACK_LINE(91)
		this->removeChild(this->_values);
		HX_STACK_LINE(92)
		this->_values = null();
		HX_STACK_LINE(93)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(94)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(95)
		while(((i < l))){
			HX_STACK_LINE(96)
			this->_watching->__get((i)++)->destroy();
		}
		HX_STACK_LINE(99)
		this->_watching = null();
		HX_STACK_LINE(100)
		this->super::destroy();
	}
return null();
}


int Watch_obj::MAX_LOG_LINES;

int Watch_obj::LINE_HEIGHT;


Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(_watching,"_watching");
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_names,"_names");
	HX_MARK_MEMBER_NAME(editing,"editing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_watching,"_watching");
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_names,"_names");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Watch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_names") ) { return _names; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_watching") ) { return _watching; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LINE_HEIGHT") ) { return LINE_HEIGHT; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { return MAX_LOG_LINES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { _names=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_watching") ) { _watching=inValue.Cast< Array< ::org::flixel::system::debug::WatchEntry > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LINE_HEIGHT") ) { LINE_HEIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { MAX_LOG_LINES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_watching"));
	outFields->push(HX_CSTRING("_values"));
	outFields->push(HX_CSTRING("_names"));
	outFields->push(HX_CSTRING("editing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_LOG_LINES"),
	HX_CSTRING("LINE_HEIGHT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("submit"),
	HX_CSTRING("update"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_watching"),
	HX_CSTRING("_values"),
	HX_CSTRING("_names"),
	HX_CSTRING("editing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Watch_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Watch_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.Watch"), hx::TCanCast< Watch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Watch_obj::__boot()
{
	MAX_LOG_LINES= (int)1024;
	LINE_HEIGHT= (int)15;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
