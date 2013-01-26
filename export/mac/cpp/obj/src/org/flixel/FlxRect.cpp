#include <hxcpp.h>

#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
#endif
namespace org{
namespace flixel{

Void FlxRect_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_PUSH("FlxRect::new","org/flixel/FlxRect.hx",36);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(37)
	this->x = X;
	HX_STACK_LINE(38)
	this->y = Y;
	HX_STACK_LINE(39)
	this->width = Width;
	HX_STACK_LINE(40)
	this->height = Height;
}
;
	return null();
}

FlxRect_obj::~FlxRect_obj() { }

Dynamic FlxRect_obj::__CreateEmpty() { return  new FlxRect_obj; }
hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

bool FlxRect_obj::overlaps( ::org::flixel::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::overlaps","org/flixel/FlxRect.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(162)
	return (bool((bool((bool(((Rect->x + Rect->width) > this->x)) && bool((Rect->x < (this->x + this->width))))) && bool(((Rect->y + Rect->height) > this->y)))) && bool((Rect->y < (this->y + this->height))));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

::native::geom::Rectangle FlxRect_obj::copyToFlash( ::native::geom::Rectangle FlashRect){
	HX_STACK_PUSH("FlxRect::copyToFlash","org/flixel/FlxRect.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashRect,"FlashRect");
	HX_STACK_LINE(149)
	FlashRect->x = this->x;
	HX_STACK_LINE(150)
	FlashRect->y = this->y;
	HX_STACK_LINE(151)
	FlashRect->width = this->width;
	HX_STACK_LINE(152)
	FlashRect->height = this->height;
	HX_STACK_LINE(153)
	return FlashRect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

::org::flixel::FlxRect FlxRect_obj::copyFromFlash( ::native::geom::Rectangle FlashRect){
	HX_STACK_PUSH("FlxRect::copyFromFlash","org/flixel/FlxRect.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashRect,"FlashRect");
	HX_STACK_LINE(135)
	this->x = FlashRect->x;
	HX_STACK_LINE(136)
	this->y = FlashRect->y;
	HX_STACK_LINE(137)
	this->width = FlashRect->width;
	HX_STACK_LINE(138)
	this->height = FlashRect->height;
	HX_STACK_LINE(139)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

::org::flixel::FlxRect FlxRect_obj::copyTo( ::org::flixel::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::copyTo","org/flixel/FlxRect.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(121)
	Rect->x = this->x;
	HX_STACK_LINE(122)
	Rect->y = this->y;
	HX_STACK_LINE(123)
	Rect->width = this->width;
	HX_STACK_LINE(124)
	Rect->height = this->height;
	HX_STACK_LINE(125)
	return Rect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

::org::flixel::FlxRect FlxRect_obj::copyFrom( ::org::flixel::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::copyFrom","org/flixel/FlxRect.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(107)
	this->x = Rect->x;
	HX_STACK_LINE(108)
	this->y = Rect->y;
	HX_STACK_LINE(109)
	this->width = Rect->width;
	HX_STACK_LINE(110)
	this->height = Rect->height;
	HX_STACK_LINE(111)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

::org::flixel::FlxRect FlxRect_obj::make( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_PUSH("FlxRect::make","org/flixel/FlxRect.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
{
		HX_STACK_LINE(93)
		this->x = X;
		HX_STACK_LINE(94)
		this->y = Y;
		HX_STACK_LINE(95)
		this->width = Width;
		HX_STACK_LINE(96)
		this->height = Height;
		HX_STACK_LINE(97)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,make,return )

Float FlxRect_obj::getBottom( ){
	HX_STACK_PUSH("FlxRect::getBottom","org/flixel/FlxRect.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,getBottom,return )

Float FlxRect_obj::getTop( ){
	HX_STACK_PUSH("FlxRect::getTop","org/flixel/FlxRect.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,getTop,return )

Float FlxRect_obj::getRight( ){
	HX_STACK_PUSH("FlxRect::getRight","org/flixel/FlxRect.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_LINE(59)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,getRight,return )

Float FlxRect_obj::getLeft( ){
	HX_STACK_PUSH("FlxRect::getLeft","org/flixel/FlxRect.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,getLeft,return )


FlxRect_obj::FlxRect_obj()
{
}

void FlxRect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRect);
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxRect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxRect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return inCallProp ? getTop() : top; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return inCallProp ? getLeft() : left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return inCallProp ? getRight() : right; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return inCallProp ? getBottom() : bottom; }
		if (HX_FIELD_EQ(inName,"getTop") ) { return getTop_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getLeft") ) { return getLeft_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"getRight") ) { return getRight_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBottom") ) { return getBottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("overlaps"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("make"),
	HX_CSTRING("getBottom"),
	HX_CSTRING("bottom"),
	HX_CSTRING("getTop"),
	HX_CSTRING("top"),
	HX_CSTRING("getRight"),
	HX_CSTRING("right"),
	HX_CSTRING("getLeft"),
	HX_CSTRING("left"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
};

Class FlxRect_obj::__mClass;

void FlxRect_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxRect"), hx::TCanCast< FlxRect_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxRect_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
