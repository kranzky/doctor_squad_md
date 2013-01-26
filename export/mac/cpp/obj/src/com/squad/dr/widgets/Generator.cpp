#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_squad_dr_PubNub
#include <com/squad/dr/PubNub.h>
#endif
#ifndef INCLUDED_com_squad_dr_widgets_Generator
#include <com/squad/dr/widgets/Generator.h>
#endif
#ifndef INCLUDED_com_squad_dr_widgets_Widget
#include <com/squad/dr/widgets/Widget.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxButton
#include <org/flixel/FlxButton.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
namespace com{
namespace squad{
namespace dr{
namespace widgets{

Void Generator_obj::__construct(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract)
{
HX_STACK_PUSH("Generator::new","com/squad/dr/widgets/Generator.hx",10);
{
	HX_STACK_LINE(15)
	this->_sendTimer = 1.0;
	HX_STACK_LINE(14)
	this->_power = 30.0;
	HX_STACK_LINE(19)
	::haxe::Log_obj::trace(HX_CSTRING("new generator"),hx::SourceInfo(HX_CSTRING("Generator.hx"),19,HX_CSTRING("com.squad.dr.widgets.Generator"),HX_CSTRING("new")));
	HX_STACK_LINE(20)
	int x = (int)100;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(21)
	int y = (int)100;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(22)
	super::__construct(widgetId,pubnub,owned,canInteract);
	HX_STACK_LINE(23)
	this->_darkness = ::org::flixel::FlxSprite_obj::__new((int)0,(int)0,null());
	HX_STACK_LINE(24)
	this->_darkness->makeGraphic(::org::flixel::FlxG_obj::width,::org::flixel::FlxG_obj::height,(int)-1,null(),null());
	HX_STACK_LINE(29)
	::org::flixel::FlxButton bbutton = ::org::flixel::FlxButton_obj::__new(x,y,HX_CSTRING("testing"),this->buttonPushed_dyn());		HX_STACK_VAR(bbutton,"bbutton");
	HX_STACK_LINE(30)
	this->_power = 30.0;
	HX_STACK_LINE(31)
	this->updateState();
	HX_STACK_LINE(32)
	this->add(bbutton);
}
;
	return null();
}

Generator_obj::~Generator_obj() { }

Dynamic Generator_obj::__CreateEmpty() { return  new Generator_obj; }
hx::ObjectPtr< Generator_obj > Generator_obj::__new(int widgetId,::com::squad::dr::PubNub pubnub,bool owned,bool canInteract)
{  hx::ObjectPtr< Generator_obj > result = new Generator_obj();
	result->__construct(widgetId,pubnub,owned,canInteract);
	return result;}

Dynamic Generator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Generator_obj > result = new Generator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Generator_obj::updateState( ){
{
		HX_STACK_PUSH("Generator::updateState","com/squad/dr/widgets/Generator.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(85)
		Float lightLevel = (Float(this->_power) / Float((int)25));		HX_STACK_VAR(lightLevel,"lightLevel");
		HX_STACK_LINE(86)
		if (((lightLevel > 1.0))){
			HX_STACK_LINE(87)
			lightLevel = 1.0;
		}
		HX_STACK_LINE(88)
		Float alpha = ((int)1 - lightLevel);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(89)
		this->_darkness->setAlpha(alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,updateState,(void))

Void Generator_obj::buttonPushed( ){
{
		HX_STACK_PUSH("Generator::buttonPushed","com/squad/dr/widgets/Generator.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		::haxe::Log_obj::trace(HX_CSTRING("Added power"),hx::SourceInfo(HX_CSTRING("Generator.hx"),77,HX_CSTRING("com.squad.dr.widgets.Generator"),HX_CSTRING("buttonPushed")));
		HX_STACK_LINE(78)
		hx::AddEq(this->_power,1.0);
		HX_STACK_LINE(79)
		if (((this->_power > 30.0))){
			HX_STACK_LINE(80)
			this->_power = 30.0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,buttonPushed,(void))

Void Generator_obj::_sendPowerLevel( ){
{
		HX_STACK_PUSH("Generator::_sendPowerLevel","com/squad/dr/widgets/Generator.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		::haxe::Log_obj::trace((HX_CSTRING("Sending power ") + this->_power),hx::SourceInfo(HX_CSTRING("Generator.hx"),70,HX_CSTRING("com.squad.dr.widgets.Generator"),HX_CSTRING("_sendPowerLevel")));
		HX_STACK_LINE(71)
		this->send(HX_CSTRING("power"),(HX_CSTRING("") + this->_power));
		HX_STACK_LINE(72)
		this->updateState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,_sendPowerLevel,(void))

Void Generator_obj::update( ){
{
		HX_STACK_PUSH("Generator::update","com/squad/dr/widgets/Generator.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(49)
		if (((this->_power > (int)0))){
			HX_STACK_LINE(51)
			this->_power = (this->_power - (::org::flixel::FlxG_obj::elapsed * (int)2));
			HX_STACK_LINE(52)
			if (((this->_power < (int)0))){
				HX_STACK_LINE(53)
				this->_power = 0.0;
			}
		}
		HX_STACK_LINE(55)
		if ((this->_owned)){
			HX_STACK_LINE(57)
			hx::SubEq(this->_sendTimer,::org::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(58)
			if (((this->_sendTimer < 0.0))){
				HX_STACK_LINE(60)
				hx::AddEq(this->_sendTimer,1.0);
				HX_STACK_LINE(61)
				this->_sendPowerLevel();
			}
		}
		HX_STACK_LINE(64)
		this->updateState();
	}
return null();
}


Void Generator_obj::message( ::String action,::String data){
{
		HX_STACK_PUSH("Generator::message","com/squad/dr/widgets/Generator.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(action,"action");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(38)
		if (((bool((action == HX_CSTRING("power"))) && bool(!(this->_owned))))){
			HX_STACK_LINE(40)
			this->_power = ::Std_obj::parseFloat(data);
			HX_STACK_LINE(41)
			::haxe::Log_obj::trace((HX_CSTRING("Generator recieved power ") + this->_power),hx::SourceInfo(HX_CSTRING("Generator.hx"),41,HX_CSTRING("com.squad.dr.widgets.Generator"),HX_CSTRING("message")));
		}
		HX_STACK_LINE(44)
		this->updateState();
	}
return null();
}



Generator_obj::Generator_obj()
{
}

void Generator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Generator);
	HX_MARK_MEMBER_NAME(_sendTimer,"_sendTimer");
	HX_MARK_MEMBER_NAME(_power,"_power");
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_darkness,"_darkness");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Generator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sendTimer,"_sendTimer");
	HX_VISIT_MEMBER_NAME(_power,"_power");
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_darkness,"_darkness");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Generator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_power") ) { return _power; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message_dyn(); }
		if (HX_FIELD_EQ(inName,"_button") ) { return _button; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_darkness") ) { return _darkness; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sendTimer") ) { return _sendTimer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateState") ) { return updateState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonPushed") ) { return buttonPushed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_sendPowerLevel") ) { return _sendPowerLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Generator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_power") ) { _power=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast< ::org::flixel::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_darkness") ) { _darkness=inValue.Cast< ::org::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sendTimer") ) { _sendTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Generator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_sendTimer"));
	outFields->push(HX_CSTRING("_power"));
	outFields->push(HX_CSTRING("_button"));
	outFields->push(HX_CSTRING("_darkness"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateState"),
	HX_CSTRING("buttonPushed"),
	HX_CSTRING("_sendPowerLevel"),
	HX_CSTRING("update"),
	HX_CSTRING("message"),
	HX_CSTRING("_sendTimer"),
	HX_CSTRING("_power"),
	HX_CSTRING("_button"),
	HX_CSTRING("_darkness"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Generator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Generator_obj::__mClass,"__mClass");
};

Class Generator_obj::__mClass;

void Generator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.squad.dr.widgets.Generator"), hx::TCanCast< Generator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Generator_obj::__boot()
{
}

} // end namespace com
} // end namespace squad
} // end namespace dr
} // end namespace widgets
