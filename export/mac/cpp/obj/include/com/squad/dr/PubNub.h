#ifndef INCLUDED_com_squad_dr_PubNub
#define INCLUDED_com_squad_dr_PubNub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,squad,dr,PubNub)
HX_DECLARE_CLASS2(cpp,vm,Thread)
namespace com{
namespace squad{
namespace dr{


class PubNub_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PubNub_obj OBJ_;
		PubNub_obj();
		Void __construct(::String pub_key,::String sub_key,::String channel);

	public:
		static hx::ObjectPtr< PubNub_obj > __new(::String pub_key,::String sub_key,::String channel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PubNub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PubNub"); }

		virtual Void read( Dynamic notify);
		Dynamic read_dyn();

		virtual Void send( Dynamic object);
		Dynamic send_dyn();

		::String _pub_url; /* REM */ 
		::cpp::vm::Thread _sub_thread; /* REM */ 
		static ::cpp::vm::Thread _create_publisher( ::String base);
		static Dynamic _create_publisher_dyn();

		static ::cpp::vm::Thread _create_subscriber( ::String base);
		static Dynamic _create_subscriber_dyn();

};

} // end namespace com
} // end namespace squad
} // end namespace dr

#endif /* INCLUDED_com_squad_dr_PubNub */ 
