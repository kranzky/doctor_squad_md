#ifndef INCLUDED_com_squad_dr_widgets_Widget
#define INCLUDED_com_squad_dr_widgets_Widget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGroup.h>
HX_DECLARE_CLASS3(com,squad,dr,PubNub)
HX_DECLARE_CLASS4(com,squad,dr,widgets,Widget)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
namespace com{
namespace squad{
namespace dr{
namespace widgets{


class Widget_obj : public ::org::flixel::FlxGroup_obj{
	public:
		typedef ::org::flixel::FlxGroup_obj super;
		typedef Widget_obj OBJ_;
		Widget_obj();
		Void __construct(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract);

	public:
		static hx::ObjectPtr< Widget_obj > __new(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Widget_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Widget"); }

		virtual Void message( ::String action,::String data);
		Dynamic message_dyn();

		virtual Void received( Dynamic object);
		Dynamic received_dyn();

		virtual Void initialise( );
		Dynamic initialise_dyn();

		virtual Void send( ::String action,::String data);
		Dynamic send_dyn();

		bool _owned; /* REM */ 
		int _widgetId; /* REM */ 
		::com::squad::dr::PubNub _pubnub; /* REM */ 
		bool _canInteract; /* REM */ 
};

} // end namespace com
} // end namespace squad
} // end namespace dr
} // end namespace widgets

#endif /* INCLUDED_com_squad_dr_widgets_Widget */ 
