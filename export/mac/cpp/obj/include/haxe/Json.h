#ifndef INCLUDED_haxe_Json
#define INCLUDED_haxe_Json

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,Json)
namespace haxe{


class Json_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Json_obj OBJ_;
		Json_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Json_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Json_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Json"); }

		virtual ::String parseString( );
		Dynamic parseString_dyn();

		virtual Dynamic parseRec( );
		Dynamic parseRec_dyn();

		virtual int nextChar( );
		Dynamic nextChar_dyn();

		virtual Void invalidChar( );
		Dynamic invalidChar_dyn();

		virtual Dynamic doParse( ::String str);
		Dynamic doParse_dyn();

		virtual Void quoteUtf8( ::String s);
		Dynamic quoteUtf8_dyn();

		virtual Void quote( ::String s);
		Dynamic quote_dyn();

		virtual Void toStringRec( Dynamic v);
		Dynamic toStringRec_dyn();

		virtual Void objString( Dynamic v);
		Dynamic objString_dyn();

		virtual Void fieldsString( Dynamic v,Array< ::String > fields);
		Dynamic fieldsString_dyn();

		virtual ::String toString( Dynamic v);
		Dynamic toString_dyn();

		::EReg reg_float; /* REM */ 
		int pos; /* REM */ 
		::String str; /* REM */ 
		::StringBuf buf; /* REM */ 
		static Dynamic parse( ::String text);
		static Dynamic parse_dyn();

		static ::String stringify( Dynamic value);
		static Dynamic stringify_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Json */ 
