#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
namespace haxe{

Void Json_obj::__construct()
{
HX_STACK_PUSH("Json::new","/usr/lib/haxe/std/haxe/Json.hx",43);
{
}
;
	return null();
}

Json_obj::~Json_obj() { }

Dynamic Json_obj::__CreateEmpty() { return  new Json_obj; }
hx::ObjectPtr< Json_obj > Json_obj::__new()
{  hx::ObjectPtr< Json_obj > result = new Json_obj();
	result->__construct();
	return result;}

Dynamic Json_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Json_obj > result = new Json_obj();
	result->__construct();
	return result;}

::String Json_obj::parseString( ){
	HX_STACK_PUSH("Json::parseString","/usr/lib/haxe/std/haxe/Json.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_LINE(276)
	int start = this->pos;		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(277)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(278)
	while((true)){
		HX_STACK_LINE(279)
		int c = this->str.cca((this->pos)++);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(280)
		if (((c == (int)34))){
			HX_STACK_LINE(281)
			break;
		}
		HX_STACK_LINE(282)
		if (((c == (int)92))){
			HX_STACK_LINE(283)
			hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = this->str.substr(start,((this->pos - start) - (int)1));
			HX_STACK_LINE(284)
			c = this->str.cca((this->pos)++);
			HX_STACK_LINE(285)
			switch( (int)(c)){
				case (int)114: {
					HX_STACK_LINE(286)
					hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int)13);
				}
				;break;
				case (int)110: {
					HX_STACK_LINE(287)
					hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int)10);
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(288)
					hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int)9);
				}
				;break;
				case (int)98: {
					HX_STACK_LINE(289)
					hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int)8);
				}
				;break;
				case (int)102: {
					HX_STACK_LINE(290)
					hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int)12);
				}
				;break;
				case (int)47: case (int)92: case (int)34: {
					HX_STACK_LINE(291)
					hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode(c);
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(293)
					Dynamic uc = ::Std_obj::parseInt((HX_CSTRING("0x") + this->str.substr(this->pos,(int)4)));		HX_STACK_VAR(uc,"uc");
					HX_STACK_LINE(294)
					hx::AddEq(this->pos,(int)4);
					HX_STACK_LINE(296)
					if (((uc <= (int)127))){
						HX_STACK_LINE(297)
						int c1 = uc;		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(297)
						hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode(c1);
					}
					else{
						HX_STACK_LINE(298)
						if (((uc <= (int)2047))){
							HX_STACK_LINE(299)
							hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)192) | int((int(uc) >> int((int)6)))));
							HX_STACK_LINE(300)
							hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)128) | int((int(uc) & int((int)63)))));
						}
						else{
							HX_STACK_LINE(301)
							if (((uc <= (int)65535))){
								HX_STACK_LINE(302)
								hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)224) | int((int(uc) >> int((int)12)))));
								HX_STACK_LINE(303)
								hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)128) | int((int((int(uc) >> int((int)6))) & int((int)63)))));
								HX_STACK_LINE(304)
								hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)128) | int((int(uc) & int((int)63)))));
							}
							else{
								HX_STACK_LINE(306)
								hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)240) | int((int(uc) >> int((int)18)))));
								HX_STACK_LINE(307)
								hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)128) | int((int((int(uc) >> int((int)12))) & int((int)63)))));
								HX_STACK_LINE(308)
								hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)128) | int((int((int(uc) >> int((int)6))) & int((int)63)))));
								HX_STACK_LINE(309)
								hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode((int((int)128) | int((int(uc) & int((int)63)))));
							}
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(314)
					hx::Throw ((((HX_CSTRING("Invalid escape sequence \\") + ::String::fromCharCode(c)) + HX_CSTRING(" at position ")) + ((this->pos - (int)1))));
				}
			}
			HX_STACK_LINE(317)
			start = this->pos;
		}
		else{
			HX_STACK_LINE(321)
			if (((c >= (int)128))){
				HX_STACK_LINE(322)
				(this->pos)++;
				HX_STACK_LINE(323)
				if (((c >= (int)224))){
					HX_STACK_LINE(323)
					hx::AddEq(this->pos,((int)1 + ((int(c) & int((int)32)))));
				}
			}
			else{
				HX_STACK_LINE(326)
				if (((c == (int)0))){
					HX_STACK_LINE(327)
					hx::Throw (HX_CSTRING("Unclosed string"));
				}
			}
		}
	}
	HX_STACK_LINE(329)
	hx::IndexRef((buf->b).mPtr,buf->b->__Field(HX_CSTRING("length"),true)) = this->str.substr(start,((this->pos - start) - (int)1));
	HX_STACK_LINE(330)
	return buf->b->__Field(HX_CSTRING("join"),true)(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(Json_obj,parseString,return )

Dynamic Json_obj::parseRec( ){
	HX_STACK_PUSH("Json::parseRec","/usr/lib/haxe/std/haxe/Json.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_LINE(186)
	while((true)){
		HX_STACK_LINE(188)
		int c = this->str.cca((this->pos)++);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(189)
		switch( (int)(c)){
			case (int)32: case (int)13: case (int)10: case (int)9: {
			}
			;break;
			case (int)123: {
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_PUSH("*::closure","/usr/lib/haxe/std/haxe/Json.hx",193);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(193)
				Dynamic obj = _Function_3_1::Block();		HX_STACK_VAR(obj,"obj");
				::String field = null();		HX_STACK_VAR(field,"field");
				Dynamic comma = null();		HX_STACK_VAR(comma,"comma");
				HX_STACK_LINE(194)
				while((true)){
					HX_STACK_LINE(195)
					int c1 = this->str.cca((this->pos)++);		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(196)
					switch( (int)(c1)){
						case (int)32: case (int)13: case (int)10: case (int)9: {
						}
						;break;
						case (int)125: {
							HX_STACK_LINE(200)
							if (((bool((field != null())) || bool((comma == false))))){
								HX_STACK_LINE(201)
								this->invalidChar();
							}
							HX_STACK_LINE(202)
							return obj;
						}
						;break;
						case (int)58: {
							HX_STACK_LINE(204)
							if (((field == null()))){
								HX_STACK_LINE(205)
								this->invalidChar();
							}
							HX_STACK_LINE(206)
							if (((obj != null()))){
								HX_STACK_LINE(206)
								obj->__SetField(field,this->parseRec(),false);
							}
							HX_STACK_LINE(207)
							field = null();
							HX_STACK_LINE(208)
							comma = true;
						}
						;break;
						case (int)44: {
							HX_STACK_LINE(209)
							if ((comma)){
								HX_STACK_LINE(210)
								comma = false;
							}
							else{
								HX_STACK_LINE(210)
								this->invalidChar();
							}
						}
						;break;
						case (int)34: {
							HX_STACK_LINE(212)
							if ((comma)){
								HX_STACK_LINE(212)
								this->invalidChar();
							}
							HX_STACK_LINE(213)
							field = this->parseString();
						}
						;break;
						default: {
							HX_STACK_LINE(214)
							this->invalidChar();
						}
					}
				}
			}
			;break;
			case (int)91: {
				HX_STACK_LINE(219)
				Dynamic arr = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(arr,"arr");
				Dynamic comma = null();		HX_STACK_VAR(comma,"comma");
				HX_STACK_LINE(220)
				while((true)){
					HX_STACK_LINE(221)
					int c1 = this->str.cca((this->pos)++);		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(222)
					switch( (int)(c1)){
						case (int)32: case (int)13: case (int)10: case (int)9: {
						}
						;break;
						case (int)93: {
							HX_STACK_LINE(226)
							if (((comma == false))){
								HX_STACK_LINE(226)
								this->invalidChar();
							}
							HX_STACK_LINE(227)
							return arr;
						}
						;break;
						case (int)44: {
							HX_STACK_LINE(228)
							if ((comma)){
								HX_STACK_LINE(229)
								comma = false;
							}
							else{
								HX_STACK_LINE(229)
								this->invalidChar();
							}
						}
						;break;
						default: {
							HX_STACK_LINE(231)
							if ((comma)){
								HX_STACK_LINE(231)
								this->invalidChar();
							}
							HX_STACK_LINE(232)
							(this->pos)--;
							HX_STACK_LINE(233)
							arr->__Field(HX_CSTRING("push"),true)(this->parseRec());
							HX_STACK_LINE(234)
							comma = true;
						}
					}
				}
			}
			;break;
			case (int)116: {
				HX_STACK_LINE(238)
				int save = this->pos;		HX_STACK_VAR(save,"save");
				HX_STACK_LINE(239)
				if (((bool((bool((this->str.cca((this->pos)++) != (int)114)) || bool((this->str.cca((this->pos)++) != (int)117)))) || bool((this->str.cca((this->pos)++) != (int)101))))){
					HX_STACK_LINE(240)
					this->pos = save;
					HX_STACK_LINE(241)
					this->invalidChar();
				}
				HX_STACK_LINE(243)
				return true;
			}
			;break;
			case (int)102: {
				HX_STACK_LINE(245)
				int save = this->pos;		HX_STACK_VAR(save,"save");
				HX_STACK_LINE(246)
				if (((bool((bool((bool((this->str.cca((this->pos)++) != (int)97)) || bool((this->str.cca((this->pos)++) != (int)108)))) || bool((this->str.cca((this->pos)++) != (int)115)))) || bool((this->str.cca((this->pos)++) != (int)101))))){
					HX_STACK_LINE(247)
					this->pos = save;
					HX_STACK_LINE(248)
					this->invalidChar();
				}
				HX_STACK_LINE(250)
				return false;
			}
			;break;
			case (int)110: {
				HX_STACK_LINE(252)
				int save = this->pos;		HX_STACK_VAR(save,"save");
				HX_STACK_LINE(253)
				if (((bool((bool((this->str.cca((this->pos)++) != (int)117)) || bool((this->str.cca((this->pos)++) != (int)108)))) || bool((this->str.cca((this->pos)++) != (int)108))))){
					HX_STACK_LINE(254)
					this->pos = save;
					HX_STACK_LINE(255)
					this->invalidChar();
				}
				HX_STACK_LINE(257)
				return null();
			}
			;break;
			case (int)34: {
				HX_STACK_LINE(258)
				return this->parseString();
			}
			;break;
			case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: case (int)45: {
				HX_STACK_LINE(261)
				(this->pos)--;
				HX_STACK_LINE(262)
				if ((!(this->reg_float->match(this->str.substr(this->pos,null()))))){
					HX_STACK_LINE(263)
					hx::Throw ((HX_CSTRING("Invalid float at position ") + this->pos));
				}
				HX_STACK_LINE(264)
				::String v = this->reg_float->matched((int)0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(265)
				hx::AddEq(this->pos,v.length);
				HX_STACK_LINE(266)
				Float f = ::Std_obj::parseFloat(v);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(267)
				int i = ::Std_obj::_int(f);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(268)
				return (  (((i == f))) ? Float(i) : Float(f) );
			}
			;break;
			default: {
				HX_STACK_LINE(269)
				this->invalidChar();
			}
		}
	}
	HX_STACK_LINE(186)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Json_obj,parseRec,return )

int Json_obj::nextChar( ){
	HX_STACK_PUSH("Json::nextChar","/usr/lib/haxe/std/haxe/Json.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(182)
	return this->str.cca((this->pos)++);
}


HX_DEFINE_DYNAMIC_FUNC0(Json_obj,nextChar,return )

Void Json_obj::invalidChar( ){
{
		HX_STACK_PUSH("Json::invalidChar","/usr/lib/haxe/std/haxe/Json.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_LINE(178)
		(this->pos)--;
		HX_STACK_LINE(179)
		hx::Throw ((((HX_CSTRING("Invalid char ") + this->str.cca(this->pos)) + HX_CSTRING(" at position ")) + this->pos));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Json_obj,invalidChar,(void))

Dynamic Json_obj::doParse( ::String str){
	HX_STACK_PUSH("Json::doParse","/usr/lib/haxe/std/haxe/Json.hx",170);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_LINE(171)
	this->reg_float = ::EReg_obj::__new(HX_CSTRING("^-?(0|[1-9][0-9]*)(\\.[0-9]+)?([eE][+-]?[0-9]+)?"),HX_CSTRING(""));
	HX_STACK_LINE(172)
	this->str = str;
	HX_STACK_LINE(173)
	this->pos = (int)0;
	HX_STACK_LINE(174)
	return this->parseRec();
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,doParse,return )

Void Json_obj::quoteUtf8( ::String s){
{
		HX_STACK_PUSH("Json::quoteUtf8","/usr/lib/haxe/std/haxe/Json.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(152)
		Array< ::haxe::Utf8 > u = Array_obj< ::haxe::Utf8 >::__new().Add(::haxe::Utf8_obj::__new(null()));		HX_STACK_VAR(u,"u");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::haxe::Utf8 >,u)
		Void run(int c){
			HX_STACK_PUSH("*::_Function_1_1","/usr/lib/haxe/std/haxe/Json.hx",153);
			HX_STACK_ARG(c,"c");
			{
				HX_STACK_LINE(153)
				switch( (int)(c)){
					case (int)92: case (int)34: {
						HX_STACK_LINE(155)
						u->__get((int)0)->addChar((int)92);
						HX_STACK_LINE(155)
						u->__get((int)0)->addChar(c);
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(156)
						u->__get((int)0)->addChar((int)92);
						HX_STACK_LINE(156)
						u->__get((int)0)->addChar((int)110);
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(157)
						u->__get((int)0)->addChar((int)92);
						HX_STACK_LINE(157)
						u->__get((int)0)->addChar((int)114);
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(158)
						u->__get((int)0)->addChar((int)92);
						HX_STACK_LINE(158)
						u->__get((int)0)->addChar((int)116);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(159)
						u->__get((int)0)->addChar((int)92);
						HX_STACK_LINE(159)
						u->__get((int)0)->addChar((int)98);
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(160)
						u->__get((int)0)->addChar((int)92);
						HX_STACK_LINE(160)
						u->__get((int)0)->addChar((int)102);
					}
					;break;
					default: {
						HX_STACK_LINE(161)
						u->__get((int)0)->addChar(c);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(153)
		::haxe::Utf8_obj::iter(s, Dynamic(new _Function_1_1(u)));
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(164)
			hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\"");
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(165)
			hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = u->__get((int)0)->toString();
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(166)
			hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\"");
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,quoteUtf8,(void))

Void Json_obj::quote( ::String s){
{
		HX_STACK_PUSH("Json::quote","/usr/lib/haxe/std/haxe/Json.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(126)
		if (((s.length != ::haxe::Utf8_obj::length(s)))){
			HX_STACK_LINE(127)
			this->quoteUtf8(s);
			HX_STACK_LINE(128)
			return null();
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(131)
			hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\"");
		}
		HX_STACK_LINE(132)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(133)
		while((true)){
			HX_STACK_LINE(134)
			int c = s.cca((i)++);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(135)
			if (((c == (int)0))){
				HX_STACK_LINE(135)
				break;
			}
			HX_STACK_LINE(136)
			switch( (int)(c)){
				case (int)34: {
					HX_STACK_LINE(137)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(137)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\\\"");
				}
				;break;
				case (int)92: {
					HX_STACK_LINE(138)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(138)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\\\\");
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(139)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(139)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\\n");
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(140)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(140)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\\r");
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(141)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(141)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\\t");
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(142)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(142)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\\b");
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(143)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(143)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\\f");
				}
				;break;
				default: {
					HX_STACK_LINE(144)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(144)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = ::String::fromCharCode(c);
				}
			}
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(147)
			hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\"");
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,quote,(void))

Void Json_obj::toStringRec( Dynamic v){
{
		HX_STACK_PUSH("Json::toStringRec","/usr/lib/haxe/std/haxe/Json.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(77)
		{
			::ValueType _switch_1 = (::Type_obj::_typeof(v));
			switch((_switch_1)->GetIndex()){
				case 8: {
					HX_STACK_LINE(80)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(80)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\"???\"");
				}
				;break;
				case 4: {
					HX_STACK_LINE(81)
					this->objString(v);
				}
				;break;
				case 1: case 2: {
					HX_STACK_LINE(84)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(84)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = v;
				}
				;break;
				case 5: {
					HX_STACK_LINE(86)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("\"<fun>\"");
				}
				;break;
				case 6: {
					::Class c = _switch_1->__Param(0);
{
						HX_STACK_LINE(87)
						if (((c == hx::ClassOf< ::String >()))){
							HX_STACK_LINE(89)
							this->quote(v);
						}
						else{
							HX_STACK_LINE(90)
							if (((c == hx::ClassOf< Array<int> >()))){
								HX_STACK_LINE(91)
								Dynamic v1 = v;		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(92)
								{
									HX_STACK_LINE(92)
									::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(92)
									hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("[");
								}
								HX_STACK_LINE(93)
								int len = v1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(94)
								if (((len > (int)0))){
									HX_STACK_LINE(95)
									this->toStringRec(v1->__GetItem((int)0));
									HX_STACK_LINE(96)
									int i = (int)1;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(97)
									while(((i < len))){
										HX_STACK_LINE(98)
										{
											HX_STACK_LINE(98)
											::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(98)
											hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING(",");
										}
										HX_STACK_LINE(99)
										this->toStringRec(v1->__GetItem((i)++));
									}
								}
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(102)
									hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("]");
								}
							}
							else{
								HX_STACK_LINE(103)
								if (((c == hx::ClassOf< ::Hash >()))){
									HX_STACK_LINE(104)
									::Hash v1 = v;		HX_STACK_VAR(v1,"v1");
									struct _Function_5_1{
										inline static Dynamic Block( ){
											HX_STACK_PUSH("*::closure","/usr/lib/haxe/std/haxe/Json.hx",105);
											{
												hx::Anon __result = hx::Anon_obj::Create();
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(105)
									Dynamic o = _Function_5_1::Block();		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(106)
									for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(v1->keys());  __it->hasNext(); ){
										::String k = __it->next();
										if (((o != null()))){
											HX_STACK_LINE(107)
											o->__SetField(k,v1->get(k),false);
										}
;
									}
									HX_STACK_LINE(108)
									this->objString(o);
								}
								else{
									HX_STACK_LINE(113)
									this->objString(v);
								}
							}
						}
					}
				}
				;break;
				case 7: {
					::Enum e = _switch_1->__Param(0);
{
						HX_STACK_LINE(116)
						::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(116)
						hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = v->__Index();
					}
				}
				;break;
				case 3: {
					HX_STACK_LINE(118)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(118)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = (  ((v)) ? ::String(HX_CSTRING("true")) : ::String(HX_CSTRING("false")) );
				}
				;break;
				case 0: {
					HX_STACK_LINE(120)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(120)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("null");
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,toStringRec,(void))

Void Json_obj::objString( Dynamic v){
{
		HX_STACK_PUSH("Json::objString","/usr/lib/haxe/std/haxe/Json.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(73)
		this->fieldsString(v,::Reflect_obj::fields(v));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,objString,(void))

Void Json_obj::fieldsString( Dynamic v,Array< ::String > fields){
{
		HX_STACK_PUSH("Json::fieldsString","/usr/lib/haxe/std/haxe/Json.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(fields,"fields");
		HX_STACK_LINE(54)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(55)
			hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("{");
		}
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while(((_g < fields->length))){
				HX_STACK_LINE(56)
				::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(56)
				++(_g);
				HX_STACK_LINE(57)
				Dynamic value = ::Reflect_obj::field(v,f);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(58)
				if ((::Reflect_obj::isFunction(value))){
					HX_STACK_LINE(58)
					continue;
				}
				HX_STACK_LINE(59)
				if ((first)){
					HX_STACK_LINE(59)
					first = false;
				}
				else{
					HX_STACK_LINE(59)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(59)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING(",");
				}
				HX_STACK_LINE(60)
				this->quote(f);
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(61)
					hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING(":");
				}
				HX_STACK_LINE(62)
				this->toStringRec(value);
			}
		}
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::StringBuf _this = this->buf;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			hx::IndexRef((_this->b).mPtr,_this->b->__Field(HX_CSTRING("length"),true)) = HX_CSTRING("}");
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Json_obj,fieldsString,(void))

::String Json_obj::toString( Dynamic v){
	HX_STACK_PUSH("Json::toString","/usr/lib/haxe/std/haxe/Json.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(47)
	this->buf = ::StringBuf_obj::__new();
	HX_STACK_LINE(48)
	this->toStringRec(v);
	HX_STACK_LINE(49)
	return this->buf->b->__Field(HX_CSTRING("join"),true)(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,toString,return )

Dynamic Json_obj::parse( ::String text){
	HX_STACK_PUSH("Json::parse","/usr/lib/haxe/std/haxe/Json.hx",335);
	HX_STACK_ARG(text,"text");
	HX_STACK_LINE(335)
	return ::haxe::Json_obj::__new()->doParse(text);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Json_obj,parse,return )

::String Json_obj::stringify( Dynamic value){
	HX_STACK_PUSH("Json::stringify","/usr/lib/haxe/std/haxe/Json.hx",346);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(346)
	return ::haxe::Json_obj::__new()->toString(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Json_obj,stringify,return )


Json_obj::Json_obj()
{
}

void Json_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Json);
	HX_MARK_MEMBER_NAME(reg_float,"reg_float");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Json_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(reg_float,"reg_float");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(str,"str");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

Dynamic Json_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"str") ) { return str; }
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		if (HX_FIELD_EQ(inName,"quote") ) { return quote_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doParse") ) { return doParse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"parseRec") ) { return parseRec_dyn(); }
		if (HX_FIELD_EQ(inName,"nextChar") ) { return nextChar_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stringify") ) { return stringify_dyn(); }
		if (HX_FIELD_EQ(inName,"quoteUtf8") ) { return quoteUtf8_dyn(); }
		if (HX_FIELD_EQ(inName,"objString") ) { return objString_dyn(); }
		if (HX_FIELD_EQ(inName,"reg_float") ) { return reg_float; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseString") ) { return parseString_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return invalidChar_dyn(); }
		if (HX_FIELD_EQ(inName,"toStringRec") ) { return toStringRec_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fieldsString") ) { return fieldsString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Json_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"reg_float") ) { reg_float=inValue.Cast< ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Json_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("reg_float"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("str"));
	outFields->push(HX_CSTRING("buf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	HX_CSTRING("stringify"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("parseString"),
	HX_CSTRING("parseRec"),
	HX_CSTRING("nextChar"),
	HX_CSTRING("invalidChar"),
	HX_CSTRING("doParse"),
	HX_CSTRING("quoteUtf8"),
	HX_CSTRING("quote"),
	HX_CSTRING("toStringRec"),
	HX_CSTRING("objString"),
	HX_CSTRING("fieldsString"),
	HX_CSTRING("toString"),
	HX_CSTRING("reg_float"),
	HX_CSTRING("pos"),
	HX_CSTRING("str"),
	HX_CSTRING("buf"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Json_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Json_obj::__mClass,"__mClass");
};

Class Json_obj::__mClass;

void Json_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Json"), hx::TCanCast< Json_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Json_obj::__boot()
{
}

} // end namespace haxe
