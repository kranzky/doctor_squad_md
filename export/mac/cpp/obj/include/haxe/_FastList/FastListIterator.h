#ifndef INCLUDED_haxe__FastList_FastListIterator
#define INCLUDED_haxe__FastList_FastListIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cpp/FastIterator.h>
HX_DECLARE_CLASS1(haxe,FastCell)
HX_DECLARE_CLASS2(haxe,_FastList,FastListIterator)
namespace haxe{
namespace _FastList{


class FastListIterator_obj : public ::cpp::FastIterator_obj< Dynamic >{
	public:
		typedef ::cpp::FastIterator_obj< Dynamic > super;
		typedef FastListIterator_obj OBJ_;
		FastListIterator_obj();
		Void __construct(::haxe::FastCell head);

	public:
		static hx::ObjectPtr< FastListIterator_obj > __new(::haxe::FastCell head);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FastListIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FastListIterator"); }

		virtual Dynamic next( );

		virtual bool hasNext( );

		::haxe::FastCell current; /* REM */ 
};

} // end namespace haxe
} // end namespace _FastList

#endif /* INCLUDED_haxe__FastList_FastListIterator */ 
