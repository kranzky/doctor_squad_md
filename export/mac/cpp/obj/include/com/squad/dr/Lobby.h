#ifndef INCLUDED_com_squad_dr_Lobby
#define INCLUDED_com_squad_dr_Lobby

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS3(com,squad,dr,Lobby)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxState)
namespace com{
namespace squad{
namespace dr{


class Lobby_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef Lobby_obj OBJ_;
		Lobby_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Lobby_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Lobby_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Lobby"); }

		virtual Void update( );

		virtual Void destroy( );

		virtual Void onStartClick( );
		Dynamic onStartClick_dyn();

		virtual Void create( );

};

} // end namespace com
} // end namespace squad
} // end namespace dr

#endif /* INCLUDED_com_squad_dr_Lobby */ 
