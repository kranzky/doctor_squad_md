#ifndef INCLUDED_org_flixel_FlxU
#define INCLUDED_org_flixel_FlxU

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxU)
namespace org{
namespace flixel{


class FlxU_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxU_obj OBJ_;
		FlxU_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxU_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxU_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxU"); }

		static Void openURL( ::String URL);
		static Dynamic openURL_dyn();

		static Float abs( Float Value);
		static Dynamic abs_dyn();

		static int floor( Float Value);
		static Dynamic floor_dyn();

		static int ceil( Float Value);
		static Dynamic ceil_dyn();

		static int round( Float Value);
		static Dynamic round_dyn();

		static Float min( Float Number1,Float Number2);
		static Dynamic min_dyn();

		static Float max( Float Number1,Float Number2);
		static Dynamic max_dyn();

		static Float bound( Float Value,Float Min,Float Max);
		static Dynamic bound_dyn();

		static Float srand( Float Seed);
		static Dynamic srand_dyn();

		static Dynamic shuffle( Dynamic Objects,int HowManyTimes);
		static Dynamic shuffle_dyn();

		static Dynamic getRandom( Dynamic Objects,hx::Null< int >  StartIndex,hx::Null< int >  Length);
		static Dynamic getRandom_dyn();

		static int getTicks( );
		static Dynamic getTicks_dyn();

		static ::String formatTicks( int StartTicks,int EndTicks);
		static Dynamic formatTicks_dyn();

		static int makeColor( int Red,int Green,int Blue,hx::Null< Float >  Alpha);
		static Dynamic makeColor_dyn();

		static int makeColorFromHSB( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  Alpha);
		static Dynamic makeColorFromHSB_dyn();

		static Array< Float > getRGBA( int Color,Array< Float > Results);
		static Dynamic getRGBA_dyn();

		static Array< Float > getHSB( int Color,Array< Float > Results);
		static Dynamic getHSB_dyn();

		static ::String formatTime( int Seconds,hx::Null< bool >  ShowMS);
		static Dynamic formatTime_dyn();

		static ::String formatArray( Dynamic AnyArray);
		static Dynamic formatArray_dyn();

		static ::String formatMoney( Float Amount,hx::Null< bool >  ShowDecimal,hx::Null< bool >  EnglishStyle);
		static Dynamic formatMoney_dyn();

		static ::String getClassName( Dynamic Obj,hx::Null< bool >  Simple);
		static Dynamic getClassName_dyn();

		static bool compareClassNames( Dynamic Object1,Dynamic Object2);
		static Dynamic compareClassNames_dyn();

		static ::Class getClass( ::String Name);
		static Dynamic getClass_dyn();

		static Float computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max);
		static Dynamic computeVelocity_dyn();

		static ::org::flixel::FlxPoint rotatePoint( Float X,Float Y,Float PivotX,Float PivotY,Float Angle,::org::flixel::FlxPoint point);
		static Dynamic rotatePoint_dyn();

		static Float getAngle( ::org::flixel::FlxPoint Point1,::org::flixel::FlxPoint Point2);
		static Dynamic getAngle_dyn();

		static Float getDistance( ::org::flixel::FlxPoint Point1,::org::flixel::FlxPoint Point2);
		static Dynamic getDistance_dyn();

		static int ArrayIndexOf( Dynamic array,Dynamic whatToFind,hx::Null< int >  fromIndex);
		static Dynamic ArrayIndexOf_dyn();

		static Void SetArrayLength( Dynamic array,int newLength);
		static Dynamic SetArrayLength_dyn();

		static Float MIN_VALUE; /* REM */ 
		static Float MAX_VALUE; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxU */ 
