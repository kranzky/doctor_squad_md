#ifndef INCLUDED_org_flixel_FlxText
#define INCLUDED_org_flixel_FlxText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,text,TextField)
HX_DECLARE_CLASS2(native,text,TextFormat)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxText)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
namespace org{
namespace flixel{


class FlxText_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef FlxText_obj OBJ_;
		FlxText_obj();
		Void __construct(Float X,Float Y,int Width,::String Text,hx::Null< bool >  __o_EmbeddedFont);

	public:
		static hx::ObjectPtr< FlxText_obj > __new(Float X,Float Y,int Width,::String Text,hx::Null< bool >  __o_EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxText"); }

		virtual Void updateFrameData( );

		virtual Void updateAtlasInfo( hx::Null< bool >  updateAtlas);

		virtual ::org::flixel::system::layer::Atlas set_atlas( ::org::flixel::system::layer::Atlas value);

		virtual ::String convertTextAlignmentFromString( ::String strAlign);
		Dynamic convertTextAlignmentFromString_dyn();

		virtual ::native::text::TextFormat dtfCopy( );
		Dynamic dtfCopy_dyn();

		virtual Void calcFrame( hx::Null< bool >  AreYouSure);

		virtual bool set_useShadow( bool value);
		Dynamic set_useShadow_dyn();

		virtual bool get_useShadow( );
		Dynamic get_useShadow_dyn();

		virtual int setShadow( int Color);
		Dynamic setShadow_dyn();

		virtual int getShadow( );
		Dynamic getShadow_dyn();

		virtual ::String setAlignment( ::String Alignment);
		Dynamic setAlignment_dyn();

		virtual ::String getAlignment( );
		Dynamic getAlignment_dyn();

		::String alignment; /* REM */ 
		virtual ::String setFont( ::String Font);
		Dynamic setFont_dyn();

		virtual ::String getFont( );
		Dynamic getFont_dyn();

		::String font; /* REM */ 
		virtual int setColor( int Color);

		virtual int getColor( );

		virtual Float setSize( Float Size);
		Dynamic setSize_dyn();

		virtual Float getSize( );
		Dynamic getSize_dyn();

		Float size; /* REM */ 
		virtual ::String setText( ::String Text);
		Dynamic setText_dyn();

		virtual ::String getText( );
		Dynamic getText_dyn();

		::String text; /* REM */ 
		virtual ::org::flixel::FlxText setFormat( ::String Font,hx::Null< Float >  Size,hx::Null< int >  Color,::String Alignment,hx::Null< int >  ShadowColor,hx::Null< bool >  UseShadow);
		Dynamic setFormat_dyn();

		virtual Void destroy( );

		bool _useShadow; /* REM */ 
		int _shadow; /* REM */ 
		bool _regen; /* REM */ 
		::native::text::TextFormat _formatAdjusted; /* REM */ 
		::native::text::TextFormat _format; /* REM */ 
		::native::text::TextField _textField; /* REM */ 
		bool useShadow; /* REM */ 
		int shadow; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxText */ 
