#ifndef INCLUDED_org_flixel_system_input_Keyboard
#define INCLUDED_org_flixel_system_input_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/system/input/Input.h>
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,KeyboardEvent)
HX_DECLARE_CLASS4(org,flixel,system,input,Input)
HX_DECLARE_CLASS4(org,flixel,system,input,Keyboard)
namespace org{
namespace flixel{
namespace system{
namespace input{


class Keyboard_obj : public ::org::flixel::system::input::Input_obj{
	public:
		typedef ::org::flixel::system::input::Input_obj super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Keyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Keyboard_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Keyboard"); }

		virtual Void handleKeyUp( ::native::events::KeyboardEvent FlashEvent);
		Dynamic handleKeyUp_dyn();

		virtual Void handleKeyDown( ::native::events::KeyboardEvent FlashEvent);
		Dynamic handleKeyDown_dyn();

		bool RIGHT; /* REM */ 
		bool LEFT; /* REM */ 
		bool DOWN; /* REM */ 
		bool UP; /* REM */ 
		bool SPACE; /* REM */ 
		bool ALT; /* REM */ 
		bool CONTROL; /* REM */ 
		bool NUMPADSLASH; /* REM */ 
		bool SLASH; /* REM */ 
		bool NUMPADPERIOD; /* REM */ 
		bool PERIOD; /* REM */ 
		bool COMMA; /* REM */ 
		bool M; /* REM */ 
		bool N; /* REM */ 
		bool B; /* REM */ 
		bool V; /* REM */ 
		bool C; /* REM */ 
		bool X; /* REM */ 
		bool Z; /* REM */ 
		bool SHIFT; /* REM */ 
		bool ENTER; /* REM */ 
		bool QUOTE; /* REM */ 
		bool SEMICOLON; /* REM */ 
		bool L; /* REM */ 
		bool K; /* REM */ 
		bool J; /* REM */ 
		bool H; /* REM */ 
		bool G; /* REM */ 
		bool F; /* REM */ 
		bool D; /* REM */ 
		bool S; /* REM */ 
		bool A; /* REM */ 
		bool CAPSLOCK; /* REM */ 
		bool BACKSLASH; /* REM */ 
		bool RBRACKET; /* REM */ 
		bool LBRACKET; /* REM */ 
		bool P; /* REM */ 
		bool O; /* REM */ 
		bool I; /* REM */ 
		bool U; /* REM */ 
		bool Y; /* REM */ 
		bool T; /* REM */ 
		bool R; /* REM */ 
		bool E; /* REM */ 
		bool W; /* REM */ 
		bool Q; /* REM */ 
		bool TAB; /* REM */ 
		bool BACKSPACE; /* REM */ 
		bool DELETE; /* REM */ 
		bool NUMPADPLUS; /* REM */ 
		bool PLUS; /* REM */ 
		bool NUMPADMINUS; /* REM */ 
		bool MINUS; /* REM */ 
		bool INSERT; /* REM */ 
		bool END; /* REM */ 
		bool HOME; /* REM */ 
		bool PAGEDOWN; /* REM */ 
		bool PAGEUP; /* REM */ 
		bool NUMPADZERO; /* REM */ 
		bool NUMPADNINE; /* REM */ 
		bool NUMPADEIGHT; /* REM */ 
		bool NUMPADSEVEN; /* REM */ 
		bool NUMPADSIX; /* REM */ 
		bool NUMPADFIVE; /* REM */ 
		bool NUMPADFOUR; /* REM */ 
		bool NUMPADTHREE; /* REM */ 
		bool NUMPADTWO; /* REM */ 
		bool NUMPADONE; /* REM */ 
		bool ZERO; /* REM */ 
		bool NINE; /* REM */ 
		bool EIGHT; /* REM */ 
		bool SEVEN; /* REM */ 
		bool SIX; /* REM */ 
		bool FIVE; /* REM */ 
		bool FOUR; /* REM */ 
		bool THREE; /* REM */ 
		bool TWO; /* REM */ 
		bool ONE; /* REM */ 
		bool F12; /* REM */ 
		bool F11; /* REM */ 
		bool F10; /* REM */ 
		bool F9; /* REM */ 
		bool F8; /* REM */ 
		bool F7; /* REM */ 
		bool F6; /* REM */ 
		bool F5; /* REM */ 
		bool F4; /* REM */ 
		bool F3; /* REM */ 
		bool F2; /* REM */ 
		bool F1; /* REM */ 
		bool ESCAPE; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_Keyboard */ 
