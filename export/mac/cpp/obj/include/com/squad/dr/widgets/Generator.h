#ifndef INCLUDED_com_squad_dr_widgets_Generator
#define INCLUDED_com_squad_dr_widgets_Generator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/squad/dr/widgets/Widget.h>
HX_DECLARE_CLASS3(com,squad,dr,PubNub)
HX_DECLARE_CLASS4(com,squad,dr,widgets,Generator)
HX_DECLARE_CLASS4(com,squad,dr,widgets,Widget)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxButton)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace com{
namespace squad{
namespace dr{
namespace widgets{


class Generator_obj : public ::com::squad::dr::widgets::Widget_obj{
	public:
		typedef ::com::squad::dr::widgets::Widget_obj super;
		typedef Generator_obj OBJ_;
		Generator_obj();
		Void __construct(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract);

	public:
		static hx::ObjectPtr< Generator_obj > __new(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Generator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Generator"); }

		virtual Void updateState( );
		Dynamic updateState_dyn();

		virtual Void buttonPushed( );
		Dynamic buttonPushed_dyn();

		virtual Void _sendPowerLevel( );
		Dynamic _sendPowerLevel_dyn();

		virtual Void update( );

		virtual Void message( ::String action,::String data);

		Float _sendTimer; /* REM */ 
		Float _power; /* REM */ 
		::org::flixel::FlxButton _button; /* REM */ 
		::org::flixel::FlxSprite _darkness; /* REM */ 
};

} // end namespace com
} // end namespace squad
} // end namespace dr
} // end namespace widgets

#endif /* INCLUDED_com_squad_dr_widgets_Generator */ 
