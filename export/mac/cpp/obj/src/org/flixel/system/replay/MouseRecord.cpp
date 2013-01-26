#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_replay_MouseRecord
#include <org/flixel/system/replay/MouseRecord.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace replay{

Void MouseRecord_obj::__construct(int X,int Y,int Button,int Wheel)
{
HX_STACK_PUSH("MouseRecord::new","org/flixel/system/replay/MouseRecord.hx",33);
{
	HX_STACK_LINE(34)
	this->x = X;
	HX_STACK_LINE(35)
	this->y = Y;
	HX_STACK_LINE(36)
	this->button = Button;
	HX_STACK_LINE(37)
	this->wheel = Wheel;
}
;
	return null();
}

MouseRecord_obj::~MouseRecord_obj() { }

Dynamic MouseRecord_obj::__CreateEmpty() { return  new MouseRecord_obj; }
hx::ObjectPtr< MouseRecord_obj > MouseRecord_obj::__new(int X,int Y,int Button,int Wheel)
{  hx::ObjectPtr< MouseRecord_obj > result = new MouseRecord_obj();
	result->__construct(X,Y,Button,Wheel);
	return result;}

Dynamic MouseRecord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseRecord_obj > result = new MouseRecord_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


MouseRecord_obj::MouseRecord_obj()
{
}

void MouseRecord_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseRecord);
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void MouseRecord_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic MouseRecord_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseRecord_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wheel"));
	outFields->push(HX_CSTRING("button"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("wheel"),
	HX_CSTRING("button"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

Class MouseRecord_obj::__mClass;

void MouseRecord_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.replay.MouseRecord"), hx::TCanCast< MouseRecord_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MouseRecord_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace replay
