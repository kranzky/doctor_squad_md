#ifndef INCLUDED_org_flixel_system_debug_Log
#define INCLUDED_org_flixel_system_debug_Log

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
HX_DECLARE_CLASS4(org,flixel,system,debug,Log)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class Log_obj : public ::org::flixel::system::FlxWindow_obj{
	public:
		typedef ::org::flixel::system::FlxWindow_obj super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);

	public:
		static hx::ObjectPtr< Log_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Log_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Log"); }

		virtual Void updateSize( );

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void add( ::String Text);
		Dynamic add_dyn();

		virtual Void destroy( );

		Array< ::String > _lines; /* REM */ 
		::native::text::TextField _text; /* REM */ 
		static int MAX_LOG_LINES; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Log */ 
