#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxU
#include <org/flixel/FlxU.h>
#endif
namespace org{
namespace flixel{

Void FlxU_obj::__construct()
{
HX_STACK_PUSH("FlxU::new","org/flixel/FlxU.hx",14);
{
}
;
	return null();
}

FlxU_obj::~FlxU_obj() { }

Dynamic FlxU_obj::__CreateEmpty() { return  new FlxU_obj; }
hx::ObjectPtr< FlxU_obj > FlxU_obj::__new()
{  hx::ObjectPtr< FlxU_obj > result = new FlxU_obj();
	result->__construct();
	return result;}

Dynamic FlxU_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxU_obj > result = new FlxU_obj();
	result->__construct();
	return result;}

Void FlxU_obj::openURL( ::String URL){
{
		HX_STACK_PUSH("FlxU::openURL","org/flixel/FlxU.hx",22);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_LINE(22)
		::nme::Lib_obj::getURL(::native::net::URLRequest_obj::__new(URL),HX_CSTRING("_blank"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,openURL,(void))

Float FlxU_obj::abs( Float Value){
	HX_STACK_PUSH("FlxU::abs","org/flixel/FlxU.hx",32);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(32)
	return (  (((Value > (int)0))) ? Float(Value) : Float(-(Value)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,abs,return )

int FlxU_obj::floor( Float Value){
	HX_STACK_PUSH("FlxU::floor","org/flixel/FlxU.hx",42);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(43)
	int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
	HX_STACK_LINE(44)
	return (  (((Value > (int)0))) ? int(number) : int((  (((number != Value))) ? int((number - (int)1)) : int(number) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,floor,return )

int FlxU_obj::ceil( Float Value){
	HX_STACK_PUSH("FlxU::ceil","org/flixel/FlxU.hx",53);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(54)
	int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
	struct _Function_1_1{
		inline static int Block( int &number,Float &Value){
			HX_STACK_PUSH("*::closure","org/flixel/FlxU.hx",55);
			{
				HX_STACK_LINE(55)
				return (  (((number != Value))) ? int((number + (int)1)) : int(number) );
			}
			return null();
		}
	};
	HX_STACK_LINE(55)
	return (  (((Value > (int)0))) ? int(_Function_1_1::Block(number,Value)) : int(number) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,ceil,return )

int FlxU_obj::round( Float Value){
	HX_STACK_PUSH("FlxU::round","org/flixel/FlxU.hx",64);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(64)
	return ::Std_obj::_int((Value + ((  (((Value > (int)0))) ? Float(0.5) : Float(-0.5) ))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,round,return )

Float FlxU_obj::min( Float Number1,Float Number2){
	HX_STACK_PUSH("FlxU::min","org/flixel/FlxU.hx",75);
	HX_STACK_ARG(Number1,"Number1");
	HX_STACK_ARG(Number2,"Number2");
	HX_STACK_LINE(75)
	return (  (((Number1 <= Number2))) ? Float(Number1) : Float(Number2) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,min,return )

Float FlxU_obj::max( Float Number1,Float Number2){
	HX_STACK_PUSH("FlxU::max","org/flixel/FlxU.hx",86);
	HX_STACK_ARG(Number1,"Number1");
	HX_STACK_ARG(Number2,"Number2");
	HX_STACK_LINE(86)
	return (  (((Number1 >= Number2))) ? Float(Number1) : Float(Number2) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,max,return )

Float FlxU_obj::bound( Float Value,Float Min,Float Max){
	HX_STACK_PUSH("FlxU::bound","org/flixel/FlxU.hx",100);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(101)
	Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(102)
	return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxU_obj,bound,return )

Float FlxU_obj::srand( Float Seed){
	HX_STACK_PUSH("FlxU::srand","org/flixel/FlxU.hx",111);
	HX_STACK_ARG(Seed,"Seed");
	HX_STACK_LINE(111)
	return (Float(hx::Mod(((int)69621 * ::Std_obj::_int((Seed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,srand,return )

Dynamic FlxU_obj::shuffle( Dynamic Objects,int HowManyTimes){
	HX_STACK_PUSH("FlxU::shuffle","org/flixel/FlxU.hx",128);
	HX_STACK_ARG(Objects,"Objects");
	HX_STACK_ARG(HowManyTimes,"HowManyTimes");
	HX_STACK_LINE(129)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(130)
	int index1;		HX_STACK_VAR(index1,"index1");
	HX_STACK_LINE(131)
	int index2;		HX_STACK_VAR(index2,"index2");
	HX_STACK_LINE(132)
	Dynamic object;		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(133)
	while(((i < HowManyTimes))){
		HX_STACK_LINE(135)
		index1 = ::Math_obj::floor((::Math_obj::random() * Objects->__Field(HX_CSTRING("length"),true)));
		HX_STACK_LINE(136)
		index2 = ::Math_obj::floor((::Math_obj::random() * Objects->__Field(HX_CSTRING("length"),true)));
		HX_STACK_LINE(137)
		object = Objects->__GetItem(index2);
		HX_STACK_LINE(138)
		hx::IndexRef((Objects).mPtr,index2) = Objects->__GetItem(index1);
		HX_STACK_LINE(139)
		hx::IndexRef((Objects).mPtr,index1) = object;
		HX_STACK_LINE(140)
		(i)++;
	}
	HX_STACK_LINE(142)
	return Objects;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,shuffle,return )

Dynamic FlxU_obj::getRandom( Dynamic Objects,hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxU::getRandom","org/flixel/FlxU.hx",156);
	HX_STACK_ARG(Objects,"Objects");
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(157)
		Dynamic res = null();		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(158)
		if (((Objects != null()))){
			HX_STACK_LINE(160)
			if (((StartIndex < (int)0))){
				HX_STACK_LINE(160)
				StartIndex = (int)0;
			}
			HX_STACK_LINE(161)
			if (((Length < (int)0))){
				HX_STACK_LINE(161)
				Length = (int)0;
			}
			HX_STACK_LINE(163)
			int l = Length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(164)
			if (((bool((l == (int)0)) || bool((l > (Objects->__Field(HX_CSTRING("length"),true) - StartIndex)))))){
				HX_STACK_LINE(165)
				l = (Objects->__Field(HX_CSTRING("length"),true) - StartIndex);
			}
			HX_STACK_LINE(168)
			if (((l > (int)0))){
				HX_STACK_LINE(169)
				res = Objects->__GetItem((StartIndex + ::Std_obj::_int((::Math_obj::random() * l))));
			}
		}
		HX_STACK_LINE(173)
		return res;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxU_obj,getRandom,return )

int FlxU_obj::getTicks( ){
	HX_STACK_PUSH("FlxU::getTicks","org/flixel/FlxU.hx",182);
	HX_STACK_LINE(182)
	return ::native::Lib_obj::getTimer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxU_obj,getTicks,return )

::String FlxU_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_PUSH("FlxU::formatTicks","org/flixel/FlxU.hx",194);
	HX_STACK_ARG(StartTicks,"StartTicks");
	HX_STACK_ARG(EndTicks,"EndTicks");
	HX_STACK_LINE(194)
	return ((Float(::Math_obj::abs((EndTicks - StartTicks))) / Float((int)1000)) + HX_CSTRING("s"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,formatTicks,return )

int FlxU_obj::makeColor( int Red,int Green,int Blue,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxU::makeColor","org/flixel/FlxU.hx",213);
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(213)
		return (int((int((int((int(((int(::Math_obj::floor((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(Red) & int((int)255)))) << int((int)16))))) | int((int(((int(Green) & int((int)255)))) << int((int)8))))) | int((int(Blue) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxU_obj,makeColor,return )

int FlxU_obj::makeColorFromHSB( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxU::makeColorFromHSB","org/flixel/FlxU.hx",231);
	HX_STACK_ARG(Hue,"Hue");
	HX_STACK_ARG(Saturation,"Saturation");
	HX_STACK_ARG(Brightness,"Brightness");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(232)
		Float red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(233)
		Float green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(234)
		Float blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(235)
		if (((Saturation == 0.0))){
			HX_STACK_LINE(237)
			red = Brightness;
			HX_STACK_LINE(238)
			green = Brightness;
			HX_STACK_LINE(239)
			blue = Brightness;
		}
		else{
			HX_STACK_LINE(243)
			if (((Hue == (int)360))){
				HX_STACK_LINE(244)
				Hue = (int)0;
			}
			HX_STACK_LINE(247)
			int slice = ::Math_obj::floor((Float(Hue) / Float((int)60)));		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(248)
			Float hf = ((Float(Hue) / Float((int)60)) - slice);		HX_STACK_VAR(hf,"hf");
			HX_STACK_LINE(249)
			Float aa = (Brightness * (((int)1 - Saturation)));		HX_STACK_VAR(aa,"aa");
			HX_STACK_LINE(250)
			Float bb = (Brightness * (((int)1 - (Saturation * hf))));		HX_STACK_VAR(bb,"bb");
			HX_STACK_LINE(251)
			Float cc = (Brightness * (((int)1 - (Saturation * ((1.0 - hf))))));		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(252)
			switch( (int)(slice)){
				case (int)0: {
					HX_STACK_LINE(255)
					red = Brightness;
					HX_STACK_LINE(256)
					green = cc;
					HX_STACK_LINE(257)
					blue = aa;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(259)
					red = bb;
					HX_STACK_LINE(260)
					green = Brightness;
					HX_STACK_LINE(261)
					blue = aa;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(263)
					red = aa;
					HX_STACK_LINE(264)
					green = Brightness;
					HX_STACK_LINE(265)
					blue = cc;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(267)
					red = aa;
					HX_STACK_LINE(268)
					green = bb;
					HX_STACK_LINE(269)
					blue = Brightness;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(271)
					red = cc;
					HX_STACK_LINE(272)
					green = aa;
					HX_STACK_LINE(273)
					blue = Brightness;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(275)
					red = Brightness;
					HX_STACK_LINE(276)
					green = aa;
					HX_STACK_LINE(277)
					blue = bb;
				}
				;break;
				default: {
					HX_STACK_LINE(279)
					red = (int)0;
					HX_STACK_LINE(280)
					green = (int)0;
					HX_STACK_LINE(281)
					blue = (int)0;
				}
			}
		}
		HX_STACK_LINE(287)
		return (int((int((int((int(((int(::Math_obj::floor((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(::Math_obj::floor((red * (int)255))) << int((int)16))))) | int((int(::Math_obj::floor((green * (int)255))) << int((int)8))))) | int(::Math_obj::floor((blue * (int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxU_obj,makeColorFromHSB,return )

Array< Float > FlxU_obj::getRGBA( int Color,Array< Float > Results){
	HX_STACK_PUSH("FlxU::getRGBA","org/flixel/FlxU.hx",303);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(304)
	if (((Results == null()))){
		HX_STACK_LINE(305)
		Results = Array_obj< Float >::__new();
	}
	HX_STACK_LINE(308)
	Results[(int)0] = (int((int(Color) >> int((int)16))) & int((int)255));
	HX_STACK_LINE(309)
	Results[(int)1] = (int((int(Color) >> int((int)8))) & int((int)255));
	HX_STACK_LINE(310)
	Results[(int)2] = (int(Color) & int((int)255));
	HX_STACK_LINE(311)
	Results[(int)3] = (Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(312)
	return Results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,getRGBA,return )

Array< Float > FlxU_obj::getHSB( int Color,Array< Float > Results){
	HX_STACK_PUSH("FlxU::getHSB","org/flixel/FlxU.hx",328);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(329)
	if (((Results == null()))){
		HX_STACK_LINE(330)
		Results = Array_obj< Float >::__new();
	}
	HX_STACK_LINE(334)
	Float red = (Float(((int((int(Color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(335)
	Float green = (Float(((int((int(Color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(336)
	Float blue = (Float(((int(Color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(338)
	Float m = (  (((red > green))) ? Float(red) : Float(green) );		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(339)
	Float dmax = (  (((m > blue))) ? Float(m) : Float(blue) );		HX_STACK_VAR(dmax,"dmax");
	HX_STACK_LINE(340)
	m = (  (((red > green))) ? Float(green) : Float(red) );
	HX_STACK_LINE(341)
	Float dmin = (  (((m > blue))) ? Float(blue) : Float(m) );		HX_STACK_VAR(dmin,"dmin");
	HX_STACK_LINE(342)
	Float range = (dmax - dmin);		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(344)
	Results[(int)2] = dmax;
	HX_STACK_LINE(345)
	Results[(int)1] = (int)0;
	HX_STACK_LINE(346)
	Results[(int)0] = (int)0;
	HX_STACK_LINE(348)
	if (((dmax != (int)0))){
		HX_STACK_LINE(349)
		Results[(int)1] = (Float(range) / Float(dmax));
	}
	HX_STACK_LINE(352)
	if (((Results->__get((int)1) != (int)0))){
		HX_STACK_LINE(354)
		if (((red == dmax))){
			HX_STACK_LINE(355)
			Results[(int)0] = (Float(((green - blue))) / Float(range));
		}
		else{
			HX_STACK_LINE(358)
			if (((green == dmax))){
				HX_STACK_LINE(359)
				Results[(int)0] = ((int)2 + (Float(((blue - red))) / Float(range)));
			}
			else{
				HX_STACK_LINE(362)
				if (((blue == dmax))){
					HX_STACK_LINE(363)
					Results[(int)0] = ((int)4 + (Float(((red - green))) / Float(range)));
				}
			}
		}
		HX_STACK_LINE(366)
		hx::MultEq(Results[(int)0],(int)60);
		HX_STACK_LINE(367)
		if (((Results->__get((int)0) < (int)0))){
			HX_STACK_LINE(368)
			hx::AddEq(Results[(int)0],(int)360);
		}
	}
	HX_STACK_LINE(373)
	Results[(int)3] = (Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(374)
	return Results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,getHSB,return )

::String FlxU_obj::formatTime( int Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_PUSH("FlxU::formatTime","org/flixel/FlxU.hx",384);
	HX_STACK_ARG(Seconds,"Seconds");
	HX_STACK_ARG(ShowMS,"ShowMS");
{
		HX_STACK_LINE(385)
		::String timeString = (::Std_obj::_int((Float(Seconds) / Float((int)60))) + HX_CSTRING(":"));		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(386)
		int timeStringHelper = hx::Mod(::Std_obj::_int(Seconds),(int)60);		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(387)
		if (((timeStringHelper < (int)10))){
			HX_STACK_LINE(388)
			hx::AddEq(timeString,HX_CSTRING("0"));
		}
		HX_STACK_LINE(391)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(392)
		if ((ShowMS)){
			HX_STACK_LINE(394)
			hx::AddEq(timeString,HX_CSTRING("."));
			HX_STACK_LINE(395)
			timeStringHelper = (((Seconds - ::Std_obj::_int(Seconds))) * (int)100);
			HX_STACK_LINE(396)
			if (((timeStringHelper < (int)10))){
				HX_STACK_LINE(397)
				hx::AddEq(timeString,HX_CSTRING("0"));
			}
			HX_STACK_LINE(400)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(403)
		return timeString;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,formatTime,return )

::String FlxU_obj::formatArray( Dynamic AnyArray){
	HX_STACK_PUSH("FlxU::formatArray","org/flixel/FlxU.hx",413);
	HX_STACK_ARG(AnyArray,"AnyArray");
	HX_STACK_LINE(414)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(415)
	if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(417)
		string = ::Std_obj::string(AnyArray->__GetItem((int)0));
		HX_STACK_LINE(418)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(419)
		int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(420)
		while(((i < l))){
			HX_STACK_LINE(421)
			hx::AddEq(string,(HX_CSTRING(", ") + ::Std_obj::string(AnyArray->__GetItem((i)++))));
		}
	}
	HX_STACK_LINE(425)
	return string;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,formatArray,return )

::String FlxU_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_PUSH("FlxU::formatMoney","org/flixel/FlxU.hx",439);
	HX_STACK_ARG(Amount,"Amount");
	HX_STACK_ARG(ShowDecimal,"ShowDecimal");
	HX_STACK_ARG(EnglishStyle,"EnglishStyle");
{
		HX_STACK_LINE(440)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(441)
		int amount = ::Math_obj::floor(Amount);		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(442)
		::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(443)
		::String comma = HX_CSTRING("");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(444)
		::String zeroes = HX_CSTRING("");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(445)
		while(((amount > (int)0))){
			HX_STACK_LINE(447)
			if (((bool((string.length > (int)0)) && bool((comma.length <= (int)0))))){
				HX_STACK_LINE(448)
				if ((EnglishStyle)){
					HX_STACK_LINE(450)
					comma = HX_CSTRING(",");
				}
				else{
					HX_STACK_LINE(454)
					comma = HX_CSTRING(".");
				}
			}
			HX_STACK_LINE(458)
			zeroes = HX_CSTRING("");
			HX_STACK_LINE(459)
			helper = (amount - (::Math_obj::floor((Float(amount) / Float((int)1000))) * (int)1000));
			HX_STACK_LINE(460)
			amount = ::Math_obj::floor((Float(amount) / Float((int)1000)));
			HX_STACK_LINE(461)
			if (((amount > (int)0))){
				HX_STACK_LINE(463)
				if (((helper < (int)100))){
					HX_STACK_LINE(464)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
				HX_STACK_LINE(467)
				if (((helper < (int)10))){
					HX_STACK_LINE(468)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
			}
			HX_STACK_LINE(472)
			string = (((zeroes + helper) + comma) + string);
		}
		HX_STACK_LINE(474)
		if ((ShowDecimal)){
			HX_STACK_LINE(476)
			amount = (::Std_obj::_int((Amount * (int)100)) - (::Std_obj::_int(Amount) * (int)100));
			HX_STACK_LINE(477)
			hx::AddEq(string,(((  ((EnglishStyle)) ? ::String(HX_CSTRING(".")) : ::String(HX_CSTRING(",")) )) + amount));
			HX_STACK_LINE(478)
			if (((amount < (int)10))){
				HX_STACK_LINE(479)
				hx::AddEq(string,HX_CSTRING("0"));
			}
		}
		HX_STACK_LINE(483)
		return string;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxU_obj,formatMoney,return )

::String FlxU_obj::getClassName( Dynamic Obj,hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_PUSH("FlxU::getClassName","org/flixel/FlxU.hx",493);
	HX_STACK_ARG(Obj,"Obj");
	HX_STACK_ARG(Simple,"Simple");
{
		HX_STACK_LINE(494)
		::String s = ::Type_obj::getClassName(::Type_obj::getClass(Obj));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(495)
		if (((s != null()))){
			HX_STACK_LINE(497)
			s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
			HX_STACK_LINE(498)
			if ((Simple)){
				HX_STACK_LINE(499)
				s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
			}
		}
		HX_STACK_LINE(503)
		return s;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,getClassName,return )

bool FlxU_obj::compareClassNames( Dynamic Object1,Dynamic Object2){
	HX_STACK_PUSH("FlxU::compareClassNames","org/flixel/FlxU.hx",513);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(513)
	return (::Type_obj::getClassName(Object1) == ::Type_obj::getClassName(Object2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,compareClassNames,return )

::Class FlxU_obj::getClass( ::String Name){
	HX_STACK_PUSH("FlxU::getClass","org/flixel/FlxU.hx",523);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_LINE(523)
	return ::Type_obj::resolveClass(Name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxU_obj,getClass,return )

Float FlxU_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max){
	HX_STACK_PUSH("FlxU::computeVelocity","org/flixel/FlxU.hx",537);
	HX_STACK_ARG(Velocity,"Velocity");
	HX_STACK_ARG(Acceleration,"Acceleration");
	HX_STACK_ARG(Drag,"Drag");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(538)
	if (((Acceleration != (int)0))){
		HX_STACK_LINE(539)
		hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
	}
	else{
		HX_STACK_LINE(542)
		if (((Drag != (int)0))){
			HX_STACK_LINE(544)
			Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(545)
			if ((((Velocity - drag) > (int)0))){
				HX_STACK_LINE(546)
				Velocity = (Velocity - drag);
			}
			else{
				HX_STACK_LINE(549)
				if ((((Velocity + drag) < (int)0))){
					HX_STACK_LINE(550)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(554)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(558)
	if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
		HX_STACK_LINE(559)
		if (((Velocity > Max))){
			HX_STACK_LINE(561)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(564)
			if (((Velocity < -(Max)))){
				HX_STACK_LINE(565)
				Velocity = -(Max);
			}
		}
	}
	HX_STACK_LINE(569)
	return Velocity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxU_obj,computeVelocity,return )

::org::flixel::FlxPoint FlxU_obj::rotatePoint( Float X,Float Y,Float PivotX,Float PivotY,Float Angle,::org::flixel::FlxPoint point){
	HX_STACK_PUSH("FlxU::rotatePoint","org/flixel/FlxU.hx",585);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(PivotX,"PivotX");
	HX_STACK_ARG(PivotY,"PivotY");
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(586)
	Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(587)
	Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(588)
	Float radians = (Angle * -0.017453293);		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(589)
	while(((radians < -3.14159265))){
		HX_STACK_LINE(590)
		hx::AddEq(radians,6.28318531);
	}
	HX_STACK_LINE(593)
	while(((radians > 3.14159265))){
		HX_STACK_LINE(594)
		radians = (radians - 6.28318531);
	}
	HX_STACK_LINE(598)
	if (((radians < (int)0))){
		HX_STACK_LINE(600)
		sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
		HX_STACK_LINE(601)
		if (((sin < (int)0))){
			HX_STACK_LINE(602)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(606)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	else{
		HX_STACK_LINE(612)
		sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(613)
		if (((sin < (int)0))){
			HX_STACK_LINE(614)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(618)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	HX_STACK_LINE(623)
	hx::AddEq(radians,1.57079632);
	HX_STACK_LINE(624)
	if (((radians > 3.14159265))){
		HX_STACK_LINE(625)
		radians = (radians - 6.28318531);
	}
	HX_STACK_LINE(628)
	if (((radians < (int)0))){
		HX_STACK_LINE(630)
		cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
		HX_STACK_LINE(631)
		if (((cos < (int)0))){
			HX_STACK_LINE(632)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(636)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	else{
		HX_STACK_LINE(642)
		cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(643)
		if (((cos < (int)0))){
			HX_STACK_LINE(644)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(648)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	HX_STACK_LINE(653)
	Float dx = (X - PivotX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(656)
	Float dy = (Y - PivotY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(657)
	if (((point == null()))){
		HX_STACK_LINE(658)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(661)
	point->x = ((PivotX + (cos * dx)) - (sin * dy));
	HX_STACK_LINE(662)
	point->y = ((PivotY - (sin * dx)) - (cos * dy));
	HX_STACK_LINE(663)
	return point;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxU_obj,rotatePoint,return )

Float FlxU_obj::getAngle( ::org::flixel::FlxPoint Point1,::org::flixel::FlxPoint Point2){
	HX_STACK_PUSH("FlxU::getAngle","org/flixel/FlxU.hx",673);
	HX_STACK_ARG(Point1,"Point1");
	HX_STACK_ARG(Point2,"Point2");
	HX_STACK_LINE(674)
	Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(675)
	Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(676)
	Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(677)
	if (((bool((x != (int)0)) || bool((y != (int)0))))){
		HX_STACK_LINE(679)
		Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(680)
		Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(681)
		Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(682)
		if (((x >= (int)0))){
			HX_STACK_LINE(683)
			angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
		}
		else{
			HX_STACK_LINE(687)
			angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
		}
		HX_STACK_LINE(690)
		angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
		HX_STACK_LINE(691)
		if (((angle > (int)90))){
			HX_STACK_LINE(692)
			angle = (angle - (int)270);
		}
		else{
			HX_STACK_LINE(696)
			hx::AddEq(angle,(int)90);
		}
	}
	HX_STACK_LINE(701)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,getAngle,return )

Float FlxU_obj::getDistance( ::org::flixel::FlxPoint Point1,::org::flixel::FlxPoint Point2){
	HX_STACK_PUSH("FlxU::getDistance","org/flixel/FlxU.hx",711);
	HX_STACK_ARG(Point1,"Point1");
	HX_STACK_ARG(Point2,"Point2");
	HX_STACK_LINE(712)
	Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(713)
	Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(714)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,getDistance,return )

int FlxU_obj::ArrayIndexOf( Dynamic array,Dynamic whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxU::ArrayIndexOf","org/flixel/FlxU.hx",718);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(719)
		int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(720)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(721)
		{
			HX_STACK_LINE(721)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(721)
			while(((_g < len))){
				HX_STACK_LINE(721)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(723)
				if (((array->__GetItem(i) == whatToFind))){
					HX_STACK_LINE(724)
					index = i;
				}
			}
		}
		HX_STACK_LINE(728)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxU_obj,ArrayIndexOf,return )

Void FlxU_obj::SetArrayLength( Dynamic array,int newLength){
{
		HX_STACK_PUSH("FlxU::SetArrayLength","org/flixel/FlxU.hx",732);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(733)
		if (((newLength < (int)0))){
			HX_STACK_LINE(733)
			return null();
		}
		HX_STACK_LINE(734)
		int oldLength = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(735)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(736)
		if (((diff > (int)0))){
		}
		else{
			HX_STACK_LINE(743)
			if (((diff < (int)0))){
				HX_STACK_LINE(745)
				diff = -(diff);
				HX_STACK_LINE(746)
				{
					HX_STACK_LINE(746)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(746)
					while(((_g < diff))){
						HX_STACK_LINE(746)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(748)
						array->__Field(HX_CSTRING("pop"),true)();
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxU_obj,SetArrayLength,(void))

Float FlxU_obj::MIN_VALUE;

Float FlxU_obj::MAX_VALUE;


FlxU_obj::FlxU_obj()
{
}

void FlxU_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxU);
	HX_MARK_END_CLASS();
}

void FlxU_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxU_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"abs") ) { return abs_dyn(); }
		if (HX_FIELD_EQ(inName,"min") ) { return min_dyn(); }
		if (HX_FIELD_EQ(inName,"max") ) { return max_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"srand") ) { return srand_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getHSB") ) { return getHSB_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { return openURL_dyn(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		if (HX_FIELD_EQ(inName,"getRGBA") ) { return getRGBA_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTicks") ) { return getTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"makeColor") ) { return makeColor_dyn(); }
		if (HX_FIELD_EQ(inName,"MIN_VALUE") ) { return MIN_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VALUE") ) { return MAX_VALUE; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { return formatTime_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { return formatTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"formatArray") ) { return formatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { return formatMoney_dyn(); }
		if (HX_FIELD_EQ(inName,"rotatePoint") ) { return rotatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { return getClassName_dyn(); }
		if (HX_FIELD_EQ(inName,"ArrayIndexOf") ) { return ArrayIndexOf_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SetArrayLength") ) { return SetArrayLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { return computeVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"makeColorFromHSB") ) { return makeColorFromHSB_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"compareClassNames") ) { return compareClassNames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxU_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"MIN_VALUE") ) { MIN_VALUE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VALUE") ) { MAX_VALUE=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxU_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("openURL"),
	HX_CSTRING("abs"),
	HX_CSTRING("floor"),
	HX_CSTRING("ceil"),
	HX_CSTRING("round"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("bound"),
	HX_CSTRING("srand"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("getTicks"),
	HX_CSTRING("formatTicks"),
	HX_CSTRING("makeColor"),
	HX_CSTRING("makeColorFromHSB"),
	HX_CSTRING("getRGBA"),
	HX_CSTRING("getHSB"),
	HX_CSTRING("formatTime"),
	HX_CSTRING("formatArray"),
	HX_CSTRING("formatMoney"),
	HX_CSTRING("getClassName"),
	HX_CSTRING("compareClassNames"),
	HX_CSTRING("getClass"),
	HX_CSTRING("computeVelocity"),
	HX_CSTRING("rotatePoint"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("ArrayIndexOf"),
	HX_CSTRING("SetArrayLength"),
	HX_CSTRING("MIN_VALUE"),
	HX_CSTRING("MAX_VALUE"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxU_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxU_obj::MIN_VALUE,"MIN_VALUE");
	HX_MARK_MEMBER_NAME(FlxU_obj::MAX_VALUE,"MAX_VALUE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxU_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxU_obj::MIN_VALUE,"MIN_VALUE");
	HX_VISIT_MEMBER_NAME(FlxU_obj::MAX_VALUE,"MAX_VALUE");
};

Class FlxU_obj::__mClass;

void FlxU_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxU"), hx::TCanCast< FlxU_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxU_obj::__boot()
{
	MIN_VALUE= 5e-324;
	MAX_VALUE= 1.79e+308;
}

} // end namespace org
} // end namespace flixel
