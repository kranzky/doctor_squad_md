#include <hxcpp.h>

#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_RectanglePointPair
#include <org/flixel/system/layer/RectanglePointPair.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void RectanglePointPair_obj::__construct(::native::geom::Rectangle rect,::native::geom::Point point)
{
HX_STACK_PUSH("RectanglePointPair::new","org/flixel/system/layer/TileSheetData.hx",343);
{
	HX_STACK_LINE(344)
	this->rect = rect;
	HX_STACK_LINE(345)
	this->point = point;
}
;
	return null();
}

RectanglePointPair_obj::~RectanglePointPair_obj() { }

Dynamic RectanglePointPair_obj::__CreateEmpty() { return  new RectanglePointPair_obj; }
hx::ObjectPtr< RectanglePointPair_obj > RectanglePointPair_obj::__new(::native::geom::Rectangle rect,::native::geom::Point point)
{  hx::ObjectPtr< RectanglePointPair_obj > result = new RectanglePointPair_obj();
	result->__construct(rect,point);
	return result;}

Dynamic RectanglePointPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectanglePointPair_obj > result = new RectanglePointPair_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RectanglePointPair_obj::destroy( ){
{
		HX_STACK_PUSH("RectanglePointPair::destroy","org/flixel/system/layer/TileSheetData.hx",349);
		HX_STACK_THIS(this);
		HX_STACK_LINE(350)
		this->rect = null();
		HX_STACK_LINE(351)
		this->point = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RectanglePointPair_obj,destroy,(void))


RectanglePointPair_obj::RectanglePointPair_obj()
{
}

void RectanglePointPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RectanglePointPair);
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_END_CLASS();
}

void RectanglePointPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(rect,"rect");
}

Dynamic RectanglePointPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectanglePointPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::native::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectanglePointPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("point"));
	outFields->push(HX_CSTRING("rect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("point"),
	HX_CSTRING("rect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectanglePointPair_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectanglePointPair_obj::__mClass,"__mClass");
};

Class RectanglePointPair_obj::__mClass;

void RectanglePointPair_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.RectanglePointPair"), hx::TCanCast< RectanglePointPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RectanglePointPair_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
