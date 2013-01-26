#ifndef INCLUDED_org_flixel_system_input_JoyButton
#define INCLUDED_org_flixel_system_input_JoyButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,input,JoyButton)
namespace org{
namespace flixel{
namespace system{
namespace input{


class JoyButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JoyButton_obj OBJ_;
		JoyButton_obj();
		Void __construct(int id,hx::Null< int >  __o_current,hx::Null< int >  __o_last);

	public:
		static hx::ObjectPtr< JoyButton_obj > __new(int id,hx::Null< int >  __o_current,hx::Null< int >  __o_last);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JoyButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JoyButton"); }

		virtual Void reset( );
		Dynamic reset_dyn();

		int last; /* REM */ 
		int current; /* REM */ 
		int id; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_JoyButton */ 
