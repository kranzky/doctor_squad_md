#ifndef INCLUDED_cpp_vm_Gc
#define INCLUDED_cpp_vm_Gc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Gc)
namespace cpp{
namespace vm{


class Gc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gc_obj OBJ_;
		Gc_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Gc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Gc_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Gc"); }

		static Void enable( bool inEnable);
		static Dynamic enable_dyn();

		static Void run( bool major);
		static Dynamic run_dyn();

		static Void compact( );
		static Dynamic compact_dyn();

		static int memUsage( );
		static Dynamic memUsage_dyn();

		static int trace( ::Class sought,hx::Null< bool >  printInstances);
		static Dynamic trace_dyn();

		static bool versionCheck( );
		static Dynamic versionCheck_dyn();

		static Void doNotKill( Dynamic inObject);
		static Dynamic doNotKill_dyn();

		static Dynamic getNextZombie( );
		static Dynamic getNextZombie_dyn();

		static Void safePoint( );
		static Dynamic safePoint_dyn();

		static Void enterGCFreeZone( );
		static Dynamic enterGCFreeZone_dyn();

		static Void exitGCFreeZone( );
		static Dynamic exitGCFreeZone_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Gc */ 
