#ifndef INCLUDED_org_flixel_system_debug_Vis
#define INCLUDED_org_flixel_system_debug_Vis

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
HX_DECLARE_CLASS4(org,flixel,system,debug,Vis)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class Vis_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef Vis_obj OBJ_;
		Vis_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Vis_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vis_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vis"); }

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

		virtual Void onBounds( );
		Dynamic onBounds_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool _pressingBounds; /* REM */ 
		bool _overBounds; /* REM */ 
		::native::display::Bitmap _bounds; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Vis */ 
