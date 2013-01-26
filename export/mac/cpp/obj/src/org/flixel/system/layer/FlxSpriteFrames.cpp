#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void FlxSpriteFrames_obj::__construct(int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY)
{
HX_STACK_PUSH("FlxSpriteFrames::new","org/flixel/system/layer/TileSheetData.hx",309);
{
	HX_STACK_LINE(310)
	this->width = width;
	HX_STACK_LINE(311)
	this->height = height;
	HX_STACK_LINE(313)
	this->startX = startX;
	HX_STACK_LINE(314)
	this->startY = startY;
	HX_STACK_LINE(315)
	this->endX = endX;
	HX_STACK_LINE(316)
	this->endY = endY;
	HX_STACK_LINE(317)
	this->xSpacing = xSpacing;
	HX_STACK_LINE(318)
	this->ySpacing = ySpacing;
	HX_STACK_LINE(320)
	this->pointX = pointX;
	HX_STACK_LINE(321)
	this->pointY = pointY;
	HX_STACK_LINE(323)
	this->frameIDs = Array_obj< int >::__new();
	HX_STACK_LINE(324)
	this->halfFrameNumber = (int)0;
}
;
	return null();
}

FlxSpriteFrames_obj::~FlxSpriteFrames_obj() { }

Dynamic FlxSpriteFrames_obj::__CreateEmpty() { return  new FlxSpriteFrames_obj; }
hx::ObjectPtr< FlxSpriteFrames_obj > FlxSpriteFrames_obj::__new(int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY)
{  hx::ObjectPtr< FlxSpriteFrames_obj > result = new FlxSpriteFrames_obj();
	result->__construct(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY);
	return result;}

Dynamic FlxSpriteFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteFrames_obj > result = new FlxSpriteFrames_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

Void FlxSpriteFrames_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSpriteFrames::destroy","org/flixel/system/layer/TileSheetData.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_LINE(328)
		this->frameIDs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSpriteFrames_obj,destroy,(void))


FlxSpriteFrames_obj::FlxSpriteFrames_obj()
{
}

void FlxSpriteFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSpriteFrames);
	HX_MARK_MEMBER_NAME(pointY,"pointY");
	HX_MARK_MEMBER_NAME(pointX,"pointX");
	HX_MARK_MEMBER_NAME(ySpacing,"ySpacing");
	HX_MARK_MEMBER_NAME(xSpacing,"xSpacing");
	HX_MARK_MEMBER_NAME(endY,"endY");
	HX_MARK_MEMBER_NAME(endX,"endX");
	HX_MARK_MEMBER_NAME(startY,"startY");
	HX_MARK_MEMBER_NAME(startX,"startX");
	HX_MARK_MEMBER_NAME(halfFrameNumber,"halfFrameNumber");
	HX_MARK_MEMBER_NAME(frameIDs,"frameIDs");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void FlxSpriteFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pointY,"pointY");
	HX_VISIT_MEMBER_NAME(pointX,"pointX");
	HX_VISIT_MEMBER_NAME(ySpacing,"ySpacing");
	HX_VISIT_MEMBER_NAME(xSpacing,"xSpacing");
	HX_VISIT_MEMBER_NAME(endY,"endY");
	HX_VISIT_MEMBER_NAME(endX,"endX");
	HX_VISIT_MEMBER_NAME(startY,"startY");
	HX_VISIT_MEMBER_NAME(startX,"startX");
	HX_VISIT_MEMBER_NAME(halfFrameNumber,"halfFrameNumber");
	HX_VISIT_MEMBER_NAME(frameIDs,"frameIDs");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic FlxSpriteFrames_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"endY") ) { return endY; }
		if (HX_FIELD_EQ(inName,"endX") ) { return endX; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pointY") ) { return pointY; }
		if (HX_FIELD_EQ(inName,"pointX") ) { return pointX; }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY; }
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ySpacing") ) { return ySpacing; }
		if (HX_FIELD_EQ(inName,"xSpacing") ) { return xSpacing; }
		if (HX_FIELD_EQ(inName,"frameIDs") ) { return frameIDs; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"halfFrameNumber") ) { return halfFrameNumber; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"endY") ) { endY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endX") ) { endX=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pointY") ) { pointY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointX") ) { pointX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startY") ) { startY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ySpacing") ) { ySpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xSpacing") ) { xSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameIDs") ) { frameIDs=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"halfFrameNumber") ) { halfFrameNumber=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pointY"));
	outFields->push(HX_CSTRING("pointX"));
	outFields->push(HX_CSTRING("ySpacing"));
	outFields->push(HX_CSTRING("xSpacing"));
	outFields->push(HX_CSTRING("endY"));
	outFields->push(HX_CSTRING("endX"));
	outFields->push(HX_CSTRING("startY"));
	outFields->push(HX_CSTRING("startX"));
	outFields->push(HX_CSTRING("halfFrameNumber"));
	outFields->push(HX_CSTRING("frameIDs"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("pointY"),
	HX_CSTRING("pointX"),
	HX_CSTRING("ySpacing"),
	HX_CSTRING("xSpacing"),
	HX_CSTRING("endY"),
	HX_CSTRING("endX"),
	HX_CSTRING("startY"),
	HX_CSTRING("startX"),
	HX_CSTRING("halfFrameNumber"),
	HX_CSTRING("frameIDs"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteFrames_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteFrames_obj::__mClass,"__mClass");
};

Class FlxSpriteFrames_obj::__mClass;

void FlxSpriteFrames_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.FlxSpriteFrames"), hx::TCanCast< FlxSpriteFrames_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSpriteFrames_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
