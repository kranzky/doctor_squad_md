#ifndef INCLUDED_org_flixel_system_debug_VCR
#define INCLUDED_org_flixel_system_debug_VCR

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
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
HX_DECLARE_CLASS2(native,text,TextField)
HX_DECLARE_CLASS4(org,flixel,system,debug,VCR)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class VCR_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef VCR_obj OBJ_;
		VCR_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< VCR_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VCR_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VCR"); }

		virtual Void updateGUI( );
		Dynamic updateGUI_dyn();

		virtual Void unpress( );
		Dynamic unpress_dyn();

		virtual bool checkOver( );
		Dynamic checkOver_dyn();

		virtual Void onMouseUp( ::native::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::native::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( ::native::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void init( ::native::events::Event E);
		Dynamic init_dyn();

		virtual Void onStep( );
		Dynamic onStep_dyn();

		virtual Void onPlay( );
		Dynamic onPlay_dyn();

		virtual Void onPause( );
		Dynamic onPause_dyn();

		virtual Void onRestart( hx::Null< bool >  StandardMode);
		Dynamic onRestart_dyn();

		virtual Void onStop( );
		Dynamic onStop_dyn();

		virtual Void onSaveError( ::native::events::Event E);
		Dynamic onSaveError_dyn();

		virtual Void onSaveCancel( ::native::events::Event E);
		Dynamic onSaveCancel_dyn();

		virtual Void onSaveComplete( ::native::events::Event E);
		Dynamic onSaveComplete_dyn();

		virtual Void stopRecording( );
		Dynamic stopRecording_dyn();

		virtual Void onRecord( hx::Null< bool >  StandardMode);
		Dynamic onRecord_dyn();

		virtual Void onOpenError( ::native::events::Event E);
		Dynamic onOpenError_dyn();

		virtual Void onOpenCancel( ::native::events::Event E);
		Dynamic onOpenCancel_dyn();

		virtual Void onOpenComplete( ::native::events::Event E);
		Dynamic onOpenComplete_dyn();

		virtual Void onOpenSelect( ::native::events::Event E);
		Dynamic onOpenSelect_dyn();

		virtual Void onOpen( );
		Dynamic onOpen_dyn();

		virtual Void updateRuntime( int Time);
		Dynamic updateRuntime_dyn();

		virtual Void playing( );
		Dynamic playing_dyn();

		virtual Void stopped( );
		Dynamic stopped_dyn();

		virtual Void recording( );
		Dynamic recording_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _runtime; /* REM */ 
		::native::text::TextField _runtimeDisplay; /* REM */ 
		bool _pressingStep; /* REM */ 
		bool _pressingPause; /* REM */ 
		bool _pressingRestart; /* REM */ 
		bool _pressingRecord; /* REM */ 
		bool _pressingOpen; /* REM */ 
		bool _overStep; /* REM */ 
		bool _overPause; /* REM */ 
		bool _overRestart; /* REM */ 
		bool _overRecord; /* REM */ 
		bool _overOpen; /* REM */ 
		::native::display::Bitmap _step; /* REM */ 
		::native::display::Bitmap _play; /* REM */ 
		::native::display::Bitmap _pause; /* REM */ 
		::native::display::Bitmap _restart; /* REM */ 
		::native::display::Bitmap _flixel; /* REM */ 
		::native::display::Bitmap _stop; /* REM */ 
		::native::display::Bitmap _recordOn; /* REM */ 
		::native::display::Bitmap _recordOff; /* REM */ 
		::native::display::Bitmap _open; /* REM */ 
		bool stepRequested; /* REM */ 
		bool paused; /* REM */ 
		static ::String DEFAULT_FILE_NAME; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_VCR */ 
