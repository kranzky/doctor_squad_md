#include <hxcpp.h>

#ifndef INCLUDED_com_squad_dr_widgets_Button
#include <com/squad/dr/widgets/Button.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxButton
#include <org/flixel/FlxButton.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
namespace com{
namespace squad{
namespace dr{
namespace widgets{

Void Button_obj::__construct(Float x,Float y,Dynamic callbackFunction,bool usable_)
{
HX_STACK_PUSH("Button::new","com/squad/dr/widgets/Button.hx",6);
{
	HX_STACK_LINE(9)
	this->usable = false;
	HX_STACK_LINE(13)
	::haxe::Log_obj::trace(HX_CSTRING("button instantiated"),hx::SourceInfo(HX_CSTRING("Button.hx"),13,HX_CSTRING("com.squad.dr.widgets.Button"),HX_CSTRING("new")));
	HX_STACK_LINE(14)
	super::__construct(x,y,HX_CSTRING("Hello"),this->_pushed_dyn());
	HX_STACK_LINE(15)
	::haxe::Log_obj::trace(HX_CSTRING("new button"),hx::SourceInfo(HX_CSTRING("Button.hx"),15,HX_CSTRING("com.squad.dr.widgets.Button"),HX_CSTRING("new")));
	HX_STACK_LINE(17)
	this->usable = usable_;
	HX_STACK_LINE(18)
	this->_buttoncallback = callbackFunction;
}
;
	return null();
}

Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new(Float x,Float y,Dynamic callbackFunction,bool usable_)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct(x,y,callbackFunction,usable_);
	return result;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Button_obj::updateState( ){
{
		HX_STACK_PUSH("Button::updateState","com/squad/dr/widgets/Button.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		::haxe::Log_obj::trace(HX_CSTRING("Button was pushed!"),hx::SourceInfo(HX_CSTRING("Button.hx"),38,HX_CSTRING("com.squad.dr.widgets.Button"),HX_CSTRING("updateState")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,updateState,(void))

Void Button_obj::_pushed( ){
{
		HX_STACK_PUSH("Button::_pushed","com/squad/dr/widgets/Button.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		::haxe::Log_obj::trace(HX_CSTRING("button callback fired"),hx::SourceInfo(HX_CSTRING("Button.hx"),30,HX_CSTRING("com.squad.dr.widgets.Button"),HX_CSTRING("_pushed")));
		HX_STACK_LINE(31)
		this->updateState();
		HX_STACK_LINE(32)
		if (((this->_buttoncallback_dyn() != null()))){
			HX_STACK_LINE(33)
			this->_buttoncallback();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,_pushed,(void))


Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(usable,"usable");
	HX_MARK_MEMBER_NAME(_buttoncallback,"_buttoncallback");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usable,"usable");
	HX_VISIT_MEMBER_NAME(_buttoncallback,"_buttoncallback");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"usable") ) { return usable; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pushed") ) { return _pushed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateState") ) { return updateState_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_buttoncallback") ) { return _buttoncallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"usable") ) { usable=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_buttoncallback") ) { _buttoncallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("usable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateState"),
	HX_CSTRING("_pushed"),
	HX_CSTRING("usable"),
	HX_CSTRING("_buttoncallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

Class Button_obj::__mClass;

void Button_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.squad.dr.widgets.Button"), hx::TCanCast< Button_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Button_obj::__boot()
{
}

} // end namespace com
} // end namespace squad
} // end namespace dr
} // end namespace widgets
