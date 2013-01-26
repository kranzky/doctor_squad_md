#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_input_MapObject
#include <org/flixel/system/input/MapObject.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void MapObject_obj::__construct(::String name,int current,int last)
{
HX_STACK_PUSH("MapObject::new","org/flixel/system/input/MapObject.hx",15);
{
	HX_STACK_LINE(16)
	this->name = name;
	HX_STACK_LINE(17)
	this->current = current;
	HX_STACK_LINE(18)
	this->last = last;
}
;
	return null();
}

MapObject_obj::~MapObject_obj() { }

Dynamic MapObject_obj::__CreateEmpty() { return  new MapObject_obj; }
hx::ObjectPtr< MapObject_obj > MapObject_obj::__new(::String name,int current,int last)
{  hx::ObjectPtr< MapObject_obj > result = new MapObject_obj();
	result->__construct(name,current,last);
	return result;}

Dynamic MapObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapObject_obj > result = new MapObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


MapObject_obj::MapObject_obj()
{
}

void MapObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapObject);
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void MapObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic MapObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("last"),
	HX_CSTRING("current"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapObject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapObject_obj::__mClass,"__mClass");
};

Class MapObject_obj::__mClass;

void MapObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.MapObject"), hx::TCanCast< MapObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MapObject_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
