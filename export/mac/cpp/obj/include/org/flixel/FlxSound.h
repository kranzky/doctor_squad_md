#ifndef INCLUDED_org_flixel_FlxSound
#define INCLUDED_org_flixel_FlxSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,media,Sound)
HX_DECLARE_CLASS2(native,media,SoundChannel)
HX_DECLARE_CLASS2(native,media,SoundTransform)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSound)
namespace org{
namespace flixel{


class FlxSound_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxSound_obj OBJ_;
		FlxSound_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxSound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSound"); }

		virtual Void gotID3( ::native::events::Event event);
		Dynamic gotID3_dyn();

		virtual Void cleanup( bool destroySound,hx::Null< bool >  resetPosition);
		Dynamic cleanup_dyn();

		virtual Void stopped( ::native::events::Event event);
		Dynamic stopped_dyn();

		virtual Void startSound( Float Position);
		Dynamic startSound_dyn();

		virtual Void updateTransform( );
		Dynamic updateTransform_dyn();

		virtual Float getActualVolume( );
		Dynamic getActualVolume_dyn();

		virtual Float setVolume( Float Volume);
		Dynamic setVolume_dyn();

		Float volume; /* REM */ 
		virtual Void fadeIn( Float Seconds);
		Dynamic fadeIn_dyn();

		virtual Void fadeOut( Float Seconds,hx::Null< bool >  PauseInstead);
		Dynamic fadeOut_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void play( hx::Null< bool >  ForceRestart);
		Dynamic play_dyn();

		virtual ::org::flixel::FlxSound proximity( Float X,Float Y,::org::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  Pan);
		Dynamic proximity_dyn();

		virtual ::org::flixel::FlxSound loadStream( ::String SoundURL,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy);
		Dynamic loadStream_dyn();

		virtual ::org::flixel::FlxSound loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy);
		Dynamic loadEmbedded_dyn();

		virtual Void kill( );

		virtual Void update( );

		virtual Void destroy( );

		virtual Void createSound( );
		Dynamic createSound_dyn();

		Float _fadeInTotal; /* REM */ 
		Float _fadeInTimer; /* REM */ 
		bool _pauseOnFadeOut; /* REM */ 
		Float _fadeOutTotal; /* REM */ 
		Float _fadeOutTimer; /* REM */ 
		bool _pan; /* REM */ 
		Float _radius; /* REM */ 
		::org::flixel::FlxObject _target; /* REM */ 
		bool _looped; /* REM */ 
		Float _volumeAdjust; /* REM */ 
		Float _position; /* REM */ 
		bool _paused; /* REM */ 
		::native::media::SoundTransform _transform; /* REM */ 
		::native::media::SoundChannel _channel; /* REM */ 
		::native::media::Sound _sound; /* REM */ 
		bool autoDestroy; /* REM */ 
		Float amplitudeRight; /* REM */ 
		Float amplitudeLeft; /* REM */ 
		Float amplitude; /* REM */ 
		::String artist; /* REM */ 
		::String name; /* REM */ 
		bool survive; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxSound */ 
