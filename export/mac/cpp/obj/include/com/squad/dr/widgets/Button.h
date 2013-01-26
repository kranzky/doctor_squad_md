#ifndef INCLUDED_com_squad_dr_widgets_Button
#define INCLUDED_com_squad_dr_widgets_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxButton.h>
HX_DECLARE_CLASS4(com,squad,dr,widgets,Button)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxButton)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace com{
namespace squad{
namespace dr{
namespace widgets{


class Button_obj : public ::org::flixel::FlxButton_obj{
	public:
		typedef ::org::flixel::FlxButton_obj super;
		typedef Button_obj OBJ_;
		Button_obj();
		Void __construct(Float x,Float y,Dynamic callbackFunction,bool usable_);

	public:
		static hx::ObjectPtr< Button_obj > __new(Float x,Float y,Dynamic callbackFunction,bool usable_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Button_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Button"); }

		virtual Void updateState( );
		Dynamic updateState_dyn();

		virtual Void _pushed( );
		Dynamic _pushed_dyn();

		bool usable; /* REM */ 
		Dynamic _buttoncallback; /* REM */ 
		Dynamic &_buttoncallback_dyn() { return _buttoncallback;}
};

} // end namespace com
} // end namespace squad
} // end namespace dr
} // end namespace widgets

#endif /* INCLUDED_com_squad_dr_widgets_Button */ 
