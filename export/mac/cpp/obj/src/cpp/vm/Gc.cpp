#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
namespace cpp{
namespace vm{

Void Gc_obj::__construct()
{
	return null();
}

Gc_obj::~Gc_obj() { }

Dynamic Gc_obj::__CreateEmpty() { return  new Gc_obj; }
hx::ObjectPtr< Gc_obj > Gc_obj::__new()
{  hx::ObjectPtr< Gc_obj > result = new Gc_obj();
	result->__construct();
	return result;}

Dynamic Gc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gc_obj > result = new Gc_obj();
	result->__construct();
	return result;}

Void Gc_obj::enable( bool inEnable){
{
		HX_STACK_PUSH("Gc::enable","/usr/lib/haxe/std/cpp/vm/Gc.hx",6);
		HX_STACK_ARG(inEnable,"inEnable");
		HX_STACK_LINE(6)
		::__hxcpp_enable(inEnable);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,enable,(void))

Void Gc_obj::run( bool major){
{
		HX_STACK_PUSH("Gc::run","/usr/lib/haxe/std/cpp/vm/Gc.hx",11);
		HX_STACK_ARG(major,"major");
		HX_STACK_LINE(11)
		::__hxcpp_collect(major);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,run,(void))

Void Gc_obj::compact( ){
{
		HX_STACK_PUSH("Gc::compact","/usr/lib/haxe/std/cpp/vm/Gc.hx",16);
		HX_STACK_LINE(16)
		::__hxcpp_gc_compact();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,compact,(void))

int Gc_obj::memUsage( ){
	HX_STACK_PUSH("Gc::memUsage","/usr/lib/haxe/std/cpp/vm/Gc.hx",21);
	HX_STACK_LINE(21)
	return ::__hxcpp_gc_used_bytes();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,memUsage,return )

int Gc_obj::trace( ::Class sought,hx::Null< bool >  __o_printInstances){
bool printInstances = __o_printInstances.Default(true);
	HX_STACK_PUSH("Gc::trace","/usr/lib/haxe/std/cpp/vm/Gc.hx",26);
	HX_STACK_ARG(sought,"sought");
	HX_STACK_ARG(printInstances,"printInstances");
{
		HX_STACK_LINE(26)
		return ::__hxcpp_gc_trace(sought,printInstances);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gc_obj,trace,return )

bool Gc_obj::versionCheck( ){
	HX_STACK_PUSH("Gc::versionCheck","/usr/lib/haxe/std/cpp/vm/Gc.hx",30);
	HX_STACK_LINE(30)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,versionCheck,return )

Void Gc_obj::doNotKill( Dynamic inObject){
{
		HX_STACK_PUSH("Gc::doNotKill","/usr/lib/haxe/std/cpp/vm/Gc.hx",33);
		HX_STACK_ARG(inObject,"inObject");
		HX_STACK_LINE(33)
		::__hxcpp_gc_do_not_kill(inObject);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,doNotKill,(void))

Dynamic Gc_obj::getNextZombie( ){
	HX_STACK_PUSH("Gc::getNextZombie","/usr/lib/haxe/std/cpp/vm/Gc.hx",38);
	HX_STACK_LINE(38)
	return ::__hxcpp_get_next_zombie();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,getNextZombie,return )

Void Gc_obj::safePoint( ){
{
		HX_STACK_PUSH("Gc::safePoint","/usr/lib/haxe/std/cpp/vm/Gc.hx",43);
		HX_STACK_LINE(43)
		::__hxcpp_gc_safe_point();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,safePoint,(void))

Void Gc_obj::enterGCFreeZone( ){
{
		HX_STACK_PUSH("Gc::enterGCFreeZone","/usr/lib/haxe/std/cpp/vm/Gc.hx",48);
		HX_STACK_LINE(48)
		::__hxcpp_enter_gc_free_zone();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,enterGCFreeZone,(void))

Void Gc_obj::exitGCFreeZone( ){
{
		HX_STACK_PUSH("Gc::exitGCFreeZone","/usr/lib/haxe/std/cpp/vm/Gc.hx",53);
		HX_STACK_LINE(53)
		::__hxcpp_exit_gc_free_zone();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,exitGCFreeZone,(void))


Gc_obj::Gc_obj()
{
}

void Gc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gc);
	HX_MARK_END_CLASS();
}

void Gc_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Gc_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compact") ) { return compact_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"memUsage") ) { return memUsage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doNotKill") ) { return doNotKill_dyn(); }
		if (HX_FIELD_EQ(inName,"safePoint") ) { return safePoint_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"versionCheck") ) { return versionCheck_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getNextZombie") ) { return getNextZombie_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exitGCFreeZone") ) { return exitGCFreeZone_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enterGCFreeZone") ) { return enterGCFreeZone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Gc_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("enable"),
	HX_CSTRING("run"),
	HX_CSTRING("compact"),
	HX_CSTRING("memUsage"),
	HX_CSTRING("trace"),
	HX_CSTRING("versionCheck"),
	HX_CSTRING("doNotKill"),
	HX_CSTRING("getNextZombie"),
	HX_CSTRING("safePoint"),
	HX_CSTRING("enterGCFreeZone"),
	HX_CSTRING("exitGCFreeZone"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

Class Gc_obj::__mClass;

void Gc_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.Gc"), hx::TCanCast< Gc_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Gc_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
