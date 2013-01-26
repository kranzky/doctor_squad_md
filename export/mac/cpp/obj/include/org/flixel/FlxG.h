#ifndef INCLUDED_org_flixel_FlxG
#define INCLUDED_org_flixel_FlxG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,Graphics)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,display,Stage)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxG)
HX_DECLARE_CLASS2(org,flixel,FlxGame)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxRect)
HX_DECLARE_CLASS2(org,flixel,FlxSound)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS4(org,flixel,system,input,Input)
HX_DECLARE_CLASS4(org,flixel,system,input,JoystickManager)
HX_DECLARE_CLASS4(org,flixel,system,input,Keyboard)
HX_DECLARE_CLASS4(org,flixel,system,input,Mouse)
HX_DECLARE_CLASS4(org,flixel,system,input,TouchManager)
HX_DECLARE_CLASS3(org,flixel,tweens,FlxTween)
HX_DECLARE_CLASS4(org,flixel,tweens,misc,MultiVarTween)
namespace org{
namespace flixel{


class FlxG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxG_obj OBJ_;
		FlxG_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxG_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxG"); }

		static int maxTouchPoints; /* REM */ 
		static bool supportsTouchEvents; /* REM */ 
		static ::org::flixel::system::input::TouchManager touchManager; /* REM */ 
		static ::org::flixel::system::input::JoystickManager joystickManager; /* REM */ 
		static ::org::flixel::FlxBasic tweener; /* REM */ 
		static int bgColor; /* REM */ 
		static int flashFramerate; /* REM */ 
		static ::String LIBRARY_NAME; /* REM */ 
		static ::String LIBRARY_MAJOR_VERSION; /* REM */ 
		static ::String LIBRARY_MINOR_VERSION; /* REM */ 
		static int DEBUGGER_STANDARD; /* REM */ 
		static int DEBUGGER_MICRO; /* REM */ 
		static int DEBUGGER_BIG; /* REM */ 
		static int DEBUGGER_TOP; /* REM */ 
		static int DEBUGGER_LEFT; /* REM */ 
		static int DEBUGGER_RIGHT; /* REM */ 
		static int RED; /* REM */ 
		static int GREEN; /* REM */ 
		static int BLUE; /* REM */ 
		static int PINK; /* REM */ 
		static int WHITE; /* REM */ 
		static int BLACK; /* REM */ 
		static ::org::flixel::FlxGame _game; /* REM */ 
		static bool paused; /* REM */ 
		static bool debug; /* REM */ 
		static Float elapsed; /* REM */ 
		static Float timeScale; /* REM */ 
		static int width; /* REM */ 
		static int height; /* REM */ 
		static ::org::flixel::FlxRect worldBounds; /* REM */ 
		static int worldDivisions; /* REM */ 
		static bool visualDebug; /* REM */ 
		static bool mobile; /* REM */ 
		static Float globalSeed; /* REM */ 
		static Dynamic levels; /* REM */ 
		static int level; /* REM */ 
		static Dynamic scores; /* REM */ 
		static int score; /* REM */ 
		static Dynamic saves; /* REM */ 
		static int save; /* REM */ 
		static ::org::flixel::system::input::Mouse mouse; /* REM */ 
		static ::org::flixel::system::input::Keyboard keys; /* REM */ 
		static ::org::flixel::FlxSound music; /* REM */ 
		static ::org::flixel::FlxGroup sounds; /* REM */ 
		static bool mute; /* REM */ 
		static Array< ::org::flixel::FlxCamera > cameras; /* REM */ 
		static ::org::flixel::FlxCamera camera; /* REM */ 
		static bool useBufferLocking; /* REM */ 
		static ::native::geom::Rectangle _cameraRect; /* REM */ 
		static Array< ::org::flixel::FlxBasic > plugins; /* REM */ 
		static Dynamic volumeHandler; /* REM */ 
		static Dynamic &volumeHandler_dyn() { return volumeHandler;}
		static ::native::display::Sprite flashGfxSprite; /* REM */ 
		static ::native::display::Graphics flashGfx; /* REM */ 
		static ::Hash _cache; /* REM */ 
		static ::String _lastBitmapDataKey; /* REM */ 
		static ::String getLibraryName( );
		static Dynamic getLibraryName_dyn();

		static Void log( Dynamic Data);
		static Dynamic log_dyn();

		static Void clearLog( );
		static Dynamic clearLog_dyn();

		static Void watch( Dynamic AnyObject,::String VariableName,::String DisplayName);
		static Dynamic watch_dyn();

		static Void unwatch( Dynamic AnyObject,::String VariableName);
		static Dynamic unwatch_dyn();

		static int framerate; /* REM */ 
		static int getFramerate( );
		static Dynamic getFramerate_dyn();

		static int setFramerate( int Framerate);
		static Dynamic setFramerate_dyn();

		static int getFlashFramerate( );
		static Dynamic getFlashFramerate_dyn();

		static int setFlashFramerate( int Framerate);
		static Dynamic setFlashFramerate_dyn();

		static Float random( );
		static Dynamic random_dyn();

		static Dynamic shuffle( Dynamic Objects,int HowManyTimes);
		static Dynamic shuffle_dyn();

		static Dynamic getRandom( Dynamic Objects,hx::Null< int >  StartIndex,hx::Null< int >  Length);
		static Dynamic getRandom_dyn();

		static Void loadReplay( ::String Data,::org::flixel::FlxState State,Array< ::String > CancelKeys,hx::Null< Float >  Timeout,Dynamic Callback);
		static Dynamic loadReplay_dyn();

		static Void reloadReplay( hx::Null< bool >  StandardMode);
		static Dynamic reloadReplay_dyn();

		static Void stopReplay( );
		static Dynamic stopReplay_dyn();

		static Void recordReplay( hx::Null< bool >  StandardMode);
		static Dynamic recordReplay_dyn();

		static ::String stopRecording( );
		static Dynamic stopRecording_dyn();

		static Void resetState( );
		static Dynamic resetState_dyn();

		static Void resetGame( );
		static Dynamic resetGame_dyn();

		static Void resetInput( );
		static Dynamic resetInput_dyn();

		static Void playMusic( Dynamic Music,hx::Null< Float >  Volume);
		static Dynamic playMusic_dyn();

		static ::org::flixel::FlxSound loadSound( Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,hx::Null< bool >  AutoPlay,::String URL);
		static Dynamic loadSound_dyn();

		static ::org::flixel::FlxSound play( Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy);
		static Dynamic play_dyn();

		static ::org::flixel::FlxSound stream( ::String URL,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy);
		static Dynamic stream_dyn();

		static Float volume; /* REM */ 
		static Float setVolume( Float Volume);
		static Dynamic setVolume_dyn();

		static Void destroySounds( hx::Null< bool >  ForceDestroy);
		static Dynamic destroySounds_dyn();

		static Void updateSounds( );
		static Dynamic updateSounds_dyn();

		static Void pauseSounds( );
		static Dynamic pauseSounds_dyn();

		static Void resumeSounds( );
		static Dynamic resumeSounds_dyn();

		static bool checkBitmapCache( ::String Key);
		static Dynamic checkBitmapCache_dyn();

		static ::native::display::BitmapData createBitmap( int Width,int Height,int Color,hx::Null< bool >  Unique,::String Key);
		static Dynamic createBitmap_dyn();

		static ::native::display::BitmapData addBitmap( Dynamic Graphic,hx::Null< bool >  Reverse,hx::Null< bool >  Unique,::String Key,hx::Null< int >  FrameWidth,hx::Null< int >  FrameHeight);
		static Dynamic addBitmap_dyn();

		static ::String getCacheKeyFor( ::native::display::BitmapData bmd);
		static Dynamic getCacheKeyFor_dyn();

		static ::String getUniqueBitmapKey( ::String baseKey);
		static Dynamic getUniqueBitmapKey_dyn();

		static bool fromAssetsCache( ::native::display::BitmapData bmd);
		static Dynamic fromAssetsCache_dyn();

		static Void removeBitmap( ::String Graphic);
		static Dynamic removeBitmap_dyn();

		static Void clearBitmapCache( );
		static Dynamic clearBitmapCache_dyn();

		static Void clearAssetsCache( );
		static Dynamic clearAssetsCache_dyn();

		static ::native::display::Stage stage; /* REM */ 
		static ::native::display::Stage getStage( );
		static Dynamic getStage_dyn();

		static ::org::flixel::FlxState state; /* REM */ 
		static ::org::flixel::FlxState getState( );
		static Dynamic getState_dyn();

		static Void switchState( ::org::flixel::FlxState State);
		static Dynamic switchState_dyn();

		static Void setDebuggerLayout( int Layout);
		static Dynamic setDebuggerLayout_dyn();

		static Void resetDebuggerLayout( );
		static Dynamic resetDebuggerLayout_dyn();

		static ::org::flixel::FlxCamera addCamera( ::org::flixel::FlxCamera NewCamera);
		static Dynamic addCamera_dyn();

		static Void removeCamera( ::org::flixel::FlxCamera Camera,hx::Null< bool >  Destroy);
		static Dynamic removeCamera_dyn();

		static Void resetCameras( ::org::flixel::FlxCamera NewCamera);
		static Dynamic resetCameras_dyn();

		static Void flash( Dynamic Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		static Dynamic flash_dyn();

		static Void fade( Dynamic Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		static Dynamic fade_dyn();

		static Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,hx::Null< int >  Direction);
		static Dynamic shake_dyn();

		static int getBgColor( );
		static Dynamic getBgColor_dyn();

		static int setBgColor( int Color);
		static Dynamic setBgColor_dyn();

		static bool overlap( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback);
		static Dynamic overlap_dyn();

		static bool collide( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback);
		static Dynamic collide_dyn();

		static ::org::flixel::FlxBasic addPlugin( ::org::flixel::FlxBasic Plugin);
		static Dynamic addPlugin_dyn();

		static ::org::flixel::FlxBasic getPlugin( ::Class ClassType);
		static Dynamic getPlugin_dyn();

		static ::org::flixel::FlxBasic removePlugin( ::org::flixel::FlxBasic Plugin);
		static Dynamic removePlugin_dyn();

		static bool removePluginType( ::Class ClassType);
		static Dynamic removePluginType_dyn();

		static Void init( ::org::flixel::FlxGame Game,int Width,int Height,Float Zoom);
		static Dynamic init_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static Void updateInput( );
		static Dynamic updateInput_dyn();

		static Void lockCameras( );
		static Dynamic lockCameras_dyn();

		static Void renderCameras( );
		static Dynamic renderCameras_dyn();

		static Void unlockCameras( );
		static Dynamic unlockCameras_dyn();

		static Void updateCameras( );
		static Dynamic updateCameras_dyn();

		static Void updatePlugins( );
		static Dynamic updatePlugins_dyn();

		static Void drawPlugins( );
		static Dynamic drawPlugins_dyn();

		static ::org::flixel::tweens::misc::MultiVarTween tween( Dynamic object,Dynamic values,Float duration,Dynamic options);
		static Dynamic tween_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxG */ 
