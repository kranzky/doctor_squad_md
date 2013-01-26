#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#define INCLUDED_org_flixel_system_FlxQuadTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxRect.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxRect)
HX_DECLARE_CLASS3(org,flixel,system,FlxList)
HX_DECLARE_CLASS3(org,flixel,system,FlxQuadTree)
namespace org{
namespace flixel{
namespace system{


class FlxQuadTree_obj : public ::org::flixel::FlxRect_obj{
	public:
		typedef ::org::flixel::FlxRect_obj super;
		typedef FlxQuadTree_obj OBJ_;
		FlxQuadTree_obj();
		Void __construct(Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);

	public:
		static hx::ObjectPtr< FlxQuadTree_obj > __new(Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxQuadTree_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxQuadTree"); }

		virtual bool overlapNode( );
		Dynamic overlapNode_dyn();

		virtual bool execute( );
		Dynamic execute_dyn();

		virtual Void addToList( );
		Dynamic addToList_dyn();

		virtual Void addObject( );
		Dynamic addObject_dyn();

		virtual Void add( ::org::flixel::FlxBasic ObjectOrGroup,int list);
		Dynamic add_dyn();

		virtual Void load( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback);
		Dynamic load_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);
		Dynamic reset_dyn();

		::org::flixel::system::FlxQuadTree next; /* REM */ 
		Float _midpointY; /* REM */ 
		Float _midpointX; /* REM */ 
		Float _halfHeight; /* REM */ 
		Float _halfWidth; /* REM */ 
		Float _bottomEdge; /* REM */ 
		Float _topEdge; /* REM */ 
		Float _rightEdge; /* REM */ 
		Float _leftEdge; /* REM */ 
		::org::flixel::system::FlxQuadTree _southWestTree; /* REM */ 
		::org::flixel::system::FlxQuadTree _southEastTree; /* REM */ 
		::org::flixel::system::FlxQuadTree _northEastTree; /* REM */ 
		::org::flixel::system::FlxQuadTree _northWestTree; /* REM */ 
		::org::flixel::system::FlxList _tailB; /* REM */ 
		::org::flixel::system::FlxList _headB; /* REM */ 
		::org::flixel::system::FlxList _tailA; /* REM */ 
		::org::flixel::system::FlxList _headA; /* REM */ 
		bool _canSubdivide; /* REM */ 
		bool exists; /* REM */ 
		static int A_LIST; /* REM */ 
		static int B_LIST; /* REM */ 
		static int divisions; /* REM */ 
		static int _min; /* REM */ 
		static ::org::flixel::FlxObject _object; /* REM */ 
		static Float _objectLeftEdge; /* REM */ 
		static Float _objectTopEdge; /* REM */ 
		static Float _objectRightEdge; /* REM */ 
		static Float _objectBottomEdge; /* REM */ 
		static int _list; /* REM */ 
		static bool _useBothLists; /* REM */ 
		static Dynamic _processingCallback; /* REM */ 
		static Dynamic &_processingCallback_dyn() { return _processingCallback;}
		static Dynamic _notifyCallback; /* REM */ 
		static Dynamic &_notifyCallback_dyn() { return _notifyCallback;}
		static ::org::flixel::system::FlxList _iterator; /* REM */ 
		static Float _objectHullX; /* REM */ 
		static Float _objectHullY; /* REM */ 
		static Float _objectHullWidth; /* REM */ 
		static Float _objectHullHeight; /* REM */ 
		static Float _checkObjectHullX; /* REM */ 
		static Float _checkObjectHullY; /* REM */ 
		static Float _checkObjectHullWidth; /* REM */ 
		static Float _checkObjectHullHeight; /* REM */ 
		static int _NUM_CACHED_QUAD_TREES; /* REM */ 
		static ::org::flixel::system::FlxQuadTree _cachedTreesHead; /* REM */ 
		static ::org::flixel::system::FlxQuadTree recycle( Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);
		static Dynamic recycle_dyn();

		static Void clearCache( );
		static Dynamic clearCache_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxQuadTree */ 
