#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
namespace haxe{

Void Utf8_obj::__construct(Dynamic size)
{
HX_STACK_PUSH("Utf8::new","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",8);
{
	HX_STACK_LINE(9)
	this->__s = Array_obj< int >::__new();
	HX_STACK_LINE(10)
	if (((bool((size != null())) && bool((size > (int)0))))){
		HX_STACK_LINE(11)
		this->__s[(size - (int)1)] = (int)0;
	}
}
;
	return null();
}

Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new(Dynamic size)
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct(size);
	return result;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Utf8_obj::toString( ){
	HX_STACK_PUSH("Utf8::toString","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",18);
	HX_STACK_THIS(this);
	HX_STACK_LINE(18)
	return ::__hxcpp_char_array_to_utf8_string(this->__s);
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toString,return )

Void Utf8_obj::addChar( int c){
{
		HX_STACK_PUSH("Utf8::addChar","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",14);
		HX_STACK_THIS(this);
		HX_STACK_ARG(c,"c");
		HX_STACK_LINE(14)
		this->__s->push(c);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,addChar,(void))

::String Utf8_obj::encode( ::String s){
	HX_STACK_PUSH("Utf8::encode","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",24);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(24)
	return ::__hxcpp_char_bytes_to_utf8_string(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,encode,return )

::String Utf8_obj::decode( ::String s){
	HX_STACK_PUSH("Utf8::decode","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",30);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(30)
	return ::__hxcpp_utf8_string_to_char_bytes(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,decode,return )

Void Utf8_obj::iter( ::String s,Dynamic chars){
{
		HX_STACK_PUSH("Utf8::iter","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",34);
		HX_STACK_ARG(s,"s");
		HX_STACK_ARG(chars,"chars");
		HX_STACK_LINE(35)
		Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			while(((_g < array->length))){
				HX_STACK_LINE(36)
				int a = array->__get(_g);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(36)
				++(_g);
				HX_STACK_LINE(37)
				chars(a).Cast< Void >();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,iter,(void))

int Utf8_obj::charCodeAt( ::String s,int index){
	HX_STACK_PUSH("Utf8::charCodeAt","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",40);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(41)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(42)
	return array->__get(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,charCodeAt,return )

bool Utf8_obj::validate( ::String s){
	HX_STACK_PUSH("Utf8::validate","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",45);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(46)
	try{
		HX_STACK_LINE(47)
		::__hxcpp_utf8_string_to_char_array(s);
		HX_STACK_LINE(48)
		return true;
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(50)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,validate,return )

int Utf8_obj::length( ::String s){
	HX_STACK_PUSH("Utf8::length","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",53);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(54)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(55)
	return array->length;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )

int Utf8_obj::compare( ::String a,::String b){
	HX_STACK_PUSH("Utf8::compare","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",58);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(59)
	Array< int > a_ = ::__hxcpp_utf8_string_to_char_array(a);		HX_STACK_VAR(a_,"a_");
	HX_STACK_LINE(60)
	Array< int > b_ = ::__hxcpp_utf8_string_to_char_array(b);		HX_STACK_VAR(b_,"b_");
	HX_STACK_LINE(61)
	int min = (  (((a_->length < b_->length))) ? int(a_->length) : int(b_->length) );		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		while(((_g < min))){
			HX_STACK_LINE(62)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(64)
			if (((a_->__get(i) < b_->__get(i)))){
				HX_STACK_LINE(64)
				return (int)-1;
			}
			HX_STACK_LINE(65)
			if (((a_->__get(i) > b_->__get(i)))){
				HX_STACK_LINE(65)
				return (int)1;
			}
		}
	}
	HX_STACK_LINE(67)
	return (  (((a_->length == b_->length))) ? int((int)0) : int((  (((a_->length < b_->length))) ? int((int)-1) : int((int)1) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,compare,return )

::String Utf8_obj::sub( ::String s,int pos,int len){
	HX_STACK_PUSH("Utf8::sub","/usr/lib/haxe/std/cpp/_std/haxe/Utf8.hx",70);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_ARG(len,"len");
	HX_STACK_LINE(71)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(72)
	Array< int > sub = array->slice(pos,len);		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(73)
	return ::__hxcpp_char_array_to_utf8_string(sub);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_obj,sub,return )


Utf8_obj::Utf8_obj()
{
}

void Utf8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utf8);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void Utf8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

Dynamic Utf8_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"__s") ) { return __s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { return iter_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"addChar") ) { return addChar_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { return charCodeAt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utf8_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("encode"),
	HX_CSTRING("decode"),
	HX_CSTRING("iter"),
	HX_CSTRING("charCodeAt"),
	HX_CSTRING("validate"),
	HX_CSTRING("length"),
	HX_CSTRING("compare"),
	HX_CSTRING("sub"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("addChar"),
	HX_CSTRING("__s"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

Class Utf8_obj::__mClass;

void Utf8_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Utf8"), hx::TCanCast< Utf8_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Utf8_obj::__boot()
{
}

} // end namespace haxe
