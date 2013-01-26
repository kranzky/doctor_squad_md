#ifndef INCLUDED_org_flixel_plugin_pxText_HelperSymbol
#define INCLUDED_org_flixel_plugin_pxText_HelperSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,plugin,pxText,HelperSymbol)
namespace org{
namespace flixel{
namespace plugin{
namespace pxText{


class HelperSymbol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HelperSymbol_obj OBJ_;
		HelperSymbol_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HelperSymbol_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HelperSymbol_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HelperSymbol"); }

		int charCode; /* REM */ 
		int xadvance; /* REM */ 
		int yoffset; /* REM */ 
		int xoffset; /* REM */ 
		int height; /* REM */ 
		int width; /* REM */ 
		int y; /* REM */ 
		int x; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace pxText

#endif /* INCLUDED_org_flixel_plugin_pxText_HelperSymbol */ 
