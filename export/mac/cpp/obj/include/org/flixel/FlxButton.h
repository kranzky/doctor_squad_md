#ifndef INCLUDED_org_flixel_FlxButton
#define INCLUDED_org_flixel_FlxButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,media,Sound)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxButton)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxSound)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxText)
namespace org{
namespace flixel{


class FlxButton_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef FlxButton_obj OBJ_;
		FlxButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);

	public:
		static hx::ObjectPtr< FlxButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxButton"); }

		virtual Void onMouseUp( ::native::events::Event event);
		Dynamic onMouseUp_dyn();

		virtual Void setSounds( ::native::media::Sound SoundOver,hx::Null< Float >  SoundOverVolume,::native::media::Sound SoundOut,hx::Null< Float >  SoundOutVolume,::native::media::Sound SoundDown,hx::Null< Float >  SoundDownVolume,::native::media::Sound SoundUp,hx::Null< Float >  SoundUpVolume);
		Dynamic setSounds_dyn();

		virtual Void resetHelpers( );

		virtual Void draw( );

		virtual bool updateButtonStatus( ::org::flixel::FlxPoint Point,::org::flixel::FlxCamera Camera,bool JustPressed);
		Dynamic updateButtonStatus_dyn();

		virtual Void updateButton( );
		Dynamic updateButton_dyn();

		virtual Void update( );

		virtual Void preUpdate( );

		virtual Void destroy( );

		bool _initialized; /* REM */ 
		bool _pressed; /* REM */ 
		::org::flixel::FlxSound soundUp; /* REM */ 
		::org::flixel::FlxSound soundDown; /* REM */ 
		::org::flixel::FlxSound soundOut; /* REM */ 
		::org::flixel::FlxSound soundOver; /* REM */ 
		int status; /* REM */ 
		Dynamic onOut; /* REM */ 
		Dynamic &onOut_dyn() { return onOut;}
		Dynamic onOver; /* REM */ 
		Dynamic &onOver_dyn() { return onOver;}
		Dynamic onDown; /* REM */ 
		Dynamic &onDown_dyn() { return onDown;}
		Dynamic onUp; /* REM */ 
		Dynamic &onUp_dyn() { return onUp;}
		::org::flixel::FlxPoint labelOffset; /* REM */ 
		::org::flixel::FlxText label; /* REM */ 
		bool on; /* REM */ 
		static int NORMAL; /* REM */ 
		static int HIGHLIGHT; /* REM */ 
		static int PRESSED; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxButton */ 
