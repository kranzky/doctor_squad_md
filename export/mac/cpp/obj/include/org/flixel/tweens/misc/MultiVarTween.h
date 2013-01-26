#ifndef INCLUDED_org_flixel_tweens_misc_MultiVarTween
#define INCLUDED_org_flixel_tweens_misc_MultiVarTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/tweens/FlxTween.h>
HX_DECLARE_CLASS3(org,flixel,tweens,FlxTween)
HX_DECLARE_CLASS4(org,flixel,tweens,misc,MultiVarTween)
namespace org{
namespace flixel{
namespace tweens{
namespace misc{


class MultiVarTween_obj : public ::org::flixel::tweens::FlxTween_obj{
	public:
		typedef ::org::flixel::tweens::FlxTween_obj super;
		typedef MultiVarTween_obj OBJ_;
		MultiVarTween_obj();
		Void __construct(Dynamic complete,hx::Null< int >  __o_type);

	public:
		static hx::ObjectPtr< MultiVarTween_obj > __new(Dynamic complete,hx::Null< int >  __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MultiVarTween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MultiVarTween"); }

		Array< Float > _range; /* REM */ 
		Array< Float > _start; /* REM */ 
		Array< ::String > _vars; /* REM */ 
		Dynamic _object; /* REM */ 
		virtual Void update( );

		virtual Void tween( Dynamic object,Dynamic properties,Float duration,Dynamic ease);
		Dynamic tween_dyn();

		virtual Void destroy( );

};

} // end namespace org
} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_org_flixel_tweens_misc_MultiVarTween */ 
