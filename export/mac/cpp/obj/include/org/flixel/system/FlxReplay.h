#ifndef INCLUDED_org_flixel_system_FlxReplay
#define INCLUDED_org_flixel_system_FlxReplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,flixel,system,FlxReplay)
HX_DECLARE_CLASS4(org,flixel,system,replay,FrameRecord)
namespace org{
namespace flixel{
namespace system{


class FlxReplay_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxReplay_obj OBJ_;
		FlxReplay_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxReplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxReplay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxReplay"); }

		virtual Void rewind( );
		Dynamic rewind_dyn();

		virtual Void playNextFrame( );
		Dynamic playNextFrame_dyn();

		virtual Void recordFrame( );
		Dynamic recordFrame_dyn();

		virtual ::String save( );
		Dynamic save_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void load( ::String FileContents);
		Dynamic load_dyn();

		virtual Void create( Float Seed);
		Dynamic create_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _marker; /* REM */ 
		int _capacity; /* REM */ 
		Array< ::org::flixel::system::replay::FrameRecord > _frames; /* REM */ 
		bool finished; /* REM */ 
		int frameCount; /* REM */ 
		int frame; /* REM */ 
		Float seed; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxReplay */ 
