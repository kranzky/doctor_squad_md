#ifndef INCLUDED_org_flixel_system_layer_Atlas
#define INCLUDED_org_flixel_system_layer_Atlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,Node)
HX_DECLARE_CLASS4(org,flixel,system,layer,TileSheetData)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class Atlas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Atlas_obj OBJ_;
		Atlas_obj();
		Void __construct(::String name,int width,int height,hx::Null< int >  __o_borderX,hx::Null< int >  __o_borderY,::native::display::BitmapData bitmapData);

	public:
		static hx::ObjectPtr< Atlas_obj > __new(::String name,int width,int height,hx::Null< int >  __o_borderX,hx::Null< int >  __o_borderY,::native::display::BitmapData bitmapData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Atlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Atlas"); }

		virtual ::org::flixel::system::layer::Node findNodeToInsert( int insertWidth,int insertHeight);
		Dynamic findNodeToInsert_dyn();

		virtual Void deleteSubtree( ::org::flixel::system::layer::Node node);
		Dynamic deleteSubtree_dyn();

		virtual ::org::flixel::system::layer::Atlas clone( ::String cloneName);
		Dynamic clone_dyn();

		virtual ::org::flixel::system::layer::Node clearAndFillWith( ::native::display::BitmapData bmd);
		Dynamic clearAndFillWith_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void generateAtlasFromQueue( );
		Dynamic generateAtlasFromQueue_dyn();

		virtual Void addToQueue( ::native::display::BitmapData data,::String key);
		Dynamic addToQueue_dyn();

		virtual Void createQueue( );
		Dynamic createQueue_dyn();

		virtual int bitmapSorter( ::native::display::BitmapData bmd1,::native::display::BitmapData bmd2);
		Dynamic bitmapSorter_dyn();

		virtual int indexOf( Array< ::native::display::BitmapData > bitmaps,::native::display::BitmapData bmd);
		Dynamic indexOf_dyn();

		virtual bool addNodes( Array< ::native::display::BitmapData > bitmaps,Array< ::String > keys);
		Dynamic addNodes_dyn();

		virtual ::org::flixel::system::layer::Node getNodeByBitmap( ::native::display::BitmapData bitmap);
		Dynamic getNodeByBitmap_dyn();

		virtual ::org::flixel::system::layer::Node getNodeByKey( ::String key);
		Dynamic getNodeByKey_dyn();

		virtual bool hasNodeWithName( ::String nodeName);
		Dynamic hasNodeWithName_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		int height; /* REM */ 
		virtual int get_width( );
		Dynamic get_width_dyn();

		int width; /* REM */ 
		virtual ::org::flixel::system::layer::Node addNode( ::native::display::BitmapData data,::String key);
		Dynamic addNode_dyn();

		virtual Void resize( int newWidth,int newHeight);
		Dynamic resize_dyn();

		virtual Void redrawAll( );
		Dynamic redrawAll_dyn();

		virtual Void redrawNode( ::org::flixel::system::layer::Node node);
		Dynamic redrawNode_dyn();

		virtual Void rebuildAtlas( );
		Dynamic rebuildAtlas_dyn();

		bool _fromBitmapData; /* REM */ 
		::org::flixel::system::layer::TileSheetData _tileSheetData; /* REM */ 
		int borderY; /* REM */ 
		int borderX; /* REM */ 
		::native::display::BitmapData atlasBitmapData; /* REM */ 
		::Hash nodes; /* REM */ 
		::String name; /* REM */ 
		::org::flixel::system::layer::Node root; /* REM */ 
		Dynamic tempStorage; /* REM */ 
		static ::Hash _atlasCache; /* REM */ 
		static ::org::flixel::system::layer::Atlas getAtlas( ::String Key,::native::display::BitmapData BmData,hx::Null< bool >  Unique);
		static Dynamic getAtlas_dyn();

		static ::String getUniqueKey( ::String Key);
		static Dynamic getUniqueKey_dyn();

		static Void removeAtlas( ::org::flixel::system::layer::Atlas atlas,hx::Null< bool >  destroy);
		static Dynamic removeAtlas_dyn();

		static Void clearAtlasCache( );
		static Dynamic clearAtlasCache_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_Atlas */ 
