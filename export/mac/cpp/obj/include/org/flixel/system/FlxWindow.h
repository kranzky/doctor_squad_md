#ifndef INCLUDED_org_flixel_system_FlxWindow
#define INCLUDED_org_flixel_system_FlxWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,MouseEvent)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(native,text,TextField)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
namespace org{
namespace flixel{
namespace system{


class FlxWindow_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef FlxWindow_obj OBJ_;
		FlxWindow_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);

	public:
		static hx::ObjectPtr< FlxWindow_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxWindow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxWindow"); }

		virtual Void updateGUI( );
		Dynamic updateGUI_dyn();

		virtual Void updateSize( );
		Dynamic updateSize_dyn();

		virtual Void bound( );
		Dynamic bound_dyn();

		virtual Void onMouseUp( ::native::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::native::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( ::native::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void init( ::native::events::Event E);
		Dynamic init_dyn();

		virtual Void reposition( Float X,Float Y);
		Dynamic reposition_dyn();

		virtual Void resize( Float Width,Float Height);
		Dynamic resize_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool _resizable; /* REM */ 
		bool _resizing; /* REM */ 
		bool _dragging; /* REM */ 
		::native::geom::Point _drag; /* REM */ 
		bool _overHandle; /* REM */ 
		bool _overHeader; /* REM */ 
		::native::display::Bitmap _handle; /* REM */ 
		::native::text::TextField _title; /* REM */ 
		::native::display::Bitmap _shadow; /* REM */ 
		::native::display::Bitmap _header; /* REM */ 
		::native::display::Bitmap _background; /* REM */ 
		::native::geom::Rectangle _bounds; /* REM */ 
		int _height; /* REM */ 
		int _width; /* REM */ 
		::native::geom::Point maxSize; /* REM */ 
		::native::geom::Point minSize; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxWindow */ 
