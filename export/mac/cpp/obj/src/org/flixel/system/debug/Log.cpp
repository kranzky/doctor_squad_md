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
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_native_text_TextFormat
#include <native/text/TextFormat.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Log
#include <org/flixel/system/debug/Log.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void Log_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor)
{
HX_STACK_PUSH("Log::new","org/flixel/system/debug/Log.hx",35);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(37)
	if (((BGColor == null()))){
		HX_STACK_LINE(38)
		BGColor = (int)2139062143;
	}
	HX_STACK_LINE(45)
	if (((TopColor == null()))){
		HX_STACK_LINE(46)
		TopColor = (int)2130706432;
	}
	HX_STACK_LINE(55)
	super::__construct(Title,Width,Height,Resizable,Bounds,BGColor,TopColor);
	HX_STACK_LINE(57)
	this->_text = ::native::text::TextField_obj::__new();
	HX_STACK_LINE(58)
	this->_text->set_x((int)2);
	HX_STACK_LINE(59)
	this->_text->set_y((int)15);
	HX_STACK_LINE(60)
	this->_text->set_multiline(true);
	HX_STACK_LINE(61)
	this->_text->set_wordWrap(true);
	HX_STACK_LINE(62)
	this->_text->set_selectable(true);
	HX_STACK_LINE(63)
	this->_text->set_defaultTextFormat(::native::text::TextFormat_obj::__new(::org::flixel::FlxAssets_obj::courierFont,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(64)
	this->addChild(this->_text);
	HX_STACK_LINE(66)
	this->_lines = Array_obj< ::String >::__new();
}
;
	return null();
}

Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds,BGColor,TopColor);
	return result;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Log_obj::updateSize( ){
{
		HX_STACK_PUSH("Log::updateSize","org/flixel/system/debug/Log.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_LINE(128)
		this->super::updateSize();
		HX_STACK_LINE(130)
		this->_text->set_width((this->_width - (int)10));
		HX_STACK_LINE(131)
		this->_text->set_height((this->_height - (int)15));
	}
return null();
}


Void Log_obj::clear( ){
{
		HX_STACK_PUSH("Log::clear","org/flixel/system/debug/Log.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_LINE(116)
		this->_text->set_text(HX_CSTRING(""));
		HX_STACK_LINE(117)
		this->_lines->splice((int)0,this->_lines->length);
		HX_STACK_LINE(119)
		this->_text->set_scrollV((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))

Void Log_obj::add( ::String Text){
{
		HX_STACK_PUSH("Log::add","org/flixel/system/debug/Log.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Text,"Text");
		HX_STACK_LINE(86)
		if (((this->_lines->length <= (int)0))){
			HX_STACK_LINE(87)
			this->_text->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(90)
		this->_lines->push(Text);
		HX_STACK_LINE(91)
		if (((this->_lines->length > ::org::flixel::system::debug::Log_obj::MAX_LOG_LINES))){
			HX_STACK_LINE(93)
			this->_lines->shift();
			HX_STACK_LINE(94)
			::String newText = HX_CSTRING("");		HX_STACK_VAR(newText,"newText");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_lines->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(95)
				while(((_g1 < _g))){
					HX_STACK_LINE(95)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(97)
					hx::AddEq(newText,(this->_lines->__get(i) + HX_CSTRING("\n")));
				}
			}
			HX_STACK_LINE(99)
			this->_text->set_text(newText);
		}
		else{
			HX_STACK_LINE(102)
			this->_text->set_text(((this->_text->get_text() + Text) + HX_CSTRING("\n")));
		}
		HX_STACK_LINE(110)
		this->_text->set_scrollV(::Math_obj::floor(this->_text->get_height()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Log_obj,add,(void))

Void Log_obj::destroy( ){
{
		HX_STACK_PUSH("Log::destroy","org/flixel/system/debug/Log.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_LINE(74)
		this->removeChild(this->_text);
		HX_STACK_LINE(75)
		this->_text = null();
		HX_STACK_LINE(76)
		this->_lines = null();
		HX_STACK_LINE(77)
		this->super::destroy();
	}
return null();
}


int Log_obj::MAX_LOG_LINES;


Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	HX_MARK_MEMBER_NAME(_text,"_text");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Log_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { return MAX_LOG_LINES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::native::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { MAX_LOG_LINES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lines"));
	outFields->push(HX_CSTRING("_text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_LOG_LINES"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("clear"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_lines"),
	HX_CSTRING("_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
};

Class Log_obj::__mClass;

void Log_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.Log"), hx::TCanCast< Log_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Log_obj::__boot()
{
	MAX_LOG_LINES= (int)200;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
