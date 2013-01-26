#ifndef INCLUDED_org_flixel_FlxBasic
#define INCLUDED_org_flixel_FlxBasic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,FlxSpriteFrames)
HX_DECLARE_CLASS4(org,flixel,system,layer,Node)
HX_DECLARE_CLASS3(org,flixel,tweens,FlxTween)
namespace org{
namespace flixel{


class FlxBasic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBasic_obj OBJ_;
		FlxBasic_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxBasic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxBasic_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxBasic"); }

		virtual Void updateFrameData( );
		Dynamic updateFrameData_dyn();

		virtual Void updateAtlasInfo( hx::Null< bool >  updateAtlas);
		Dynamic updateAtlasInfo_dyn();

		virtual ::String get_bitmapDataKey( );
		Dynamic get_bitmapDataKey_dyn();

		::String bitmapDataKey; /* REM */ 
		virtual ::org::flixel::system::layer::Atlas set_atlas( ::org::flixel::system::layer::Atlas value);
		Dynamic set_atlas_dyn();

		virtual ::org::flixel::system::layer::Atlas get_atlas( );
		Dynamic get_atlas_dyn();

		::org::flixel::system::layer::Atlas atlas; /* REM */ 
		::org::flixel::system::layer::Node _node; /* REM */ 
		::org::flixel::system::layer::Atlas _atlas; /* REM */ 
		::org::flixel::system::layer::FlxSpriteFrames _framesData; /* REM */ 
		::String _bitmapDataKey; /* REM */ 
		::org::flixel::tweens::FlxTween _tween; /* REM */ 
		virtual bool getTween( );
		Dynamic getTween_dyn();

		bool hasTween; /* REM */ 
		virtual Void updateTweens( );
		Dynamic updateTweens_dyn();

		virtual Void clearTweens( hx::Null< bool >  destroy);
		Dynamic clearTweens_dyn();

		virtual ::org::flixel::tweens::FlxTween removeTween( ::org::flixel::tweens::FlxTween t,hx::Null< bool >  destroy);
		Dynamic removeTween_dyn();

		virtual ::org::flixel::tweens::FlxTween addTween( ::org::flixel::tweens::FlxTween t,hx::Null< bool >  start);
		Dynamic addTween_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void revive( );
		Dynamic revive_dyn();

		virtual Void kill( );
		Dynamic kill_dyn();

		virtual Void drawDebug( ::org::flixel::FlxCamera Camera);
		Dynamic drawDebug_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void postUpdate( );
		Dynamic postUpdate_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void preUpdate( );
		Dynamic preUpdate_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool autoClear; /* REM */ 
		bool ignoreDrawDebug; /* REM */ 
		Array< ::org::flixel::FlxCamera > cameras; /* REM */ 
		bool alive; /* REM */ 
		bool visible; /* REM */ 
		bool active; /* REM */ 
		bool exists; /* REM */ 
		int ID; /* REM */ 
		static int _ACTIVECOUNT; /* REM */ 
		static int _VISIBLECOUNT; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxBasic */ 
