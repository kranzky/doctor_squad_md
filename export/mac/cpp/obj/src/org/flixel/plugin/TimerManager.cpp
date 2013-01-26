#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTimer
#include <org/flixel/FlxTimer.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_TimerManager
#include <org/flixel/plugin/TimerManager.h>
#endif
namespace org{
namespace flixel{
namespace plugin{

Void TimerManager_obj::__construct()
{
HX_STACK_PUSH("TimerManager::new","org/flixel/plugin/TimerManager.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	this->_timers = Array_obj< ::org::flixel::FlxTimer >::__new();
	HX_STACK_LINE(22)
	this->visible = false;
}
;
	return null();
}

TimerManager_obj::~TimerManager_obj() { }

Dynamic TimerManager_obj::__CreateEmpty() { return  new TimerManager_obj; }
hx::ObjectPtr< TimerManager_obj > TimerManager_obj::__new()
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Dynamic TimerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Void TimerManager_obj::clear( ){
{
		HX_STACK_PUSH("TimerManager::clear","org/flixel/plugin/TimerManager.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(85)
		int i = (this->_timers->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(86)
		::org::flixel::FlxTimer timer;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(87)
		while(((i >= (int)0))){
			HX_STACK_LINE(89)
			timer = this->_timers->__get((i)--);
			HX_STACK_LINE(90)
			if (((timer != null()))){
				HX_STACK_LINE(91)
				timer->destroy();
			}
		}
		HX_STACK_LINE(95)
		this->_timers = Array_obj< ::org::flixel::FlxTimer >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerManager_obj,clear,(void))

Void TimerManager_obj::remove( ::org::flixel::FlxTimer Timer){
{
		HX_STACK_PUSH("TimerManager::remove","org/flixel/plugin/TimerManager.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Timer,"Timer");
		struct _Function_1_1{
			inline static int Block( ::org::flixel::plugin::TimerManager_obj *__this,::org::flixel::FlxTimer &Timer){
				HX_STACK_PUSH("*::closure","org/flixel/plugin/TimerManager.hx",71);
				{
					HX_STACK_LINE(71)
					Dynamic array = __this->_timers;		HX_STACK_VAR(array,"array");
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(71)
					int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(71)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(71)
						while(((_g < len))){
							HX_STACK_LINE(71)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(71)
							if (((array->__GetItem(i) == Timer))){
								HX_STACK_LINE(71)
								index = i;
							}
						}
					}
					HX_STACK_LINE(71)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(71)
		int index = _Function_1_1::Block(this,Timer);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(72)
		if (((index >= (int)0))){
			HX_STACK_LINE(75)
			this->_timers[index] = this->_timers->__get((this->_timers->length - (int)1));
			HX_STACK_LINE(76)
			this->_timers->pop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,remove,(void))

Void TimerManager_obj::add( ::org::flixel::FlxTimer Timer){
{
		HX_STACK_PUSH("TimerManager::add","org/flixel/plugin/TimerManager.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Timer,"Timer");
		HX_STACK_LINE(59)
		this->_timers->push(Timer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,add,(void))

Void TimerManager_obj::update( ){
{
		HX_STACK_PUSH("TimerManager::update","org/flixel/plugin/TimerManager.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		int i = (this->_timers->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(42)
		::org::flixel::FlxTimer timer;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(43)
		while(((i >= (int)0))){
			HX_STACK_LINE(45)
			timer = this->_timers->__get((i)--);
			HX_STACK_LINE(46)
			if (((bool((bool((bool((timer != null())) && bool(!(timer->paused)))) && bool(!(timer->finished)))) && bool((timer->time > (int)0))))){
				HX_STACK_LINE(47)
				timer->update();
			}
		}
	}
return null();
}


Void TimerManager_obj::destroy( ){
{
		HX_STACK_PUSH("TimerManager::destroy","org/flixel/plugin/TimerManager.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->clear();
		HX_STACK_LINE(31)
		this->_timers = null();
		HX_STACK_LINE(32)
		this->super::destroy();
	}
return null();
}



TimerManager_obj::TimerManager_obj()
{
}

void TimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TimerManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_timers") ) { return _timers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< Array< ::org::flixel::FlxTimer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_timers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_timers"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

Class TimerManager_obj::__mClass;

void TimerManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.TimerManager"), hx::TCanCast< TimerManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TimerManager_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
