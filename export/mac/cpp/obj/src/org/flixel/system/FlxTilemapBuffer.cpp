#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxTilemapBuffer
#include <org/flixel/system/FlxTilemapBuffer.h>
#endif
namespace org{
namespace flixel{
namespace system{

Void FlxTilemapBuffer_obj::__construct(Float TileWidth,Float TileHeight,int WidthInTiles,int HeightInTiles,::org::flixel::FlxCamera Camera)
{
HX_STACK_PUSH("FlxTilemapBuffer::new","org/flixel/system/FlxTilemapBuffer.hx",60);
{
	HX_STACK_LINE(61)
	if (((WidthInTiles < (int)0))){
		HX_STACK_LINE(61)
		WidthInTiles = (int)0;
	}
	HX_STACK_LINE(62)
	if (((HeightInTiles < (int)0))){
		HX_STACK_LINE(62)
		HeightInTiles = (int)0;
	}
	HX_STACK_LINE(64)
	if (((Camera == null()))){
		HX_STACK_LINE(65)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxCamera &Camera,Float &TileWidth){
			HX_STACK_PUSH("*::closure","org/flixel/system/FlxTilemapBuffer.hx",69);
			{
				HX_STACK_LINE(69)
				Float Value = (Float(Camera->width) / Float(TileWidth));		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(69)
				int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
				struct _Function_2_1{
					inline static int Block( int &number,Float &Value){
						HX_STACK_PUSH("*::closure","org/flixel/system/FlxTilemapBuffer.hx",69);
						{
							HX_STACK_LINE(69)
							return (  (((number != Value))) ? int((number + (int)1)) : int(number) );
						}
						return null();
					}
				};
				HX_STACK_LINE(69)
				return (  (((Value > (int)0))) ? int(_Function_2_1::Block(number,Value)) : int(number) );
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	this->columns = (_Function_1_1::Block(Camera,TileWidth) + (int)1);
	HX_STACK_LINE(70)
	if (((this->columns > WidthInTiles))){
		HX_STACK_LINE(71)
		this->columns = WidthInTiles;
	}
	struct _Function_1_2{
		inline static int Block( ::org::flixel::FlxCamera &Camera,Float &TileHeight){
			HX_STACK_PUSH("*::closure","org/flixel/system/FlxTilemapBuffer.hx",74);
			{
				HX_STACK_LINE(74)
				Float Value = (Float(Camera->height) / Float(TileHeight));		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(74)
				int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
				struct _Function_2_1{
					inline static int Block( int &number,Float &Value){
						HX_STACK_PUSH("*::closure","org/flixel/system/FlxTilemapBuffer.hx",74);
						{
							HX_STACK_LINE(74)
							return (  (((number != Value))) ? int((number + (int)1)) : int(number) );
						}
						return null();
					}
				};
				HX_STACK_LINE(74)
				return (  (((Value > (int)0))) ? int(_Function_2_1::Block(number,Value)) : int(number) );
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	this->rows = (_Function_1_2::Block(Camera,TileHeight) + (int)1);
	HX_STACK_LINE(75)
	if (((this->rows > HeightInTiles))){
		HX_STACK_LINE(76)
		this->rows = HeightInTiles;
	}
	HX_STACK_LINE(85)
	this->width = ::Std_obj::_int((this->columns * TileWidth));
	HX_STACK_LINE(86)
	this->height = ::Std_obj::_int((this->rows * TileHeight));
	HX_STACK_LINE(88)
	this->dirty = true;
}
;
	return null();
}

FlxTilemapBuffer_obj::~FlxTilemapBuffer_obj() { }

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return  new FlxTilemapBuffer_obj; }
hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(Float TileWidth,Float TileHeight,int WidthInTiles,int HeightInTiles,::org::flixel::FlxCamera Camera)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera);
	return result;}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxTilemapBuffer_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemapBuffer::destroy","org/flixel/system/FlxTilemapBuffer.hx",95);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxTilemapBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("dirty"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.FlxTilemapBuffer"), hx::TCanCast< FlxTilemapBuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemapBuffer_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
