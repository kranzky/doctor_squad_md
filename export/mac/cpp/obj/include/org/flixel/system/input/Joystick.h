#ifndef INCLUDED_org_flixel_system_input_Joystick
#define INCLUDED_org_flixel_system_input_Joystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS4(org,flixel,system,input,Joystick)
namespace org{
namespace flixel{
namespace system{
namespace input{


class Joystick_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Joystick_obj OBJ_;
		Joystick_obj();
		Void __construct(int id);

	public:
		static hx::ObjectPtr< Joystick_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Joystick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Joystick"); }

		virtual bool anyInput( );
		Dynamic anyInput_dyn();

		virtual bool anyButton( );
		Dynamic anyButton_dyn();

		virtual bool justReleased( int buttonID);
		Dynamic justReleased_dyn();

		virtual bool justPressed( int buttonID);
		Dynamic justPressed_dyn();

		virtual bool pressed( int buttonID);
		Dynamic pressed_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		int id; /* REM */ 
		bool connected; /* REM */ 
		::org::flixel::FlxPoint ball; /* REM */ 
		::org::flixel::FlxPoint hat; /* REM */ 
		::org::flixel::FlxPoint axis; /* REM */ 
		::IntHash buttons; /* REM */ 
		static int NUM_BUTTONS; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_Joystick */ 
