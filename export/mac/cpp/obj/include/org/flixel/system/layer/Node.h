#ifndef INCLUDED_org_flixel_system_layer_Node
#define INCLUDED_org_flixel_system_layer_Node

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,FlxSpriteFrames)
HX_DECLARE_CLASS4(org,flixel,system,layer,Node)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class Node_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Node_obj OBJ_;
		Node_obj();
		Void __construct(::org::flixel::system::layer::Atlas atlas,::native::geom::Rectangle rect,::native::display::BitmapData item,::String __o_key);

	public:
		static hx::ObjectPtr< Node_obj > __new(::org::flixel::system::layer::Atlas atlas,::native::geom::Rectangle rect,::native::display::BitmapData item,::String __o_key);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Node_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Node"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int addTileRect( ::native::geom::Rectangle tileRect,::native::geom::Point point);
		Dynamic addTileRect_dyn();

		virtual ::org::flixel::system::layer::FlxSpriteFrames addSpriteFramesData( int frameWidth,int frameHeight,::native::geom::Point origin,hx::Null< int >  startX,hx::Null< int >  startY,hx::Null< int >  endX,hx::Null< int >  endY,hx::Null< int >  xSpacing,hx::Null< int >  ySpacing);
		Dynamic addSpriteFramesData_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_y( );
		Dynamic get_y_dyn();

		virtual int get_x( );
		Dynamic get_x_dyn();

		int height; /* REM */ 
		int width; /* REM */ 
		int y; /* REM */ 
		int x; /* REM */ 
		virtual bool canPlace( int width,int height);
		Dynamic canPlace_dyn();

		virtual bool get_isEmpty( );
		Dynamic get_isEmpty_dyn();

		bool isEmpty; /* REM */ 
		::String key; /* REM */ 
		::native::geom::Point point; /* REM */ 
		::native::geom::Rectangle rect; /* REM */ 
		::org::flixel::system::layer::Node right; /* REM */ 
		::org::flixel::system::layer::Node left; /* REM */ 
		::native::display::BitmapData item; /* REM */ 
		::org::flixel::system::layer::Atlas atlas; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_Node */ 
