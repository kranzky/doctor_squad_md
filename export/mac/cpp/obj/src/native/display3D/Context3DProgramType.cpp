#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DProgramType
#include <native/display3D/Context3DProgramType.h>
#endif
namespace native{
namespace display3D{

::native::display3D::Context3DProgramType Context3DProgramType_obj::FRAGMENT;

::native::display3D::Context3DProgramType Context3DProgramType_obj::VERTEX;

HX_DEFINE_CREATE_ENUM(Context3DProgramType_obj)

int Context3DProgramType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FRAGMENT")) return 1;
	if (inName==HX_CSTRING("VERTEX")) return 0;
	return super::__FindIndex(inName);
}

int Context3DProgramType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FRAGMENT")) return 0;
	if (inName==HX_CSTRING("VERTEX")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DProgramType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FRAGMENT")) return FRAGMENT;
	if (inName==HX_CSTRING("VERTEX")) return VERTEX;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("VERTEX"),
	HX_CSTRING("FRAGMENT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DProgramType_obj::__mClass;

Dynamic __Create_Context3DProgramType_obj() { return new Context3DProgramType_obj; }

void Context3DProgramType_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DProgramType"), hx::TCanCast< Context3DProgramType_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DProgramType_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DProgramType_obj, sMarkStatics, sVisitStatic);
}

void Context3DProgramType_obj::__boot()
{
Static(FRAGMENT) = hx::CreateEnum< Context3DProgramType_obj >(HX_CSTRING("FRAGMENT"),1);
Static(VERTEX) = hx::CreateEnum< Context3DProgramType_obj >(HX_CSTRING("VERTEX"),0);
}


} // end namespace native
} // end namespace display3D
