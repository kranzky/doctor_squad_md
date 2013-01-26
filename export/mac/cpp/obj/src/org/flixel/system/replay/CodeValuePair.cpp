#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_replay_CodeValuePair
#include <org/flixel/system/replay/CodeValuePair.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace replay{

Void CodeValuePair_obj::__construct(hx::Null< int >  __o_code,hx::Null< int >  __o_value)
{
HX_STACK_PUSH("CodeValuePair::new","org/flixel/system/replay/CodeValuePair.hx",14);
int code = __o_code.Default(0);
int value = __o_value.Default(0);
{
	HX_STACK_LINE(15)
	this->code = code;
	HX_STACK_LINE(16)
	this->value = value;
}
;
	return null();
}

CodeValuePair_obj::~CodeValuePair_obj() { }

Dynamic CodeValuePair_obj::__CreateEmpty() { return  new CodeValuePair_obj; }
hx::ObjectPtr< CodeValuePair_obj > CodeValuePair_obj::__new(hx::Null< int >  __o_code,hx::Null< int >  __o_value)
{  hx::ObjectPtr< CodeValuePair_obj > result = new CodeValuePair_obj();
	result->__construct(__o_code,__o_value);
	return result;}

Dynamic CodeValuePair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodeValuePair_obj > result = new CodeValuePair_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::flixel::system::replay::CodeValuePair CodeValuePair_obj::convertFromFlashToCpp( ::org::flixel::system::replay::CodeValuePair pair){
	HX_STACK_PUSH("CodeValuePair::convertFromFlashToCpp","org/flixel/system/replay/CodeValuePair.hx",20);
	HX_STACK_ARG(pair,"pair");
	HX_STACK_LINE(21)
	int convertedCode = pair->code;		HX_STACK_VAR(convertedCode,"convertedCode");
	HX_STACK_LINE(22)
	if (((bool((pair->code >= (int)65)) && bool((pair->code <= (int)90))))){
		HX_STACK_LINE(23)
		convertedCode = (pair->code + (int)32);
	}
	HX_STACK_LINE(26)
	pair->code = convertedCode;
	HX_STACK_LINE(27)
	return pair;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodeValuePair_obj,convertFromFlashToCpp,return )


CodeValuePair_obj::CodeValuePair_obj()
{
}

void CodeValuePair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodeValuePair);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_END_CLASS();
}

void CodeValuePair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(code,"code");
}

Dynamic CodeValuePair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return code; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"convertFromFlashToCpp") ) { return convertFromFlashToCpp_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodeValuePair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CodeValuePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("code"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("convertFromFlashToCpp"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("value"),
	HX_CSTRING("code"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

Class CodeValuePair_obj::__mClass;

void CodeValuePair_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.replay.CodeValuePair"), hx::TCanCast< CodeValuePair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CodeValuePair_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace replay
