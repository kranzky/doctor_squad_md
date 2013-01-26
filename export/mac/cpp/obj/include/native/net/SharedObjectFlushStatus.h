#ifndef INCLUDED_native_net_SharedObjectFlushStatus
#define INCLUDED_native_net_SharedObjectFlushStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,net,SharedObjectFlushStatus)
namespace native{
namespace net{


class SharedObjectFlushStatus_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SharedObjectFlushStatus_obj OBJ_;

	public:
		SharedObjectFlushStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.net.SharedObjectFlushStatus"); }
		::String __ToString() const { return HX_CSTRING("SharedObjectFlushStatus.") + tag; }

		static ::native::net::SharedObjectFlushStatus FLUSHED;
		static inline ::native::net::SharedObjectFlushStatus FLUSHED_dyn() { return FLUSHED; }
		static ::native::net::SharedObjectFlushStatus PENDING;
		static inline ::native::net::SharedObjectFlushStatus PENDING_dyn() { return PENDING; }
};

} // end namespace native
} // end namespace net

#endif /* INCLUDED_native_net_SharedObjectFlushStatus */ 
