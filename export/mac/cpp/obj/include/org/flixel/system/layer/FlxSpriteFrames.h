#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#define INCLUDED_org_flixel_system_layer_FlxSpriteFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,layer,FlxSpriteFrames)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class FlxSpriteFrames_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSpriteFrames_obj OBJ_;
		FlxSpriteFrames_obj();
		Void __construct(int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);

	public:
		static hx::ObjectPtr< FlxSpriteFrames_obj > __new(int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSpriteFrames_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSpriteFrames"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		Float pointY; /* REM */ 
		Float pointX; /* REM */ 
		int ySpacing; /* REM */ 
		int xSpacing; /* REM */ 
		int endY; /* REM */ 
		int endX; /* REM */ 
		int startY; /* REM */ 
		int startX; /* REM */ 
		int halfFrameNumber; /* REM */ 
		Array< int > frameIDs; /* REM */ 
		int height; /* REM */ 
		int width; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_FlxSpriteFrames */ 
