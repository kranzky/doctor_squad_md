#ifndef INCLUDED_org_flixel_system_input_JoystickManager
#define INCLUDED_org_flixel_system_input_JoystickManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,JoystickEvent)
HX_DECLARE_CLASS4(org,flixel,system,input,Joystick)
HX_DECLARE_CLASS4(org,flixel,system,input,JoystickManager)
namespace org{
namespace flixel{
namespace system{
namespace input{


class JoystickManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JoystickManager_obj OBJ_;
		JoystickManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< JoystickManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JoystickManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JoystickManager"); }

		virtual Void handleHatMove( ::native::events::JoystickEvent FlashEvent);
		Dynamic handleHatMove_dyn();

		virtual Void handleBallMove( ::native::events::JoystickEvent FlashEvent);
		Dynamic handleBallMove_dyn();

		virtual Void handleAxisMove( ::native::events::JoystickEvent FlashEvent);
		Dynamic handleAxisMove_dyn();

		virtual Void handleButtonUp( ::native::events::JoystickEvent FlashEvent);
		Dynamic handleButtonUp_dyn();

		virtual Void handleButtonDown( ::native::events::JoystickEvent FlashEvent);
		Dynamic handleButtonDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::org::flixel::system::input::Joystick joystick( int joystickID);
		Dynamic joystick_dyn();

		static Float deadZone; /* REM */ 
		static ::IntHash joysticks; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_JoystickManager */ 
