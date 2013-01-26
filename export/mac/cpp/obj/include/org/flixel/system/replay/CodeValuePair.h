#ifndef INCLUDED_org_flixel_system_replay_CodeValuePair
#define INCLUDED_org_flixel_system_replay_CodeValuePair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,replay,CodeValuePair)
namespace org{
namespace flixel{
namespace system{
namespace replay{


class CodeValuePair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CodeValuePair_obj OBJ_;
		CodeValuePair_obj();
		Void __construct(hx::Null< int >  __o_code,hx::Null< int >  __o_value);

	public:
		static hx::ObjectPtr< CodeValuePair_obj > __new(hx::Null< int >  __o_code,hx::Null< int >  __o_value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CodeValuePair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CodeValuePair"); }

		int value; /* REM */ 
		int code; /* REM */ 
		static ::org::flixel::system::replay::CodeValuePair convertFromFlashToCpp( ::org::flixel::system::replay::CodeValuePair pair);
		static Dynamic convertFromFlashToCpp_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_org_flixel_system_replay_CodeValuePair */ 
