#ifndef INCLUDED_org_flixel_system_FlxList
#define INCLUDED_org_flixel_system_FlxList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS3(org,flixel,system,FlxList)
namespace org{
namespace flixel{
namespace system{


class FlxList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxList_obj OBJ_;
		FlxList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxList"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool exists; /* REM */ 
		::org::flixel::system::FlxList next; /* REM */ 
		::org::flixel::FlxObject object; /* REM */ 
		static int _NUM_CACHED_FLX_LIST; /* REM */ 
		static ::org::flixel::system::FlxList _cachedListsHead; /* REM */ 
		static ::org::flixel::system::FlxList recycle( );
		static Dynamic recycle_dyn();

		static Void clearCache( );
		static Dynamic clearCache_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxList */ 
