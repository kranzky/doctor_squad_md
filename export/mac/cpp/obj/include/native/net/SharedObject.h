#ifndef INCLUDED_native_net_SharedObject
#define INCLUDED_native_net_SharedObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,net,SharedObject)
HX_DECLARE_CLASS2(native,net,SharedObjectFlushStatus)
namespace native{
namespace net{


class SharedObject_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef SharedObject_obj OBJ_;
		SharedObject_obj();
		Void __construct(::String name,::String localPath,Dynamic data);

	public:
		static hx::ObjectPtr< SharedObject_obj > __new(::String name,::String localPath,Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SharedObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SharedObject"); }

		virtual ::native::net::SharedObjectFlushStatus flush( hx::Null< int >  minDiskSpace);
		Dynamic flush_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		::String name; /* REM */ 
		::String localPath; /* REM */ 
		Dynamic data; /* REM */ 
		static Void mkdir( ::String directory);
		static Dynamic mkdir_dyn();

		static ::String getFilePath( ::String name,::String localPath);
		static Dynamic getFilePath_dyn();

		static ::native::net::SharedObject getLocal( ::String name,::String localPath,hx::Null< bool >  secure);
		static Dynamic getLocal_dyn();

		static ::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

};

} // end namespace native
} // end namespace net

#endif /* INCLUDED_native_net_SharedObject */ 
