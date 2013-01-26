#ifndef INCLUDED_org_flixel_system_debug_Perf
#define INCLUDED_org_flixel_system_debug_Perf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/system/FlxWindow.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(native,text,TextField)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Perf)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class Perf_obj : public ::org::flixel::system::FlxWindow_obj{
	public:
		typedef ::org::flixel::system::FlxWindow_obj super;
		typedef Perf_obj OBJ_;
		Perf_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);

	public:
		static hx::ObjectPtr< Perf_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Perf_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Perf"); }

		virtual Void drawCalls( int Drawcalls);
		Dynamic drawCalls_dyn();

		virtual Void visibleObjects( int Count);
		Dynamic visibleObjects_dyn();

		virtual Void activeObjects( int Count);
		Dynamic activeObjects_dyn();

		virtual Void flash( int Time);
		Dynamic flash_dyn();

		virtual Void flixelDraw( int Time);
		Dynamic flixelDraw_dyn();

		virtual Void flixelUpdate( int Time);
		Dynamic flixelUpdate_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );

		int _drawCallsMarker; /* REM */ 
		Array< int > _drawCalls; /* REM */ 
		Array< int > _visibleObject; /* REM */ 
		Array< Float > _flash; /* REM */ 
		Array< int > _activeObject; /* REM */ 
		int _flashMarker; /* REM */ 
		int _objectMarker; /* REM */ 
		int _visibleObjectMarker; /* REM */ 
		int _flixelDrawMarker; /* REM */ 
		Array< int > _flixelDraw; /* REM */ 
		int _flixelUpdateMarker; /* REM */ 
		Array< int > _flixelUpdate; /* REM */ 
		int _updateTimer; /* REM */ 
		int _lastTime; /* REM */ 
		::native::text::TextField _text; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Perf */ 
