#ifndef INCLUDED_org_flixel_system_FlxTilemapBuffer
#define INCLUDED_org_flixel_system_FlxTilemapBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS3(org,flixel,system,FlxTilemapBuffer)
namespace org{
namespace flixel{
namespace system{


class FlxTilemapBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTilemapBuffer_obj OBJ_;
		FlxTilemapBuffer_obj();
		Void __construct(Float TileWidth,Float TileHeight,int WidthInTiles,int HeightInTiles,::org::flixel::FlxCamera Camera);

	public:
		static hx::ObjectPtr< FlxTilemapBuffer_obj > __new(Float TileWidth,Float TileHeight,int WidthInTiles,int HeightInTiles,::org::flixel::FlxCamera Camera);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTilemapBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTilemapBuffer"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int columns; /* REM */ 
		int rows; /* REM */ 
		bool dirty; /* REM */ 
		Float height; /* REM */ 
		Float width; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxTilemapBuffer */ 
