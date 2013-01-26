#ifndef INCLUDED_org_flixel_FlxRect
#define INCLUDED_org_flixel_FlxRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxRect)
namespace org{
namespace flixel{


class FlxRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRect_obj OBJ_;
		FlxRect_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		static hx::ObjectPtr< FlxRect_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxRect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxRect"); }

		virtual bool overlaps( ::org::flixel::FlxRect Rect);
		Dynamic overlaps_dyn();

		virtual ::native::geom::Rectangle copyToFlash( ::native::geom::Rectangle FlashRect);
		Dynamic copyToFlash_dyn();

		virtual ::org::flixel::FlxRect copyFromFlash( ::native::geom::Rectangle FlashRect);
		Dynamic copyFromFlash_dyn();

		virtual ::org::flixel::FlxRect copyTo( ::org::flixel::FlxRect Rect);
		Dynamic copyTo_dyn();

		virtual ::org::flixel::FlxRect copyFrom( ::org::flixel::FlxRect Rect);
		Dynamic copyFrom_dyn();

		virtual ::org::flixel::FlxRect make( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		Dynamic make_dyn();

		virtual Float getBottom( );
		Dynamic getBottom_dyn();

		Float bottom; /* REM */ 
		virtual Float getTop( );
		Dynamic getTop_dyn();

		Float top; /* REM */ 
		virtual Float getRight( );
		Dynamic getRight_dyn();

		Float right; /* REM */ 
		virtual Float getLeft( );
		Dynamic getLeft_dyn();

		Float left; /* REM */ 
		Float height; /* REM */ 
		Float width; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxRect */ 
