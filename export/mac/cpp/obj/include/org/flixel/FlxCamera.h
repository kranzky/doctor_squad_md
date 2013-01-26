#ifndef INCLUDED_org_flixel_FlxCamera
#define INCLUDED_org_flixel_FlxCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,Graphics)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxRect)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,DrawStackItem)
namespace org{
namespace flixel{


class FlxCamera_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxCamera_obj OBJ_;
		FlxCamera_obj();
		Void __construct(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom);

	public:
		static hx::ObjectPtr< FlxCamera_obj > __new(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxCamera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxCamera"); }

		virtual int setHeight( int val);
		Dynamic setHeight_dyn();

		virtual int setWidth( int val);
		Dynamic setWidth_dyn();

		virtual bool isColored( );
		Dynamic isColored_dyn();

		Float fog; /* REM */ 
		virtual Void drawFX( );
		Dynamic drawFX_dyn();

		virtual Void fill( int Color,hx::Null< bool >  BlendAlpha,hx::Null< Float >  FxAlpha,::native::display::Graphics graphics);
		Dynamic fill_dyn();

		virtual ::native::display::Sprite getContainerSprite( );
		Dynamic getContainerSprite_dyn();

		virtual Void setScale( Float X,Float Y);
		Dynamic setScale_dyn();

		virtual ::org::flixel::FlxPoint getScale( );
		Dynamic getScale_dyn();

		virtual bool setAntialiasing( bool Antialiasing);
		Dynamic setAntialiasing_dyn();

		bool antialiasing; /* REM */ 
		virtual int setColor( int Color);
		Dynamic setColor_dyn();

		int color; /* REM */ 
		virtual Float setAngle( Float Angle);
		Dynamic setAngle_dyn();

		Float angle; /* REM */ 
		virtual Float setAlpha( Float Alpha);
		Dynamic setAlpha_dyn();

		Float alpha; /* REM */ 
		virtual Float setZoom( Float Zoom);
		Dynamic setZoom_dyn();

		Float zoom; /* REM */ 
		virtual ::org::flixel::FlxCamera copyFrom( ::org::flixel::FlxCamera Camera);
		Dynamic copyFrom_dyn();

		virtual Void stopFX( );
		Dynamic stopFX_dyn();

		virtual Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,hx::Null< int >  Direction);
		Dynamic shake_dyn();

		virtual Void fade( Dynamic Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic fade_dyn();

		virtual Void flash( Dynamic Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic flash_dyn();

		virtual Void setBounds( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height,hx::Null< bool >  UpdateWorld);
		Dynamic setBounds_dyn();

		virtual Void focusOn( ::org::flixel::FlxPoint point);
		Dynamic focusOn_dyn();

		virtual Void follow( ::org::flixel::FlxObject Target,hx::Null< int >  Style,::org::flixel::FlxPoint Offset);
		Dynamic follow_dyn();

		virtual Void update( );

		virtual Void destroy( );

		bool _fxFadeIn; /* REM */ 
		virtual Void render( );
		Dynamic render_dyn();

		virtual Void clearDrawStack( );
		Dynamic clearDrawStack_dyn();

		virtual ::org::flixel::system::layer::DrawStackItem getDrawStackItem( ::org::flixel::system::layer::Atlas ObjAtlas,bool ObjColored,int ObjBlending);
		Dynamic getDrawStackItem_dyn();

		::org::flixel::system::layer::DrawStackItem _headOfDrawStack; /* REM */ 
		::org::flixel::system::layer::DrawStackItem _currentStackItem; /* REM */ 
		Float blue; /* REM */ 
		Float green; /* REM */ 
		Float red; /* REM */ 
		::native::display::Sprite _debugLayer; /* REM */ 
		::native::display::Sprite _canvas; /* REM */ 
		::native::display::BitmapData _fill; /* REM */ 
		int _fxShakeDirection; /* REM */ 
		::org::flixel::FlxPoint _fxShakeOffset; /* REM */ 
		Dynamic _fxShakeComplete; /* REM */ 
		Dynamic &_fxShakeComplete_dyn() { return _fxShakeComplete;}
		Float _fxShakeDuration; /* REM */ 
		Float _fxShakeIntensity; /* REM */ 
		Float _fxFadeAlpha; /* REM */ 
		Dynamic _fxFadeComplete; /* REM */ 
		Dynamic &_fxFadeComplete_dyn() { return _fxFadeComplete;}
		Float _fxFadeDuration; /* REM */ 
		int _fxFadeColor; /* REM */ 
		Float _fxFlashAlpha; /* REM */ 
		Dynamic _fxFlashComplete; /* REM */ 
		Dynamic &_fxFlashComplete_dyn() { return _fxFlashComplete;}
		Float _fxFlashDuration; /* REM */ 
		int _fxFlashColor; /* REM */ 
		::native::geom::Point _flashPoint; /* REM */ 
		::native::geom::Rectangle _flashRect; /* REM */ 
		Float _flashOffsetY; /* REM */ 
		Float _flashOffsetX; /* REM */ 
		::native::display::Sprite _flashSprite; /* REM */ 
		::org::flixel::FlxPoint _point; /* REM */ 
		int bgColor; /* REM */ 
		::org::flixel::FlxPoint scroll; /* REM */ 
		::org::flixel::FlxRect bounds; /* REM */ 
		::org::flixel::FlxRect deadzone; /* REM */ 
		::org::flixel::FlxObject target; /* REM */ 
		int style; /* REM */ 
		int height; /* REM */ 
		int width; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
		static int STYLE_LOCKON; /* REM */ 
		static int STYLE_PLATFORMER; /* REM */ 
		static int STYLE_TOPDOWN; /* REM */ 
		static int STYLE_TOPDOWN_TIGHT; /* REM */ 
		static int STYLE_SCREEN_BY_SCREEN; /* REM */ 
		static int STYLE_NO_DEAD_ZONE; /* REM */ 
		static int SHAKE_BOTH_AXES; /* REM */ 
		static int SHAKE_HORIZONTAL_ONLY; /* REM */ 
		static int SHAKE_VERTICAL_ONLY; /* REM */ 
		static Float defaultZoom; /* REM */ 
		static ::org::flixel::system::layer::DrawStackItem _storageHead; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxCamera */ 
