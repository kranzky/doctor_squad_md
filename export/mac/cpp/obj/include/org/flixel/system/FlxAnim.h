#ifndef INCLUDED_org_flixel_system_FlxAnim
#define INCLUDED_org_flixel_system_FlxAnim

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,flixel,system,FlxAnim)
namespace org{
namespace flixel{
namespace system{


class FlxAnim_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAnim_obj OBJ_;
		FlxAnim_obj();
		Void __construct(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped);

	public:
		static hx::ObjectPtr< FlxAnim_obj > __new(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxAnim_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAnim"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool looped; /* REM */ 
		Array< int > frames; /* REM */ 
		Float delay; /* REM */ 
		::String name; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxAnim */ 
