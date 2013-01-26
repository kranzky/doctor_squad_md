#ifndef INCLUDED_com_squad_dr_Theatre
#define INCLUDED_com_squad_dr_Theatre

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS3(com,squad,dr,Theatre)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxText)
namespace com{
namespace squad{
namespace dr{


class Theatre_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef Theatre_obj OBJ_;
		Theatre_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Theatre_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Theatre_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Theatre"); }

		virtual Void update( );

		virtual Void create( );

		::org::flixel::FlxText controls; /* REM */ 
		::org::flixel::FlxText debug; /* REM */ 
};

} // end namespace com
} // end namespace squad
} // end namespace dr

#endif /* INCLUDED_com_squad_dr_Theatre */ 
