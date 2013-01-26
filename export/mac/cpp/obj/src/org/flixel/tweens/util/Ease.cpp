#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_util_Ease
#include <org/flixel/tweens/util/Ease.h>
#endif
namespace org{
namespace flixel{
namespace tweens{
namespace util{

Void Ease_obj::__construct()
{
	return null();
}

Ease_obj::~Ease_obj() { }

Dynamic Ease_obj::__CreateEmpty() { return  new Ease_obj; }
hx::ObjectPtr< Ease_obj > Ease_obj::__new()
{  hx::ObjectPtr< Ease_obj > result = new Ease_obj();
	result->__construct();
	return result;}

Dynamic Ease_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ease_obj > result = new Ease_obj();
	result->__construct();
	return result;}

Float Ease_obj::quadIn( Float t){
	HX_STACK_PUSH("Ease::quadIn","org/flixel/tweens/util/Ease.hx",12);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(12)
	return (t * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadIn,return )

Float Ease_obj::quadOut( Float t){
	HX_STACK_PUSH("Ease::quadOut","org/flixel/tweens/util/Ease.hx",18);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(18)
	return (-(t) * ((t - (int)2)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadOut,return )

Float Ease_obj::quadInOut( Float t){
	HX_STACK_PUSH("Ease::quadInOut","org/flixel/tweens/util/Ease.hx",24);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(24)
	return (  (((t <= .5))) ? Float(((t * t) * (int)2)) : Float(((int)1 - ((--(t) * t) * (int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadInOut,return )

Float Ease_obj::cubeIn( Float t){
	HX_STACK_PUSH("Ease::cubeIn","org/flixel/tweens/util/Ease.hx",30);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(30)
	return ((t * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeIn,return )

Float Ease_obj::cubeOut( Float t){
	HX_STACK_PUSH("Ease::cubeOut","org/flixel/tweens/util/Ease.hx",36);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(36)
	return ((int)1 + ((--(t) * t) * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeOut,return )

Float Ease_obj::cubeInOut( Float t){
	HX_STACK_PUSH("Ease::cubeInOut","org/flixel/tweens/util/Ease.hx",42);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(42)
	return (  (((t <= .5))) ? Float((((t * t) * t) * (int)4)) : Float(((int)1 + (((--(t) * t) * t) * (int)4))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeInOut,return )

Float Ease_obj::quartIn( Float t){
	HX_STACK_PUSH("Ease::quartIn","org/flixel/tweens/util/Ease.hx",48);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(48)
	return (((t * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartIn,return )

Float Ease_obj::quartOut( Float t){
	HX_STACK_PUSH("Ease::quartOut","org/flixel/tweens/util/Ease.hx",54);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(54)
	return ((int)1 - ((((hx::SubEq(t,(int)1)) * t) * t) * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartOut,return )

Float Ease_obj::quartInOut( Float t){
	HX_STACK_PUSH("Ease::quartInOut","org/flixel/tweens/util/Ease.hx",60);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(60)
	return (  (((t <= .5))) ? Float(((((t * t) * t) * t) * (int)8)) : Float(((Float((((int)1 - ((((t = ((t * (int)2) - (int)2)) * t) * t) * t)))) / Float((int)2)) + .5)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartInOut,return )

Float Ease_obj::quintIn( Float t){
	HX_STACK_PUSH("Ease::quintIn","org/flixel/tweens/util/Ease.hx",66);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(66)
	return ((((t * t) * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintIn,return )

Float Ease_obj::quintOut( Float t){
	HX_STACK_PUSH("Ease::quintOut","org/flixel/tweens/util/Ease.hx",72);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(72)
	return ((((((t = (t - (int)1)) * t) * t) * t) * t) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintOut,return )

Float Ease_obj::quintInOut( Float t){
	HX_STACK_PUSH("Ease::quintInOut","org/flixel/tweens/util/Ease.hx",78);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(78)
	return (  ((((hx::MultEq(t,(int)2)) < (int)1))) ? Float((Float(((((t * t) * t) * t) * t)) / Float((int)2))) : Float((Float((((((((hx::SubEq(t,(int)2)) * t) * t) * t) * t) + (int)2))) / Float((int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintInOut,return )

Float Ease_obj::sineIn( Float t){
	HX_STACK_PUSH("Ease::sineIn","org/flixel/tweens/util/Ease.hx",84);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(84)
	return (-(::Math_obj::cos(((Float(::Math_obj::PI) / Float((int)2)) * t))) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineIn,return )

Float Ease_obj::sineOut( Float t){
	HX_STACK_PUSH("Ease::sineOut","org/flixel/tweens/util/Ease.hx",90);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(90)
	return ::Math_obj::sin(((Float(::Math_obj::PI) / Float((int)2)) * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineOut,return )

Float Ease_obj::sineInOut( Float t){
	HX_STACK_PUSH("Ease::sineInOut","org/flixel/tweens/util/Ease.hx",96);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(96)
	return ((Float(-(::Math_obj::cos((::Math_obj::PI * t)))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineInOut,return )

Float Ease_obj::bounceIn( Float t){
	HX_STACK_PUSH("Ease::bounceIn","org/flixel/tweens/util/Ease.hx",102);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(103)
	t = ((int)1 - t);
	HX_STACK_LINE(104)
	if (((t < (Float((int)1) / Float(2.75))))){
		HX_STACK_LINE(104)
		return ((int)1 - ((7.5625 * t) * t));
	}
	HX_STACK_LINE(105)
	if (((t < (Float((int)2) / Float(2.75))))){
		HX_STACK_LINE(105)
		return ((int)1 - ((((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75)));
	}
	HX_STACK_LINE(106)
	if (((t < (Float(2.5) / Float(2.75))))){
		HX_STACK_LINE(106)
		return ((int)1 - ((((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375)));
	}
	HX_STACK_LINE(107)
	return ((int)1 - ((((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceIn,return )

Float Ease_obj::bounceOut( Float t){
	HX_STACK_PUSH("Ease::bounceOut","org/flixel/tweens/util/Ease.hx",112);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(113)
	if (((t < (Float((int)1) / Float(2.75))))){
		HX_STACK_LINE(113)
		return ((7.5625 * t) * t);
	}
	HX_STACK_LINE(114)
	if (((t < (Float((int)2) / Float(2.75))))){
		HX_STACK_LINE(114)
		return (((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75);
	}
	HX_STACK_LINE(115)
	if (((t < (Float(2.5) / Float(2.75))))){
		HX_STACK_LINE(115)
		return (((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375);
	}
	HX_STACK_LINE(116)
	return (((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceOut,return )

Float Ease_obj::bounceInOut( Float t){
	HX_STACK_PUSH("Ease::bounceInOut","org/flixel/tweens/util/Ease.hx",121);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(122)
	if (((t < .5))){
		HX_STACK_LINE(124)
		t = ((int)1 - (t * (int)2));
		HX_STACK_LINE(125)
		if (((t < (Float((int)1) / Float(2.75))))){
			HX_STACK_LINE(125)
			return (Float((((int)1 - ((7.5625 * t) * t)))) / Float((int)2));
		}
		HX_STACK_LINE(126)
		if (((t < (Float((int)2) / Float(2.75))))){
			HX_STACK_LINE(126)
			return (Float((((int)1 - ((((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75))))) / Float((int)2));
		}
		HX_STACK_LINE(127)
		if (((t < (Float(2.5) / Float(2.75))))){
			HX_STACK_LINE(127)
			return (Float((((int)1 - ((((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375))))) / Float((int)2));
		}
		HX_STACK_LINE(128)
		return (Float((((int)1 - ((((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375))))) / Float((int)2));
	}
	HX_STACK_LINE(130)
	t = ((t * (int)2) - (int)1);
	HX_STACK_LINE(131)
	if (((t < (Float((int)1) / Float(2.75))))){
		HX_STACK_LINE(131)
		return ((Float(((7.5625 * t) * t)) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(132)
	if (((t < (Float((int)2) / Float(2.75))))){
		HX_STACK_LINE(132)
		return ((Float(((((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(133)
	if (((t < (Float(2.5) / Float(2.75))))){
		HX_STACK_LINE(133)
		return ((Float(((((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(134)
	return ((Float(((((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceInOut,return )

Float Ease_obj::circIn( Float t){
	HX_STACK_PUSH("Ease::circIn","org/flixel/tweens/util/Ease.hx",139);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(139)
	return -(((::Math_obj::sqrt(((int)1 - (t * t))) - (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circIn,return )

Float Ease_obj::circOut( Float t){
	HX_STACK_PUSH("Ease::circOut","org/flixel/tweens/util/Ease.hx",145);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(145)
	return ::Math_obj::sqrt(((int)1 - (((t - (int)1)) * ((t - (int)1)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circOut,return )

Float Ease_obj::circInOut( Float t){
	HX_STACK_PUSH("Ease::circInOut","org/flixel/tweens/util/Ease.hx",151);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(151)
	return (  (((t <= .5))) ? Float((Float(((::Math_obj::sqrt(((int)1 - ((t * t) * (int)4))) - (int)1))) / Float((int)-2))) : Float((Float(((::Math_obj::sqrt(((int)1 - ((((t * (int)2) - (int)2)) * (((t * (int)2) - (int)2))))) + (int)1))) / Float((int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circInOut,return )

Float Ease_obj::expoIn( Float t){
	HX_STACK_PUSH("Ease::expoIn","org/flixel/tweens/util/Ease.hx",157);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(157)
	return ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoIn,return )

Float Ease_obj::expoOut( Float t){
	HX_STACK_PUSH("Ease::expoOut","org/flixel/tweens/util/Ease.hx",163);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(163)
	return (-(::Math_obj::pow((int)2,((int)-10 * t))) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoOut,return )

Float Ease_obj::expoInOut( Float t){
	HX_STACK_PUSH("Ease::expoInOut","org/flixel/tweens/util/Ease.hx",169);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(169)
	return (  (((t < .5))) ? Float((Float(::Math_obj::pow((int)2,((int)10 * (((t * (int)2) - (int)1))))) / Float((int)2))) : Float((Float(((-(::Math_obj::pow((int)2,((int)-10 * (((t * (int)2) - (int)1))))) + (int)2))) / Float((int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoInOut,return )

Float Ease_obj::backIn( Float t){
	HX_STACK_PUSH("Ease::backIn","org/flixel/tweens/util/Ease.hx",175);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(175)
	return ((t * t) * (((2.70158 * t) - 1.70158)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backIn,return )

Float Ease_obj::backOut( Float t){
	HX_STACK_PUSH("Ease::backOut","org/flixel/tweens/util/Ease.hx",181);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(181)
	return ((int)1 - ((--(t) * t) * (((-2.70158 * t) - 1.70158))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backOut,return )

Float Ease_obj::backInOut( Float t){
	HX_STACK_PUSH("Ease::backInOut","org/flixel/tweens/util/Ease.hx",187);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(188)
	hx::MultEq(t,(int)2);
	HX_STACK_LINE(189)
	if (((t < (int)1))){
		HX_STACK_LINE(189)
		return (Float(((t * t) * (((2.70158 * t) - 1.70158)))) / Float((int)2));
	}
	HX_STACK_LINE(190)
	(t)--;
	HX_STACK_LINE(191)
	return ((Float((((int)1 - ((--(t) * t) * (((-2.70158 * t) - 1.70158)))))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backInOut,return )

Float Ease_obj::PI;

Float Ease_obj::PI2;

Float Ease_obj::EL;

Float Ease_obj::B1;

Float Ease_obj::B2;

Float Ease_obj::B3;

Float Ease_obj::B4;

Float Ease_obj::B5;

Float Ease_obj::B6;


Ease_obj::Ease_obj()
{
}

void Ease_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ease);
	HX_MARK_END_CLASS();
}

void Ease_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Ease_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"PI") ) { return PI; }
		if (HX_FIELD_EQ(inName,"EL") ) { return EL; }
		if (HX_FIELD_EQ(inName,"B1") ) { return B1; }
		if (HX_FIELD_EQ(inName,"B2") ) { return B2; }
		if (HX_FIELD_EQ(inName,"B3") ) { return B3; }
		if (HX_FIELD_EQ(inName,"B4") ) { return B4; }
		if (HX_FIELD_EQ(inName,"B5") ) { return B5; }
		if (HX_FIELD_EQ(inName,"B6") ) { return B6; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { return PI2; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { return quadIn_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { return cubeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineIn") ) { return sineIn_dyn(); }
		if (HX_FIELD_EQ(inName,"circIn") ) { return circIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoIn") ) { return expoIn_dyn(); }
		if (HX_FIELD_EQ(inName,"backIn") ) { return backIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { return quadOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { return cubeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quartIn") ) { return quartIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quintIn") ) { return quintIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineOut") ) { return sineOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circOut") ) { return circOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoOut") ) { return expoOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backOut") ) { return backOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { return quartOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintOut") ) { return quintOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { return bounceIn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { return quadInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { return cubeInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { return sineInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { return bounceOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circInOut") ) { return circInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { return expoInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backInOut") ) { return backInOut_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { return quartInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { return quintInOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { return bounceInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ease_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"PI") ) { PI=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EL") ) { EL=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B1") ) { B1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B2") ) { B2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B3") ) { B3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B4") ) { B4=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B5") ) { B5=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B6") ) { B6=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { PI2=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ease_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("quadIn"),
	HX_CSTRING("quadOut"),
	HX_CSTRING("quadInOut"),
	HX_CSTRING("cubeIn"),
	HX_CSTRING("cubeOut"),
	HX_CSTRING("cubeInOut"),
	HX_CSTRING("quartIn"),
	HX_CSTRING("quartOut"),
	HX_CSTRING("quartInOut"),
	HX_CSTRING("quintIn"),
	HX_CSTRING("quintOut"),
	HX_CSTRING("quintInOut"),
	HX_CSTRING("sineIn"),
	HX_CSTRING("sineOut"),
	HX_CSTRING("sineInOut"),
	HX_CSTRING("bounceIn"),
	HX_CSTRING("bounceOut"),
	HX_CSTRING("bounceInOut"),
	HX_CSTRING("circIn"),
	HX_CSTRING("circOut"),
	HX_CSTRING("circInOut"),
	HX_CSTRING("expoIn"),
	HX_CSTRING("expoOut"),
	HX_CSTRING("expoInOut"),
	HX_CSTRING("backIn"),
	HX_CSTRING("backOut"),
	HX_CSTRING("backInOut"),
	HX_CSTRING("PI"),
	HX_CSTRING("PI2"),
	HX_CSTRING("EL"),
	HX_CSTRING("B1"),
	HX_CSTRING("B2"),
	HX_CSTRING("B3"),
	HX_CSTRING("B4"),
	HX_CSTRING("B5"),
	HX_CSTRING("B6"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ease_obj::PI,"PI");
	HX_MARK_MEMBER_NAME(Ease_obj::PI2,"PI2");
	HX_MARK_MEMBER_NAME(Ease_obj::EL,"EL");
	HX_MARK_MEMBER_NAME(Ease_obj::B1,"B1");
	HX_MARK_MEMBER_NAME(Ease_obj::B2,"B2");
	HX_MARK_MEMBER_NAME(Ease_obj::B3,"B3");
	HX_MARK_MEMBER_NAME(Ease_obj::B4,"B4");
	HX_MARK_MEMBER_NAME(Ease_obj::B5,"B5");
	HX_MARK_MEMBER_NAME(Ease_obj::B6,"B6");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ease_obj::PI,"PI");
	HX_VISIT_MEMBER_NAME(Ease_obj::PI2,"PI2");
	HX_VISIT_MEMBER_NAME(Ease_obj::EL,"EL");
	HX_VISIT_MEMBER_NAME(Ease_obj::B1,"B1");
	HX_VISIT_MEMBER_NAME(Ease_obj::B2,"B2");
	HX_VISIT_MEMBER_NAME(Ease_obj::B3,"B3");
	HX_VISIT_MEMBER_NAME(Ease_obj::B4,"B4");
	HX_VISIT_MEMBER_NAME(Ease_obj::B5,"B5");
	HX_VISIT_MEMBER_NAME(Ease_obj::B6,"B6");
};

Class Ease_obj::__mClass;

void Ease_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.tweens.util.Ease"), hx::TCanCast< Ease_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Ease_obj::__boot()
{
	PI= ::Math_obj::PI;
	PI2= (Float(::Math_obj::PI) / Float((int)2));
	EL= (Float(((int)2 * ::Math_obj::PI)) / Float(.45));
	B1= (Float((int)1) / Float(2.75));
	B2= (Float((int)2) / Float(2.75));
	B3= (Float(1.5) / Float(2.75));
	B4= (Float(2.5) / Float(2.75));
	B5= (Float(2.25) / Float(2.75));
	B6= (Float(2.625) / Float(2.75));
}

} // end namespace org
} // end namespace flixel
} // end namespace tweens
} // end namespace util
