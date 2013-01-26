#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
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
#ifndef INCLUDED_org_flixel_FlxPath
#include <org/flixel/FlxPath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
namespace org{
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_PUSH("FlxObject::new","org/flixel/FlxObject.hx",15);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(265)
	this->_boundingBoxColorOverritten = false;
	HX_STACK_LINE(283)
	super::__construct();
	HX_STACK_LINE(285)
	this->x = X;
	HX_STACK_LINE(286)
	this->y = Y;
	HX_STACK_LINE(287)
	this->last = ::org::flixel::FlxPoint_obj::__new(this->x,this->y);
	HX_STACK_LINE(288)
	this->width = Width;
	HX_STACK_LINE(289)
	this->height = Height;
	HX_STACK_LINE(290)
	this->mass = 1.0;
	HX_STACK_LINE(291)
	this->elasticity = 0.0;
	HX_STACK_LINE(293)
	this->health = (int)1;
	HX_STACK_LINE(295)
	this->immovable = false;
	HX_STACK_LINE(296)
	this->moves = true;
	HX_STACK_LINE(298)
	this->touching = (int)0;
	HX_STACK_LINE(299)
	this->wasTouching = (int)0;
	HX_STACK_LINE(300)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(302)
	this->velocity = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(303)
	this->acceleration = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(304)
	this->drag = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(305)
	this->maxVelocity = ::org::flixel::FlxPoint_obj::__new((int)10000,(int)10000);
	HX_STACK_LINE(307)
	this->angle = (int)0;
	HX_STACK_LINE(308)
	this->angularVelocity = (int)0;
	HX_STACK_LINE(309)
	this->angularAcceleration = (int)0;
	HX_STACK_LINE(310)
	this->angularDrag = (int)0;
	HX_STACK_LINE(311)
	this->maxAngular = (int)10000;
	HX_STACK_LINE(313)
	this->scrollFactor = ::org::flixel::FlxPoint_obj::__new(1.0,1.0);
	HX_STACK_LINE(314)
	this->_flicker = false;
	HX_STACK_LINE(315)
	this->_flickerTimer = (int)0;
	HX_STACK_LINE(317)
	this->_point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(318)
	this->_rect = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(320)
	this->path = null();
	HX_STACK_LINE(321)
	this->pathSpeed = (int)0;
	HX_STACK_LINE(322)
	this->pathAngle = (int)0;
}
;
	return null();
}

FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_PUSH("FlxObject::hurt","org/flixel/FlxObject.hx",1060);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Damage,"Damage");
		HX_STACK_LINE(1061)
		this->health = (this->health - Damage);
		HX_STACK_LINE(1062)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(1063)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_PUSH("FlxObject::justTouched","org/flixel/FlxObject.hx",1050);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1050)
	return (bool((((int(this->touching) & int(Direction))) > (int)0)) && bool((((int(this->wasTouching) & int(Direction))) <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_PUSH("FlxObject::isTouching","org/flixel/FlxObject.hx",1040);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1040)
	return (((int(this->touching) & int(Direction))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_PUSH("FlxObject::reset","org/flixel/FlxObject.hx",1022);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(1023)
		this->revive();
		HX_STACK_LINE(1024)
		this->touching = (int)0;
		HX_STACK_LINE(1025)
		this->wasTouching = (int)0;
		HX_STACK_LINE(1026)
		this->x = X;
		HX_STACK_LINE(1027)
		this->y = Y;
		HX_STACK_LINE(1028)
		this->last->x = this->x;
		HX_STACK_LINE(1029)
		this->last->y = this->y;
		HX_STACK_LINE(1030)
		this->velocity->x = (int)0;
		HX_STACK_LINE(1031)
		this->velocity->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

::org::flixel::FlxPoint FlxObject_obj::getMidpoint( ::org::flixel::FlxPoint point){
	HX_STACK_PUSH("FlxObject::getMidpoint","org/flixel/FlxObject.hx",1005);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(1006)
	if (((point == null()))){
		HX_STACK_LINE(1007)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(1010)
	point->x = (this->x + (this->width * 0.5));
	HX_STACK_LINE(1011)
	point->y = (this->y + (this->height * 0.5));
	HX_STACK_LINE(1012)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

bool FlxObject_obj::setSolid( bool Solid){
	HX_STACK_PUSH("FlxObject::setSolid","org/flixel/FlxObject.hx",987);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Solid,"Solid");
	HX_STACK_LINE(988)
	if ((Solid)){
		HX_STACK_LINE(989)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(993)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(996)
	return Solid;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,setSolid,return )

bool FlxObject_obj::getSolid( ){
	HX_STACK_PUSH("FlxObject::getSolid","org/flixel/FlxObject.hx",979);
	HX_STACK_THIS(this);
	HX_STACK_LINE(979)
	return (((int(this->allowCollisions) & int((int)4369))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,getSolid,return )

bool FlxObject_obj::getFlickering( ){
	HX_STACK_PUSH("FlxObject::getFlickering","org/flixel/FlxObject.hx",967);
	HX_STACK_THIS(this);
	HX_STACK_LINE(967)
	return (this->_flickerTimer != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,getFlickering,return )

Void FlxObject_obj::flicker( hx::Null< Float >  __o_Duration){
Float Duration = __o_Duration.Default(1);
	HX_STACK_PUSH("FlxObject::flicker","org/flixel/FlxObject.hx",952);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Duration,"Duration");
{
		HX_STACK_LINE(953)
		this->_flickerTimer = Duration;
		HX_STACK_LINE(954)
		if (((this->_flickerTimer == (int)0))){
			HX_STACK_LINE(955)
			this->_flicker = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,flicker,(void))

::org::flixel::FlxPoint FlxObject_obj::getScreenXY( ::org::flixel::FlxPoint point,::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::getScreenXY","org/flixel/FlxObject.hx",930);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(931)
	if (((point == null()))){
		HX_STACK_LINE(932)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(935)
	if (((Camera == null()))){
		HX_STACK_LINE(936)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(939)
	point->x = (this->x - ::Math_obj::floor((Camera->scroll->x * this->scrollFactor->x)));
	HX_STACK_LINE(940)
	point->y = (this->y - ::Math_obj::floor((Camera->scroll->y * this->scrollFactor->y)));
	HX_STACK_LINE(941)
	hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
	HX_STACK_LINE(942)
	hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
	HX_STACK_LINE(943)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenXY,return )

bool FlxObject_obj::onScreenObject( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::onScreenObject","org/flixel/FlxObject.hx",914);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(915)
	if (((Camera == null()))){
		HX_STACK_LINE(916)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(919)
	{
		HX_STACK_LINE(919)
		::org::flixel::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
		::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
		HX_STACK_LINE(919)
		if (((point == null()))){
			HX_STACK_LINE(919)
			point = ::org::flixel::FlxPoint_obj::__new(null(),null());
		}
		HX_STACK_LINE(919)
		if (((Camera1 == null()))){
			HX_STACK_LINE(919)
			Camera1 = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(919)
		point->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
		HX_STACK_LINE(919)
		point->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
		HX_STACK_LINE(919)
		hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(919)
		hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(919)
		point;
	}
	HX_STACK_LINE(920)
	return (bool((bool((bool(((this->_point->x + this->width) > (int)0)) && bool((this->_point->x < Camera->width)))) && bool(((this->_point->y + this->height) > (int)0)))) && bool((this->_point->y < Camera->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onScreenObject,return )

bool FlxObject_obj::onScreen( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::onScreen","org/flixel/FlxObject.hx",909);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",910);
			{
				HX_STACK_LINE(910)
				::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
				HX_STACK_LINE(910)
				if (((Camera1 == null()))){
					HX_STACK_LINE(910)
					Camera1 = ::org::flixel::FlxG_obj::camera;
				}
				HX_STACK_LINE(910)
				{
					HX_STACK_LINE(910)
					::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera2 = Camera1;		HX_STACK_VAR(Camera2,"Camera2");
					HX_STACK_LINE(910)
					if (((point == null()))){
						HX_STACK_LINE(910)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(910)
					if (((Camera2 == null()))){
						HX_STACK_LINE(910)
						Camera2 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(910)
					point->x = (__this->x - ::Math_obj::floor((Camera2->scroll->x * __this->scrollFactor->x)));
					HX_STACK_LINE(910)
					point->y = (__this->y - ::Math_obj::floor((Camera2->scroll->y * __this->scrollFactor->y)));
					HX_STACK_LINE(910)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(910)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(910)
					point;
				}
				HX_STACK_LINE(910)
				return (bool((bool((bool(((__this->_point->x + __this->width) > (int)0)) && bool((__this->_point->x < Camera1->width)))) && bool(((__this->_point->y + __this->height) > (int)0)))) && bool((__this->_point->y < Camera1->height)));
			}
			return null();
		}
	};
	HX_STACK_LINE(909)
	return _Function_1_1::Block(Camera,this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onScreen,return )

bool FlxObject_obj::overlapsPoint( ::org::flixel::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsPoint","org/flixel/FlxObject.hx",887);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(888)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(889)
			return (bool((bool((bool((point->x > this->x)) && bool((point->x < (this->x + this->width))))) && bool((point->y > this->y)))) && bool((point->y < (this->y + this->height))));
		}
		HX_STACK_LINE(893)
		if (((Camera == null()))){
			HX_STACK_LINE(894)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(897)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(898)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(899)
		{
			HX_STACK_LINE(899)
			::org::flixel::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(899)
			if (((point1 == null()))){
				HX_STACK_LINE(899)
				point1 = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(899)
			if (((Camera1 == null()))){
				HX_STACK_LINE(899)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(899)
			point1->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(899)
			point1->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(899)
			hx::AddEq(point1->x,(  (((point1->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(899)
			hx::AddEq(point1->y,(  (((point1->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(899)
			point1;
		}
		HX_STACK_LINE(900)
		return (bool((bool((bool((X > this->_point->x)) && bool((X < (this->_point->x + this->width))))) && bool((Y > this->_point->y)))) && bool((Y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsAt","org/flixel/FlxObject.hx",830);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(831)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxGroup >()))){
			HX_STACK_LINE(833)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(834)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(835)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(836)
			::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(ObjectOrGroup);		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(837)
			Array< ::org::flixel::FlxBasic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(838)
			while(((i < ::Std_obj::_int(grp->length)))){
				HX_STACK_LINE(840)
				basic = members->__get((i)++);
				HX_STACK_LINE(841)
				if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(this->overlapsAt(X,Y,basic,InScreenSpace,Camera))))){
					HX_STACK_LINE(842)
					results = true;
				}
			}
			HX_STACK_LINE(846)
			return results;
		}
		HX_STACK_LINE(849)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
			HX_STACK_LINE(855)
			::org::flixel::FlxTilemap tilemap = hx::TCast< org::flixel::FlxTilemap >::cast(ObjectOrGroup);		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(856)
			return tilemap->overlapsAt((tilemap->x - ((X - this->x))),(tilemap->y - ((Y - this->y))),hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(859)
		::org::flixel::FlxObject object = hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(860)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(861)
			return (bool((bool((bool(((object->x + object->width) > X)) && bool((object->x < (X + this->width))))) && bool(((object->y + object->height) > Y)))) && bool((object->y < (Y + this->height))));
		}
		HX_STACK_LINE(866)
		if (((Camera == null()))){
			HX_STACK_LINE(867)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		struct _Function_1_1{
			inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject &object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",870);
				{
					HX_STACK_LINE(870)
					::org::flixel::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
					HX_STACK_LINE(870)
					if (((point == null()))){
						HX_STACK_LINE(870)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(870)
					if (((Camera1 == null()))){
						HX_STACK_LINE(870)
						Camera1 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(870)
					point->x = (object->x - ::Math_obj::floor((Camera1->scroll->x * object->scrollFactor->x)));
					HX_STACK_LINE(870)
					point->y = (object->y - ::Math_obj::floor((Camera1->scroll->y * object->scrollFactor->y)));
					HX_STACK_LINE(870)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(870)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(870)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(870)
		::org::flixel::FlxPoint objectScreenPos = _Function_1_1::Block(Camera,object);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(871)
		this->_point->x = (X - ::Std_obj::_int((Camera->scroll->x * this->scrollFactor->x)));
		HX_STACK_LINE(872)
		this->_point->y = (Y - ::Std_obj::_int((Camera->scroll->y * this->scrollFactor->y)));
		HX_STACK_LINE(873)
		hx::AddEq(this->_point->x,(  (((this->_point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(874)
		hx::AddEq(this->_point->y,(  (((this->_point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(875)
		return (bool((bool((bool(((objectScreenPos->x + object->width) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->width))))) && bool(((objectScreenPos->y + object->height) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlaps","org/flixel/FlxObject.hx",775);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(776)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxGroup >()))){
			HX_STACK_LINE(778)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(779)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(780)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(781)
			::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(ObjectOrGroup);		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(782)
			Array< ::org::flixel::FlxBasic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(783)
			while(((i < grp->length))){
				HX_STACK_LINE(785)
				basic = members->__get((i)++);
				HX_STACK_LINE(786)
				if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(this->overlaps(basic,InScreenSpace,Camera))))){
					HX_STACK_LINE(787)
					results = true;
				}
			}
			HX_STACK_LINE(791)
			return results;
		}
		HX_STACK_LINE(794)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
			HX_STACK_LINE(795)
			return (hx::TCast< org::flixel::FlxTilemap >::cast(ObjectOrGroup))->overlaps(hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(801)
		::org::flixel::FlxObject object = hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(802)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(803)
			return (bool((bool((bool(((object->x + object->width) > this->x)) && bool((object->x < (this->x + this->width))))) && bool(((object->y + object->height) > this->y)))) && bool((object->y < (this->y + this->height))));
		}
		HX_STACK_LINE(808)
		if (((Camera == null()))){
			HX_STACK_LINE(809)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		struct _Function_1_1{
			inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject &object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",812);
				{
					HX_STACK_LINE(812)
					::org::flixel::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
					HX_STACK_LINE(812)
					if (((point == null()))){
						HX_STACK_LINE(812)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(812)
					if (((Camera1 == null()))){
						HX_STACK_LINE(812)
						Camera1 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(812)
					point->x = (object->x - ::Math_obj::floor((Camera1->scroll->x * object->scrollFactor->x)));
					HX_STACK_LINE(812)
					point->y = (object->y - ::Math_obj::floor((Camera1->scroll->y * object->scrollFactor->y)));
					HX_STACK_LINE(812)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(812)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(812)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(812)
		::org::flixel::FlxPoint objectScreenPos = _Function_1_1::Block(Camera,object);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(813)
		{
			HX_STACK_LINE(813)
			::org::flixel::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(813)
			if (((point == null()))){
				HX_STACK_LINE(813)
				point = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(813)
			if (((Camera1 == null()))){
				HX_STACK_LINE(813)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(813)
			point->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(813)
			point->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(813)
			hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(813)
			hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(813)
			point;
		}
		HX_STACK_LINE(814)
		return (bool((bool((bool(((objectScreenPos->x + object->width) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->width))))) && bool(((objectScreenPos->y + object->height) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

Void FlxObject_obj::updatePathMotion( ){
{
		HX_STACK_PUSH("FlxObject::updatePathMotion","org/flixel/FlxObject.hx",678);
		HX_STACK_THIS(this);
		HX_STACK_LINE(680)
		this->_point->x = (this->x + (this->width * 0.5));
		HX_STACK_LINE(681)
		this->_point->y = (this->y + (this->height * 0.5));
		HX_STACK_LINE(682)
		::org::flixel::FlxPoint node = this->path->nodes->__get(this->_pathNodeIndex);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(683)
		Float deltaX = (node->x - this->_point->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(684)
		Float deltaY = (node->y - this->_point->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(686)
		bool horizontalOnly = (((int(this->_pathMode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(687)
		bool verticalOnly = (((int(this->_pathMode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(689)
		if ((horizontalOnly)){
			HX_STACK_LINE(690)
			if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
				HX_STACK_LINE(692)
				node = this->advancePath(null());
			}
		}
		else{
			HX_STACK_LINE(696)
			if ((verticalOnly)){
				HX_STACK_LINE(697)
				if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(699)
					node = this->advancePath(null());
				}
			}
			else{
				HX_STACK_LINE(704)
				if (((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(706)
					node = this->advancePath(null());
				}
			}
		}
		HX_STACK_LINE(712)
		if (((this->pathSpeed != (int)0))){
			HX_STACK_LINE(715)
			this->_point->x = (this->x + (this->width * 0.5));
			HX_STACK_LINE(716)
			this->_point->y = (this->y + (this->height * 0.5));
			HX_STACK_LINE(717)
			if (((bool(horizontalOnly) || bool((this->_point->y == node->y))))){
				HX_STACK_LINE(719)
				this->velocity->x = (  (((this->_point->x < node->x))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
				HX_STACK_LINE(720)
				if (((this->velocity->x < (int)0))){
					HX_STACK_LINE(721)
					this->pathAngle = (int)-90;
				}
				else{
					HX_STACK_LINE(725)
					this->pathAngle = (int)90;
				}
				HX_STACK_LINE(728)
				if ((!(horizontalOnly))){
					HX_STACK_LINE(729)
					this->velocity->y = (int)0;
				}
			}
			else{
				HX_STACK_LINE(733)
				if (((bool(verticalOnly) || bool((this->_point->x == node->x))))){
					HX_STACK_LINE(735)
					this->velocity->y = (  (((this->_point->y < node->y))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
					HX_STACK_LINE(736)
					if (((this->velocity->y < (int)0))){
						HX_STACK_LINE(737)
						this->pathAngle = (int)0;
					}
					else{
						HX_STACK_LINE(741)
						this->pathAngle = (int)180;
					}
					HX_STACK_LINE(744)
					if ((!(verticalOnly))){
						HX_STACK_LINE(745)
						this->velocity->x = (int)0;
					}
				}
				else{
					struct _Function_4_1{
						inline static Float Block( ::org::flixel::FlxObject_obj *__this,::org::flixel::FlxPoint &node){
							HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",751);
							{
								HX_STACK_LINE(751)
								::org::flixel::FlxPoint Point1 = __this->_point;		HX_STACK_VAR(Point1,"Point1");
								HX_STACK_LINE(751)
								Float x = (node->x - Point1->x);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(751)
								Float y = (node->y - Point1->y);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(751)
								Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
								HX_STACK_LINE(751)
								if (((bool((x != (int)0)) || bool((y != (int)0))))){
									HX_STACK_LINE(751)
									Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(751)
									Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
									HX_STACK_LINE(751)
									Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(751)
									if (((x >= (int)0))){
										HX_STACK_LINE(751)
										angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
									}
									else{
										HX_STACK_LINE(751)
										angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
									}
									HX_STACK_LINE(751)
									angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
									HX_STACK_LINE(751)
									if (((angle > (int)90))){
										HX_STACK_LINE(751)
										angle = (angle - (int)270);
									}
									else{
										HX_STACK_LINE(751)
										hx::AddEq(angle,(int)90);
									}
								}
								HX_STACK_LINE(751)
								return angle;
							}
							return null();
						}
					};
					HX_STACK_LINE(751)
					this->pathAngle = _Function_4_1::Block(this,node);
					HX_STACK_LINE(752)
					{
						HX_STACK_LINE(752)
						::org::flixel::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(752)
						Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(752)
						Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(752)
						Float radians = (this->pathAngle * -0.017453293);		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(752)
						while(((radians < -3.14159265))){
							HX_STACK_LINE(752)
							hx::AddEq(radians,6.28318531);
						}
						HX_STACK_LINE(752)
						while(((radians > 3.14159265))){
							HX_STACK_LINE(752)
							radians = (radians - 6.28318531);
						}
						HX_STACK_LINE(752)
						if (((radians < (int)0))){
							HX_STACK_LINE(752)
							sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
							HX_STACK_LINE(752)
							if (((sin < (int)0))){
								HX_STACK_LINE(752)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(752)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						else{
							HX_STACK_LINE(752)
							sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(752)
							if (((sin < (int)0))){
								HX_STACK_LINE(752)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(752)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						HX_STACK_LINE(752)
						hx::AddEq(radians,1.57079632);
						HX_STACK_LINE(752)
						if (((radians > 3.14159265))){
							HX_STACK_LINE(752)
							radians = (radians - 6.28318531);
						}
						HX_STACK_LINE(752)
						if (((radians < (int)0))){
							HX_STACK_LINE(752)
							cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
							HX_STACK_LINE(752)
							if (((cos < (int)0))){
								HX_STACK_LINE(752)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(752)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						else{
							HX_STACK_LINE(752)
							cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(752)
							if (((cos < (int)0))){
								HX_STACK_LINE(752)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(752)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						HX_STACK_LINE(752)
						Float dx = (int)0;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(752)
						Float dy = this->pathSpeed;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(752)
						if (((point == null()))){
							HX_STACK_LINE(752)
							point = ::org::flixel::FlxPoint_obj::__new(null(),null());
						}
						HX_STACK_LINE(752)
						point->x = ((cos * dx) - (sin * dy));
						HX_STACK_LINE(752)
						point->y = (((int)0 - (sin * dx)) - (cos * dy));
						HX_STACK_LINE(752)
						point;
					}
				}
			}
			HX_STACK_LINE(756)
			if ((this->_pathRotate)){
				HX_STACK_LINE(758)
				this->angularVelocity = (int)0;
				HX_STACK_LINE(759)
				this->angularAcceleration = (int)0;
				HX_STACK_LINE(760)
				this->angle = this->pathAngle;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updatePathMotion,(void))

::org::flixel::FlxPoint FlxObject_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_PUSH("FlxObject::advancePath","org/flixel/FlxObject.hx",586);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Snap,"Snap");
{
		HX_STACK_LINE(587)
		if ((Snap)){
			HX_STACK_LINE(589)
			::org::flixel::FlxPoint oldNode = this->path->nodes->__get(this->_pathNodeIndex);		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(590)
			if (((oldNode != null()))){
				HX_STACK_LINE(592)
				if (((((int(this->_pathMode) & int((int)1048576))) == (int)0))){
					HX_STACK_LINE(593)
					this->x = (oldNode->x - (this->width * 0.5));
				}
				HX_STACK_LINE(596)
				if (((((int(this->_pathMode) & int((int)65536))) == (int)0))){
					HX_STACK_LINE(597)
					this->y = (oldNode->y - (this->height * 0.5));
				}
			}
		}
		HX_STACK_LINE(603)
		hx::AddEq(this->_pathNodeIndex,this->_pathInc);
		HX_STACK_LINE(605)
		if (((((int(this->_pathMode) & int((int)1))) > (int)0))){
			HX_STACK_LINE(606)
			if (((this->_pathNodeIndex < (int)0))){
				HX_STACK_LINE(609)
				this->_pathNodeIndex = (int)0;
				HX_STACK_LINE(610)
				this->stopFollowingPath(false);
			}
		}
		else{
			HX_STACK_LINE(613)
			if (((((int(this->_pathMode) & int((int)16))) > (int)0))){
				HX_STACK_LINE(614)
				if (((this->_pathNodeIndex >= this->path->nodes->length))){
					HX_STACK_LINE(616)
					this->_pathNodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(620)
				if (((((int(this->_pathMode) & int((int)256))) > (int)0))){
					HX_STACK_LINE(621)
					if (((this->_pathNodeIndex < (int)0))){
						HX_STACK_LINE(624)
						this->_pathNodeIndex = (this->path->nodes->length - (int)1);
						HX_STACK_LINE(625)
						if (((this->_pathNodeIndex < (int)0))){
							HX_STACK_LINE(626)
							this->_pathNodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(631)
					if (((((int(this->_pathMode) & int((int)4096))) > (int)0))){
						HX_STACK_LINE(632)
						if (((this->_pathInc > (int)0))){
							HX_STACK_LINE(634)
							if (((this->_pathNodeIndex >= this->path->nodes->length))){
								HX_STACK_LINE(637)
								this->_pathNodeIndex = (this->path->nodes->length - (int)2);
								HX_STACK_LINE(638)
								if (((this->_pathNodeIndex < (int)0))){
									HX_STACK_LINE(639)
									this->_pathNodeIndex = (int)0;
								}
								HX_STACK_LINE(642)
								this->_pathInc = -(this->_pathInc);
							}
						}
						else{
							HX_STACK_LINE(645)
							if (((this->_pathNodeIndex < (int)0))){
								HX_STACK_LINE(647)
								this->_pathNodeIndex = (int)1;
								HX_STACK_LINE(648)
								if (((this->_pathNodeIndex >= this->path->nodes->length))){
									HX_STACK_LINE(649)
									this->_pathNodeIndex = (this->path->nodes->length - (int)1);
								}
								HX_STACK_LINE(652)
								if (((this->_pathNodeIndex < (int)0))){
									HX_STACK_LINE(653)
									this->_pathNodeIndex = (int)0;
								}
								HX_STACK_LINE(656)
								this->_pathInc = -(this->_pathInc);
							}
						}
					}
					else{
						HX_STACK_LINE(660)
						if (((this->_pathNodeIndex >= this->path->nodes->length))){
							HX_STACK_LINE(663)
							this->_pathNodeIndex = (this->path->nodes->length - (int)1);
							HX_STACK_LINE(664)
							this->stopFollowingPath(false);
						}
					}
				}
			}
		}
		HX_STACK_LINE(668)
		return this->path->nodes->__get(this->_pathNodeIndex);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,advancePath,return )

Void FlxObject_obj::stopFollowingPath( hx::Null< bool >  __o_DestroyPath){
bool DestroyPath = __o_DestroyPath.Default(false);
	HX_STACK_PUSH("FlxObject::stopFollowingPath","org/flixel/FlxObject.hx",569);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DestroyPath,"DestroyPath");
{
		HX_STACK_LINE(570)
		this->pathSpeed = (int)0;
		HX_STACK_LINE(571)
		this->velocity->x = (int)0;
		HX_STACK_LINE(572)
		this->velocity->y = (int)0;
		HX_STACK_LINE(574)
		if (((bool(DestroyPath) && bool((this->path != null()))))){
			HX_STACK_LINE(576)
			this->path->destroy();
			HX_STACK_LINE(577)
			this->path = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,stopFollowingPath,(void))

Void FlxObject_obj::followPath( ::org::flixel::FlxPath Path,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_PUSH("FlxObject::followPath","org/flixel/FlxObject.hx",539);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Path,"Path");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_ARG(Mode,"Mode");
	HX_STACK_ARG(AutoRotate,"AutoRotate");
{
		HX_STACK_LINE(540)
		if (((Path->nodes->length <= (int)0))){
			HX_STACK_LINE(542)
			::org::flixel::FlxG_obj::log(HX_CSTRING("WARNING: Paths need at least one node in them to be followed."));
			HX_STACK_LINE(543)
			return null();
		}
		HX_STACK_LINE(546)
		this->path = Path;
		HX_STACK_LINE(547)
		this->pathSpeed = (  (((Speed > (int)0))) ? Float(Speed) : Float(-(Speed)) );
		HX_STACK_LINE(548)
		this->_pathMode = Mode;
		HX_STACK_LINE(549)
		this->_pathRotate = AutoRotate;
		HX_STACK_LINE(552)
		if (((bool((this->_pathMode == (int)1)) || bool((this->_pathMode == (int)256))))){
			HX_STACK_LINE(554)
			this->_pathNodeIndex = (this->path->nodes->length - (int)1);
			HX_STACK_LINE(555)
			this->_pathInc = (int)-1;
		}
		else{
			HX_STACK_LINE(559)
			this->_pathNodeIndex = (int)0;
			HX_STACK_LINE(560)
			this->_pathInc = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxObject_obj,followPath,(void))

Void FlxObject_obj::drawDebug( ::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxObject::drawDebug","org/flixel/FlxObject.hx",458);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(459)
		if (((Camera == null()))){
			HX_STACK_LINE(460)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(465)
		Float boundingBoxX = (this->x - ::Std_obj::_int((Camera->scroll->x * this->scrollFactor->x)));		HX_STACK_VAR(boundingBoxX,"boundingBoxX");
		HX_STACK_LINE(466)
		Float boundingBoxY = (this->y - ::Std_obj::_int((Camera->scroll->y * this->scrollFactor->y)));		HX_STACK_VAR(boundingBoxY,"boundingBoxY");
		HX_STACK_LINE(474)
		if (((bool((this->allowCollisions != (int)0)) && bool(!(this->_boundingBoxColorOverritten))))){
			HX_STACK_LINE(476)
			if (((this->allowCollisions != (int)4369))){
				HX_STACK_LINE(477)
				this->onBoundingBoxColorSet((int)-1040641);
			}
			HX_STACK_LINE(484)
			if ((this->immovable)){
				HX_STACK_LINE(485)
				this->onBoundingBoxColorSet((int)-16715227);
			}
			else{
				HX_STACK_LINE(493)
				this->onBoundingBoxColorSet((int)-65518);
			}
		}
		else{
			HX_STACK_LINE(501)
			if ((!(this->_boundingBoxColorOverritten))){
				HX_STACK_LINE(502)
				this->onBoundingBoxColorSet((int)-16740119);
			}
		}
		HX_STACK_LINE(523)
		::native::display::Graphics gfx = Camera->_debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(524)
		gfx->lineStyle((int)1,this->debugBoundingBoxColor,0.5,null(),null(),null(),null(),null());
		HX_STACK_LINE(525)
		gfx->drawRect(boundingBoxX,boundingBoxY,this->width,this->height);
	}
return null();
}


Void FlxObject_obj::draw( ){
{
		HX_STACK_PUSH("FlxObject::draw","org/flixel/FlxObject.hx",428);
		HX_STACK_THIS(this);
		HX_STACK_LINE(429)
		if (((this->cameras == null()))){
			HX_STACK_LINE(430)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(433)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(434)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(435)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(436)
		while(((i < l))){
			HX_STACK_LINE(438)
			camera = this->cameras->__get((i)++);
			struct _Function_2_1{
				inline static bool Block( ::org::flixel::FlxCamera &camera,::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",439);
					{
						HX_STACK_LINE(439)
						::org::flixel::FlxCamera Camera = camera;		HX_STACK_VAR(Camera,"Camera");
						HX_STACK_LINE(439)
						if (((Camera == null()))){
							HX_STACK_LINE(439)
							Camera = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(439)
						{
							HX_STACK_LINE(439)
							::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
							HX_STACK_LINE(439)
							if (((point == null()))){
								HX_STACK_LINE(439)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(439)
							if (((Camera1 == null()))){
								HX_STACK_LINE(439)
								Camera1 = ::org::flixel::FlxG_obj::camera;
							}
							HX_STACK_LINE(439)
							point->x = (__this->x - ::Math_obj::floor((Camera1->scroll->x * __this->scrollFactor->x)));
							HX_STACK_LINE(439)
							point->y = (__this->y - ::Math_obj::floor((Camera1->scroll->y * __this->scrollFactor->y)));
							HX_STACK_LINE(439)
							hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(439)
							hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(439)
							point;
						}
						HX_STACK_LINE(439)
						return (bool((bool((bool(((__this->_point->x + __this->width) > (int)0)) && bool((__this->_point->x < Camera->width)))) && bool(((__this->_point->y + __this->height) > (int)0)))) && bool((__this->_point->y < Camera->height)));
					}
					return null();
				}
			};
			HX_STACK_LINE(439)
			if (((bool((bool(!(_Function_2_1::Block(camera,this))) || bool(!(camera->visible)))) || bool(!(camera->exists))))){
				HX_STACK_LINE(440)
				continue;
			}
			HX_STACK_LINE(443)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			HX_STACK_LINE(444)
			if (((bool(::org::flixel::FlxG_obj::visualDebug) && bool(!(this->ignoreDrawDebug))))){
				HX_STACK_LINE(445)
				this->drawDebug(camera);
			}
		}
	}
return null();
}


Void FlxObject_obj::updateMotion( ){
{
		HX_STACK_PUSH("FlxObject::updateMotion","org/flixel/FlxObject.hx",400);
		HX_STACK_THIS(this);
		HX_STACK_LINE(401)
		Float delta;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(402)
		Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(404)
		Float dt = ::org::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
		struct _Function_1_1{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",406);
				{
					HX_STACK_LINE(406)
					Float Velocity = __this->angularVelocity;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->angularAcceleration;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->angularDrag;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxAngular;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(406)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(406)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(406)
						if (((Drag != (int)0))){
							HX_STACK_LINE(406)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(406)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(406)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(406)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(406)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(406)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(406)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(406)
						if (((Velocity > Max))){
							HX_STACK_LINE(406)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(406)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(406)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(406)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(406)
		velocityDelta = (0.5 * ((_Function_1_1::Block(this) - this->angularVelocity)));
		HX_STACK_LINE(407)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(408)
		hx::AddEq(this->angle,(this->angularVelocity * dt));
		HX_STACK_LINE(409)
		hx::AddEq(this->angularVelocity,velocityDelta);
		struct _Function_1_2{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",411);
				{
					HX_STACK_LINE(411)
					Float Velocity = __this->velocity->x;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->acceleration->x;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->drag->x;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxVelocity->x;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(411)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(411)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(411)
						if (((Drag != (int)0))){
							HX_STACK_LINE(411)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(411)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(411)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(411)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(411)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(411)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(411)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(411)
						if (((Velocity > Max))){
							HX_STACK_LINE(411)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(411)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(411)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(411)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		velocityDelta = (0.5 * ((_Function_1_2::Block(this) - this->velocity->x)));
		HX_STACK_LINE(412)
		hx::AddEq(this->velocity->x,velocityDelta);
		HX_STACK_LINE(413)
		delta = (this->velocity->x * dt);
		HX_STACK_LINE(414)
		hx::AddEq(this->velocity->x,velocityDelta);
		HX_STACK_LINE(415)
		hx::AddEq(this->x,delta);
		struct _Function_1_3{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",417);
				{
					HX_STACK_LINE(417)
					Float Velocity = __this->velocity->y;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->acceleration->y;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->drag->y;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxVelocity->y;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(417)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(417)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(417)
						if (((Drag != (int)0))){
							HX_STACK_LINE(417)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(417)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(417)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(417)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(417)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(417)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(417)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(417)
						if (((Velocity > Max))){
							HX_STACK_LINE(417)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(417)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(417)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(417)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(417)
		velocityDelta = (0.5 * ((_Function_1_3::Block(this) - this->velocity->y)));
		HX_STACK_LINE(418)
		hx::AddEq(this->velocity->y,velocityDelta);
		HX_STACK_LINE(419)
		delta = (this->velocity->y * dt);
		HX_STACK_LINE(420)
		hx::AddEq(this->velocity->y,velocityDelta);
		HX_STACK_LINE(421)
		hx::AddEq(this->y,delta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::postUpdate( ){
{
		HX_STACK_PUSH("FlxObject::postUpdate","org/flixel/FlxObject.hx",384);
		HX_STACK_THIS(this);
		HX_STACK_LINE(385)
		if ((this->moves)){
			HX_STACK_LINE(387)
			Float delta;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(387)
			Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
			HX_STACK_LINE(387)
			Float dt = ::org::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
			struct _Function_2_1{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",387);
					{
						HX_STACK_LINE(387)
						Float Velocity = __this->angularVelocity;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->angularAcceleration;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->angularDrag;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxAngular;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(387)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(387)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(387)
							if (((Drag != (int)0))){
								HX_STACK_LINE(387)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(387)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(387)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(387)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(387)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(387)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(387)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(387)
							if (((Velocity > Max))){
								HX_STACK_LINE(387)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(387)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(387)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(387)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(387)
			velocityDelta = (0.5 * ((_Function_2_1::Block(this) - this->angularVelocity)));
			HX_STACK_LINE(387)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(387)
			hx::AddEq(this->angle,(this->angularVelocity * dt));
			HX_STACK_LINE(387)
			hx::AddEq(this->angularVelocity,velocityDelta);
			struct _Function_2_2{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",387);
					{
						HX_STACK_LINE(387)
						Float Velocity = __this->velocity->x;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->acceleration->x;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->drag->x;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxVelocity->x;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(387)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(387)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(387)
							if (((Drag != (int)0))){
								HX_STACK_LINE(387)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(387)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(387)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(387)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(387)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(387)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(387)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(387)
							if (((Velocity > Max))){
								HX_STACK_LINE(387)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(387)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(387)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(387)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(387)
			velocityDelta = (0.5 * ((_Function_2_2::Block(this) - this->velocity->x)));
			HX_STACK_LINE(387)
			hx::AddEq(this->velocity->x,velocityDelta);
			HX_STACK_LINE(387)
			delta = (this->velocity->x * dt);
			HX_STACK_LINE(387)
			hx::AddEq(this->velocity->x,velocityDelta);
			HX_STACK_LINE(387)
			hx::AddEq(this->x,delta);
			struct _Function_2_3{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",387);
					{
						HX_STACK_LINE(387)
						Float Velocity = __this->velocity->y;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->acceleration->y;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->drag->y;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxVelocity->y;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(387)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(387)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(387)
							if (((Drag != (int)0))){
								HX_STACK_LINE(387)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(387)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(387)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(387)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(387)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(387)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(387)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(387)
							if (((Velocity > Max))){
								HX_STACK_LINE(387)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(387)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(387)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(387)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(387)
			velocityDelta = (0.5 * ((_Function_2_3::Block(this) - this->velocity->y)));
			HX_STACK_LINE(387)
			hx::AddEq(this->velocity->y,velocityDelta);
			HX_STACK_LINE(387)
			delta = (this->velocity->y * dt);
			HX_STACK_LINE(387)
			hx::AddEq(this->velocity->y,velocityDelta);
			HX_STACK_LINE(387)
			hx::AddEq(this->y,delta);
		}
		HX_STACK_LINE(390)
		this->wasTouching = this->touching;
		HX_STACK_LINE(391)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::preUpdate( ){
{
		HX_STACK_PUSH("FlxObject::preUpdate","org/flixel/FlxObject.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_LINE(357)
		(::org::flixel::FlxBasic_obj::_ACTIVECOUNT)++;
		HX_STACK_LINE(359)
		if (((this->_flickerTimer > (int)0))){
			HX_STACK_LINE(361)
			hx::SubEq(this->_flickerTimer,::org::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(362)
			if (((this->_flickerTimer <= (int)0))){
				HX_STACK_LINE(364)
				this->_flickerTimer = (int)0;
				HX_STACK_LINE(365)
				this->_flicker = false;
			}
		}
		HX_STACK_LINE(369)
		this->last->x = this->x;
		HX_STACK_LINE(370)
		this->last->y = this->y;
		HX_STACK_LINE(372)
		if (((bool((bool((this->path != null())) && bool((this->pathSpeed != (int)0)))) && bool((this->path->nodes->__get(this->_pathNodeIndex) != null()))))){
			HX_STACK_LINE(374)
			this->_point->x = (this->x + (this->width * 0.5));
			HX_STACK_LINE(374)
			this->_point->y = (this->y + (this->height * 0.5));
			HX_STACK_LINE(374)
			::org::flixel::FlxPoint node = this->path->nodes->__get(this->_pathNodeIndex);		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(374)
			Float deltaX = (node->x - this->_point->x);		HX_STACK_VAR(deltaX,"deltaX");
			HX_STACK_LINE(374)
			Float deltaY = (node->y - this->_point->y);		HX_STACK_VAR(deltaY,"deltaY");
			HX_STACK_LINE(374)
			bool horizontalOnly = (((int(this->_pathMode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
			HX_STACK_LINE(374)
			bool verticalOnly = (((int(this->_pathMode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
			HX_STACK_LINE(374)
			if ((horizontalOnly)){
				HX_STACK_LINE(374)
				if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(374)
					node = this->advancePath(null());
				}
			}
			else{
				HX_STACK_LINE(374)
				if ((verticalOnly)){
					HX_STACK_LINE(374)
					if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
						HX_STACK_LINE(374)
						node = this->advancePath(null());
					}
				}
				else{
					HX_STACK_LINE(374)
					if (((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
						HX_STACK_LINE(374)
						node = this->advancePath(null());
					}
				}
			}
			HX_STACK_LINE(374)
			if (((this->pathSpeed != (int)0))){
				HX_STACK_LINE(374)
				this->_point->x = (this->x + (this->width * 0.5));
				HX_STACK_LINE(374)
				this->_point->y = (this->y + (this->height * 0.5));
				HX_STACK_LINE(374)
				if (((bool(horizontalOnly) || bool((this->_point->y == node->y))))){
					HX_STACK_LINE(374)
					this->velocity->x = (  (((this->_point->x < node->x))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
					HX_STACK_LINE(374)
					if (((this->velocity->x < (int)0))){
						HX_STACK_LINE(374)
						this->pathAngle = (int)-90;
					}
					else{
						HX_STACK_LINE(374)
						this->pathAngle = (int)90;
					}
					HX_STACK_LINE(374)
					if ((!(horizontalOnly))){
						HX_STACK_LINE(374)
						this->velocity->y = (int)0;
					}
				}
				else{
					HX_STACK_LINE(374)
					if (((bool(verticalOnly) || bool((this->_point->x == node->x))))){
						HX_STACK_LINE(374)
						this->velocity->y = (  (((this->_point->y < node->y))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
						HX_STACK_LINE(374)
						if (((this->velocity->y < (int)0))){
							HX_STACK_LINE(374)
							this->pathAngle = (int)0;
						}
						else{
							HX_STACK_LINE(374)
							this->pathAngle = (int)180;
						}
						HX_STACK_LINE(374)
						if ((!(verticalOnly))){
							HX_STACK_LINE(374)
							this->velocity->x = (int)0;
						}
					}
					else{
						struct _Function_5_1{
							inline static Float Block( ::org::flixel::FlxObject_obj *__this,::org::flixel::FlxPoint &node){
								HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",374);
								{
									HX_STACK_LINE(374)
									::org::flixel::FlxPoint Point1 = __this->_point;		HX_STACK_VAR(Point1,"Point1");
									HX_STACK_LINE(374)
									Float x = (node->x - Point1->x);		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(374)
									Float y = (node->y - Point1->y);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(374)
									Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
									HX_STACK_LINE(374)
									if (((bool((x != (int)0)) || bool((y != (int)0))))){
										HX_STACK_LINE(374)
										Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(374)
										Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
										HX_STACK_LINE(374)
										Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
										HX_STACK_LINE(374)
										if (((x >= (int)0))){
											HX_STACK_LINE(374)
											angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
										}
										else{
											HX_STACK_LINE(374)
											angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
										}
										HX_STACK_LINE(374)
										angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
										HX_STACK_LINE(374)
										if (((angle > (int)90))){
											HX_STACK_LINE(374)
											angle = (angle - (int)270);
										}
										else{
											HX_STACK_LINE(374)
											hx::AddEq(angle,(int)90);
										}
									}
									HX_STACK_LINE(374)
									return angle;
								}
								return null();
							}
						};
						HX_STACK_LINE(374)
						this->pathAngle = _Function_5_1::Block(this,node);
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							::org::flixel::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(374)
							Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
							HX_STACK_LINE(374)
							Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
							HX_STACK_LINE(374)
							Float radians = (this->pathAngle * -0.017453293);		HX_STACK_VAR(radians,"radians");
							HX_STACK_LINE(374)
							while(((radians < -3.14159265))){
								HX_STACK_LINE(374)
								hx::AddEq(radians,6.28318531);
							}
							HX_STACK_LINE(374)
							while(((radians > 3.14159265))){
								HX_STACK_LINE(374)
								radians = (radians - 6.28318531);
							}
							HX_STACK_LINE(374)
							if (((radians < (int)0))){
								HX_STACK_LINE(374)
								sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
								HX_STACK_LINE(374)
								if (((sin < (int)0))){
									HX_STACK_LINE(374)
									sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
								}
								else{
									HX_STACK_LINE(374)
									sin = ((.225 * (((sin * sin) - sin))) + sin);
								}
							}
							else{
								HX_STACK_LINE(374)
								sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
								HX_STACK_LINE(374)
								if (((sin < (int)0))){
									HX_STACK_LINE(374)
									sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
								}
								else{
									HX_STACK_LINE(374)
									sin = ((.225 * (((sin * sin) - sin))) + sin);
								}
							}
							HX_STACK_LINE(374)
							hx::AddEq(radians,1.57079632);
							HX_STACK_LINE(374)
							if (((radians > 3.14159265))){
								HX_STACK_LINE(374)
								radians = (radians - 6.28318531);
							}
							HX_STACK_LINE(374)
							if (((radians < (int)0))){
								HX_STACK_LINE(374)
								cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
								HX_STACK_LINE(374)
								if (((cos < (int)0))){
									HX_STACK_LINE(374)
									cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
								}
								else{
									HX_STACK_LINE(374)
									cos = ((.225 * (((cos * cos) - cos))) + cos);
								}
							}
							else{
								HX_STACK_LINE(374)
								cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
								HX_STACK_LINE(374)
								if (((cos < (int)0))){
									HX_STACK_LINE(374)
									cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
								}
								else{
									HX_STACK_LINE(374)
									cos = ((.225 * (((cos * cos) - cos))) + cos);
								}
							}
							HX_STACK_LINE(374)
							Float dx = (int)0;		HX_STACK_VAR(dx,"dx");
							HX_STACK_LINE(374)
							Float dy = this->pathSpeed;		HX_STACK_VAR(dy,"dy");
							HX_STACK_LINE(374)
							if (((point == null()))){
								HX_STACK_LINE(374)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(374)
							point->x = ((cos * dx) - (sin * dy));
							HX_STACK_LINE(374)
							point->y = (((int)0 - (sin * dx)) - (cos * dy));
							HX_STACK_LINE(374)
							point;
						}
					}
				}
				HX_STACK_LINE(374)
				if ((this->_pathRotate)){
					HX_STACK_LINE(374)
					this->angularVelocity = (int)0;
					HX_STACK_LINE(374)
					this->angularAcceleration = (int)0;
					HX_STACK_LINE(374)
					this->angle = this->pathAngle;
				}
			}
		}
	}
return null();
}


Void FlxObject_obj::destroy( ){
{
		HX_STACK_PUSH("FlxObject::destroy","org/flixel/FlxObject.hx",331);
		HX_STACK_THIS(this);
		HX_STACK_LINE(332)
		this->velocity = null();
		HX_STACK_LINE(333)
		this->acceleration = null();
		HX_STACK_LINE(334)
		this->drag = null();
		HX_STACK_LINE(335)
		this->maxVelocity = null();
		HX_STACK_LINE(336)
		this->scrollFactor = null();
		HX_STACK_LINE(337)
		this->_point = null();
		HX_STACK_LINE(338)
		this->_rect = null();
		HX_STACK_LINE(339)
		this->last = null();
		HX_STACK_LINE(340)
		this->cameras = null();
		HX_STACK_LINE(341)
		if (((this->path != null()))){
			HX_STACK_LINE(342)
			this->path->destroy();
		}
		HX_STACK_LINE(345)
		this->path = null();
		HX_STACK_LINE(346)
		this->super::destroy();
	}
return null();
}


int FlxObject_obj::onBoundingBoxColorSet( int val){
	HX_STACK_PUSH("FlxObject::onBoundingBoxColorSet","org/flixel/FlxObject.hx",267);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(268)
	this->_boundingBoxColorOverritten = true;
	HX_STACK_LINE(269)
	this->debugBoundingBoxColor = val;
	HX_STACK_LINE(270)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onBoundingBoxColorSet,return )

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

int FlxObject_obj::PATH_FORWARD;

int FlxObject_obj::PATH_BACKWARD;

int FlxObject_obj::PATH_LOOP_FORWARD;

int FlxObject_obj::PATH_LOOP_BACKWARD;

int FlxObject_obj::PATH_YOYO;

int FlxObject_obj::PATH_HORIZONTAL_ONLY;

int FlxObject_obj::PATH_VERTICAL_ONLY;

::org::flixel::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::org::flixel::FlxRect FlxObject_obj::_secondSeparateFlxRect;

::org::flixel::FlxPoint FlxObject_obj::_pZero;

bool FlxObject_obj::separate( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separate","org/flixel/FlxObject.hx",1075);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1076)
	bool separatedX = ::org::flixel::FlxObject_obj::separateX(Object1,Object2);		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(1077)
	bool separatedY = ::org::flixel::FlxObject_obj::separateY(Object1,Object2);		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(1078)
	return (bool(separatedX) || bool(separatedY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::separateX( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateX","org/flixel/FlxObject.hx",1088);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1090)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(1091)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(1092)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(1093)
		return false;
	}
	HX_STACK_LINE(1098)
	if ((::Std_obj::is(Object1,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1099)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::org::flixel::FlxObject_obj::separateX_dyn(),null(),null());
	}
	HX_STACK_LINE(1102)
	if ((::Std_obj::is(Object2,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1103)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::org::flixel::FlxObject_obj::separateX_dyn(),true,null());
	}
	HX_STACK_LINE(1108)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(1109)
	Float obj1delta = (Object1->x - Object1->last->x);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(1110)
	Float obj2delta = (Object2->x - Object2->last->x);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(1111)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(1114)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(1115)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::org::flixel::FlxRect Block( ::org::flixel::FlxObject &Object1,Float &obj1delta){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1117);
				{
					HX_STACK_LINE(1117)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1117)
					_this->x = (Object1->x - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(1117)
					_this->y = Object1->last->y;
					HX_STACK_LINE(1117)
					_this->width = (Object1->width + ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) )));
					HX_STACK_LINE(1117)
					_this->height = Object1->height;
					HX_STACK_LINE(1117)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1117)
		::org::flixel::FlxRect obj1rect = _Function_2_1::Block(Object1,obj1delta);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::org::flixel::FlxRect Block( ::org::flixel::FlxObject &Object2,Float &obj2delta){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1118);
				{
					HX_STACK_LINE(1118)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1118)
					_this->x = (Object2->x - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(1118)
					_this->y = Object2->last->y;
					HX_STACK_LINE(1118)
					_this->width = (Object2->width + ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) )));
					HX_STACK_LINE(1118)
					_this->height = Object2->height;
					HX_STACK_LINE(1118)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1118)
		::org::flixel::FlxRect obj2rect = _Function_2_2::Block(Object2,obj2delta);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(1120)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(1122)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::org::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(1125)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(1127)
				overlap = ((Object1->x + Object1->width) - Object2->x);
				HX_STACK_LINE(1128)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)16))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)1))) == (int)0))))){
					HX_STACK_LINE(1129)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(1134)
					hx::OrEq(Object1->touching,(int)16);
					HX_STACK_LINE(1135)
					hx::OrEq(Object2->touching,(int)1);
				}
			}
			else{
				HX_STACK_LINE(1138)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(1140)
					overlap = ((Object1->x - Object2->width) - Object2->x);
					HX_STACK_LINE(1141)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)1))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)16))) == (int)0))))){
						HX_STACK_LINE(1142)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(1147)
						hx::OrEq(Object1->touching,(int)1);
						HX_STACK_LINE(1148)
						hx::OrEq(Object2->touching,(int)16);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1155)
	if (((overlap != (int)0))){
		HX_STACK_LINE(1157)
		Float obj1v = Object1->velocity->x;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(1158)
		Float obj2v = Object2->velocity->x;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(1160)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(1162)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(1163)
			Object1->x = (Object1->x - overlap);
			HX_STACK_LINE(1164)
			hx::AddEq(Object2->x,overlap);
			HX_STACK_LINE(1166)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(1167)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(1168)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(1169)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(1170)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(1171)
			Object1->velocity->x = (average + (obj1velocity * Object1->elasticity));
			HX_STACK_LINE(1172)
			Object2->velocity->x = (average + (obj2velocity * Object2->elasticity));
		}
		else{
			HX_STACK_LINE(1174)
			if ((!(obj1immovable))){
				HX_STACK_LINE(1176)
				Object1->x = (Object1->x - overlap);
				HX_STACK_LINE(1177)
				Object1->velocity->x = (obj2v - (obj1v * Object1->elasticity));
			}
			else{
				HX_STACK_LINE(1179)
				if ((!(obj2immovable))){
					HX_STACK_LINE(1181)
					hx::AddEq(Object2->x,overlap);
					HX_STACK_LINE(1182)
					Object2->velocity->x = (obj1v - (obj2v * Object2->elasticity));
				}
			}
		}
		HX_STACK_LINE(1184)
		return true;
	}
	else{
		HX_STACK_LINE(1187)
		return false;
	}
	HX_STACK_LINE(1155)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::separateY( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateY","org/flixel/FlxObject.hx",1199);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1201)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(1202)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(1203)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(1204)
		return false;
	}
	HX_STACK_LINE(1209)
	if ((::Std_obj::is(Object1,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1210)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::org::flixel::FlxObject_obj::separateY_dyn(),null(),null());
	}
	HX_STACK_LINE(1213)
	if ((::Std_obj::is(Object2,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1214)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::org::flixel::FlxObject_obj::separateY_dyn(),true,null());
	}
	HX_STACK_LINE(1219)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(1220)
	Float obj1delta = (Object1->y - Object1->last->y);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(1221)
	Float obj2delta = (Object2->y - Object2->last->y);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(1222)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(1225)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(1226)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::org::flixel::FlxRect Block( Float &obj1delta,::org::flixel::FlxObject &Object1,Float &obj1deltaAbs){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1228);
				{
					HX_STACK_LINE(1228)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1228)
					_this->x = Object1->x;
					HX_STACK_LINE(1228)
					_this->y = (Object1->y - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(1228)
					_this->width = Object1->width;
					HX_STACK_LINE(1228)
					_this->height = (Object1->height + obj1deltaAbs);
					HX_STACK_LINE(1228)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1228)
		::org::flixel::FlxRect obj1rect = _Function_2_1::Block(obj1delta,Object1,obj1deltaAbs);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::org::flixel::FlxRect Block( Float &obj2delta,::org::flixel::FlxObject &Object2,Float &obj2deltaAbs){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1229);
				{
					HX_STACK_LINE(1229)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1229)
					_this->x = Object2->x;
					HX_STACK_LINE(1229)
					_this->y = (Object2->y - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(1229)
					_this->width = Object2->width;
					HX_STACK_LINE(1229)
					_this->height = (Object2->height + obj2deltaAbs);
					HX_STACK_LINE(1229)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1229)
		::org::flixel::FlxRect obj2rect = _Function_2_2::Block(obj2delta,Object2,obj2deltaAbs);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(1231)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(1233)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::org::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(1236)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(1238)
				overlap = ((Object1->y + Object1->height) - Object2->y);
				HX_STACK_LINE(1239)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)4096))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)256))) == (int)0))))){
					HX_STACK_LINE(1240)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(1245)
					hx::OrEq(Object1->touching,(int)4096);
					HX_STACK_LINE(1246)
					hx::OrEq(Object2->touching,(int)256);
				}
			}
			else{
				HX_STACK_LINE(1249)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(1251)
					overlap = ((Object1->y - Object2->height) - Object2->y);
					HX_STACK_LINE(1252)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)256))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)4096))) == (int)0))))){
						HX_STACK_LINE(1253)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(1258)
						hx::OrEq(Object1->touching,(int)256);
						HX_STACK_LINE(1259)
						hx::OrEq(Object2->touching,(int)4096);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1266)
	if (((overlap != (int)0))){
		HX_STACK_LINE(1268)
		Float obj1v = Object1->velocity->y;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(1269)
		Float obj2v = Object2->velocity->y;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(1271)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(1273)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(1274)
			Object1->y = (Object1->y - overlap);
			HX_STACK_LINE(1275)
			hx::AddEq(Object2->y,overlap);
			HX_STACK_LINE(1277)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(1278)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(1279)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(1280)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(1281)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(1282)
			Object1->velocity->y = (average + (obj1velocity * Object1->elasticity));
			HX_STACK_LINE(1283)
			Object2->velocity->y = (average + (obj2velocity * Object2->elasticity));
		}
		else{
			HX_STACK_LINE(1285)
			if ((!(obj1immovable))){
				HX_STACK_LINE(1287)
				Object1->y = (Object1->y - overlap);
				HX_STACK_LINE(1288)
				Object1->velocity->y = (obj2v - (obj1v * Object1->elasticity));
				HX_STACK_LINE(1290)
				if (((bool((bool(Object2->active) && bool(Object2->moves))) && bool((obj1delta > obj2delta))))){
					HX_STACK_LINE(1291)
					hx::AddEq(Object1->x,(Object2->x - Object2->last->x));
				}
			}
			else{
				HX_STACK_LINE(1295)
				if ((!(obj2immovable))){
					HX_STACK_LINE(1297)
					hx::AddEq(Object2->y,overlap);
					HX_STACK_LINE(1298)
					Object2->velocity->y = (obj1v - (obj2v * Object2->elasticity));
					HX_STACK_LINE(1300)
					if (((bool((bool(Object1->active) && bool(Object1->moves))) && bool((obj1delta < obj2delta))))){
						HX_STACK_LINE(1301)
						hx::AddEq(Object2->x,(Object1->x - Object1->last->x));
					}
				}
			}
		}
		HX_STACK_LINE(1305)
		return true;
	}
	else{
		HX_STACK_LINE(1308)
		return false;
	}
	HX_STACK_LINE(1266)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(solid,"solid");
	HX_MARK_MEMBER_NAME(flickering,"flickering");
	HX_MARK_MEMBER_NAME(_boundingBoxColorOverritten,"_boundingBoxColorOverritten");
	HX_MARK_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_MARK_MEMBER_NAME(_pathRotate,"_pathRotate");
	HX_MARK_MEMBER_NAME(_pathInc,"_pathInc");
	HX_MARK_MEMBER_NAME(_pathMode,"_pathMode");
	HX_MARK_MEMBER_NAME(_pathNodeIndex,"_pathNodeIndex");
	HX_MARK_MEMBER_NAME(pathAngle,"pathAngle");
	HX_MARK_MEMBER_NAME(pathSpeed,"pathSpeed");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(_flickerTimer,"_flickerTimer");
	HX_MARK_MEMBER_NAME(_flicker,"_flicker");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(solid,"solid");
	HX_VISIT_MEMBER_NAME(flickering,"flickering");
	HX_VISIT_MEMBER_NAME(_boundingBoxColorOverritten,"_boundingBoxColorOverritten");
	HX_VISIT_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_VISIT_MEMBER_NAME(_pathRotate,"_pathRotate");
	HX_VISIT_MEMBER_NAME(_pathInc,"_pathInc");
	HX_VISIT_MEMBER_NAME(_pathMode,"_pathMode");
	HX_VISIT_MEMBER_NAME(_pathNodeIndex,"_pathNodeIndex");
	HX_VISIT_MEMBER_NAME(pathAngle,"pathAngle");
	HX_VISIT_MEMBER_NAME(pathSpeed,"pathSpeed");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(_flickerTimer,"_flickerTimer");
	HX_VISIT_MEMBER_NAME(_flicker,"_flicker");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return UP; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { return ANY; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return DOWN; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"WALL") ) { return WALL; }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		if (HX_FIELD_EQ(inName,"FLOOR") ) { return FLOOR; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"solid") ) { return inCallProp ? getSolid() : solid; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { return _pZero; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CEILING") ) { return CEILING; }
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { return separate_dyn(); }
		if (HX_FIELD_EQ(inName,"setSolid") ) { return setSolid_dyn(); }
		if (HX_FIELD_EQ(inName,"getSolid") ) { return getSolid_dyn(); }
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathInc") ) { return _pathInc; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"_flicker") ) { return _flicker; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"PATH_YOYO") ) { return PATH_YOYO; }
		if (HX_FIELD_EQ(inName,"separateX") ) { return separateX_dyn(); }
		if (HX_FIELD_EQ(inName,"separateY") ) { return separateY_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathMode") ) { return _pathMode; }
		if (HX_FIELD_EQ(inName,"pathAngle") ) { return pathAngle; }
		if (HX_FIELD_EQ(inName,"pathSpeed") ) { return pathSpeed; }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"flickering") ) { return inCallProp ? getFlickering() : flickering; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"followPath") ) { return followPath_dyn(); }
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenXY") ) { return getScreenXY_dyn(); }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathRotate") ) { return _pathRotate; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PATH_FORWARD") ) { return PATH_FORWARD; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { return SEPARATE_BIAS; }
		if (HX_FIELD_EQ(inName,"PATH_BACKWARD") ) { return PATH_BACKWARD; }
		if (HX_FIELD_EQ(inName,"getFlickering") ) { return getFlickering_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_flickerTimer") ) { return _flickerTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onScreenObject") ) { return onScreenObject_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathNodeIndex") ) { return _pathNodeIndex; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updatePathMotion") ) { return updatePathMotion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_FORWARD") ) { return PATH_LOOP_FORWARD; }
		if (HX_FIELD_EQ(inName,"stopFollowingPath") ) { return stopFollowingPath_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_BACKWARD") ) { return PATH_LOOP_BACKWARD; }
		if (HX_FIELD_EQ(inName,"PATH_VERTICAL_ONLY") ) { return PATH_VERTICAL_ONLY; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PATH_HORIZONTAL_ONLY") ) { return PATH_HORIZONTAL_ONLY; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { return _firstSeparateFlxRect; }
		if (HX_FIELD_EQ(inName,"onBoundingBoxColorSet") ) { return onBoundingBoxColorSet_dyn(); }
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { return debugBoundingBoxColor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { return _secondSeparateFlxRect; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_boundingBoxColorOverritten") ) { return _boundingBoxColorOverritten; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { UP=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { ANY=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WALL") ) { WALL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::org::flixel::FlxPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOOR") ) { FLOOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp) return setSolid(inValue);solid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { _pZero=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CEILING") ) { CEILING=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pathInc") ) { _pathInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flicker") ) { _flicker=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"PATH_YOYO") ) { PATH_YOYO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pathMode") ) { _pathMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathAngle") ) { pathAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathSpeed") ) { pathSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immovable") ) { immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flickering") ) { flickering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pathRotate") ) { _pathRotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PATH_FORWARD") ) { PATH_FORWARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PATH_BACKWARD") ) { PATH_BACKWARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flickerTimer") ) { _flickerTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pathNodeIndex") ) { _pathNodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_FORWARD") ) { PATH_LOOP_FORWARD=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_BACKWARD") ) { PATH_LOOP_BACKWARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PATH_VERTICAL_ONLY") ) { PATH_VERTICAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PATH_HORIZONTAL_ONLY") ) { PATH_HORIZONTAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { if (inCallProp) return onBoundingBoxColorSet(inValue);debugBoundingBoxColor=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_boundingBoxColorOverritten") ) { _boundingBoxColorOverritten=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("flickering"));
	outFields->push(HX_CSTRING("_boundingBoxColorOverritten"));
	outFields->push(HX_CSTRING("debugBoundingBoxColor"));
	outFields->push(HX_CSTRING("_pathRotate"));
	outFields->push(HX_CSTRING("_pathInc"));
	outFields->push(HX_CSTRING("_pathMode"));
	outFields->push(HX_CSTRING("_pathNodeIndex"));
	outFields->push(HX_CSTRING("pathAngle"));
	outFields->push(HX_CSTRING("pathSpeed"));
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("allowCollisions"));
	outFields->push(HX_CSTRING("wasTouching"));
	outFields->push(HX_CSTRING("touching"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("_flickerTimer"));
	outFields->push(HX_CSTRING("_flicker"));
	outFields->push(HX_CSTRING("scrollFactor"));
	outFields->push(HX_CSTRING("maxAngular"));
	outFields->push(HX_CSTRING("angularDrag"));
	outFields->push(HX_CSTRING("angularAcceleration"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("maxVelocity"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("immovable"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SEPARATE_BIAS"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("NONE"),
	HX_CSTRING("CEILING"),
	HX_CSTRING("FLOOR"),
	HX_CSTRING("WALL"),
	HX_CSTRING("ANY"),
	HX_CSTRING("PATH_FORWARD"),
	HX_CSTRING("PATH_BACKWARD"),
	HX_CSTRING("PATH_LOOP_FORWARD"),
	HX_CSTRING("PATH_LOOP_BACKWARD"),
	HX_CSTRING("PATH_YOYO"),
	HX_CSTRING("PATH_HORIZONTAL_ONLY"),
	HX_CSTRING("PATH_VERTICAL_ONLY"),
	HX_CSTRING("_firstSeparateFlxRect"),
	HX_CSTRING("_secondSeparateFlxRect"),
	HX_CSTRING("_pZero"),
	HX_CSTRING("separate"),
	HX_CSTRING("separateX"),
	HX_CSTRING("separateY"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hurt"),
	HX_CSTRING("justTouched"),
	HX_CSTRING("isTouching"),
	HX_CSTRING("reset"),
	HX_CSTRING("getMidpoint"),
	HX_CSTRING("setSolid"),
	HX_CSTRING("getSolid"),
	HX_CSTRING("solid"),
	HX_CSTRING("getFlickering"),
	HX_CSTRING("flickering"),
	HX_CSTRING("flicker"),
	HX_CSTRING("getScreenXY"),
	HX_CSTRING("onScreenObject"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("updatePathMotion"),
	HX_CSTRING("advancePath"),
	HX_CSTRING("stopFollowingPath"),
	HX_CSTRING("followPath"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateMotion"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("preUpdate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onBoundingBoxColorSet"),
	HX_CSTRING("_boundingBoxColorOverritten"),
	HX_CSTRING("debugBoundingBoxColor"),
	HX_CSTRING("_pathRotate"),
	HX_CSTRING("_pathInc"),
	HX_CSTRING("_pathMode"),
	HX_CSTRING("_pathNodeIndex"),
	HX_CSTRING("pathAngle"),
	HX_CSTRING("pathSpeed"),
	HX_CSTRING("path"),
	HX_CSTRING("last"),
	HX_CSTRING("allowCollisions"),
	HX_CSTRING("wasTouching"),
	HX_CSTRING("touching"),
	HX_CSTRING("moves"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_point"),
	HX_CSTRING("health"),
	HX_CSTRING("_flickerTimer"),
	HX_CSTRING("_flicker"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("maxAngular"),
	HX_CSTRING("angularDrag"),
	HX_CSTRING("angularAcceleration"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("angle"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("drag"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("mass"),
	HX_CSTRING("velocity"),
	HX_CSTRING("immovable"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_FORWARD,"PATH_FORWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_BACKWARD,"PATH_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_LOOP_FORWARD,"PATH_LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_LOOP_BACKWARD,"PATH_LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_YOYO,"PATH_YOYO");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_HORIZONTAL_ONLY,"PATH_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_VERTICAL_ONLY,"PATH_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_FORWARD,"PATH_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_BACKWARD,"PATH_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_LOOP_FORWARD,"PATH_LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_LOOP_BACKWARD,"PATH_LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_YOYO,"PATH_YOYO");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_HORIZONTAL_ONLY,"PATH_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_VERTICAL_ONLY,"PATH_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
};

Class FlxObject_obj::__mClass;

void FlxObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxObject"), hx::TCanCast< FlxObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxObject_obj::__boot()
{
	SEPARATE_BIAS= (int)4;
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
	PATH_FORWARD= (int)0;
	PATH_BACKWARD= (int)1;
	PATH_LOOP_FORWARD= (int)16;
	PATH_LOOP_BACKWARD= (int)256;
	PATH_YOYO= (int)4096;
	PATH_HORIZONTAL_ONLY= (int)65536;
	PATH_VERTICAL_ONLY= (int)1048576;
	_firstSeparateFlxRect= ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
	_secondSeparateFlxRect= ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
	_pZero= ::org::flixel::FlxPoint_obj::__new(null(),null());
}

} // end namespace org
} // end namespace flixel
