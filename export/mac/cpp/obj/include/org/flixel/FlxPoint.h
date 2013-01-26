#ifndef INCLUDED_org_flixel_FlxPoint
#define INCLUDED_org_flixel_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
namespace org{
namespace flixel{


class FlxPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		static hx::ObjectPtr< FlxPoint_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxPoint"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::native::geom::Point copyToFlash( ::native::geom::Point FlashPoint);
		Dynamic copyToFlash_dyn();

		virtual ::org::flixel::FlxPoint copyFromFlash( ::native::geom::Point FlashPoint);
		Dynamic copyFromFlash_dyn();

		virtual ::org::flixel::FlxPoint copyTo( ::org::flixel::FlxPoint point);
		Dynamic copyTo_dyn();

		virtual ::org::flixel::FlxPoint copyFrom( ::org::flixel::FlxPoint point);
		Dynamic copyFrom_dyn();

		virtual ::org::flixel::FlxPoint make( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic make_dyn();

		Float y; /* REM */ 
		Float x; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxPoint */ 
