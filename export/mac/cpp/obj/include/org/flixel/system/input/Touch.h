#ifndef INCLUDED_org_flixel_system_input_Touch
#define INCLUDED_org_flixel_system_input_Touch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxPoint.h>
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS4(org,flixel,system,input,Touch)
namespace org{
namespace flixel{
namespace system{
namespace input{


class Touch_obj : public ::org::flixel::FlxPoint_obj{
	public:
		typedef ::org::flixel::FlxPoint_obj super;
		typedef Touch_obj OBJ_;
		Touch_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);

	public:
		static hx::ObjectPtr< Touch_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Touch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Touch"); }

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual Void reset( Float X,Float Y,int PointID);
		Dynamic reset_dyn();

		virtual ::org::flixel::FlxPoint getScreenPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual ::org::flixel::FlxPoint getWorldPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual Void updateCursor( );
		Dynamic updateCursor_dyn();

		virtual Void updateTouchPosition( Float X,Float Y);
		Dynamic updateTouchPosition_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual int get_touchPointID( );
		Dynamic get_touchPointID_dyn();

		int touchPointID; /* REM */ 
		virtual Void destroy( );
		Dynamic destroy_dyn();

		::native::geom::Point _flashPoint; /* REM */ 
		::org::flixel::FlxPoint _globalScreenPosition; /* REM */ 
		::org::flixel::FlxPoint _point; /* REM */ 
		int _last; /* REM */ 
		int _current; /* REM */ 
		int screenY; /* REM */ 
		int screenX; /* REM */ 
		int _touchPointID; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_Touch */ 
