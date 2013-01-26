#include <hxcpp.h>

#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_net_SharedObject
#include <native/net/SharedObject.h>
#endif
#ifndef INCLUDED_native_net_SharedObjectFlushStatus
#include <native/net/SharedObjectFlushStatus.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSave
#include <org/flixel/FlxSave.h>
#endif
namespace org{
namespace flixel{

Void FlxSave_obj::__construct()
{
HX_STACK_PUSH("FlxSave::new","org/flixel/FlxSave.hx",54);
{
	HX_STACK_LINE(54)
	this->destroy();
}
;
	return null();
}

FlxSave_obj::~FlxSave_obj() { }

Dynamic FlxSave_obj::__CreateEmpty() { return  new FlxSave_obj; }
hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new()
{  hx::ObjectPtr< FlxSave_obj > result = new FlxSave_obj();
	result->__construct();
	return result;}

Dynamic FlxSave_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSave_obj > result = new FlxSave_obj();
	result->__construct();
	return result;}

bool FlxSave_obj::checkBinding( ){
	HX_STACK_PUSH("FlxSave::checkBinding","org/flixel/FlxSave.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(212)
	if (((this->_sharedObject == null()))){
		HX_STACK_LINE(214)
		::org::flixel::FlxG_obj::log(HX_CSTRING("FLIXEL: You must call FlxSave.bind()\nbefore you can read or write data."));
		HX_STACK_LINE(215)
		return false;
	}
	HX_STACK_LINE(217)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )

bool FlxSave_obj::onDone( int Result){
	HX_STACK_PUSH("FlxSave::onDone","org/flixel/FlxSave.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Result,"Result");
	HX_STACK_LINE(187)
	int _switch_1 = (Result);
	if (  ( _switch_1==::org::flixel::FlxSave_obj::PENDING)){
		HX_STACK_LINE(189)
		::org::flixel::FlxG_obj::log(HX_CSTRING("FLIXEL: FlxSave is requesting extra storage space."));
	}
	else if (  ( _switch_1==::org::flixel::FlxSave_obj::ERROR)){
		HX_STACK_LINE(191)
		::org::flixel::FlxG_obj::log(HX_CSTRING("ERROR: There was a problem flushing\nthe shared object data from FlxSave."));
	}
	HX_STACK_LINE(195)
	if (((this->_onComplete_dyn() != null()))){
		HX_STACK_LINE(196)
		this->_onComplete((Result == ::org::flixel::FlxSave_obj::SUCCESS));
	}
	HX_STACK_LINE(199)
	if ((this->_closeRequested)){
		HX_STACK_LINE(200)
		this->destroy();
	}
	HX_STACK_LINE(203)
	return (Result == ::org::flixel::FlxSave_obj::SUCCESS);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::erase( ){
	HX_STACK_PUSH("FlxSave::erase","org/flixel/FlxSave.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(159)
	if ((!(this->checkBinding()))){
		HX_STACK_LINE(160)
		return false;
	}
	HX_STACK_LINE(163)
	this->_sharedObject->clear();
	HX_STACK_LINE(164)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::flush( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_PUSH("FlxSave::flush","org/flixel/FlxSave.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MinFileSize,"MinFileSize");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(115)
		if ((!(this->checkBinding()))){
			HX_STACK_LINE(116)
			return false;
		}
		HX_STACK_LINE(119)
		this->_onComplete = OnComplete;
		HX_STACK_LINE(123)
		::native::net::SharedObjectFlushStatus result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(125)
		try{
			HX_STACK_LINE(126)
			result = this->_sharedObject->flush(MinFileSize);
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::native::errors::Error >() ){
				::native::errors::Error e = __e;{
					HX_STACK_LINE(133)
					return this->onDone(::org::flixel::FlxSave_obj::ERROR);
				}
			}
			else throw(__e);
		}
		HX_STACK_LINE(137)
		if (((result == ::native::net::SharedObjectFlushStatus_obj::PENDING_dyn()))){
		}
		HX_STACK_LINE(147)
		return this->onDone((  (((result == ::native::net::SharedObjectFlushStatus_obj::FLUSHED_dyn()))) ? int(::org::flixel::FlxSave_obj::SUCCESS) : int(::org::flixel::FlxSave_obj::PENDING) ));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::close( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_PUSH("FlxSave::close","org/flixel/FlxSave.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MinFileSize,"MinFileSize");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(103)
		this->_closeRequested = true;
		HX_STACK_LINE(104)
		return this->flush(MinFileSize,OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::bind( ::String Name){
	HX_STACK_PUSH("FlxSave::bind","org/flixel/FlxSave.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_LINE(77)
	this->destroy();
	HX_STACK_LINE(78)
	this->name = Name;
	HX_STACK_LINE(79)
	try{
		HX_STACK_LINE(80)
		this->_sharedObject = ::native::net::SharedObject_obj::getLocal(this->name,null(),null());
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::native::errors::Error >() ){
			::native::errors::Error e = __e;{
				HX_STACK_LINE(85)
				::org::flixel::FlxG_obj::log(HX_CSTRING("ERROR: There was a problem binding to\nthe shared object data from FlxSave."));
				HX_STACK_LINE(86)
				this->destroy();
				HX_STACK_LINE(87)
				return false;
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(89)
	this->data = this->_sharedObject->data;
	HX_STACK_LINE(90)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,bind,return )

Void FlxSave_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSave::destroy","org/flixel/FlxSave.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(63)
		this->_sharedObject = null();
		HX_STACK_LINE(64)
		this->name = null();
		HX_STACK_LINE(65)
		this->data = null();
		HX_STACK_LINE(66)
		this->_onComplete = null();
		HX_STACK_LINE(67)
		this->_closeRequested = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

int FlxSave_obj::SUCCESS;

int FlxSave_obj::PENDING;

int FlxSave_obj::ERROR;


FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic FlxSave_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { return ERROR; }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return onDone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { return SUCCESS; }
		if (HX_FIELD_EQ(inName,"PENDING") ) { return PENDING; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return checkBinding_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return _sharedObject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return _closeRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSave_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { SUCCESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PENDING") ) { PENDING=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast< ::native::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_closeRequested"));
	outFields->push(HX_CSTRING("_sharedObject"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SUCCESS"),
	HX_CSTRING("PENDING"),
	HX_CSTRING("ERROR"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("checkBinding"),
	HX_CSTRING("onDone"),
	HX_CSTRING("erase"),
	HX_CSTRING("flush"),
	HX_CSTRING("close"),
	HX_CSTRING("bind"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_closeRequested"),
	HX_CSTRING("_onComplete"),
	HX_CSTRING("_sharedObject"),
	HX_CSTRING("name"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSave_obj::SUCCESS,"SUCCESS");
	HX_MARK_MEMBER_NAME(FlxSave_obj::PENDING,"PENDING");
	HX_MARK_MEMBER_NAME(FlxSave_obj::ERROR,"ERROR");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::SUCCESS,"SUCCESS");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::PENDING,"PENDING");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::ERROR,"ERROR");
};

Class FlxSave_obj::__mClass;

void FlxSave_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxSave"), hx::TCanCast< FlxSave_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSave_obj::__boot()
{
	SUCCESS= (int)0;
	PENDING= (int)1;
	ERROR= (int)2;
}

} // end namespace org
} // end namespace flixel
