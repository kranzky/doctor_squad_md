#ifndef INCLUDED_org_flixel_system_debug_Watch
#define INCLUDED_org_flixel_system_debug_Watch

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
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Watch)
HX_DECLARE_CLASS4(org,flixel,system,debug,WatchEntry)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class Watch_obj : public ::org::flixel::system::FlxWindow_obj{
	public:
		typedef ::org::flixel::system::FlxWindow_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);

	public:
		static hx::ObjectPtr< Watch_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Watch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Watch"); }

		virtual Void updateSize( );

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void remove( Dynamic AnyObject,::String VariableName);
		Dynamic remove_dyn();

		virtual Void add( Dynamic AnyObject,::String VariableName,::String DisplayName);
		Dynamic add_dyn();

		virtual Void destroy( );

		Array< ::org::flixel::system::debug::WatchEntry > _watching; /* REM */ 
		::native::display::Sprite _values; /* REM */ 
		::native::display::Sprite _names; /* REM */ 
		bool editing; /* REM */ 
		static int MAX_LOG_LINES; /* REM */ 
		static int LINE_HEIGHT; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Watch */ 
