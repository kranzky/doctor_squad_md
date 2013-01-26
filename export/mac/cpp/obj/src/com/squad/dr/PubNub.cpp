#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_squad_dr_PubNub
#include <com/squad/dr/PubNub.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace com{
namespace squad{
namespace dr{

Void PubNub_obj::__construct(::String pub_key,::String sub_key,::String channel)
{
HX_STACK_PUSH("PubNub::new","com/squad/dr/PubNub.hx",22);
{
	HX_STACK_LINE(23)
	::String service = HX_CSTRING("http://pubsub.pubnub.com");		HX_STACK_VAR(service,"service");
	HX_STACK_LINE(24)
	this->_sub_thread = ::com::squad::dr::PubNub_obj::_create_subscriber((((((service + HX_CSTRING("/subscribe/")) + sub_key) + HX_CSTRING("/")) + channel) + HX_CSTRING("/0/")));
	HX_STACK_LINE(25)
	this->_pub_url = (((((((service + HX_CSTRING("/publish/")) + pub_key) + HX_CSTRING("/")) + sub_key) + HX_CSTRING("/0/")) + channel) + HX_CSTRING("/0/"));
}
;
	return null();
}

PubNub_obj::~PubNub_obj() { }

Dynamic PubNub_obj::__CreateEmpty() { return  new PubNub_obj; }
hx::ObjectPtr< PubNub_obj > PubNub_obj::__new(::String pub_key,::String sub_key,::String channel)
{  hx::ObjectPtr< PubNub_obj > result = new PubNub_obj();
	result->__construct(pub_key,sub_key,channel);
	return result;}

Dynamic PubNub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PubNub_obj > result = new PubNub_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void PubNub_obj::read( Dynamic notify){
{
		HX_STACK_PUSH("PubNub::read","com/squad/dr/PubNub.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notify,"notify");
		HX_STACK_LINE(46)
		::EReg regex_content = ::EReg_obj::__new(HX_CSTRING("^(\\{.*?\\}),(.*)$"),HX_CSTRING(""));		HX_STACK_VAR(regex_content,"regex_content");
		HX_STACK_LINE(47)
		::String message = ::cpp::vm::Thread_obj::readMessage(false);		HX_STACK_VAR(message,"message");
		HX_STACK_LINE(48)
		while(((message != null()))){
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				if ((regex_content->match(message))){
					HX_STACK_LINE(51)
					notify(regex_content->matched((int)1));
					HX_STACK_LINE(52)
					message = regex_content->matched((int)2);
				}
				else{
					HX_STACK_LINE(54)
					notify(message);
					HX_STACK_LINE(55)
					break;
				}
			}
			HX_STACK_LINE(58)
			message = ::cpp::vm::Thread_obj::readMessage(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PubNub_obj,read,(void))

Void PubNub_obj::send( Dynamic object){
{
		HX_STACK_PUSH("PubNub::send","com/squad/dr/PubNub.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_LINE(35)
		::cpp::vm::Thread pub_thread = ::com::squad::dr::PubNub_obj::_create_publisher(this->_pub_url);		HX_STACK_VAR(pub_thread,"pub_thread");
		HX_STACK_LINE(36)
		pub_thread->sendMessage(object);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PubNub_obj,send,(void))

::cpp::vm::Thread PubNub_obj::_create_publisher( ::String base){
	HX_STACK_PUSH("PubNub::_create_publisher","com/squad/dr/PubNub.hx",63);
	HX_STACK_ARG(base,"base");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Void run(){
		HX_STACK_PUSH("*::_Function_1_1","com/squad/dr/PubNub.hx",64);
		{
			HX_STACK_LINE(65)
			::String base1 = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(base1,"base1");
			HX_STACK_LINE(66)
			Dynamic object = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(67)
			::String url = (base1 + ::haxe::Json_obj::stringify(object));		HX_STACK_VAR(url,"url");
			HX_STACK_LINE(68)
			::haxe::Http client = ::haxe::Http_obj::__new(url);		HX_STACK_VAR(client,"client");
			HX_STACK_LINE(69)
			client->setHeader(HX_CSTRING("Accept"),HX_CSTRING("application/json"));
			HX_STACK_LINE(70)
			client->noShutdown = true;

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			Void run(::String error){
				HX_STACK_PUSH("*::_Function_2_1","com/squad/dr/PubNub.hx",71);
				HX_STACK_ARG(error,"error");
				{
					HX_STACK_LINE(71)
					::haxe::Log_obj::trace((HX_CSTRING("PUB ERROR : ") + ::Std_obj::string(error)),hx::SourceInfo(HX_CSTRING("PubNub.hx"),72,HX_CSTRING("com.squad.dr.PubNub"),HX_CSTRING("_create_publisher")));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(71)
			client->onError =  Dynamic(new _Function_2_1());

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			Void run(::String data){
				HX_STACK_PUSH("*::_Function_2_2","com/squad/dr/PubNub.hx",74);
				HX_STACK_ARG(data,"data");
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(74)
			client->onData =  Dynamic(new _Function_2_2());
			HX_STACK_LINE(77)
			client->request(false);
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(64)
	::cpp::vm::Thread thread = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1()));		HX_STACK_VAR(thread,"thread");
	HX_STACK_LINE(79)
	thread->sendMessage(base);
	HX_STACK_LINE(80)
	return thread;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PubNub_obj,_create_publisher,return )

::cpp::vm::Thread PubNub_obj::_create_subscriber( ::String base){
	HX_STACK_PUSH("PubNub::_create_subscriber","com/squad/dr/PubNub.hx",84);
	HX_STACK_ARG(base,"base");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Void run(){
		HX_STACK_PUSH("*::_Function_1_1","com/squad/dr/PubNub.hx",85);
		{
			HX_STACK_LINE(86)
			Array< ::cpp::vm::Thread > main = Array_obj< ::cpp::vm::Thread >::__new().Add(::cpp::vm::Thread_obj::readMessage(true));		HX_STACK_VAR(main,"main");
			HX_STACK_LINE(87)
			::String base1 = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(base1,"base1");
			HX_STACK_LINE(88)
			Array< ::String > time_token = Array_obj< ::String >::__new().Add(HX_CSTRING("0"));		HX_STACK_VAR(time_token,"time_token");
			HX_STACK_LINE(89)
			Array< ::EReg > regex_response = Array_obj< ::EReg >::__new().Add(::EReg_obj::__new(HX_CSTRING("^\\[\\[(.*)\\],\"(.*)\"\\]$"),HX_CSTRING("")));		HX_STACK_VAR(regex_response,"regex_response");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(91)
				::String url = (base1 + time_token->__get((int)0));		HX_STACK_VAR(url,"url");
				HX_STACK_LINE(92)
				::haxe::Http client = ::haxe::Http_obj::__new(url);		HX_STACK_VAR(client,"client");
				HX_STACK_LINE(93)
				client->setHeader(HX_CSTRING("Accept"),HX_CSTRING("application/json"));
				HX_STACK_LINE(94)
				client->noShutdown = true;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				Void run(::String error){
					HX_STACK_PUSH("*::_Function_3_1","com/squad/dr/PubNub.hx",95);
					HX_STACK_ARG(error,"error");
					{
						HX_STACK_LINE(95)
						::haxe::Log_obj::trace((HX_CSTRING("SUB ERROR : ") + ::Std_obj::string(error)),hx::SourceInfo(HX_CSTRING("PubNub.hx"),96,HX_CSTRING("com.squad.dr.PubNub"),HX_CSTRING("_create_subscriber")));
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(95)
				client->onError =  Dynamic(new _Function_3_1());

				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_3_2,Array< ::String >,time_token,Array< ::cpp::vm::Thread >,main,Array< ::EReg >,regex_response)
				Void run(::String data){
					HX_STACK_PUSH("*::_Function_3_2","com/squad/dr/PubNub.hx",98);
					HX_STACK_ARG(data,"data");
					{
						HX_STACK_LINE(99)
						regex_response->__get((int)0)->match(data);
						HX_STACK_LINE(100)
						time_token[(int)0] = regex_response->__get((int)0)->matched((int)2);
						HX_STACK_LINE(101)
						::String payload = regex_response->__get((int)0)->matched((int)1);		HX_STACK_VAR(payload,"payload");
						HX_STACK_LINE(102)
						if (((payload.length > (int)2))){
							HX_STACK_LINE(102)
							main->__get((int)0)->sendMessage(payload);
						}
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(98)
				client->onData =  Dynamic(new _Function_3_2(time_token,main,regex_response));
				HX_STACK_LINE(106)
				client->request(false);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(85)
	::cpp::vm::Thread thread = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1()));		HX_STACK_VAR(thread,"thread");
	HX_STACK_LINE(109)
	thread->sendMessage(::cpp::vm::Thread_obj::current());
	HX_STACK_LINE(110)
	thread->sendMessage(base);
	HX_STACK_LINE(111)
	return thread;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PubNub_obj,_create_subscriber,return )


PubNub_obj::PubNub_obj()
{
}

void PubNub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PubNub);
	HX_MARK_MEMBER_NAME(_pub_url,"_pub_url");
	HX_MARK_MEMBER_NAME(_sub_thread,"_sub_thread");
	HX_MARK_END_CLASS();
}

void PubNub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pub_url,"_pub_url");
	HX_VISIT_MEMBER_NAME(_sub_thread,"_sub_thread");
}

Dynamic PubNub_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		if (HX_FIELD_EQ(inName,"send") ) { return send_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pub_url") ) { return _pub_url; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_sub_thread") ) { return _sub_thread; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_create_publisher") ) { return _create_publisher_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_create_subscriber") ) { return _create_subscriber_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PubNub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_pub_url") ) { _pub_url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_sub_thread") ) { _sub_thread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PubNub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pub_url"));
	outFields->push(HX_CSTRING("_sub_thread"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_create_publisher"),
	HX_CSTRING("_create_subscriber"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("read"),
	HX_CSTRING("send"),
	HX_CSTRING("_pub_url"),
	HX_CSTRING("_sub_thread"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PubNub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PubNub_obj::__mClass,"__mClass");
};

Class PubNub_obj::__mClass;

void PubNub_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.squad.dr.PubNub"), hx::TCanCast< PubNub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PubNub_obj::__boot()
{
}

} // end namespace com
} // end namespace squad
} // end namespace dr
