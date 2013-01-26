#ifndef INCLUDED_org_flixel_system_input_Mouse
#define INCLUDED_org_flixel_system_input_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxPoint.h>
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,MouseEvent)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS4(org,flixel,system,input,Mouse)
HX_DECLARE_CLASS4(org,flixel,system,replay,MouseRecord)
namespace org{
namespace flixel{
namespace system{
namespace input{


class Mouse_obj : public ::org::flixel::FlxPoint_obj{
	public:
		typedef ::org::flixel::FlxPoint_obj super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct(::native::display::Sprite CursorContainer);

	public:
		static hx::ObjectPtr< Mouse_obj > __new(::native::display::Sprite CursorContainer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mouse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mouse"); }

		virtual Void playback( ::org::flixel::system::replay::MouseRecord Record);
		Dynamic playback_dyn();

		virtual ::org::flixel::system::replay::MouseRecord record( );
		Dynamic record_dyn();

		virtual Void handleMouseWheel( ::native::events::MouseEvent FlashEvent);
		Dynamic handleMouseWheel_dyn();

		virtual Void handleMouseUp( ::native::events::MouseEvent FlashEvent);
		Dynamic handleMouseUp_dyn();

		virtual Void handleMouseDown( ::native::events::MouseEvent FlashEvent);
		Dynamic handleMouseDown_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::org::flixel::FlxPoint getScreenPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual ::org::flixel::FlxPoint getWorldPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual Void updateCursor( );
		Dynamic updateCursor_dyn();

		virtual Void update( int X,int Y);
		Dynamic update_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void load( Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< int >  XOffset,hx::Null< int >  YOffset);
		Dynamic load_dyn();

		virtual bool getVisible( );
		Dynamic getVisible_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void show( Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< int >  XOffset,hx::Null< int >  YOffset);
		Dynamic show_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::org::flixel::FlxPoint _globalScreenPosition; /* REM */ 
		::org::flixel::FlxPoint _point; /* REM */ 
		int _lastWheel; /* REM */ 
		int _lastY; /* REM */ 
		int _lastX; /* REM */ 
		::native::display::Bitmap _cursor; /* REM */ 
		bool _updateCursorContainer; /* REM */ 
		::native::display::Sprite _cursorContainer; /* REM */ 
		int _last; /* REM */ 
		int _current; /* REM */ 
		bool visible; /* REM */ 
		int screenY; /* REM */ 
		int screenX; /* REM */ 
		int wheel; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_Mouse */ 
