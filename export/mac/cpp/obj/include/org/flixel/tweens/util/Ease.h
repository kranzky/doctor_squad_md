#ifndef INCLUDED_org_flixel_tweens_util_Ease
#define INCLUDED_org_flixel_tweens_util_Ease

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,tweens,util,Ease)
namespace org{
namespace flixel{
namespace tweens{
namespace util{


class Ease_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ease_obj OBJ_;
		Ease_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Ease_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Ease_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ease"); }

		static Float quadIn( Float t);
		static Dynamic quadIn_dyn();

		static Float quadOut( Float t);
		static Dynamic quadOut_dyn();

		static Float quadInOut( Float t);
		static Dynamic quadInOut_dyn();

		static Float cubeIn( Float t);
		static Dynamic cubeIn_dyn();

		static Float cubeOut( Float t);
		static Dynamic cubeOut_dyn();

		static Float cubeInOut( Float t);
		static Dynamic cubeInOut_dyn();

		static Float quartIn( Float t);
		static Dynamic quartIn_dyn();

		static Float quartOut( Float t);
		static Dynamic quartOut_dyn();

		static Float quartInOut( Float t);
		static Dynamic quartInOut_dyn();

		static Float quintIn( Float t);
		static Dynamic quintIn_dyn();

		static Float quintOut( Float t);
		static Dynamic quintOut_dyn();

		static Float quintInOut( Float t);
		static Dynamic quintInOut_dyn();

		static Float sineIn( Float t);
		static Dynamic sineIn_dyn();

		static Float sineOut( Float t);
		static Dynamic sineOut_dyn();

		static Float sineInOut( Float t);
		static Dynamic sineInOut_dyn();

		static Float bounceIn( Float t);
		static Dynamic bounceIn_dyn();

		static Float bounceOut( Float t);
		static Dynamic bounceOut_dyn();

		static Float bounceInOut( Float t);
		static Dynamic bounceInOut_dyn();

		static Float circIn( Float t);
		static Dynamic circIn_dyn();

		static Float circOut( Float t);
		static Dynamic circOut_dyn();

		static Float circInOut( Float t);
		static Dynamic circInOut_dyn();

		static Float expoIn( Float t);
		static Dynamic expoIn_dyn();

		static Float expoOut( Float t);
		static Dynamic expoOut_dyn();

		static Float expoInOut( Float t);
		static Dynamic expoInOut_dyn();

		static Float backIn( Float t);
		static Dynamic backIn_dyn();

		static Float backOut( Float t);
		static Dynamic backOut_dyn();

		static Float backInOut( Float t);
		static Dynamic backInOut_dyn();

		static Float PI; /* REM */ 
		static Float PI2; /* REM */ 
		static Float EL; /* REM */ 
		static Float B1; /* REM */ 
		static Float B2; /* REM */ 
		static Float B3; /* REM */ 
		static Float B4; /* REM */ 
		static Float B5; /* REM */ 
		static Float B6; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace tweens
} // end namespace util

#endif /* INCLUDED_org_flixel_tweens_util_Ease */ 
