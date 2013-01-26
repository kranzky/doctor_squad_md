#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
namespace org{
namespace flixel{

Void FlxState_obj::__construct()
{
HX_STACK_PUSH("FlxState::new","org/flixel/FlxState.hx",17);
{
	HX_STACK_LINE(17)
	super::__construct(null());
}
;
	return null();
}

FlxState_obj::~FlxState_obj() { }

Dynamic FlxState_obj::__CreateEmpty() { return  new FlxState_obj; }
hx::ObjectPtr< FlxState_obj > FlxState_obj::__new()
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

Void FlxState_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxState::onFocus","org/flixel/FlxState.hx",91);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

Void FlxState_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxState::onFocusLost","org/flixel/FlxState.hx",81);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

Void FlxState_obj::removeAtlas( ::org::flixel::system::layer::Atlas atlas,hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(false);
	HX_STACK_PUSH("FlxState::removeAtlas","org/flixel/FlxState.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(atlas,"atlas");
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(71)
		::org::flixel::system::layer::Atlas_obj::removeAtlas(atlas,destroy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,removeAtlas,(void))

::org::flixel::system::layer::Atlas FlxState_obj::createAtlas( ::String atlasName,int atlasWidth,int atlasHeight){
	HX_STACK_PUSH("FlxState::createAtlas","org/flixel/FlxState.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(atlasName,"atlasName");
	HX_STACK_ARG(atlasWidth,"atlasWidth");
	HX_STACK_ARG(atlasHeight,"atlasHeight");
	HX_STACK_LINE(61)
	::String key = ::org::flixel::system::layer::Atlas_obj::getUniqueKey(atlasName);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(62)
	return ::org::flixel::system::layer::Atlas_obj::__new(key,atlasWidth,atlasHeight,null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC3(FlxState_obj,createAtlas,return )

::org::flixel::system::layer::Atlas FlxState_obj::getAtlasFor( ::String KeyInBitmapCache){
	HX_STACK_PUSH("FlxState::getAtlasFor","org/flixel/FlxState.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyInBitmapCache,"KeyInBitmapCache");
	HX_STACK_LINE(36)
	::native::display::BitmapData bm = ::org::flixel::FlxG_obj::_cache->get(KeyInBitmapCache);		HX_STACK_VAR(bm,"bm");
	HX_STACK_LINE(37)
	if (((bm != null()))){
		HX_STACK_LINE(39)
		::org::flixel::system::layer::Atlas tempAtlas = ::org::flixel::system::layer::Atlas_obj::getAtlas(KeyInBitmapCache,bm,null());		HX_STACK_VAR(tempAtlas,"tempAtlas");
		HX_STACK_LINE(40)
		return tempAtlas;
	}
	else{
	}
	HX_STACK_LINE(49)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,getAtlasFor,return )

Void FlxState_obj::create( ){
{
		HX_STACK_PUSH("FlxState::create","org/flixel/FlxState.hx",26);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))


FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAtlas") ) { return removeAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"createAtlas") ) { return createAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"getAtlasFor") ) { return getAtlasFor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("removeAtlas"),
	HX_CSTRING("createAtlas"),
	HX_CSTRING("getAtlasFor"),
	HX_CSTRING("create"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxState"), hx::TCanCast< FlxState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxState_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
