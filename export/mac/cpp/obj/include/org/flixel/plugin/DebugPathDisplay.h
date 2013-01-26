#ifndef INCLUDED_org_flixel_plugin_DebugPathDisplay
#define INCLUDED_org_flixel_plugin_DebugPathDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxPath)
HX_DECLARE_CLASS3(org,flixel,plugin,DebugPathDisplay)
namespace org{
namespace flixel{
namespace plugin{


class DebugPathDisplay_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef DebugPathDisplay_obj OBJ_;
		DebugPathDisplay_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DebugPathDisplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DebugPathDisplay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DebugPathDisplay"); }

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void remove( ::org::flixel::FlxPath Path);
		Dynamic remove_dyn();

		virtual Void add( ::org::flixel::FlxPath Path);
		Dynamic add_dyn();

		virtual Void drawDebug( ::org::flixel::FlxCamera Camera);

		virtual Void draw( );

		virtual Void destroy( );

		Array< ::org::flixel::FlxPath > _paths; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace plugin

#endif /* INCLUDED_org_flixel_plugin_DebugPathDisplay */ 
