#include <hxcpp.h>

#ifndef INCLUDED_native_net_SharedObjectFlushStatus
#include <native/net/SharedObjectFlushStatus.h>
#endif
namespace native{
namespace net{

::native::net::SharedObjectFlushStatus SharedObjectFlushStatus_obj::FLUSHED;

::native::net::SharedObjectFlushStatus SharedObjectFlushStatus_obj::PENDING;

HX_DEFINE_CREATE_ENUM(SharedObjectFlushStatus_obj)

int SharedObjectFlushStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FLUSHED")) return 0;
	if (inName==HX_CSTRING("PENDING")) return 1;
	return super::__FindIndex(inName);
}

int SharedObjectFlushStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FLUSHED")) return 0;
	if (inName==HX_CSTRING("PENDING")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SharedObjectFlushStatus_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FLUSHED")) return FLUSHED;
	if (inName==HX_CSTRING("PENDING")) return PENDING;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FLUSHED"),
	HX_CSTRING("PENDING"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_obj::FLUSHED,"FLUSHED");
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_obj::PENDING,"PENDING");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_obj::FLUSHED,"FLUSHED");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_obj::PENDING,"PENDING");
};

static ::String sMemberFields[] = { ::String(null()) };
Class SharedObjectFlushStatus_obj::__mClass;

Dynamic __Create_SharedObjectFlushStatus_obj() { return new SharedObjectFlushStatus_obj; }

void SharedObjectFlushStatus_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.net.SharedObjectFlushStatus"), hx::TCanCast< SharedObjectFlushStatus_obj >,sStaticFields,sMemberFields,
	&__Create_SharedObjectFlushStatus_obj, &__Create,
	&super::__SGetClass(), &CreateSharedObjectFlushStatus_obj, sMarkStatics, sVisitStatic);
}

void SharedObjectFlushStatus_obj::__boot()
{
Static(FLUSHED) = hx::CreateEnum< SharedObjectFlushStatus_obj >(HX_CSTRING("FLUSHED"),0);
Static(PENDING) = hx::CreateEnum< SharedObjectFlushStatus_obj >(HX_CSTRING("PENDING"),1);
}


} // end namespace native
} // end namespace net
