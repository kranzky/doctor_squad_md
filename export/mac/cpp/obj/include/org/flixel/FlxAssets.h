#ifndef INCLUDED_org_flixel_FlxAssets
#define INCLUDED_org_flixel_FlxAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,Graphics)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(org,flixel,FlxAssets)
namespace org{
namespace flixel{


class FlxAssets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAssets_obj OBJ_;
		FlxAssets_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxAssets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxAssets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAssets"); }

		static ::String imgDefaultButton; /* REM */ 
		static ::String imgLogo; /* REM */ 
		static ::String imgDefault; /* REM */ 
		static ::String imgAuto; /* REM */ 
		static ::String imgAutoAlt; /* REM */ 
		static ::String imgLogoCorners; /* REM */ 
		static ::String imgLogoLight; /* REM */ 
		static ::String imgHandle; /* REM */ 
		static ::String imgDefaultCursor; /* REM */ 
		static ::String imgBounds; /* REM */ 
		static ::String imgOpen; /* REM */ 
		static ::String imgRecordOff; /* REM */ 
		static ::String imgRecordOn; /* REM */ 
		static ::String imgStop; /* REM */ 
		static ::String imgFlixel; /* REM */ 
		static ::String imgRestart; /* REM */ 
		static ::String imgPause; /* REM */ 
		static ::String imgPlay; /* REM */ 
		static ::String imgStep; /* REM */ 
		static ::String imgBase; /* REM */ 
		static ::String imgStick; /* REM */ 
		static ::String imgButtonA; /* REM */ 
		static ::String imgButtonB; /* REM */ 
		static ::String imgButtonC; /* REM */ 
		static ::String imgButtonX; /* REM */ 
		static ::String imgButtonY; /* REM */ 
		static ::String imgButtonUp; /* REM */ 
		static ::String imgButtonDown; /* REM */ 
		static ::String imgButtonLeft; /* REM */ 
		static ::String imgButtonRight; /* REM */ 
		static ::String courierFont; /* REM */ 
		static ::String nokiaFont; /* REM */ 
		static ::String sndBeep; /* REM */ 
		static Void drawLogo( ::native::display::Graphics graph);
		static Dynamic drawLogo_dyn();

		static ::native::display::BitmapData getBitmapData( ::String id);
		static Dynamic getBitmapData_dyn();

		static Void cacheSounds( );
		static Dynamic cacheSounds_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxAssets */ 
