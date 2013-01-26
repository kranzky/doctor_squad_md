#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_org_flixel_FlxU
#include <org/flixel/FlxU.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
namespace org{
namespace flixel{

Void FlxGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_PUSH("FlxGroup::new","org/flixel/FlxGroup.hx",55);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(56)
	super::__construct();
	HX_STACK_LINE(57)
	this->members = Array_obj< ::org::flixel::FlxBasic >::__new();
	HX_STACK_LINE(58)
	this->length = (int)0;
	HX_STACK_LINE(59)
	this->setMaxSize(::Math_obj::floor(::Math_obj::abs(MaxSize)));
	HX_STACK_LINE(60)
	this->_marker = (int)0;
	HX_STACK_LINE(61)
	this->_sortIndex = null();
}
;
	return null();
}

FlxGroup_obj::~FlxGroup_obj() { }

Dynamic FlxGroup_obj::__CreateEmpty() { return  new FlxGroup_obj; }
hx::ObjectPtr< FlxGroup_obj > FlxGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

int FlxGroup_obj::sortHandler( ::org::flixel::FlxBasic Obj1,::org::flixel::FlxBasic Obj2){
	HX_STACK_PUSH("FlxGroup::sortHandler","org/flixel/FlxGroup.hx",668);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Obj1,"Obj1");
	HX_STACK_ARG(Obj2,"Obj2");
	HX_STACK_LINE(669)
	int prop1 = (  (((Obj1 == null()))) ? Dynamic(null()) : Dynamic(Obj1->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop1,"prop1");
	HX_STACK_LINE(670)
	int prop2 = (  (((Obj2 == null()))) ? Dynamic(null()) : Dynamic(Obj2->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop2,"prop2");
	HX_STACK_LINE(672)
	if (((prop1 < prop2))){
		HX_STACK_LINE(673)
		return this->_sortOrder;
	}
	else{
		HX_STACK_LINE(676)
		if (((prop1 > prop2))){
			HX_STACK_LINE(677)
			return -(this->_sortOrder);
		}
	}
	HX_STACK_LINE(680)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,sortHandler,return )

Void FlxGroup_obj::kill( ){
{
		HX_STACK_PUSH("FlxGroup::kill","org/flixel/FlxGroup.hx",647);
		HX_STACK_THIS(this);
		HX_STACK_LINE(648)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(649)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(650)
		while(((i < this->length))){
			HX_STACK_LINE(652)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(653)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(654)
				basic->kill();
			}
		}
		HX_STACK_LINE(658)
		this->super::kill();
	}
return null();
}


Void FlxGroup_obj::clear( ){
{
		HX_STACK_PUSH("FlxGroup::clear","org/flixel/FlxGroup.hx",638);
		HX_STACK_THIS(this);
		HX_STACK_LINE(639)
		this->length = (int)0;
		HX_STACK_LINE(640)
		this->members->splice((int)0,this->members->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,clear,(void))

::org::flixel::FlxBasic FlxGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxGroup::getRandom","org/flixel/FlxGroup.hx",621);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(622)
		if (((StartIndex < (int)0))){
			HX_STACK_LINE(623)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(626)
		if (((Length <= (int)0))){
			HX_STACK_LINE(627)
			Length = this->length;
		}
		HX_STACK_LINE(630)
		return hx::TCast< org::flixel::FlxBasic >::cast(::org::flixel::FlxG_obj::getRandom(this->members,StartIndex,Length));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,getRandom,return )

int FlxGroup_obj::countDead( ){
	HX_STACK_PUSH("FlxGroup::countDead","org/flixel/FlxGroup.hx",590);
	HX_STACK_THIS(this);
	HX_STACK_LINE(591)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(592)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(593)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(594)
	while(((i < this->length))){
		HX_STACK_LINE(596)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(597)
		if (((basic != null()))){
			HX_STACK_LINE(599)
			if (((count < (int)0))){
				HX_STACK_LINE(600)
				count = (int)0;
			}
			HX_STACK_LINE(603)
			if ((!(basic->alive))){
				HX_STACK_LINE(604)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(609)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,countDead,return )

int FlxGroup_obj::countLiving( ){
	HX_STACK_PUSH("FlxGroup::countLiving","org/flixel/FlxGroup.hx",563);
	HX_STACK_THIS(this);
	HX_STACK_LINE(564)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(565)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(566)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(567)
	while(((i < this->length))){
		HX_STACK_LINE(569)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(570)
		if (((basic != null()))){
			HX_STACK_LINE(572)
			if (((count < (int)0))){
				HX_STACK_LINE(573)
				count = (int)0;
			}
			HX_STACK_LINE(576)
			if (((bool(basic->exists) && bool(basic->alive)))){
				HX_STACK_LINE(577)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(582)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,countLiving,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstDead( ){
	HX_STACK_PUSH("FlxGroup::getFirstDead","org/flixel/FlxGroup.hx",544);
	HX_STACK_THIS(this);
	HX_STACK_LINE(545)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(546)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(547)
	while(((i < this->length))){
		HX_STACK_LINE(549)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(550)
		if (((bool((basic != null())) && bool(!(basic->alive))))){
			HX_STACK_LINE(551)
			return basic;
		}
	}
	HX_STACK_LINE(555)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstDead,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstAlive( ){
	HX_STACK_PUSH("FlxGroup::getFirstAlive","org/flixel/FlxGroup.hx",523);
	HX_STACK_THIS(this);
	HX_STACK_LINE(524)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(525)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(526)
	while(((i < this->length))){
		HX_STACK_LINE(528)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(529)
		if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
			HX_STACK_LINE(530)
			return basic;
		}
	}
	HX_STACK_LINE(534)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstAlive,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstExtant( ){
	HX_STACK_PUSH("FlxGroup::getFirstExtant","org/flixel/FlxGroup.hx",502);
	HX_STACK_THIS(this);
	HX_STACK_LINE(503)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(504)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(505)
	while(((i < this->length))){
		HX_STACK_LINE(507)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(508)
		if (((bool((basic != null())) && bool(basic->exists)))){
			HX_STACK_LINE(509)
			return basic;
		}
	}
	HX_STACK_LINE(513)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstExtant,return )

int FlxGroup_obj::getFirstNull( ){
	HX_STACK_PUSH("FlxGroup::getFirstNull","org/flixel/FlxGroup.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_LINE(479)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(480)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(481)
	int l = this->members->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(482)
	while(((i < l))){
		HX_STACK_LINE(483)
		if (((this->members->__get(i) == null()))){
			HX_STACK_LINE(485)
			return i;
		}
		else{
			HX_STACK_LINE(489)
			(i)++;
		}
	}
	HX_STACK_LINE(493)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstNull,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstAvailable( ::Class ObjectClass){
	HX_STACK_PUSH("FlxGroup::getFirstAvailable","org/flixel/FlxGroup.hx",458);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_LINE(459)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(460)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(461)
	while(((i < this->length))){
		HX_STACK_LINE(463)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(464)
		if (((bool((bool((basic != null())) && bool(!(basic->exists)))) && bool(((bool((ObjectClass == null())) || bool(::Std_obj::is(basic,ObjectClass)))))))){
			HX_STACK_LINE(465)
			return basic;
		}
	}
	HX_STACK_LINE(469)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,getFirstAvailable,return )

Void FlxGroup_obj::callAll( ::String FunctionName,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxGroup::callAll","org/flixel/FlxGroup.hx",431);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FunctionName,"FunctionName");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(432)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(433)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(434)
		while(((i < this->length))){
			HX_STACK_LINE(436)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(437)
			if (((basic != null()))){
				HX_STACK_LINE(438)
				if (((bool(Recurse) && bool(::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxGroup >()))))){
					HX_STACK_LINE(440)
					(hx::TCast< org::flixel::FlxGroup >::cast(basic))->callAll(FunctionName,Recurse);
				}
				else{
					HX_STACK_LINE(444)
					::Reflect_obj::callMethod(basic,(  (((basic == null()))) ? Dynamic(null()) : Dynamic(basic->__Field(FunctionName,true)) ),Dynamic( Array_obj<Dynamic>::__new()));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,callAll,(void))

Void FlxGroup_obj::setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxGroup::setAll","org/flixel/FlxGroup.hx",404);
	HX_STACK_THIS(this);
	HX_STACK_ARG(VariableName,"VariableName");
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(405)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(406)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(407)
		while(((i < this->length))){
			HX_STACK_LINE(409)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(410)
			if (((basic != null()))){
				HX_STACK_LINE(411)
				if (((bool(Recurse) && bool(::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxGroup >()))))){
					HX_STACK_LINE(413)
					(hx::TCast< org::flixel::FlxGroup >::cast(basic))->setAll(VariableName,Value,Recurse);
				}
				else{
					HX_STACK_LINE(417)
					if (((basic != null()))){
						HX_STACK_LINE(418)
						basic->__SetField(VariableName,Value,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxGroup_obj,setAll,(void))

Void FlxGroup_obj::sort( ::String __o_Index,hx::Null< int >  __o_Order){
::String Index = __o_Index.Default(HX_CSTRING("y"));
int Order = __o_Order.Default(-1);
	HX_STACK_PUSH("FlxGroup::sort","org/flixel/FlxGroup.hx",391);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Order,"Order");
{
		HX_STACK_LINE(392)
		this->_sortIndex = Index;
		HX_STACK_LINE(393)
		this->_sortOrder = Order;
		HX_STACK_LINE(394)
		this->members->sort(this->sortHandler_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,sort,(void))

::org::flixel::FlxBasic FlxGroup_obj::replace( ::org::flixel::FlxBasic OldObject,::org::flixel::FlxBasic NewObject){
	HX_STACK_PUSH("FlxGroup::replace","org/flixel/FlxGroup.hx",371);
	HX_STACK_THIS(this);
	HX_STACK_ARG(OldObject,"OldObject");
	HX_STACK_ARG(NewObject,"NewObject");
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxGroup_obj *__this,::org::flixel::FlxBasic &OldObject){
			HX_STACK_PUSH("*::closure","org/flixel/FlxGroup.hx",372);
			{
				HX_STACK_LINE(372)
				Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(372)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(372)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(372)
					while(((_g < len))){
						HX_STACK_LINE(372)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(372)
						if (((array->__GetItem(i) == OldObject))){
							HX_STACK_LINE(372)
							index = i;
						}
					}
				}
				HX_STACK_LINE(372)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(372)
	int index = _Function_1_1::Block(this,OldObject);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(373)
	if (((bool((index < (int)0)) || bool((index >= this->members->length))))){
		HX_STACK_LINE(374)
		return null();
	}
	HX_STACK_LINE(377)
	this->members[index] = NewObject;
	HX_STACK_LINE(378)
	return NewObject;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,replace,return )

::org::flixel::FlxBasic FlxGroup_obj::remove( ::org::flixel::FlxBasic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_PUSH("FlxGroup::remove","org/flixel/FlxGroup.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Splice,"Splice");
{
		struct _Function_1_1{
			inline static int Block( ::org::flixel::FlxGroup_obj *__this,::org::flixel::FlxBasic &Object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxGroup.hx",348);
				{
					HX_STACK_LINE(348)
					Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(348)
					int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(348)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(348)
					{
						HX_STACK_LINE(348)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(348)
						while(((_g < len))){
							HX_STACK_LINE(348)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(348)
							if (((array->__GetItem(i) == Object))){
								HX_STACK_LINE(348)
								index = i;
							}
						}
					}
					HX_STACK_LINE(348)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(348)
		int index = _Function_1_1::Block(this,Object);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(349)
		if (((bool((index < (int)0)) || bool((index >= this->members->length))))){
			HX_STACK_LINE(350)
			return null();
		}
		HX_STACK_LINE(353)
		if ((Splice)){
			HX_STACK_LINE(354)
			this->members->splice(index,(int)1);
		}
		else{
			HX_STACK_LINE(358)
			this->members[index] = null();
		}
		HX_STACK_LINE(361)
		return Object;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,remove,return )

::org::flixel::FlxBasic FlxGroup_obj::recycle( ::Class ObjectClass){
	HX_STACK_PUSH("FlxGroup::recycle","org/flixel/FlxGroup.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_LINE(304)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(305)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(306)
		if (((this->length < this->maxSize))){
			HX_STACK_LINE(309)
			if (((ObjectClass == null()))){
				HX_STACK_LINE(310)
				return null();
			}
			HX_STACK_LINE(313)
			return this->add(::Type_obj::createInstance(ObjectClass,Dynamic( Array_obj<Dynamic>::__new())));
		}
		else{
			HX_STACK_LINE(317)
			basic = this->members->__get((this->_marker)++);
			HX_STACK_LINE(318)
			if (((this->_marker >= this->maxSize))){
				HX_STACK_LINE(319)
				this->_marker = (int)0;
			}
			HX_STACK_LINE(322)
			return basic;
		}
	}
	else{
		HX_STACK_LINE(327)
		basic = this->getFirstAvailable(ObjectClass);
		HX_STACK_LINE(328)
		if (((basic != null()))){
			HX_STACK_LINE(329)
			return basic;
		}
		HX_STACK_LINE(332)
		if (((ObjectClass == null()))){
			HX_STACK_LINE(333)
			return null();
		}
		HX_STACK_LINE(336)
		return this->add(::Type_obj::createInstance(ObjectClass,Dynamic( Array_obj<Dynamic>::__new())));
	}
	HX_STACK_LINE(305)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,recycle,return )

::org::flixel::system::layer::Atlas FlxGroup_obj::set_atlas( ::org::flixel::system::layer::Atlas value){
	HX_STACK_PUSH("FlxGroup::set_atlas","org/flixel/FlxGroup.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(258)
	if (((this->_atlas != value))){
		HX_STACK_LINE(260)
		if (((value == null()))){
			HX_STACK_LINE(262)
			this->_node = null();
			HX_STACK_LINE(263)
			this->_framesData = null();
		}
		HX_STACK_LINE(266)
		this->_atlas = value;
	}
	HX_STACK_LINE(269)
	if (((this->_atlas != null()))){
		HX_STACK_LINE(271)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::FlxBasic > _g1 = this->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(271)
		while(((_g < _g1->length))){
			HX_STACK_LINE(271)
			::org::flixel::FlxBasic basic = _g1->__get(_g);		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(271)
			++(_g);
			HX_STACK_LINE(273)
			if (((basic != null()))){
				HX_STACK_LINE(274)
				this->setGroupAtlas(basic);
			}
		}
	}
	HX_STACK_LINE(280)
	return value;
}


Void FlxGroup_obj::setGroupAtlas( ::org::flixel::FlxBasic Object){
{
		HX_STACK_PUSH("FlxGroup::setGroupAtlas","org/flixel/FlxGroup.hx",249);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(249)
		if (((this->_atlas != null()))){
			HX_STACK_LINE(251)
			Object->set_atlas(this->_atlas);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,setGroupAtlas,(void))

::org::flixel::FlxBasic FlxGroup_obj::add( ::org::flixel::FlxBasic Object){
	HX_STACK_PUSH("FlxGroup::add","org/flixel/FlxGroup.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(184)
	if (((Object == null()))){
		HX_STACK_LINE(186)
		::org::flixel::FlxG_obj::log(HX_CSTRING("WARNING: Cannot add a `null` object to a FlxGroup."));
		HX_STACK_LINE(187)
		return null();
	}
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxGroup_obj *__this,::org::flixel::FlxBasic &Object){
			HX_STACK_PUSH("*::closure","org/flixel/FlxGroup.hx",191);
			{
				HX_STACK_LINE(191)
				Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(191)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(191)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(191)
					while(((_g < len))){
						HX_STACK_LINE(191)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(191)
						if (((array->__GetItem(i) == Object))){
							HX_STACK_LINE(191)
							index = i;
						}
					}
				}
				HX_STACK_LINE(191)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(191)
	if (((_Function_1_1::Block(this,Object) >= (int)0))){
		HX_STACK_LINE(192)
		return Object;
	}
	HX_STACK_LINE(197)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(198)
	int l = this->members->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(199)
	while(((i < l))){
		HX_STACK_LINE(201)
		if (((this->members->__get(i) == null()))){
			HX_STACK_LINE(203)
			this->members[i] = Object;
			HX_STACK_LINE(204)
			if (((i >= this->length))){
				HX_STACK_LINE(205)
				this->length = (i + (int)1);
			}
			HX_STACK_LINE(209)
			this->setGroupAtlas(Object);
			HX_STACK_LINE(211)
			return Object;
		}
		HX_STACK_LINE(213)
		(i)++;
	}
	HX_STACK_LINE(217)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(218)
		if (((this->members->length >= this->maxSize))){
			HX_STACK_LINE(220)
			return Object;
		}
		else{
			HX_STACK_LINE(223)
			if ((((this->members->length * (int)2) <= this->maxSize))){
				HX_STACK_LINE(224)
				::org::flixel::FlxU_obj::SetArrayLength(this->members,(this->members->length * (int)2));
			}
			else{
				HX_STACK_LINE(228)
				::org::flixel::FlxU_obj::SetArrayLength(this->members,this->maxSize);
			}
		}
	}
	else{
		HX_STACK_LINE(233)
		::org::flixel::FlxU_obj::SetArrayLength(this->members,(this->members->length * (int)2));
	}
	HX_STACK_LINE(240)
	this->setGroupAtlas(Object);
	HX_STACK_LINE(242)
	this->members[i] = Object;
	HX_STACK_LINE(243)
	this->length = (i + (int)1);
	HX_STACK_LINE(244)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,add,return )

int FlxGroup_obj::setMaxSize( int Size){
	HX_STACK_PUSH("FlxGroup::setMaxSize","org/flixel/FlxGroup.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(145)
	this->maxSize = ::Math_obj::floor(::Math_obj::abs(Size));
	HX_STACK_LINE(146)
	if (((this->_marker >= this->maxSize))){
		HX_STACK_LINE(147)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(150)
	if (((bool((bool((this->maxSize == (int)0)) || bool((this->members == null())))) || bool((this->maxSize >= this->members->length))))){
		HX_STACK_LINE(151)
		return this->maxSize;
	}
	HX_STACK_LINE(156)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(157)
	int i = this->maxSize;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(158)
	int l = this->members->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(159)
	while(((i < l))){
		HX_STACK_LINE(161)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(162)
		if (((basic != null()))){
			HX_STACK_LINE(163)
			basic->destroy();
		}
	}
	HX_STACK_LINE(167)
	this->length = this->maxSize;
	HX_STACK_LINE(168)
	::org::flixel::FlxU_obj::SetArrayLength(this->members,this->maxSize);
	HX_STACK_LINE(169)
	return this->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,setMaxSize,return )

Void FlxGroup_obj::draw( ){
{
		HX_STACK_PUSH("FlxGroup::draw","org/flixel/FlxGroup.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_LINE(128)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(129)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(130)
		while(((i < this->length))){
			HX_STACK_LINE(132)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(133)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->visible)))){
				HX_STACK_LINE(134)
				basic->draw();
			}
		}
	}
return null();
}


Void FlxGroup_obj::update( ){
{
		HX_STACK_PUSH("FlxGroup::update","org/flixel/FlxGroup.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(99)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(100)
		while(((i < this->length))){
			HX_STACK_LINE(102)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(103)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->active)))){
				HX_STACK_LINE(105)
				basic->preUpdate();
				HX_STACK_LINE(106)
				basic->update();
				HX_STACK_LINE(108)
				if ((basic->getTween())){
					HX_STACK_LINE(110)
					::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(110)
					Dynamic ft = basic->_tween;		HX_STACK_VAR(ft,"ft");
					HX_STACK_LINE(110)
					while(((ft != null()))){
						HX_STACK_LINE(110)
						t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
						HX_STACK_LINE(110)
						if ((t->active)){
							HX_STACK_LINE(110)
							t->update();
							HX_STACK_LINE(110)
							if ((ft->__Field(HX_CSTRING("_finish"),true))){
								HX_STACK_LINE(110)
								ft->__Field(HX_CSTRING("finish"),true)();
							}
						}
						HX_STACK_LINE(110)
						ft = ft->__Field(HX_CSTRING("_next"),true);
					}
				}
				HX_STACK_LINE(113)
				basic->postUpdate();
			}
		}
		HX_STACK_LINE(117)
		if ((this->getTween())){
			HX_STACK_LINE(119)
			::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(119)
			Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
			HX_STACK_LINE(119)
			while(((ft != null()))){
				HX_STACK_LINE(119)
				t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
				HX_STACK_LINE(119)
				if ((t->active)){
					HX_STACK_LINE(119)
					t->update();
					HX_STACK_LINE(119)
					if ((ft->__Field(HX_CSTRING("_finish"),true))){
						HX_STACK_LINE(119)
						ft->__Field(HX_CSTRING("finish"),true)();
					}
				}
				HX_STACK_LINE(119)
				ft = ft->__Field(HX_CSTRING("_next"),true);
			}
		}
	}
return null();
}


Void FlxGroup_obj::preUpdate( ){
{
		HX_STACK_PUSH("FlxGroup::preUpdate","org/flixel/FlxGroup.hx",91);
		HX_STACK_THIS(this);
	}
return null();
}


Void FlxGroup_obj::destroy( ){
{
		HX_STACK_PUSH("FlxGroup::destroy","org/flixel/FlxGroup.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		if (((this->members != null()))){
			HX_STACK_LINE(72)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(73)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(74)
			while(((i < this->length))){
				HX_STACK_LINE(76)
				basic = this->members->__get((i)++);
				HX_STACK_LINE(77)
				if (((basic != null()))){
					HX_STACK_LINE(78)
					basic->destroy();
				}
			}
			HX_STACK_LINE(82)
			this->members = null();
		}
		HX_STACK_LINE(84)
		this->_sortIndex = null();
		HX_STACK_LINE(85)
		this->super::destroy();
	}
return null();
}


int FlxGroup_obj::ASCENDING;

int FlxGroup_obj::DESCENDING;


FlxGroup_obj::FlxGroup_obj()
{
}

void FlxGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGroup);
	HX_MARK_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_MARK_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_VISIT_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"callAll") ) { return callAll_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ASCENDING") ) { return ASCENDING; }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_atlas") ) { return set_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DESCENDING") ) { return DESCENDING; }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return setMaxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { return _sortOrder; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { return _sortIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortHandler") ) { return sortHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"setGroupAtlas") ) { return setGroupAtlas_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFirstExtant") ) { return getFirstExtant_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< Array< ::org::flixel::FlxBasic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp) return setMaxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ASCENDING") ) { ASCENDING=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DESCENDING") ) { DESCENDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { _sortOrder=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { _sortIndex=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_sortOrder"));
	outFields->push(HX_CSTRING("_sortIndex"));
	outFields->push(HX_CSTRING("_marker"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("members"));
	outFields->push(HX_CSTRING("maxSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASCENDING"),
	HX_CSTRING("DESCENDING"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sortHandler"),
	HX_CSTRING("kill"),
	HX_CSTRING("clear"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("countDead"),
	HX_CSTRING("countLiving"),
	HX_CSTRING("getFirstDead"),
	HX_CSTRING("getFirstAlive"),
	HX_CSTRING("getFirstExtant"),
	HX_CSTRING("getFirstNull"),
	HX_CSTRING("getFirstAvailable"),
	HX_CSTRING("callAll"),
	HX_CSTRING("setAll"),
	HX_CSTRING("sort"),
	HX_CSTRING("replace"),
	HX_CSTRING("remove"),
	HX_CSTRING("recycle"),
	HX_CSTRING("set_atlas"),
	HX_CSTRING("setGroupAtlas"),
	HX_CSTRING("add"),
	HX_CSTRING("setMaxSize"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("preUpdate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_sortOrder"),
	HX_CSTRING("_sortIndex"),
	HX_CSTRING("_marker"),
	HX_CSTRING("length"),
	HX_CSTRING("members"),
	HX_CSTRING("maxSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGroup_obj::ASCENDING,"ASCENDING");
	HX_MARK_MEMBER_NAME(FlxGroup_obj::DESCENDING,"DESCENDING");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::ASCENDING,"ASCENDING");
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::DESCENDING,"DESCENDING");
};

Class FlxGroup_obj::__mClass;

void FlxGroup_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxGroup"), hx::TCanCast< FlxGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGroup_obj::__boot()
{
	ASCENDING= (int)-1;
	DESCENDING= (int)1;
}

} // end namespace org
} // end namespace flixel
