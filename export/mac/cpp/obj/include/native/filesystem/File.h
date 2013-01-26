#ifndef INCLUDED_native_filesystem_File
#define INCLUDED_native_filesystem_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,filesystem,File)
namespace native{
namespace filesystem{


class File_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef File_obj OBJ_;
		File_obj();
		Void __construct(::String path);

	public:
		static hx::ObjectPtr< File_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~File_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("File"); }

		virtual ::String set_url( ::String inPath);
		Dynamic set_url_dyn();

		virtual ::String set_nativePath( ::String inPath);
		Dynamic set_nativePath_dyn();

		::String url; /* REM */ 
		::String nativePath; /* REM */ 
		static ::native::filesystem::File applicationDirectory; /* REM */ 
		static ::native::filesystem::File applicationStorageDirectory; /* REM */ 
		static ::native::filesystem::File desktopDirectory; /* REM */ 
		static ::native::filesystem::File documentsDirectory; /* REM */ 
		static ::native::filesystem::File userDirectory; /* REM */ 
		static int APP; /* REM */ 
		static int STORAGE; /* REM */ 
		static int DESKTOP; /* REM */ 
		static int DOCS; /* REM */ 
		static int USER; /* REM */ 
		static ::native::filesystem::File get_applicationDirectory( );
		static Dynamic get_applicationDirectory_dyn();

		static ::native::filesystem::File get_applicationStorageDirectory( );
		static Dynamic get_applicationStorageDirectory_dyn();

		static ::native::filesystem::File get_desktopDirectory( );
		static Dynamic get_desktopDirectory_dyn();

		static ::native::filesystem::File get_documentsDirectory( );
		static Dynamic get_documentsDirectory_dyn();

		static ::native::filesystem::File get_userDirectory( );
		static Dynamic get_userDirectory_dyn();

		static Dynamic nme_filesystem_get_special_dir; /* REM */ 
		static Dynamic &nme_filesystem_get_special_dir_dyn() { return nme_filesystem_get_special_dir;}
};

} // end namespace native
} // end namespace filesystem

#endif /* INCLUDED_native_filesystem_File */ 
