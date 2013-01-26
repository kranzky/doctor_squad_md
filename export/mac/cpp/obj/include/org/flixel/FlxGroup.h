#ifndef INCLUDED_org_flixel_FlxGroup
#define INCLUDED_org_flixel_FlxGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
namespace org{
namespace flixel{


class FlxGroup_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxGroup_obj OBJ_;
		FlxGroup_obj();
		Void __construct(hx::Null< int >  __o_MaxSize);

	public:
		static hx::ObjectPtr< FlxGroup_obj > __new(hx::Null< int >  __o_MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxGroup"); }

		virtual int sortHandler( ::org::flixel::FlxBasic Obj1,::org::flixel::FlxBasic Obj2);
		Dynamic sortHandler_dyn();

		virtual Void kill( );

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::org::flixel::FlxBasic getRandom( hx::Null< int >  StartIndex,hx::Null< int >  Length);
		Dynamic getRandom_dyn();

		virtual int countDead( );
		Dynamic countDead_dyn();

		virtual int countLiving( );
		Dynamic countLiving_dyn();

		virtual ::org::flixel::FlxBasic getFirstDead( );
		Dynamic getFirstDead_dyn();

		virtual ::org::flixel::FlxBasic getFirstAlive( );
		Dynamic getFirstAlive_dyn();

		virtual ::org::flixel::FlxBasic getFirstExtant( );
		Dynamic getFirstExtant_dyn();

		virtual int getFirstNull( );
		Dynamic getFirstNull_dyn();

		virtual ::org::flixel::FlxBasic getFirstAvailable( ::Class ObjectClass);
		Dynamic getFirstAvailable_dyn();

		virtual Void callAll( ::String FunctionName,hx::Null< bool >  Recurse);
		Dynamic callAll_dyn();

		virtual Void setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  Recurse);
		Dynamic setAll_dyn();

		virtual Void sort( ::String Index,hx::Null< int >  Order);
		Dynamic sort_dyn();

		virtual ::org::flixel::FlxBasic replace( ::org::flixel::FlxBasic OldObject,::org::flixel::FlxBasic NewObject);
		Dynamic replace_dyn();

		virtual ::org::flixel::FlxBasic remove( ::org::flixel::FlxBasic Object,hx::Null< bool >  Splice);
		Dynamic remove_dyn();

		virtual ::org::flixel::FlxBasic recycle( ::Class ObjectClass);
		Dynamic recycle_dyn();

		virtual ::org::flixel::system::layer::Atlas set_atlas( ::org::flixel::system::layer::Atlas value);

		virtual Void setGroupAtlas( ::org::flixel::FlxBasic Object);
		Dynamic setGroupAtlas_dyn();

		virtual ::org::flixel::FlxBasic add( ::org::flixel::FlxBasic Object);
		Dynamic add_dyn();

		virtual int setMaxSize( int Size);
		Dynamic setMaxSize_dyn();

		virtual Void draw( );

		virtual Void update( );

		virtual Void preUpdate( );

		virtual Void destroy( );

		int _sortOrder; /* REM */ 
		::String _sortIndex; /* REM */ 
		int _marker; /* REM */ 
		int length; /* REM */ 
		Array< ::org::flixel::FlxBasic > members; /* REM */ 
		int maxSize; /* REM */ 
		static int ASCENDING; /* REM */ 
		static int DESCENDING; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxGroup */ 
