#ifndef INCLUDED_org_flixel_system_input_TouchManager
#define INCLUDED_org_flixel_system_input_TouchManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,MouseEvent)
HX_DECLARE_CLASS2(native,events,TouchEvent)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS4(org,flixel,system,input,Touch)
HX_DECLARE_CLASS4(org,flixel,system,input,TouchManager)
namespace org{
namespace flixel{
namespace system{
namespace input{


class TouchManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchManager_obj OBJ_;
		TouchManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TouchManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TouchManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TouchManager"); }

		virtual ::org::flixel::system::input::Touch recycle( Float X,Float Y,int PointID);
		Dynamic recycle_dyn();

		virtual ::org::flixel::system::input::Touch add( ::org::flixel::system::input::Touch touch);
		Dynamic add_dyn();

		virtual Array< ::org::flixel::system::input::Touch > justReleasedTouches( Array< ::org::flixel::system::input::Touch > TouchArray);
		Dynamic justReleasedTouches_dyn();

		virtual Array< ::org::flixel::system::input::Touch > justStartedTouches( Array< ::org::flixel::system::input::Touch > TouchArray);
		Dynamic justStartedTouches_dyn();

		virtual Void handleTouchMove( ::native::events::TouchEvent FlashEvent);
		Dynamic handleTouchMove_dyn();

		virtual Void handleTouchEnd( ::native::events::TouchEvent FlashEvent);
		Dynamic handleTouchEnd_dyn();

		virtual Void handleTouchBegin( ::native::events::TouchEvent FlashEvent);
		Dynamic handleTouchBegin_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::IntHash _touchesCache; /* REM */ 
		Array< ::org::flixel::system::input::Touch > _inactiveTouches; /* REM */ 
		Array< ::org::flixel::system::input::Touch > touches; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_TouchManager */ 
