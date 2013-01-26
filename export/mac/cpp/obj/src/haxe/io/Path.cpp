#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
namespace haxe{
namespace io{

Void Path_obj::__construct(::String path)
{
HX_STACK_PUSH("Path::new","/usr/lib/haxe/std/haxe/io/Path.hx",34);
{
	HX_STACK_LINE(35)
	int c1 = path.lastIndexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(36)
	int c2 = path.lastIndexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(37)
	if (((c1 < c2))){
		HX_STACK_LINE(38)
		this->dir = path.substr((int)0,c2);
		HX_STACK_LINE(39)
		path = path.substr((c2 + (int)1),null());
		HX_STACK_LINE(40)
		this->backslash = true;
	}
	else{
		HX_STACK_LINE(41)
		if (((c2 < c1))){
			HX_STACK_LINE(42)
			this->dir = path.substr((int)0,c1);
			HX_STACK_LINE(43)
			path = path.substr((c1 + (int)1),null());
		}
		else{
			HX_STACK_LINE(45)
			this->dir = null();
		}
	}
	HX_STACK_LINE(46)
	int cp = path.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(cp,"cp");
	HX_STACK_LINE(47)
	if (((cp != (int)-1))){
		HX_STACK_LINE(48)
		this->ext = path.substr((cp + (int)1),null());
		HX_STACK_LINE(49)
		this->file = path.substr((int)0,cp);
	}
	else{
		HX_STACK_LINE(51)
		this->ext = null();
		HX_STACK_LINE(52)
		this->file = path;
	}
}
;
	return null();
}

Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new(::String path)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(path);
	return result;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Path_obj::toString( ){
	HX_STACK_PUSH("Path::toString","/usr/lib/haxe/std/haxe/io/Path.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return ((((  (((this->dir == null()))) ? ::String(HX_CSTRING("")) : ::String((this->dir + ((  ((this->backslash)) ? ::String(HX_CSTRING("\\")) : ::String(HX_CSTRING("/")) )))) )) + this->file) + ((  (((this->ext == null()))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(".") + this->ext)) )));
}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toString,return )

::String Path_obj::withoutExtension( ::String path){
	HX_STACK_PUSH("Path::withoutExtension","/usr/lib/haxe/std/haxe/io/Path.hx",60);
	HX_STACK_ARG(path,"path");
	HX_STACK_LINE(61)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(62)
	s->ext = null();
	HX_STACK_LINE(63)
	return s->toString();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,withoutExtension,return )

::String Path_obj::withoutDirectory( ::String path){
	HX_STACK_PUSH("Path::withoutDirectory","/usr/lib/haxe/std/haxe/io/Path.hx",66);
	HX_STACK_ARG(path,"path");
	HX_STACK_LINE(67)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(68)
	s->dir = null();
	HX_STACK_LINE(69)
	return s->toString();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,withoutDirectory,return )

::String Path_obj::directory( ::String path){
	HX_STACK_PUSH("Path::directory","/usr/lib/haxe/std/haxe/io/Path.hx",72);
	HX_STACK_ARG(path,"path");
	HX_STACK_LINE(73)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(74)
	if (((s->dir == null()))){
		HX_STACK_LINE(75)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(76)
	return s->dir;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,directory,return )

::String Path_obj::extension( ::String path){
	HX_STACK_PUSH("Path::extension","/usr/lib/haxe/std/haxe/io/Path.hx",79);
	HX_STACK_ARG(path,"path");
	HX_STACK_LINE(80)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(81)
	if (((s->ext == null()))){
		HX_STACK_LINE(82)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(83)
	return s->ext;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,extension,return )

::String Path_obj::withExtension( ::String path,::String ext){
	HX_STACK_PUSH("Path::withExtension","/usr/lib/haxe/std/haxe/io/Path.hx",86);
	HX_STACK_ARG(path,"path");
	HX_STACK_ARG(ext,"ext");
	HX_STACK_LINE(87)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(88)
	s->ext = ext;
	HX_STACK_LINE(89)
	return s->toString();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Path_obj,withExtension,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(ext,"ext");
}

Dynamic Path_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		if (HX_FIELD_EQ(inName,"ext") ) { return ext; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { return directory_dyn(); }
		if (HX_FIELD_EQ(inName,"extension") ) { return extension_dyn(); }
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"withExtension") ) { return withExtension_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"withoutExtension") ) { return withoutExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"withoutDirectory") ) { return withoutDirectory_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Path_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("backslash"));
	outFields->push(HX_CSTRING("file"));
	outFields->push(HX_CSTRING("dir"));
	outFields->push(HX_CSTRING("ext"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("withoutExtension"),
	HX_CSTRING("withoutDirectory"),
	HX_CSTRING("directory"),
	HX_CSTRING("extension"),
	HX_CSTRING("withExtension"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("backslash"),
	HX_CSTRING("file"),
	HX_CSTRING("dir"),
	HX_CSTRING("ext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

Class Path_obj::__mClass;

void Path_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Path"), hx::TCanCast< Path_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Path_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
