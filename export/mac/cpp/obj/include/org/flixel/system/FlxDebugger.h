#ifndef INCLUDED_org_flixel_system_FlxDebugger
#define INCLUDED_org_flixel_system_FlxDebugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
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
HX_DECLARE_CLASS3(org,flixel,system,FlxDebugger)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Log)
HX_DECLARE_CLASS4(org,flixel,system,debug,Perf)
HX_DECLARE_CLASS4(org,flixel,system,debug,VCR)
HX_DECLARE_CLASS4(org,flixel,system,debug,Vis)
HX_DECLARE_CLASS4(org,flixel,system,debug,Watch)
namespace org{
namespace flixel{
namespace system{


class FlxDebugger_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef FlxDebugger_obj OBJ_;
		FlxDebugger_obj();
		Void __construct(Float Width,Float Height);

	public:
		static hx::ObjectPtr< FlxDebugger_obj > __new(Float Width,Float Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxDebugger_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxDebugger"); }

		virtual Void resetLayout( );
		Dynamic resetLayout_dyn();

		virtual Void setLayout( int Layout);
		Dynamic setLayout_dyn();

		virtual Void onMouseOut( ::native::events::MouseEvent E);
		Dynamic onMouseOut_dyn();

		virtual Void onMouseOver( ::native::events::MouseEvent E);
		Dynamic onMouseOver_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _gutter; /* REM */ 
		::native::geom::Point _screen; /* REM */ 
		int _layout; /* REM */ 
		bool hasMouse; /* REM */ 
		::org::flixel::system::debug::Vis vis; /* REM */ 
		::org::flixel::system::debug::VCR vcr; /* REM */ 
		::org::flixel::system::debug::Watch watch; /* REM */ 
		::org::flixel::system::debug::Log log; /* REM */ 
		::org::flixel::system::debug::Perf perf; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxDebugger */ 
