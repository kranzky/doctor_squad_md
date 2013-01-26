#include <hxcpp.h>

#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_JoyButton
#include <org/flixel/system/input/JoyButton.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Joystick
#include <org/flixel/system/input/Joystick.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void Joystick_obj::__construct(int id)
{
HX_STACK_PUSH("Joystick::new","org/flixel/system/input/Joystick.hx",18);
{
	HX_STACK_LINE(19)
	this->buttons = ::IntHash_obj::__new();
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (int)8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		while(((_g1 < _g))){
			HX_STACK_LINE(20)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(22)
			this->buttons->set(i,::org::flixel::system::input::JoyButton_obj::__new(i,null(),null()));
		}
	}
	HX_STACK_LINE(25)
	this->ball = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(26)
	this->axis = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(27)
	this->hat = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(28)
	this->connected = false;
	HX_STACK_LINE(29)
	this->id = id;
}
;
	return null();
}

Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new(int id)
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct(id);
	return result;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct(inArgs[0]);
	return result;}

bool Joystick_obj::anyInput( ){
	HX_STACK_PUSH("Joystick::anyInput","org/flixel/system/input/Joystick.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	for(::cpp::FastIterator_obj< ::org::flixel::system::input::JoyButton > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::JoyButton >(this->buttons->iterator());  __it->hasNext(); ){
		::org::flixel::system::input::JoyButton button = __it->next();
		if (((button->current > (int)0))){
			HX_STACK_LINE(143)
			return true;
		}
;
	}
	HX_STACK_LINE(148)
	if (((bool((this->axis->x != (int)0)) || bool((this->axis->y != (int)0))))){
		HX_STACK_LINE(149)
		return true;
	}
	HX_STACK_LINE(153)
	if (((bool((this->ball->x != (int)0)) || bool((this->ball->y != (int)0))))){
		HX_STACK_LINE(154)
		return true;
	}
	HX_STACK_LINE(158)
	if (((bool((this->hat->x != (int)0)) || bool((this->hat->y != (int)0))))){
		HX_STACK_LINE(159)
		return true;
	}
	HX_STACK_LINE(163)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,anyInput,return )

bool Joystick_obj::anyButton( ){
	HX_STACK_PUSH("Joystick::anyButton","org/flixel/system/input/Joystick.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_LINE(123)
	for(::cpp::FastIterator_obj< ::org::flixel::system::input::JoyButton > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::JoyButton >(this->buttons->iterator());  __it->hasNext(); ){
		::org::flixel::system::input::JoyButton button = __it->next();
		if (((button->current > (int)0))){
			HX_STACK_LINE(126)
			return true;
		}
;
	}
	HX_STACK_LINE(131)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,anyButton,return )

bool Joystick_obj::justReleased( int buttonID){
	HX_STACK_PUSH("Joystick::justReleased","org/flixel/system/input/Joystick.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_ARG(buttonID,"buttonID");
	HX_STACK_LINE(109)
	if ((this->buttons->exists(buttonID))){
		HX_STACK_LINE(110)
		return (this->buttons->get(buttonID)->__Field(HX_CSTRING("current"),true) == (int)-1);
	}
	HX_STACK_LINE(114)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,justReleased,return )

bool Joystick_obj::justPressed( int buttonID){
	HX_STACK_PUSH("Joystick::justPressed","org/flixel/system/input/Joystick.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(buttonID,"buttonID");
	HX_STACK_LINE(94)
	if ((this->buttons->exists(buttonID))){
		HX_STACK_LINE(95)
		return (this->buttons->get(buttonID)->__Field(HX_CSTRING("current"),true) == (int)2);
	}
	HX_STACK_LINE(99)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,justPressed,return )

bool Joystick_obj::pressed( int buttonID){
	HX_STACK_PUSH("Joystick::pressed","org/flixel/system/input/Joystick.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(buttonID,"buttonID");
	HX_STACK_LINE(79)
	if ((this->buttons->exists(buttonID))){
		HX_STACK_LINE(80)
		return (this->buttons->get(buttonID)->__Field(HX_CSTRING("current"),true) > (int)0);
	}
	HX_STACK_LINE(84)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,pressed,return )

Void Joystick_obj::destroy( ){
{
		HX_STACK_PUSH("Joystick::destroy","org/flixel/system/input/Joystick.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		this->buttons = null();
		HX_STACK_LINE(67)
		this->axis = null();
		HX_STACK_LINE(68)
		this->hat = null();
		HX_STACK_LINE(69)
		this->ball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,destroy,(void))

Void Joystick_obj::reset( ){
{
		HX_STACK_PUSH("Joystick::reset","org/flixel/system/input/Joystick.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::JoyButton > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::JoyButton >(this->buttons->iterator());  __it->hasNext(); ){
			::org::flixel::system::input::JoyButton button = __it->next();
			{
				HX_STACK_LINE(55)
				button->current = (int)0;
				HX_STACK_LINE(56)
				button->last = (int)0;
			}
;
		}
		HX_STACK_LINE(59)
		this->axis->x = this->axis->y = (int)0;
		HX_STACK_LINE(60)
		this->hat->x = this->hat->y = (int)0;
		HX_STACK_LINE(61)
		this->ball->x = this->ball->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,reset,(void))

Void Joystick_obj::update( ){
{
		HX_STACK_PUSH("Joystick::update","org/flixel/system/input/Joystick.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::JoyButton > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::JoyButton >(this->buttons->iterator());  __it->hasNext(); ){
			::org::flixel::system::input::JoyButton button = __it->next();
			{
				HX_STACK_LINE(39)
				if (((bool((button->last == (int)-1)) && bool((button->current == (int)-1))))){
					HX_STACK_LINE(40)
					button->current = (int)0;
				}
				else{
					HX_STACK_LINE(43)
					if (((bool((button->last == (int)2)) && bool((button->current == (int)2))))){
						HX_STACK_LINE(44)
						button->current = (int)1;
					}
				}
				HX_STACK_LINE(47)
				button->last = button->current;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,update,(void))

int Joystick_obj::NUM_BUTTONS;


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
}

Dynamic Joystick_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_BUTTONS") ) { return NUM_BUTTONS; }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::IntHash >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_BUTTONS") ) { NUM_BUTTONS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("connected"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("hat"));
	outFields->push(HX_CSTRING("axis"));
	outFields->push(HX_CSTRING("buttons"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NUM_BUTTONS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("anyInput"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("id"),
	HX_CSTRING("connected"),
	HX_CSTRING("ball"),
	HX_CSTRING("hat"),
	HX_CSTRING("axis"),
	HX_CSTRING("buttons"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::NUM_BUTTONS,"NUM_BUTTONS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::NUM_BUTTONS,"NUM_BUTTONS");
};

Class Joystick_obj::__mClass;

void Joystick_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.Joystick"), hx::TCanCast< Joystick_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Joystick_obj::__boot()
{
	NUM_BUTTONS= (int)8;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
