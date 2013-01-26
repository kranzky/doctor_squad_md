#ifndef INCLUDED_haxe_io_Path
#define INCLUDED_haxe_io_Path

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Path)
namespace haxe{
namespace io{


class Path_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Path_obj OBJ_;
		Path_obj();
		Void __construct(::String path);

	public:
		static hx::ObjectPtr< Path_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Path_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Path"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		bool backslash; /* REM */ 
		::String file; /* REM */ 
		::String dir; /* REM */ 
		::String ext; /* REM */ 
		static ::String withoutExtension( ::String path);
		static Dynamic withoutExtension_dyn();

		static ::String withoutDirectory( ::String path);
		static Dynamic withoutDirectory_dyn();

		static ::String directory( ::String path);
		static Dynamic directory_dyn();

		static ::String extension( ::String path);
		static Dynamic extension_dyn();

		static ::String withExtension( ::String path,::String ext);
		static Dynamic withExtension_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Path */ 
