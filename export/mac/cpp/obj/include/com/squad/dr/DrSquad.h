#ifndef INCLUDED_com_squad_dr_DrSquad
#define INCLUDED_com_squad_dr_DrSquad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGame.h>
HX_DECLARE_CLASS3(com,squad,dr,DrSquad)
HX_DECLARE_CLASS3(com,squad,dr,PubNub)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(org,flixel,FlxGame)
namespace com{
namespace squad{
namespace dr{


class DrSquad_obj : public ::org::flixel::FlxGame_obj{
	public:
		typedef ::org::flixel::FlxGame_obj super;
		typedef DrSquad_obj OBJ_;
		DrSquad_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DrSquad_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DrSquad_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DrSquad"); }

		::com::squad::dr::PubNub _pubnub; /* REM */ 
};

} // end namespace com
} // end namespace squad
} // end namespace dr

#endif /* INCLUDED_com_squad_dr_DrSquad */ 
