#ifndef INCLUDED_org_flixel_plugin_TimerManager
#define INCLUDED_org_flixel_plugin_TimerManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxTimer)
HX_DECLARE_CLASS3(org,flixel,plugin,TimerManager)
namespace org{
namespace flixel{
namespace plugin{


class TimerManager_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef TimerManager_obj OBJ_;
		TimerManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TimerManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TimerManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TimerManager"); }

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void remove( ::org::flixel::FlxTimer Timer);
		Dynamic remove_dyn();

		virtual Void add( ::org::flixel::FlxTimer Timer);
		Dynamic add_dyn();

		virtual Void update( );

		virtual Void destroy( );

		Array< ::org::flixel::FlxTimer > _timers; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace plugin

#endif /* INCLUDED_org_flixel_plugin_TimerManager */ 
