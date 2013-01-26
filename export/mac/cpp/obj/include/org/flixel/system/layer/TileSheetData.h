#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#define INCLUDED_org_flixel_system_layer_TileSheetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,Tilesheet)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS4(org,flixel,system,layer,FlxSpriteFrames)
HX_DECLARE_CLASS4(org,flixel,system,layer,RectanglePointPair)
HX_DECLARE_CLASS4(org,flixel,system,layer,TileSheetData)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class TileSheetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileSheetData_obj OBJ_;
		TileSheetData_obj();
		Void __construct(::native::display::Tilesheet tileSheet);

	public:
		static hx::ObjectPtr< TileSheetData_obj > __new(::native::display::Tilesheet tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileSheetData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileSheetData"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int getTileRectID( ::native::geom::Rectangle rect,::native::geom::Point point);
		Dynamic getTileRectID_dyn();

		virtual bool containsTileRect( ::native::geom::Rectangle rect,::native::geom::Point point);
		Dynamic containsTileRect_dyn();

		virtual int addTileRect( ::native::geom::Rectangle rect,::native::geom::Point point);
		Dynamic addTileRect_dyn();

		virtual int getIDforSpriteFrameData( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic getIDforSpriteFrameData_dyn();

		virtual bool containsSpriteFrameData( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic containsSpriteFrameData_dyn();

		virtual ::org::flixel::system::layer::FlxSpriteFrames addSpriteFramesData( int width,int height,::native::geom::Point origin,hx::Null< int >  startX,hx::Null< int >  startY,hx::Null< int >  endX,hx::Null< int >  endY,hx::Null< int >  xSpacing,hx::Null< int >  ySpacing);
		Dynamic addSpriteFramesData_dyn();

		Array< ::org::flixel::system::layer::FlxSpriteFrames > flxSpriteFrames; /* REM */ 
		Array< ::org::flixel::system::layer::RectanglePointPair > pairsData; /* REM */ 
		::native::display::Tilesheet tileSheet; /* REM */ 
		static Array< ::org::flixel::system::layer::TileSheetData > tileSheetData; /* REM */ 
		static int _DRAWCALLS; /* REM */ 
		static ::org::flixel::system::layer::TileSheetData addTileSheet( ::native::display::BitmapData bitmapData);
		static Dynamic addTileSheet_dyn();

		static bool containsTileSheet( ::native::display::BitmapData bitmapData);
		static Dynamic containsTileSheet_dyn();

		static ::org::flixel::system::layer::TileSheetData getTileSheet( ::native::display::BitmapData bitmapData);
		static Dynamic getTileSheet_dyn();

		static Void removeTileSheet( ::org::flixel::system::layer::TileSheetData tileSheetObj);
		static Dynamic removeTileSheet_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_TileSheetData */ 
