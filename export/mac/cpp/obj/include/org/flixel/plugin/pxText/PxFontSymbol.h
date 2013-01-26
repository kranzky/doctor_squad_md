#ifndef INCLUDED_org_flixel_plugin_pxText_PxFontSymbol
#define INCLUDED_org_flixel_plugin_pxText_PxFontSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,plugin,pxText,PxFontSymbol)
namespace org{
namespace flixel{
namespace plugin{
namespace pxText{


class PxFontSymbol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PxFontSymbol_obj OBJ_;
		PxFontSymbol_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PxFontSymbol_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PxFontSymbol_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PxFontSymbol"); }

		int tileID; /* REM */ 
		int xadvance; /* REM */ 
		int yoffset; /* REM */ 
		int xoffset; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace pxText

#endif /* INCLUDED_org_flixel_plugin_pxText_PxFontSymbol */ 
