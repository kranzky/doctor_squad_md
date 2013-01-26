#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxList
#include <org/flixel/system/FlxList.h>
#endif
namespace org{
namespace flixel{
namespace system{

Void FlxList_obj::__construct()
{
HX_STACK_PUSH("FlxList::new","org/flixel/system/FlxList.hx",34);
{
	HX_STACK_LINE(35)
	this->object = null();
	HX_STACK_LINE(36)
	this->next = null();
	HX_STACK_LINE(37)
	this->exists = true;
}
;
	return null();
}

FlxList_obj::~FlxList_obj() { }

Dynamic FlxList_obj::__CreateEmpty() { return  new FlxList_obj; }
hx::ObjectPtr< FlxList_obj > FlxList_obj::__new()
{  hx::ObjectPtr< FlxList_obj > result = new FlxList_obj();
	result->__construct();
	return result;}

Dynamic FlxList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxList_obj > result = new FlxList_obj();
	result->__construct();
	return result;}

Void FlxList_obj::destroy( ){
{
		HX_STACK_PUSH("FlxList::destroy","org/flixel/system/FlxList.hx",79);
		HX_STACK_THIS(this);
		HX_STACK_LINE(81)
		if ((!(this->exists))){
			HX_STACK_LINE(82)
			return null();
		}
		HX_STACK_LINE(84)
		this->object = null();
		HX_STACK_LINE(85)
		if (((this->next != null()))){
			HX_STACK_LINE(86)
			this->next->destroy();
		}
		HX_STACK_LINE(89)
		this->exists = false;
		HX_STACK_LINE(92)
		this->next = ::org::flixel::system::FlxList_obj::_cachedListsHead;
		HX_STACK_LINE(93)
		::org::flixel::system::FlxList_obj::_cachedListsHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(94)
		(::org::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,destroy,(void))

int FlxList_obj::_NUM_CACHED_FLX_LIST;

::org::flixel::system::FlxList FlxList_obj::_cachedListsHead;

::org::flixel::system::FlxList FlxList_obj::recycle( ){
	HX_STACK_PUSH("FlxList::recycle","org/flixel/system/FlxList.hx",44);
	HX_STACK_LINE(44)
	if (((::org::flixel::system::FlxList_obj::_cachedListsHead != null()))){
		HX_STACK_LINE(47)
		::org::flixel::system::FlxList cachedList = ::org::flixel::system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(cachedList,"cachedList");
		HX_STACK_LINE(48)
		::org::flixel::system::FlxList_obj::_cachedListsHead = ::org::flixel::system::FlxList_obj::_cachedListsHead->next;
		HX_STACK_LINE(49)
		(::org::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST)--;
		HX_STACK_LINE(51)
		cachedList->exists = true;
		HX_STACK_LINE(52)
		cachedList->next = null();
		HX_STACK_LINE(53)
		return cachedList;
	}
	else{
		HX_STACK_LINE(56)
		return ::org::flixel::system::FlxList_obj::__new();
	}
	HX_STACK_LINE(44)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,recycle,return )

Void FlxList_obj::clearCache( ){
{
		HX_STACK_PUSH("FlxList::clearCache","org/flixel/system/FlxList.hx",63);
		HX_STACK_LINE(65)
		while(((::org::flixel::system::FlxList_obj::_cachedListsHead != null()))){
			HX_STACK_LINE(67)
			::org::flixel::system::FlxList node = ::org::flixel::system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(68)
			::org::flixel::system::FlxList_obj::_cachedListsHead = ::org::flixel::system::FlxList_obj::_cachedListsHead->next;
			HX_STACK_LINE(69)
			node->object = null();
			HX_STACK_LINE(70)
			node->next = null();
		}
		HX_STACK_LINE(72)
		::org::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,clearCache,(void))


FlxList_obj::FlxList_obj()
{
}

void FlxList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxList);
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void FlxList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(object,"object");
}

Dynamic FlxList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { return _cachedListsHead; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { return _NUM_CACHED_FLX_LIST; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::org::flixel::system::FlxList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::org::flixel::FlxObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { _cachedListsHead=inValue.Cast< ::org::flixel::system::FlxList >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { _NUM_CACHED_FLX_LIST=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("exists"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_NUM_CACHED_FLX_LIST"),
	HX_CSTRING("_cachedListsHead"),
	HX_CSTRING("recycle"),
	HX_CSTRING("clearCache"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("exists"),
	HX_CSTRING("next"),
	HX_CSTRING("object"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_MARK_MEMBER_NAME(FlxList_obj::_cachedListsHead,"_cachedListsHead");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_VISIT_MEMBER_NAME(FlxList_obj::_cachedListsHead,"_cachedListsHead");
};

Class FlxList_obj::__mClass;

void FlxList_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.FlxList"), hx::TCanCast< FlxList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxList_obj::__boot()
{
	_NUM_CACHED_FLX_LIST= (int)0;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
