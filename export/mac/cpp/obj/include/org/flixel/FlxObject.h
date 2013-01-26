#ifndef INCLUDED_org_flixel_FlxObject
#define INCLUDED_org_flixel_FlxObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPath)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxRect)
namespace org{
namespace flixel{


class FlxObject_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxObject_obj OBJ_;
		FlxObject_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		static hx::ObjectPtr< FlxObject_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxObject"); }

		virtual Void hurt( Float Damage);
		Dynamic hurt_dyn();

		virtual bool justTouched( int Direction);
		Dynamic justTouched_dyn();

		virtual bool isTouching( int Direction);
		Dynamic isTouching_dyn();

		virtual Void reset( Float X,Float Y);
		Dynamic reset_dyn();

		virtual ::org::flixel::FlxPoint getMidpoint( ::org::flixel::FlxPoint point);
		Dynamic getMidpoint_dyn();

		virtual bool setSolid( bool Solid);
		Dynamic setSolid_dyn();

		virtual bool getSolid( );
		Dynamic getSolid_dyn();

		bool solid; /* REM */ 
		virtual bool getFlickering( );
		Dynamic getFlickering_dyn();

		bool flickering; /* REM */ 
		virtual Void flicker( hx::Null< Float >  Duration);
		Dynamic flicker_dyn();

		virtual ::org::flixel::FlxPoint getScreenXY( ::org::flixel::FlxPoint point,::org::flixel::FlxCamera Camera);
		Dynamic getScreenXY_dyn();

		virtual bool onScreenObject( ::org::flixel::FlxCamera Camera);
		Dynamic onScreenObject_dyn();

		virtual bool onScreen( ::org::flixel::FlxCamera Camera);
		Dynamic onScreen_dyn();

		virtual bool overlapsPoint( ::org::flixel::FlxPoint point,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);
		Dynamic overlapsPoint_dyn();

		virtual bool overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);
		Dynamic overlapsAt_dyn();

		virtual bool overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual Void updatePathMotion( );
		Dynamic updatePathMotion_dyn();

		virtual ::org::flixel::FlxPoint advancePath( hx::Null< bool >  Snap);
		Dynamic advancePath_dyn();

		virtual Void stopFollowingPath( hx::Null< bool >  DestroyPath);
		Dynamic stopFollowingPath_dyn();

		virtual Void followPath( ::org::flixel::FlxPath Path,hx::Null< Float >  Speed,hx::Null< int >  Mode,hx::Null< bool >  AutoRotate);
		Dynamic followPath_dyn();

		virtual Void drawDebug( ::org::flixel::FlxCamera Camera);

		virtual Void draw( );

		virtual Void updateMotion( );
		Dynamic updateMotion_dyn();

		virtual Void postUpdate( );

		virtual Void preUpdate( );

		virtual Void destroy( );

		virtual int onBoundingBoxColorSet( int val);
		Dynamic onBoundingBoxColorSet_dyn();

		bool _boundingBoxColorOverritten; /* REM */ 
		int debugBoundingBoxColor; /* REM */ 
		bool _pathRotate; /* REM */ 
		int _pathInc; /* REM */ 
		int _pathMode; /* REM */ 
		int _pathNodeIndex; /* REM */ 
		Float pathAngle; /* REM */ 
		Float pathSpeed; /* REM */ 
		::org::flixel::FlxPath path; /* REM */ 
		::org::flixel::FlxPoint last; /* REM */ 
		int allowCollisions; /* REM */ 
		int wasTouching; /* REM */ 
		int touching; /* REM */ 
		bool moves; /* REM */ 
		::org::flixel::FlxRect _rect; /* REM */ 
		::org::flixel::FlxPoint _point; /* REM */ 
		Float health; /* REM */ 
		Float _flickerTimer; /* REM */ 
		bool _flicker; /* REM */ 
		::org::flixel::FlxPoint scrollFactor; /* REM */ 
		Float maxAngular; /* REM */ 
		Float angularDrag; /* REM */ 
		Float angularAcceleration; /* REM */ 
		Float angularVelocity; /* REM */ 
		Float angle; /* REM */ 
		::org::flixel::FlxPoint maxVelocity; /* REM */ 
		::org::flixel::FlxPoint drag; /* REM */ 
		::org::flixel::FlxPoint acceleration; /* REM */ 
		Float elasticity; /* REM */ 
		Float mass; /* REM */ 
		::org::flixel::FlxPoint velocity; /* REM */ 
		bool immovable; /* REM */ 
		Float height; /* REM */ 
		Float width; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
		static Float SEPARATE_BIAS; /* REM */ 
		static int LEFT; /* REM */ 
		static int RIGHT; /* REM */ 
		static int UP; /* REM */ 
		static int DOWN; /* REM */ 
		static int NONE; /* REM */ 
		static int CEILING; /* REM */ 
		static int FLOOR; /* REM */ 
		static int WALL; /* REM */ 
		static int ANY; /* REM */ 
		static int PATH_FORWARD; /* REM */ 
		static int PATH_BACKWARD; /* REM */ 
		static int PATH_LOOP_FORWARD; /* REM */ 
		static int PATH_LOOP_BACKWARD; /* REM */ 
		static int PATH_YOYO; /* REM */ 
		static int PATH_HORIZONTAL_ONLY; /* REM */ 
		static int PATH_VERTICAL_ONLY; /* REM */ 
		static ::org::flixel::FlxRect _firstSeparateFlxRect; /* REM */ 
		static ::org::flixel::FlxRect _secondSeparateFlxRect; /* REM */ 
		static ::org::flixel::FlxPoint _pZero; /* REM */ 
		static bool separate( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2);
		static Dynamic separate_dyn();

		static bool separateX( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2);
		static Dynamic separateX_dyn();

		static bool separateY( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2);
		static Dynamic separateY_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxObject */ 
