#ifndef INCLUDED_org_flixel_FlxState
#define INCLUDED_org_flixel_FlxState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGroup.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
namespace org{
namespace flixel{


class FlxState_obj : public ::org::flixel::FlxGroup_obj{
	public:
		typedef ::org::flixel::FlxGroup_obj super;
		typedef FlxState_obj OBJ_;
		FlxState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxState"); }

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void removeAtlas( ::org::flixel::system::layer::Atlas atlas,hx::Null< bool >  destroy);
		Dynamic removeAtlas_dyn();

		virtual ::org::flixel::system::layer::Atlas createAtlas( ::String atlasName,int atlasWidth,int atlasHeight);
		Dynamic createAtlas_dyn();

		virtual ::org::flixel::system::layer::Atlas getAtlasFor( ::String KeyInBitmapCache);
		Dynamic getAtlasFor_dyn();

		virtual Void create( );
		Dynamic create_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxState */ 
