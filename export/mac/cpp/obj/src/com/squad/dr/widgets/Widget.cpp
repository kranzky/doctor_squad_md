#include <hxcpp.h>

#ifndef INCLUDED_com_squad_dr_PubNub
#include <com/squad/dr/PubNub.h>
#endif
#ifndef INCLUDED_com_squad_dr_widgets_Widget
#include <com/squad/dr/widgets/Widget.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
namespace com{
namespace squad{
namespace dr{
namespace widgets{

Void Widget_obj::__construct(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract)
{
HX_STACK_PUSH("Widget::new","com/squad/dr/widgets/Widget.hx",15);
{
	HX_STACK_LINE(21)
	this->_owned = false;
	HX_STACK_LINE(25)
	super::__construct(null());
	HX_STACK_LINE(26)
	this->_widgetId = widgetId;
	HX_STACK_LINE(27)
	this->_canInteract = canInteract;
	HX_STACK_LINE(28)
	this->_pubnub = pubnub;
	HX_STACK_LINE(29)
	this->_owned = owned;
	HX_STACK_LINE(30)
	this->initialise();
}
;
	return null();
}

Widget_obj::~Widget_obj() { }

Dynamic Widget_obj::__CreateEmpty() { return  new Widget_obj; }
hx::ObjectPtr< Widget_obj > Widget_obj::__new(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract)
{  hx::ObjectPtr< Widget_obj > result = new Widget_obj();
	result->__construct(widgetId,pubnub,owned,canInteract);
	return result;}

Dynamic Widget_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Widget_obj > result = new Widget_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Widget_obj::message( ::String action,::String data){
{
		HX_STACK_PUSH("Widget::message","com/squad/dr/widgets/Widget.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(action,"action");
		HX_STACK_ARG(data,"data");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,message,(void))

Void Widget_obj::received( Dynamic object){
{
		HX_STACK_PUSH("Widget::received","com/squad/dr/widgets/Widget.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_LINE(51)
		if (((object->__Field(HX_CSTRING("widgetId"),true) == this->_widgetId))){
			HX_STACK_LINE(53)
			this->message(object->__Field(HX_CSTRING("action"),true),object->__Field(HX_CSTRING("data"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,received,(void))

Void Widget_obj::initialise( ){
{
		HX_STACK_PUSH("Widget::initialise","com/squad/dr/widgets/Widget.hx",46);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,initialise,(void))

Void Widget_obj::send( ::String action,::String data){
{
		HX_STACK_PUSH("Widget::send","com/squad/dr/widgets/Widget.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(action,"action");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(35)
		return null();
		struct _Function_1_1{
			inline static Dynamic Block( ::String &action,::String &data,::com::squad::dr::widgets::Widget_obj *__this){
				HX_STACK_PUSH("*::closure","com/squad/dr/widgets/Widget.hx",36);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , HX_CSTRING("widget"),false);
					__result->Add(HX_CSTRING("action") , action,false);
					__result->Add(HX_CSTRING("data") , data,false);
					__result->Add(HX_CSTRING("widgetId") , __this->_widgetId,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		Dynamic message = _Function_1_1::Block(action,data,this);		HX_STACK_VAR(message,"message");
		HX_STACK_LINE(42)
		this->_pubnub->send(message);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,send,(void))


Widget_obj::Widget_obj()
{
}

void Widget_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Widget);
	HX_MARK_MEMBER_NAME(_owned,"_owned");
	HX_MARK_MEMBER_NAME(_widgetId,"_widgetId");
	HX_MARK_MEMBER_NAME(_pubnub,"_pubnub");
	HX_MARK_MEMBER_NAME(_canInteract,"_canInteract");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Widget_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_owned,"_owned");
	HX_VISIT_MEMBER_NAME(_widgetId,"_widgetId");
	HX_VISIT_MEMBER_NAME(_pubnub,"_pubnub");
	HX_VISIT_MEMBER_NAME(_canInteract,"_canInteract");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Widget_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"send") ) { return send_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_owned") ) { return _owned; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message_dyn(); }
		if (HX_FIELD_EQ(inName,"_pubnub") ) { return _pubnub; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"received") ) { return received_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_widgetId") ) { return _widgetId; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_canInteract") ) { return _canInteract; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Widget_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_owned") ) { _owned=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pubnub") ) { _pubnub=inValue.Cast< ::com::squad::dr::PubNub >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_widgetId") ) { _widgetId=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_canInteract") ) { _canInteract=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Widget_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_owned"));
	outFields->push(HX_CSTRING("_widgetId"));
	outFields->push(HX_CSTRING("_pubnub"));
	outFields->push(HX_CSTRING("_canInteract"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("message"),
	HX_CSTRING("received"),
	HX_CSTRING("initialise"),
	HX_CSTRING("send"),
	HX_CSTRING("_owned"),
	HX_CSTRING("_widgetId"),
	HX_CSTRING("_pubnub"),
	HX_CSTRING("_canInteract"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Widget_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Widget_obj::__mClass,"__mClass");
};

Class Widget_obj::__mClass;

void Widget_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.squad.dr.widgets.Widget"), hx::TCanCast< Widget_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Widget_obj::__boot()
{
}

} // end namespace com
} // end namespace squad
} // end namespace dr
} // end namespace widgets
