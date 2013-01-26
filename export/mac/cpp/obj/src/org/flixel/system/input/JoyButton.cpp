#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_input_JoyButton
#include <org/flixel/system/input/JoyButton.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void JoyButton_obj::__construct(int id,hx::Null< int >  __o_current,hx::Null< int >  __o_last)
{
HX_STACK_PUSH("JoyButton::new","org/flixel/system/input/Joystick.hx",175);
int current = __o_current.Default(0);
int last = __o_last.Default(0);
{
	HX_STACK_LINE(176)
	this->id = id;
	HX_STACK_LINE(177)
	this->current = current;
	HX_STACK_LINE(178)
	this->last = last;
}
;
	return null();
}

JoyButton_obj::~JoyButton_obj() { }

Dynamic JoyButton_obj::__CreateEmpty() { return  new JoyButton_obj; }
hx::ObjectPtr< JoyButton_obj > JoyButton_obj::__new(int id,hx::Null< int >  __o_current,hx::Null< int >  __o_last)
{  hx::ObjectPtr< JoyButton_obj > result = new JoyButton_obj();
	result->__construct(id,__o_current,__o_last);
	return result;}

Dynamic JoyButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoyButton_obj > result = new JoyButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void JoyButton_obj::reset( ){
{
		HX_STACK_PUSH("JoyButton::reset","org/flixel/system/input/Joystick.hx",182);
		HX_STACK_THIS(this);
		HX_STACK_LINE(183)
		this->current = (int)0;
		HX_STACK_LINE(184)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JoyButton_obj,reset,(void))


JoyButton_obj::JoyButton_obj()
{
}

void JoyButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoyButton);
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void JoyButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic JoyButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JoyButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoyButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("last"),
	HX_CSTRING("current"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoyButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoyButton_obj::__mClass,"__mClass");
};

Class JoyButton_obj::__mClass;

void JoyButton_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.JoyButton"), hx::TCanCast< JoyButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JoyButton_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
