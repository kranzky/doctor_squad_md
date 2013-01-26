#ifndef INCLUDED_org_flixel_system_input_Input
#define INCLUDED_org_flixel_system_input_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS4(org,flixel,system,input,Input)
HX_DECLARE_CLASS4(org,flixel,system,input,MapObject)
HX_DECLARE_CLASS4(org,flixel,system,replay,CodeValuePair)
namespace org{
namespace flixel{
namespace system{
namespace input{


class Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Input_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Input_obj();

		HX_DO_RTTI;
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Input"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void addKey( ::String KeyName,int KeyCode);
		Dynamic addKey_dyn();

		virtual bool any( );
		Dynamic any_dyn();

		virtual int getKeyCode( ::String KeyName);
		Dynamic getKeyCode_dyn();

		virtual Void playback( Array< ::org::flixel::system::replay::CodeValuePair > Record);
		Dynamic playback_dyn();

		virtual Array< ::org::flixel::system::replay::CodeValuePair > record( );
		Dynamic record_dyn();

		virtual bool justReleased( ::String Key);
		Dynamic justReleased_dyn();

		virtual bool justPressed( ::String Key);
		Dynamic justPressed_dyn();

		virtual bool pressed( ::String Key);
		Dynamic pressed_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		int _total; /* REM */ 
		Array< ::org::flixel::system::input::MapObject > _map; /* REM */ 
		::Hash _lookup; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_Input */ 
