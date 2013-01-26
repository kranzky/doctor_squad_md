#include <hxcpp.h>

#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_KeyboardEvent
#include <native/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Input
#include <org/flixel/system/input/Input.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Keyboard
#include <org/flixel/system/input/Keyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_MapObject
#include <org/flixel/system/input/MapObject.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void Keyboard_obj::__construct()
{
HX_STACK_PUSH("Keyboard::new","org/flixel/system/input/Keyboard.hx",103);
{
	HX_STACK_LINE(104)
	super::__construct();
	HX_STACK_LINE(106)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(109)
	i = (int)65;
	HX_STACK_LINE(110)
	while(((i <= (int)90))){
		HX_STACK_LINE(115)
		this->addKey(::String::fromCharCode(i),(i + (int)32));
		HX_STACK_LINE(116)
		(i)++;
	}
	HX_STACK_LINE(121)
	i = (int)48;
	HX_STACK_LINE(122)
	this->addKey(HX_CSTRING("ZERO"),(i)++);
	HX_STACK_LINE(123)
	this->addKey(HX_CSTRING("ONE"),(i)++);
	HX_STACK_LINE(124)
	this->addKey(HX_CSTRING("TWO"),(i)++);
	HX_STACK_LINE(125)
	this->addKey(HX_CSTRING("THREE"),(i)++);
	HX_STACK_LINE(126)
	this->addKey(HX_CSTRING("FOUR"),(i)++);
	HX_STACK_LINE(127)
	this->addKey(HX_CSTRING("FIVE"),(i)++);
	HX_STACK_LINE(128)
	this->addKey(HX_CSTRING("SIX"),(i)++);
	HX_STACK_LINE(129)
	this->addKey(HX_CSTRING("SEVEN"),(i)++);
	HX_STACK_LINE(130)
	this->addKey(HX_CSTRING("EIGHT"),(i)++);
	HX_STACK_LINE(131)
	this->addKey(HX_CSTRING("NINE"),(i)++);
	HX_STACK_LINE(145)
	this->addKey(HX_CSTRING("PAGEUP"),(int)33);
	HX_STACK_LINE(146)
	this->addKey(HX_CSTRING("PAGEDOWN"),(int)34);
	HX_STACK_LINE(147)
	this->addKey(HX_CSTRING("HOME"),(int)36);
	HX_STACK_LINE(148)
	this->addKey(HX_CSTRING("END"),(int)35);
	HX_STACK_LINE(149)
	this->addKey(HX_CSTRING("INSERT"),(int)45);
	HX_STACK_LINE(161)
	this->addKey(HX_CSTRING("ESCAPE"),(int)27);
	HX_STACK_LINE(162)
	this->addKey(HX_CSTRING("MINUS"),(int)189);
	HX_STACK_LINE(163)
	this->addKey(HX_CSTRING("PLUS"),(int)187);
	HX_STACK_LINE(164)
	this->addKey(HX_CSTRING("DELETE"),(int)46);
	HX_STACK_LINE(165)
	this->addKey(HX_CSTRING("BACKSPACE"),(int)8);
	HX_STACK_LINE(166)
	this->addKey(HX_CSTRING("LBRACKET"),(int)219);
	HX_STACK_LINE(167)
	this->addKey(HX_CSTRING("RBRACKET"),(int)221);
	HX_STACK_LINE(168)
	this->addKey(HX_CSTRING("BACKSLASH"),(int)220);
	HX_STACK_LINE(169)
	this->addKey(HX_CSTRING("CAPSLOCK"),(int)20);
	HX_STACK_LINE(170)
	this->addKey(HX_CSTRING("SEMICOLON"),(int)186);
	HX_STACK_LINE(171)
	this->addKey(HX_CSTRING("QUOTE"),(int)222);
	HX_STACK_LINE(172)
	this->addKey(HX_CSTRING("ENTER"),(int)13);
	HX_STACK_LINE(173)
	this->addKey(HX_CSTRING("SHIFT"),(int)16);
	HX_STACK_LINE(174)
	this->addKey(HX_CSTRING("COMMA"),(int)188);
	HX_STACK_LINE(175)
	this->addKey(HX_CSTRING("PERIOD"),(int)190);
	HX_STACK_LINE(176)
	this->addKey(HX_CSTRING("SLASH"),(int)191);
	HX_STACK_LINE(177)
	this->addKey(HX_CSTRING("NUMPADSLASH"),(int)191);
	HX_STACK_LINE(178)
	this->addKey(HX_CSTRING("CONTROL"),(int)17);
	HX_STACK_LINE(179)
	this->addKey(HX_CSTRING("ALT"),(int)18);
	HX_STACK_LINE(180)
	this->addKey(HX_CSTRING("SPACE"),(int)32);
	HX_STACK_LINE(181)
	this->addKey(HX_CSTRING("UP"),(int)38);
	HX_STACK_LINE(182)
	this->addKey(HX_CSTRING("DOWN"),(int)40);
	HX_STACK_LINE(183)
	this->addKey(HX_CSTRING("LEFT"),(int)37);
	HX_STACK_LINE(184)
	this->addKey(HX_CSTRING("RIGHT"),(int)39);
	HX_STACK_LINE(185)
	this->addKey(HX_CSTRING("TAB"),(int)9);
}
;
	return null();
}

Keyboard_obj::~Keyboard_obj() { }

Dynamic Keyboard_obj::__CreateEmpty() { return  new Keyboard_obj; }
hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new()
{  hx::ObjectPtr< Keyboard_obj > result = new Keyboard_obj();
	result->__construct();
	return result;}

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keyboard_obj > result = new Keyboard_obj();
	result->__construct();
	return result;}

Void Keyboard_obj::handleKeyUp( ::native::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("Keyboard::handleKeyUp","org/flixel/system/input/Keyboard.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(213)
		::org::flixel::system::input::MapObject object = this->_map->__get(FlashEvent->keyCode);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(214)
		if (((object == null()))){
			HX_STACK_LINE(214)
			return null();
		}
		HX_STACK_LINE(215)
		if (((object->current > (int)0))){
			HX_STACK_LINE(215)
			object->current = (int)-1;
		}
		else{
			HX_STACK_LINE(216)
			object->current = (int)0;
		}
		HX_STACK_LINE(218)
		this->__SetField(object->name,false,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,handleKeyUp,(void))

Void Keyboard_obj::handleKeyDown( ::native::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("Keyboard::handleKeyDown","org/flixel/system/input/Keyboard.hx",199);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(200)
		::org::flixel::system::input::MapObject o = this->_map->__get(FlashEvent->keyCode);		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(201)
		if (((o == null()))){
			HX_STACK_LINE(201)
			return null();
		}
		HX_STACK_LINE(202)
		if (((o->current > (int)0))){
			HX_STACK_LINE(202)
			o->current = (int)1;
		}
		else{
			HX_STACK_LINE(203)
			o->current = (int)2;
		}
		HX_STACK_LINE(204)
		this->__SetField(o->name,true,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,handleKeyDown,(void))


Keyboard_obj::Keyboard_obj()
{
}

void Keyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Keyboard);
	HX_MARK_MEMBER_NAME(RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(UP,"UP");
	HX_MARK_MEMBER_NAME(SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(ALT,"ALT");
	HX_MARK_MEMBER_NAME(CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(NUMPADSLASH,"NUMPADSLASH");
	HX_MARK_MEMBER_NAME(SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(NUMPADPERIOD,"NUMPADPERIOD");
	HX_MARK_MEMBER_NAME(PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(M,"M");
	HX_MARK_MEMBER_NAME(N,"N");
	HX_MARK_MEMBER_NAME(B,"B");
	HX_MARK_MEMBER_NAME(V,"V");
	HX_MARK_MEMBER_NAME(C,"C");
	HX_MARK_MEMBER_NAME(X,"X");
	HX_MARK_MEMBER_NAME(Z,"Z");
	HX_MARK_MEMBER_NAME(SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(L,"L");
	HX_MARK_MEMBER_NAME(K,"K");
	HX_MARK_MEMBER_NAME(J,"J");
	HX_MARK_MEMBER_NAME(H,"H");
	HX_MARK_MEMBER_NAME(G,"G");
	HX_MARK_MEMBER_NAME(F,"F");
	HX_MARK_MEMBER_NAME(D,"D");
	HX_MARK_MEMBER_NAME(S,"S");
	HX_MARK_MEMBER_NAME(A,"A");
	HX_MARK_MEMBER_NAME(CAPSLOCK,"CAPSLOCK");
	HX_MARK_MEMBER_NAME(BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(RBRACKET,"RBRACKET");
	HX_MARK_MEMBER_NAME(LBRACKET,"LBRACKET");
	HX_MARK_MEMBER_NAME(P,"P");
	HX_MARK_MEMBER_NAME(O,"O");
	HX_MARK_MEMBER_NAME(I,"I");
	HX_MARK_MEMBER_NAME(U,"U");
	HX_MARK_MEMBER_NAME(Y,"Y");
	HX_MARK_MEMBER_NAME(T,"T");
	HX_MARK_MEMBER_NAME(R,"R");
	HX_MARK_MEMBER_NAME(E,"E");
	HX_MARK_MEMBER_NAME(W,"W");
	HX_MARK_MEMBER_NAME(Q,"Q");
	HX_MARK_MEMBER_NAME(TAB,"TAB");
	HX_MARK_MEMBER_NAME(BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(NUMPADPLUS,"NUMPADPLUS");
	HX_MARK_MEMBER_NAME(PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(NUMPADMINUS,"NUMPADMINUS");
	HX_MARK_MEMBER_NAME(MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(END,"END");
	HX_MARK_MEMBER_NAME(HOME,"HOME");
	HX_MARK_MEMBER_NAME(PAGEDOWN,"PAGEDOWN");
	HX_MARK_MEMBER_NAME(PAGEUP,"PAGEUP");
	HX_MARK_MEMBER_NAME(NUMPADZERO,"NUMPADZERO");
	HX_MARK_MEMBER_NAME(NUMPADNINE,"NUMPADNINE");
	HX_MARK_MEMBER_NAME(NUMPADEIGHT,"NUMPADEIGHT");
	HX_MARK_MEMBER_NAME(NUMPADSEVEN,"NUMPADSEVEN");
	HX_MARK_MEMBER_NAME(NUMPADSIX,"NUMPADSIX");
	HX_MARK_MEMBER_NAME(NUMPADFIVE,"NUMPADFIVE");
	HX_MARK_MEMBER_NAME(NUMPADFOUR,"NUMPADFOUR");
	HX_MARK_MEMBER_NAME(NUMPADTHREE,"NUMPADTHREE");
	HX_MARK_MEMBER_NAME(NUMPADTWO,"NUMPADTWO");
	HX_MARK_MEMBER_NAME(NUMPADONE,"NUMPADONE");
	HX_MARK_MEMBER_NAME(ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(NINE,"NINE");
	HX_MARK_MEMBER_NAME(EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(SIX,"SIX");
	HX_MARK_MEMBER_NAME(FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(THREE,"THREE");
	HX_MARK_MEMBER_NAME(TWO,"TWO");
	HX_MARK_MEMBER_NAME(ONE,"ONE");
	HX_MARK_MEMBER_NAME(F12,"F12");
	HX_MARK_MEMBER_NAME(F11,"F11");
	HX_MARK_MEMBER_NAME(F10,"F10");
	HX_MARK_MEMBER_NAME(F9,"F9");
	HX_MARK_MEMBER_NAME(F8,"F8");
	HX_MARK_MEMBER_NAME(F7,"F7");
	HX_MARK_MEMBER_NAME(F6,"F6");
	HX_MARK_MEMBER_NAME(F5,"F5");
	HX_MARK_MEMBER_NAME(F4,"F4");
	HX_MARK_MEMBER_NAME(F3,"F3");
	HX_MARK_MEMBER_NAME(F2,"F2");
	HX_MARK_MEMBER_NAME(F1,"F1");
	HX_MARK_MEMBER_NAME(ESCAPE,"ESCAPE");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Keyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(UP,"UP");
	HX_VISIT_MEMBER_NAME(SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(ALT,"ALT");
	HX_VISIT_MEMBER_NAME(CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(NUMPADSLASH,"NUMPADSLASH");
	HX_VISIT_MEMBER_NAME(SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(NUMPADPERIOD,"NUMPADPERIOD");
	HX_VISIT_MEMBER_NAME(PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(M,"M");
	HX_VISIT_MEMBER_NAME(N,"N");
	HX_VISIT_MEMBER_NAME(B,"B");
	HX_VISIT_MEMBER_NAME(V,"V");
	HX_VISIT_MEMBER_NAME(C,"C");
	HX_VISIT_MEMBER_NAME(X,"X");
	HX_VISIT_MEMBER_NAME(Z,"Z");
	HX_VISIT_MEMBER_NAME(SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(L,"L");
	HX_VISIT_MEMBER_NAME(K,"K");
	HX_VISIT_MEMBER_NAME(J,"J");
	HX_VISIT_MEMBER_NAME(H,"H");
	HX_VISIT_MEMBER_NAME(G,"G");
	HX_VISIT_MEMBER_NAME(F,"F");
	HX_VISIT_MEMBER_NAME(D,"D");
	HX_VISIT_MEMBER_NAME(S,"S");
	HX_VISIT_MEMBER_NAME(A,"A");
	HX_VISIT_MEMBER_NAME(CAPSLOCK,"CAPSLOCK");
	HX_VISIT_MEMBER_NAME(BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(RBRACKET,"RBRACKET");
	HX_VISIT_MEMBER_NAME(LBRACKET,"LBRACKET");
	HX_VISIT_MEMBER_NAME(P,"P");
	HX_VISIT_MEMBER_NAME(O,"O");
	HX_VISIT_MEMBER_NAME(I,"I");
	HX_VISIT_MEMBER_NAME(U,"U");
	HX_VISIT_MEMBER_NAME(Y,"Y");
	HX_VISIT_MEMBER_NAME(T,"T");
	HX_VISIT_MEMBER_NAME(R,"R");
	HX_VISIT_MEMBER_NAME(E,"E");
	HX_VISIT_MEMBER_NAME(W,"W");
	HX_VISIT_MEMBER_NAME(Q,"Q");
	HX_VISIT_MEMBER_NAME(TAB,"TAB");
	HX_VISIT_MEMBER_NAME(BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(NUMPADPLUS,"NUMPADPLUS");
	HX_VISIT_MEMBER_NAME(PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(NUMPADMINUS,"NUMPADMINUS");
	HX_VISIT_MEMBER_NAME(MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(END,"END");
	HX_VISIT_MEMBER_NAME(HOME,"HOME");
	HX_VISIT_MEMBER_NAME(PAGEDOWN,"PAGEDOWN");
	HX_VISIT_MEMBER_NAME(PAGEUP,"PAGEUP");
	HX_VISIT_MEMBER_NAME(NUMPADZERO,"NUMPADZERO");
	HX_VISIT_MEMBER_NAME(NUMPADNINE,"NUMPADNINE");
	HX_VISIT_MEMBER_NAME(NUMPADEIGHT,"NUMPADEIGHT");
	HX_VISIT_MEMBER_NAME(NUMPADSEVEN,"NUMPADSEVEN");
	HX_VISIT_MEMBER_NAME(NUMPADSIX,"NUMPADSIX");
	HX_VISIT_MEMBER_NAME(NUMPADFIVE,"NUMPADFIVE");
	HX_VISIT_MEMBER_NAME(NUMPADFOUR,"NUMPADFOUR");
	HX_VISIT_MEMBER_NAME(NUMPADTHREE,"NUMPADTHREE");
	HX_VISIT_MEMBER_NAME(NUMPADTWO,"NUMPADTWO");
	HX_VISIT_MEMBER_NAME(NUMPADONE,"NUMPADONE");
	HX_VISIT_MEMBER_NAME(ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(NINE,"NINE");
	HX_VISIT_MEMBER_NAME(EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(SIX,"SIX");
	HX_VISIT_MEMBER_NAME(FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(THREE,"THREE");
	HX_VISIT_MEMBER_NAME(TWO,"TWO");
	HX_VISIT_MEMBER_NAME(ONE,"ONE");
	HX_VISIT_MEMBER_NAME(F12,"F12");
	HX_VISIT_MEMBER_NAME(F11,"F11");
	HX_VISIT_MEMBER_NAME(F10,"F10");
	HX_VISIT_MEMBER_NAME(F9,"F9");
	HX_VISIT_MEMBER_NAME(F8,"F8");
	HX_VISIT_MEMBER_NAME(F7,"F7");
	HX_VISIT_MEMBER_NAME(F6,"F6");
	HX_VISIT_MEMBER_NAME(F5,"F5");
	HX_VISIT_MEMBER_NAME(F4,"F4");
	HX_VISIT_MEMBER_NAME(F3,"F3");
	HX_VISIT_MEMBER_NAME(F2,"F2");
	HX_VISIT_MEMBER_NAME(F1,"F1");
	HX_VISIT_MEMBER_NAME(ESCAPE,"ESCAPE");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Keyboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"M") ) { return M; }
		if (HX_FIELD_EQ(inName,"N") ) { return N; }
		if (HX_FIELD_EQ(inName,"B") ) { return B; }
		if (HX_FIELD_EQ(inName,"V") ) { return V; }
		if (HX_FIELD_EQ(inName,"C") ) { return C; }
		if (HX_FIELD_EQ(inName,"X") ) { return X; }
		if (HX_FIELD_EQ(inName,"Z") ) { return Z; }
		if (HX_FIELD_EQ(inName,"L") ) { return L; }
		if (HX_FIELD_EQ(inName,"K") ) { return K; }
		if (HX_FIELD_EQ(inName,"J") ) { return J; }
		if (HX_FIELD_EQ(inName,"H") ) { return H; }
		if (HX_FIELD_EQ(inName,"G") ) { return G; }
		if (HX_FIELD_EQ(inName,"F") ) { return F; }
		if (HX_FIELD_EQ(inName,"D") ) { return D; }
		if (HX_FIELD_EQ(inName,"S") ) { return S; }
		if (HX_FIELD_EQ(inName,"A") ) { return A; }
		if (HX_FIELD_EQ(inName,"P") ) { return P; }
		if (HX_FIELD_EQ(inName,"O") ) { return O; }
		if (HX_FIELD_EQ(inName,"I") ) { return I; }
		if (HX_FIELD_EQ(inName,"U") ) { return U; }
		if (HX_FIELD_EQ(inName,"Y") ) { return Y; }
		if (HX_FIELD_EQ(inName,"T") ) { return T; }
		if (HX_FIELD_EQ(inName,"R") ) { return R; }
		if (HX_FIELD_EQ(inName,"E") ) { return E; }
		if (HX_FIELD_EQ(inName,"W") ) { return W; }
		if (HX_FIELD_EQ(inName,"Q") ) { return Q; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return UP; }
		if (HX_FIELD_EQ(inName,"F9") ) { return F9; }
		if (HX_FIELD_EQ(inName,"F8") ) { return F8; }
		if (HX_FIELD_EQ(inName,"F7") ) { return F7; }
		if (HX_FIELD_EQ(inName,"F6") ) { return F6; }
		if (HX_FIELD_EQ(inName,"F5") ) { return F5; }
		if (HX_FIELD_EQ(inName,"F4") ) { return F4; }
		if (HX_FIELD_EQ(inName,"F3") ) { return F3; }
		if (HX_FIELD_EQ(inName,"F2") ) { return F2; }
		if (HX_FIELD_EQ(inName,"F1") ) { return F1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ALT") ) { return ALT; }
		if (HX_FIELD_EQ(inName,"TAB") ) { return TAB; }
		if (HX_FIELD_EQ(inName,"END") ) { return END; }
		if (HX_FIELD_EQ(inName,"SIX") ) { return SIX; }
		if (HX_FIELD_EQ(inName,"TWO") ) { return TWO; }
		if (HX_FIELD_EQ(inName,"ONE") ) { return ONE; }
		if (HX_FIELD_EQ(inName,"F12") ) { return F12; }
		if (HX_FIELD_EQ(inName,"F11") ) { return F11; }
		if (HX_FIELD_EQ(inName,"F10") ) { return F10; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return DOWN; }
		if (HX_FIELD_EQ(inName,"PLUS") ) { return PLUS; }
		if (HX_FIELD_EQ(inName,"HOME") ) { return HOME; }
		if (HX_FIELD_EQ(inName,"ZERO") ) { return ZERO; }
		if (HX_FIELD_EQ(inName,"NINE") ) { return NINE; }
		if (HX_FIELD_EQ(inName,"FIVE") ) { return FIVE; }
		if (HX_FIELD_EQ(inName,"FOUR") ) { return FOUR; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		if (HX_FIELD_EQ(inName,"SPACE") ) { return SPACE; }
		if (HX_FIELD_EQ(inName,"SLASH") ) { return SLASH; }
		if (HX_FIELD_EQ(inName,"COMMA") ) { return COMMA; }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { return SHIFT; }
		if (HX_FIELD_EQ(inName,"ENTER") ) { return ENTER; }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { return QUOTE; }
		if (HX_FIELD_EQ(inName,"MINUS") ) { return MINUS; }
		if (HX_FIELD_EQ(inName,"EIGHT") ) { return EIGHT; }
		if (HX_FIELD_EQ(inName,"SEVEN") ) { return SEVEN; }
		if (HX_FIELD_EQ(inName,"THREE") ) { return THREE; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PERIOD") ) { return PERIOD; }
		if (HX_FIELD_EQ(inName,"DELETE") ) { return DELETE; }
		if (HX_FIELD_EQ(inName,"INSERT") ) { return INSERT; }
		if (HX_FIELD_EQ(inName,"PAGEUP") ) { return PAGEUP; }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { return ESCAPE; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONTROL") ) { return CONTROL; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CAPSLOCK") ) { return CAPSLOCK; }
		if (HX_FIELD_EQ(inName,"RBRACKET") ) { return RBRACKET; }
		if (HX_FIELD_EQ(inName,"LBRACKET") ) { return LBRACKET; }
		if (HX_FIELD_EQ(inName,"PAGEDOWN") ) { return PAGEDOWN; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { return SEMICOLON; }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { return BACKSLASH; }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { return BACKSPACE; }
		if (HX_FIELD_EQ(inName,"NUMPADSIX") ) { return NUMPADSIX; }
		if (HX_FIELD_EQ(inName,"NUMPADTWO") ) { return NUMPADTWO; }
		if (HX_FIELD_EQ(inName,"NUMPADONE") ) { return NUMPADONE; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPADPLUS") ) { return NUMPADPLUS; }
		if (HX_FIELD_EQ(inName,"NUMPADZERO") ) { return NUMPADZERO; }
		if (HX_FIELD_EQ(inName,"NUMPADNINE") ) { return NUMPADNINE; }
		if (HX_FIELD_EQ(inName,"NUMPADFIVE") ) { return NUMPADFIVE; }
		if (HX_FIELD_EQ(inName,"NUMPADFOUR") ) { return NUMPADFOUR; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleKeyUp") ) { return handleKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADSLASH") ) { return NUMPADSLASH; }
		if (HX_FIELD_EQ(inName,"NUMPADMINUS") ) { return NUMPADMINUS; }
		if (HX_FIELD_EQ(inName,"NUMPADEIGHT") ) { return NUMPADEIGHT; }
		if (HX_FIELD_EQ(inName,"NUMPADSEVEN") ) { return NUMPADSEVEN; }
		if (HX_FIELD_EQ(inName,"NUMPADTHREE") ) { return NUMPADTHREE; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPADPERIOD") ) { return NUMPADPERIOD; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleKeyDown") ) { return handleKeyDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Keyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"M") ) { M=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"N") ) { N=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B") ) { B=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"V") ) { V=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"C") ) { C=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"X") ) { X=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z") ) { Z=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"L") ) { L=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"K") ) { K=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"J") ) { J=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"H") ) { H=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"G") ) { G=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F") ) { F=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"D") ) { D=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S") ) { S=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"A") ) { A=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"P") ) { P=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"O") ) { O=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"I") ) { I=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"U") ) { U=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y") ) { Y=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"T") ) { T=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R") ) { R=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"E") ) { E=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"W") ) { W=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Q") ) { Q=inValue.Cast< bool >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { UP=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F9") ) { F9=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F8") ) { F8=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F7") ) { F7=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F6") ) { F6=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F5") ) { F5=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F4") ) { F4=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F3") ) { F3=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F2") ) { F2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F1") ) { F1=inValue.Cast< bool >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ALT") ) { ALT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB") ) { TAB=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"END") ) { END=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIX") ) { SIX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TWO") ) { TWO=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE") ) { ONE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F12") ) { F12=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F11") ) { F11=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F10") ) { F10=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLUS") ) { PLUS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HOME") ) { HOME=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ZERO") ) { ZERO=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NINE") ) { NINE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FIVE") ) { FIVE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FOUR") ) { FOUR=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPACE") ) { SPACE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SLASH") ) { SLASH=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMMA") ) { COMMA=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { SHIFT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ENTER") ) { ENTER=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { QUOTE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MINUS") ) { MINUS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EIGHT") ) { EIGHT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SEVEN") ) { SEVEN=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"THREE") ) { THREE=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PERIOD") ) { PERIOD=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELETE") ) { DELETE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INSERT") ) { INSERT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAGEUP") ) { PAGEUP=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { ESCAPE=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONTROL") ) { CONTROL=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CAPSLOCK") ) { CAPSLOCK=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RBRACKET") ) { RBRACKET=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LBRACKET") ) { LBRACKET=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAGEDOWN") ) { PAGEDOWN=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { SEMICOLON=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { BACKSLASH=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { BACKSPACE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADSIX") ) { NUMPADSIX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADTWO") ) { NUMPADTWO=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADONE") ) { NUMPADONE=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPADPLUS") ) { NUMPADPLUS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADZERO") ) { NUMPADZERO=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADNINE") ) { NUMPADNINE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADFIVE") ) { NUMPADFIVE=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADFOUR") ) { NUMPADFOUR=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUMPADSLASH") ) { NUMPADSLASH=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADMINUS") ) { NUMPADMINUS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADEIGHT") ) { NUMPADEIGHT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADSEVEN") ) { NUMPADSEVEN=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPADTHREE") ) { NUMPADTHREE=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPADPERIOD") ) { NUMPADPERIOD=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Keyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("RIGHT"));
	outFields->push(HX_CSTRING("LEFT"));
	outFields->push(HX_CSTRING("DOWN"));
	outFields->push(HX_CSTRING("UP"));
	outFields->push(HX_CSTRING("SPACE"));
	outFields->push(HX_CSTRING("ALT"));
	outFields->push(HX_CSTRING("CONTROL"));
	outFields->push(HX_CSTRING("NUMPADSLASH"));
	outFields->push(HX_CSTRING("SLASH"));
	outFields->push(HX_CSTRING("NUMPADPERIOD"));
	outFields->push(HX_CSTRING("PERIOD"));
	outFields->push(HX_CSTRING("COMMA"));
	outFields->push(HX_CSTRING("M"));
	outFields->push(HX_CSTRING("N"));
	outFields->push(HX_CSTRING("B"));
	outFields->push(HX_CSTRING("V"));
	outFields->push(HX_CSTRING("C"));
	outFields->push(HX_CSTRING("X"));
	outFields->push(HX_CSTRING("Z"));
	outFields->push(HX_CSTRING("SHIFT"));
	outFields->push(HX_CSTRING("ENTER"));
	outFields->push(HX_CSTRING("QUOTE"));
	outFields->push(HX_CSTRING("SEMICOLON"));
	outFields->push(HX_CSTRING("L"));
	outFields->push(HX_CSTRING("K"));
	outFields->push(HX_CSTRING("J"));
	outFields->push(HX_CSTRING("H"));
	outFields->push(HX_CSTRING("G"));
	outFields->push(HX_CSTRING("F"));
	outFields->push(HX_CSTRING("D"));
	outFields->push(HX_CSTRING("S"));
	outFields->push(HX_CSTRING("A"));
	outFields->push(HX_CSTRING("CAPSLOCK"));
	outFields->push(HX_CSTRING("BACKSLASH"));
	outFields->push(HX_CSTRING("RBRACKET"));
	outFields->push(HX_CSTRING("LBRACKET"));
	outFields->push(HX_CSTRING("P"));
	outFields->push(HX_CSTRING("O"));
	outFields->push(HX_CSTRING("I"));
	outFields->push(HX_CSTRING("U"));
	outFields->push(HX_CSTRING("Y"));
	outFields->push(HX_CSTRING("T"));
	outFields->push(HX_CSTRING("R"));
	outFields->push(HX_CSTRING("E"));
	outFields->push(HX_CSTRING("W"));
	outFields->push(HX_CSTRING("Q"));
	outFields->push(HX_CSTRING("TAB"));
	outFields->push(HX_CSTRING("BACKSPACE"));
	outFields->push(HX_CSTRING("DELETE"));
	outFields->push(HX_CSTRING("NUMPADPLUS"));
	outFields->push(HX_CSTRING("PLUS"));
	outFields->push(HX_CSTRING("NUMPADMINUS"));
	outFields->push(HX_CSTRING("MINUS"));
	outFields->push(HX_CSTRING("INSERT"));
	outFields->push(HX_CSTRING("END"));
	outFields->push(HX_CSTRING("HOME"));
	outFields->push(HX_CSTRING("PAGEDOWN"));
	outFields->push(HX_CSTRING("PAGEUP"));
	outFields->push(HX_CSTRING("NUMPADZERO"));
	outFields->push(HX_CSTRING("NUMPADNINE"));
	outFields->push(HX_CSTRING("NUMPADEIGHT"));
	outFields->push(HX_CSTRING("NUMPADSEVEN"));
	outFields->push(HX_CSTRING("NUMPADSIX"));
	outFields->push(HX_CSTRING("NUMPADFIVE"));
	outFields->push(HX_CSTRING("NUMPADFOUR"));
	outFields->push(HX_CSTRING("NUMPADTHREE"));
	outFields->push(HX_CSTRING("NUMPADTWO"));
	outFields->push(HX_CSTRING("NUMPADONE"));
	outFields->push(HX_CSTRING("ZERO"));
	outFields->push(HX_CSTRING("NINE"));
	outFields->push(HX_CSTRING("EIGHT"));
	outFields->push(HX_CSTRING("SEVEN"));
	outFields->push(HX_CSTRING("SIX"));
	outFields->push(HX_CSTRING("FIVE"));
	outFields->push(HX_CSTRING("FOUR"));
	outFields->push(HX_CSTRING("THREE"));
	outFields->push(HX_CSTRING("TWO"));
	outFields->push(HX_CSTRING("ONE"));
	outFields->push(HX_CSTRING("F12"));
	outFields->push(HX_CSTRING("F11"));
	outFields->push(HX_CSTRING("F10"));
	outFields->push(HX_CSTRING("F9"));
	outFields->push(HX_CSTRING("F8"));
	outFields->push(HX_CSTRING("F7"));
	outFields->push(HX_CSTRING("F6"));
	outFields->push(HX_CSTRING("F5"));
	outFields->push(HX_CSTRING("F4"));
	outFields->push(HX_CSTRING("F3"));
	outFields->push(HX_CSTRING("F2"));
	outFields->push(HX_CSTRING("F1"));
	outFields->push(HX_CSTRING("ESCAPE"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("handleKeyUp"),
	HX_CSTRING("handleKeyDown"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("UP"),
	HX_CSTRING("SPACE"),
	HX_CSTRING("ALT"),
	HX_CSTRING("CONTROL"),
	HX_CSTRING("NUMPADSLASH"),
	HX_CSTRING("SLASH"),
	HX_CSTRING("NUMPADPERIOD"),
	HX_CSTRING("PERIOD"),
	HX_CSTRING("COMMA"),
	HX_CSTRING("M"),
	HX_CSTRING("N"),
	HX_CSTRING("B"),
	HX_CSTRING("V"),
	HX_CSTRING("C"),
	HX_CSTRING("X"),
	HX_CSTRING("Z"),
	HX_CSTRING("SHIFT"),
	HX_CSTRING("ENTER"),
	HX_CSTRING("QUOTE"),
	HX_CSTRING("SEMICOLON"),
	HX_CSTRING("L"),
	HX_CSTRING("K"),
	HX_CSTRING("J"),
	HX_CSTRING("H"),
	HX_CSTRING("G"),
	HX_CSTRING("F"),
	HX_CSTRING("D"),
	HX_CSTRING("S"),
	HX_CSTRING("A"),
	HX_CSTRING("CAPSLOCK"),
	HX_CSTRING("BACKSLASH"),
	HX_CSTRING("RBRACKET"),
	HX_CSTRING("LBRACKET"),
	HX_CSTRING("P"),
	HX_CSTRING("O"),
	HX_CSTRING("I"),
	HX_CSTRING("U"),
	HX_CSTRING("Y"),
	HX_CSTRING("T"),
	HX_CSTRING("R"),
	HX_CSTRING("E"),
	HX_CSTRING("W"),
	HX_CSTRING("Q"),
	HX_CSTRING("TAB"),
	HX_CSTRING("BACKSPACE"),
	HX_CSTRING("DELETE"),
	HX_CSTRING("NUMPADPLUS"),
	HX_CSTRING("PLUS"),
	HX_CSTRING("NUMPADMINUS"),
	HX_CSTRING("MINUS"),
	HX_CSTRING("INSERT"),
	HX_CSTRING("END"),
	HX_CSTRING("HOME"),
	HX_CSTRING("PAGEDOWN"),
	HX_CSTRING("PAGEUP"),
	HX_CSTRING("NUMPADZERO"),
	HX_CSTRING("NUMPADNINE"),
	HX_CSTRING("NUMPADEIGHT"),
	HX_CSTRING("NUMPADSEVEN"),
	HX_CSTRING("NUMPADSIX"),
	HX_CSTRING("NUMPADFIVE"),
	HX_CSTRING("NUMPADFOUR"),
	HX_CSTRING("NUMPADTHREE"),
	HX_CSTRING("NUMPADTWO"),
	HX_CSTRING("NUMPADONE"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("NINE"),
	HX_CSTRING("EIGHT"),
	HX_CSTRING("SEVEN"),
	HX_CSTRING("SIX"),
	HX_CSTRING("FIVE"),
	HX_CSTRING("FOUR"),
	HX_CSTRING("THREE"),
	HX_CSTRING("TWO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("F12"),
	HX_CSTRING("F11"),
	HX_CSTRING("F10"),
	HX_CSTRING("F9"),
	HX_CSTRING("F8"),
	HX_CSTRING("F7"),
	HX_CSTRING("F6"),
	HX_CSTRING("F5"),
	HX_CSTRING("F4"),
	HX_CSTRING("F3"),
	HX_CSTRING("F2"),
	HX_CSTRING("F1"),
	HX_CSTRING("ESCAPE"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
};

Class Keyboard_obj::__mClass;

void Keyboard_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.Keyboard"), hx::TCanCast< Keyboard_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Keyboard_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
