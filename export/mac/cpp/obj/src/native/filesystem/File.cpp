#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_filesystem_File
#include <native/filesystem/File.h>
#endif
namespace native{
namespace filesystem{

Void File_obj::__construct(::String path)
{
HX_STACK_PUSH("File::new","native/filesystem/File.hx",31);
{
	HX_STACK_LINE(33)
	this->set_url(path);
	HX_STACK_LINE(34)
	this->set_nativePath(path);
}
;
	return null();
}

File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new(::String path)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(path);
	return result;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(inArgs[0]);
	return result;}

::String File_obj::set_url( ::String inPath){
	HX_STACK_PUSH("File::set_url","native/filesystem/File.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inPath,"inPath");
	HX_STACK_LINE(63)
	if (((inPath == null()))){
		HX_STACK_LINE(63)
		this->url = null();
	}
	else{
		HX_STACK_LINE(69)
		this->url = ::StringTools_obj::replace(inPath,HX_CSTRING(" "),HX_CSTRING("%20"));
		HX_STACK_LINE(79)
		this->url = (HX_CSTRING("file:") + this->url);
	}
	HX_STACK_LINE(85)
	return this->url;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_url,return )

::String File_obj::set_nativePath( ::String inPath){
	HX_STACK_PUSH("File::set_nativePath","native/filesystem/File.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inPath,"inPath");
	HX_STACK_LINE(55)
	this->nativePath = inPath;
	HX_STACK_LINE(56)
	return this->nativePath;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_nativePath,return )

::native::filesystem::File File_obj::applicationDirectory;

::native::filesystem::File File_obj::applicationStorageDirectory;

::native::filesystem::File File_obj::desktopDirectory;

::native::filesystem::File File_obj::documentsDirectory;

::native::filesystem::File File_obj::userDirectory;

int File_obj::APP;

int File_obj::STORAGE;

int File_obj::DESKTOP;

int File_obj::DOCS;

int File_obj::USER;

::native::filesystem::File File_obj::get_applicationDirectory( ){
	HX_STACK_PUSH("File::get_applicationDirectory","native/filesystem/File.hx",46);
	HX_STACK_LINE(46)
	return ::native::filesystem::File_obj::__new(::native::filesystem::File_obj::nme_filesystem_get_special_dir((int)0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationDirectory,return )

::native::filesystem::File File_obj::get_applicationStorageDirectory( ){
	HX_STACK_PUSH("File::get_applicationStorageDirectory","native/filesystem/File.hx",47);
	HX_STACK_LINE(47)
	return ::native::filesystem::File_obj::__new(::native::filesystem::File_obj::nme_filesystem_get_special_dir((int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationStorageDirectory,return )

::native::filesystem::File File_obj::get_desktopDirectory( ){
	HX_STACK_PUSH("File::get_desktopDirectory","native/filesystem/File.hx",48);
	HX_STACK_LINE(48)
	return ::native::filesystem::File_obj::__new(::native::filesystem::File_obj::nme_filesystem_get_special_dir((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_desktopDirectory,return )

::native::filesystem::File File_obj::get_documentsDirectory( ){
	HX_STACK_PUSH("File::get_documentsDirectory","native/filesystem/File.hx",49);
	HX_STACK_LINE(49)
	return ::native::filesystem::File_obj::__new(::native::filesystem::File_obj::nme_filesystem_get_special_dir((int)3));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_documentsDirectory,return )

::native::filesystem::File File_obj::get_userDirectory( ){
	HX_STACK_PUSH("File::get_userDirectory","native/filesystem/File.hx",50);
	HX_STACK_LINE(50)
	return ::native::filesystem::File_obj::__new(::native::filesystem::File_obj::nme_filesystem_get_special_dir((int)4));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_userDirectory,return )

Dynamic File_obj::nme_filesystem_get_special_dir;


File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(nativePath,"nativePath");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(nativePath,"nativePath");
}

Dynamic File_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"APP") ) { return APP; }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOCS") ) { return DOCS; }
		if (HX_FIELD_EQ(inName,"USER") ) { return USER; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"STORAGE") ) { return STORAGE; }
		if (HX_FIELD_EQ(inName,"DESKTOP") ) { return DESKTOP; }
		if (HX_FIELD_EQ(inName,"set_url") ) { return set_url_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { return nativePath; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { return inCallProp ? get_userDirectory() : userDirectory; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_nativePath") ) { return set_nativePath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { return inCallProp ? get_desktopDirectory() : desktopDirectory; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { return get_userDirectory_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { return inCallProp ? get_documentsDirectory() : documentsDirectory; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { return inCallProp ? get_applicationDirectory() : applicationDirectory; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { return get_desktopDirectory_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { return get_documentsDirectory_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { return get_applicationDirectory_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { return inCallProp ? get_applicationStorageDirectory() : applicationStorageDirectory; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_filesystem_get_special_dir") ) { return nme_filesystem_get_special_dir; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { return get_applicationStorageDirectory_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic File_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"APP") ) { APP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp) return set_url(inValue);url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOCS") ) { DOCS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"USER") ) { USER=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"STORAGE") ) { STORAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DESKTOP") ) { DESKTOP=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp) return set_nativePath(inValue);nativePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=inValue.Cast< ::native::filesystem::File >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=inValue.Cast< ::native::filesystem::File >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=inValue.Cast< ::native::filesystem::File >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=inValue.Cast< ::native::filesystem::File >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=inValue.Cast< ::native::filesystem::File >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_filesystem_get_special_dir") ) { nme_filesystem_get_special_dir=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("nativePath"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("applicationDirectory"),
	HX_CSTRING("applicationStorageDirectory"),
	HX_CSTRING("desktopDirectory"),
	HX_CSTRING("documentsDirectory"),
	HX_CSTRING("userDirectory"),
	HX_CSTRING("APP"),
	HX_CSTRING("STORAGE"),
	HX_CSTRING("DESKTOP"),
	HX_CSTRING("DOCS"),
	HX_CSTRING("USER"),
	HX_CSTRING("get_applicationDirectory"),
	HX_CSTRING("get_applicationStorageDirectory"),
	HX_CSTRING("get_desktopDirectory"),
	HX_CSTRING("get_documentsDirectory"),
	HX_CSTRING("get_userDirectory"),
	HX_CSTRING("nme_filesystem_get_special_dir"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_url"),
	HX_CSTRING("set_nativePath"),
	HX_CSTRING("url"),
	HX_CSTRING("nativePath"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(File_obj::APP,"APP");
	HX_MARK_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_MARK_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_MARK_MEMBER_NAME(File_obj::USER,"USER");
	HX_MARK_MEMBER_NAME(File_obj::nme_filesystem_get_special_dir,"nme_filesystem_get_special_dir");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::APP,"APP");
	HX_VISIT_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_VISIT_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_VISIT_MEMBER_NAME(File_obj::USER,"USER");
	HX_VISIT_MEMBER_NAME(File_obj::nme_filesystem_get_special_dir,"nme_filesystem_get_special_dir");
};

Class File_obj::__mClass;

void File_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.filesystem.File"), hx::TCanCast< File_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void File_obj::__boot()
{
	APP= (int)0;
	STORAGE= (int)1;
	DESKTOP= (int)2;
	DOCS= (int)3;
	USER= (int)4;
	nme_filesystem_get_special_dir= ::native::Loader_obj::load(HX_CSTRING("nme_filesystem_get_special_dir"),(int)1);
}

} // end namespace native
} // end namespace filesystem
