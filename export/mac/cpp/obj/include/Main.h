#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,KeyboardEvent)


class Main_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void onKeyUP( ::native::events::KeyboardEvent e);
		Dynamic onKeyUP_dyn();

		virtual Void init( ::native::events::Event e);
		Dynamic init_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Main */ 
