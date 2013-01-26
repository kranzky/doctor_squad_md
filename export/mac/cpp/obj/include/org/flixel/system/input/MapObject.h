#ifndef INCLUDED_org_flixel_system_input_MapObject
#define INCLUDED_org_flixel_system_input_MapObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,input,MapObject)
namespace org{
namespace flixel{
namespace system{
namespace input{


class MapObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapObject_obj OBJ_;
		MapObject_obj();
		Void __construct(::String name,int current,int last);

	public:
		static hx::ObjectPtr< MapObject_obj > __new(::String name,int current,int last);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MapObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MapObject"); }

		int last; /* REM */ 
		int current; /* REM */ 
		::String name; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_MapObject */ 
