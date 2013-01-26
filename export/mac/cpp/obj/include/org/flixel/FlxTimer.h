#ifndef INCLUDED_org_flixel_FlxTimer
#define INCLUDED_org_flixel_FlxTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxTimer)
HX_DECLARE_CLASS3(org,flixel,plugin,TimerManager)
namespace org{
namespace flixel{


class FlxTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTimer_obj OBJ_;
		FlxTimer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTimer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTimer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTimer"); }

		virtual Float getProgress( );
		Dynamic getProgress_dyn();

		Float progress; /* REM */ 
		virtual int getLoopsLeft( );
		Dynamic getLoopsLeft_dyn();

		int loopsLeft; /* REM */ 
		virtual Float getTimeLeft( );
		Dynamic getTimeLeft_dyn();

		Float timeLeft; /* REM */ 
		virtual Void stop( );
		Dynamic stop_dyn();

		virtual ::org::flixel::FlxTimer start( hx::Null< Float >  Time,hx::Null< int >  Loops,Dynamic Callback);
		Dynamic start_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _loopsCounter; /* REM */ 
		Float _timeCounter; /* REM */ 
		Dynamic _callback; /* REM */ 
		Dynamic &_callback_dyn() { return _callback;}
		bool finished; /* REM */ 
		bool paused; /* REM */ 
		int loops; /* REM */ 
		Float time; /* REM */ 
		static ::org::flixel::plugin::TimerManager manager; /* REM */ 
		static ::org::flixel::plugin::TimerManager getManager( );
		static Dynamic getManager_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxTimer */ 
