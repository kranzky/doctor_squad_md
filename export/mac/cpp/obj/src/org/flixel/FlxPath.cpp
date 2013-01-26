#include <hxcpp.h>

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
#ifndef INCLUDED_org_flixel_FlxPath
#include <org/flixel/FlxPath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_DebugPathDisplay
#include <org/flixel/plugin/DebugPathDisplay.h>
#endif
namespace org{
namespace flixel{

Void FlxPath_obj::__construct(Array< ::org::flixel::FlxPoint > Nodes)
{
HX_STACK_PUSH("FlxPath::new","org/flixel/FlxPath.hx",51);
{
	HX_STACK_LINE(52)
	if (((Nodes == null()))){
		HX_STACK_LINE(53)
		this->nodes = Array_obj< ::org::flixel::FlxPoint >::__new();
	}
	else{
		HX_STACK_LINE(57)
		this->nodes = Nodes;
	}
	HX_STACK_LINE(60)
	this->_point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(61)
	this->debugScrollFactor = ::org::flixel::FlxPoint_obj::__new(1.0,1.0);
	HX_STACK_LINE(62)
	this->debugColor = (int)16777215;
	HX_STACK_LINE(63)
	this->ignoreDrawDebug = false;
	HX_STACK_LINE(65)
	::org::flixel::plugin::DebugPathDisplay debugPathDisplay = ::org::flixel::FlxPath_obj::getManager();		HX_STACK_VAR(debugPathDisplay,"debugPathDisplay");
	HX_STACK_LINE(66)
	if (((debugPathDisplay != null()))){
		HX_STACK_LINE(67)
		debugPathDisplay->add(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

FlxPath_obj::~FlxPath_obj() { }

Dynamic FlxPath_obj::__CreateEmpty() { return  new FlxPath_obj; }
hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new(Array< ::org::flixel::FlxPoint > Nodes)
{  hx::ObjectPtr< FlxPath_obj > result = new FlxPath_obj();
	result->__construct(Nodes);
	return result;}

Dynamic FlxPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPath_obj > result = new FlxPath_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxPath_obj::drawDebug( ::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxPath::drawDebug","org/flixel/FlxPath.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(230)
		if (((this->nodes->length <= (int)0))){
			HX_STACK_LINE(231)
			return null();
		}
		HX_STACK_LINE(234)
		if (((Camera == null()))){
			HX_STACK_LINE(235)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(244)
		::native::display::Graphics gfx = Camera->_debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(248)
		::org::flixel::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(249)
		::org::flixel::FlxPoint nextNode;		HX_STACK_VAR(nextNode,"nextNode");
		HX_STACK_LINE(250)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(251)
		int l = this->nodes->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(252)
		while(((i < l))){
			HX_STACK_LINE(255)
			node = this->nodes->__get(i);
			HX_STACK_LINE(258)
			this->_point->x = (node->x - ::Std_obj::_int((Camera->scroll->x * this->debugScrollFactor->x)));
			HX_STACK_LINE(259)
			this->_point->y = (node->y - ::Std_obj::_int((Camera->scroll->y * this->debugScrollFactor->y)));
			HX_STACK_LINE(266)
			int nodeSize = (int)2;		HX_STACK_VAR(nodeSize,"nodeSize");
			HX_STACK_LINE(267)
			if (((bool((i == (int)0)) || bool((i == (l - (int)1)))))){
				HX_STACK_LINE(268)
				hx::MultEq(nodeSize,(int)2);
			}
			HX_STACK_LINE(274)
			int nodeColor = this->debugColor;		HX_STACK_VAR(nodeColor,"nodeColor");
			HX_STACK_LINE(276)
			if (((l > (int)1))){
				HX_STACK_LINE(277)
				if (((i == (int)0))){
					HX_STACK_LINE(279)
					nodeColor = (int)-16715227;
				}
				else{
					HX_STACK_LINE(286)
					if (((i == (l - (int)1)))){
						HX_STACK_LINE(287)
						nodeColor = (int)-65518;
					}
				}
			}
			HX_STACK_LINE(297)
			gfx->beginFill(nodeColor,0.5);
			HX_STACK_LINE(298)
			gfx->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(299)
			gfx->drawRect((this->_point->x - (nodeSize * 0.5)),(this->_point->y - (nodeSize * 0.5)),nodeSize,nodeSize);
			HX_STACK_LINE(300)
			gfx->endFill();
			HX_STACK_LINE(303)
			Float linealpha = 0.3;		HX_STACK_VAR(linealpha,"linealpha");
			HX_STACK_LINE(304)
			if (((i < (l - (int)1)))){
				HX_STACK_LINE(305)
				nextNode = this->nodes->__get((i + (int)1));
			}
			else{
				HX_STACK_LINE(310)
				nextNode = this->nodes->__get((int)0);
				HX_STACK_LINE(311)
				linealpha = 0.15;
			}
			HX_STACK_LINE(315)
			gfx->moveTo(this->_point->x,this->_point->y);
			HX_STACK_LINE(316)
			gfx->lineStyle((int)1,this->debugColor,linealpha,null(),null(),null(),null(),null());
			HX_STACK_LINE(317)
			this->_point->x = (nextNode->x - ::Std_obj::_int((Camera->scroll->x * this->debugScrollFactor->x)));
			HX_STACK_LINE(318)
			this->_point->y = (nextNode->y - ::Std_obj::_int((Camera->scroll->y * this->debugScrollFactor->y)));
			HX_STACK_LINE(323)
			gfx->lineTo(this->_point->x,this->_point->y);
			HX_STACK_LINE(325)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,drawDebug,(void))

::org::flixel::FlxPoint FlxPath_obj::tail( ){
	HX_STACK_PUSH("FlxPath::tail","org/flixel/FlxPath.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_LINE(214)
	if (((this->nodes->length > (int)0))){
		HX_STACK_LINE(215)
		return this->nodes->__get((this->nodes->length - (int)1));
	}
	HX_STACK_LINE(218)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

::org::flixel::FlxPoint FlxPath_obj::head( ){
	HX_STACK_PUSH("FlxPath::head","org/flixel/FlxPath.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(201)
	if (((this->nodes->length > (int)0))){
		HX_STACK_LINE(202)
		return this->nodes->__get((int)0);
	}
	HX_STACK_LINE(205)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

::org::flixel::FlxPoint FlxPath_obj::removeAt( int Index){
	HX_STACK_PUSH("FlxPath::removeAt","org/flixel/FlxPath.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(184)
	if (((this->nodes->length <= (int)0))){
		HX_STACK_LINE(185)
		return null();
	}
	HX_STACK_LINE(188)
	if (((Index >= this->nodes->length))){
		HX_STACK_LINE(189)
		Index = (this->nodes->length - (int)1);
	}
	HX_STACK_LINE(192)
	return this->nodes->splice(Index,(int)1)->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

::org::flixel::FlxPoint FlxPath_obj::remove( ::org::flixel::FlxPoint Node){
	HX_STACK_PUSH("FlxPath::remove","org/flixel/FlxPath.hx",165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Node,"Node");
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxPath_obj *__this,::org::flixel::FlxPoint &Node){
			HX_STACK_PUSH("*::closure","org/flixel/FlxPath.hx",166);
			{
				HX_STACK_LINE(166)
				Dynamic array = __this->nodes;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(166)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(166)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					while(((_g < len))){
						HX_STACK_LINE(166)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(166)
						if (((array->__GetItem(i) == Node))){
							HX_STACK_LINE(166)
							index = i;
						}
					}
				}
				HX_STACK_LINE(166)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(166)
	int index = _Function_1_1::Block(this,Node);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(167)
	if (((index >= (int)0))){
		HX_STACK_LINE(168)
		return this->nodes->splice(index,(int)1)->__get((int)0);
	}
	else{
		HX_STACK_LINE(172)
		return null();
	}
	HX_STACK_LINE(167)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

Void FlxPath_obj::addPointAt( ::org::flixel::FlxPoint Node,int Index,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_PUSH("FlxPath::addPointAt","org/flixel/FlxPath.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Node,"Node");
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(AsReference,"AsReference");
{
		HX_STACK_LINE(143)
		if (((Index < (int)0))){
			HX_STACK_LINE(143)
			return null();
		}
		HX_STACK_LINE(144)
		if (((Index > this->nodes->length))){
			HX_STACK_LINE(145)
			Index = this->nodes->length;
		}
		HX_STACK_LINE(148)
		if ((AsReference)){
			HX_STACK_LINE(149)
			this->nodes->insert(Index,Node);
		}
		else{
			HX_STACK_LINE(153)
			this->nodes->insert(Index,::org::flixel::FlxPoint_obj::__new(Node->x,Node->y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,(void))

Void FlxPath_obj::addPoint( ::org::flixel::FlxPoint Node,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_PUSH("FlxPath::addPoint","org/flixel/FlxPath.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Node,"Node");
	HX_STACK_ARG(AsReference,"AsReference");
{
		HX_STACK_LINE(122)
		if ((AsReference)){
			HX_STACK_LINE(124)
			this->nodes->push(Node);
		}
		else{
			HX_STACK_LINE(128)
			this->nodes->push(::org::flixel::FlxPoint_obj::__new(Node->x,Node->y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,(void))

Void FlxPath_obj::addAt( Float X,Float Y,int Index){
{
		HX_STACK_PUSH("FlxPath::addAt","org/flixel/FlxPath.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(106)
		if (((Index < (int)0))){
			HX_STACK_LINE(106)
			return null();
		}
		HX_STACK_LINE(107)
		if (((Index > this->nodes->length))){
			HX_STACK_LINE(108)
			Index = this->nodes->length;
		}
		HX_STACK_LINE(111)
		this->nodes->insert(Index,::org::flixel::FlxPoint_obj::__new(X,Y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,(void))

Void FlxPath_obj::add( Float X,Float Y){
{
		HX_STACK_PUSH("FlxPath::add","org/flixel/FlxPath.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(94)
		this->nodes->push(::org::flixel::FlxPoint_obj::__new(X,Y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,(void))

Void FlxPath_obj::destroy( ){
{
		HX_STACK_PUSH("FlxPath::destroy","org/flixel/FlxPath.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		::org::flixel::plugin::DebugPathDisplay debugPathDisplay = ::org::flixel::FlxPath_obj::getManager();		HX_STACK_VAR(debugPathDisplay,"debugPathDisplay");
		HX_STACK_LINE(78)
		if (((debugPathDisplay != null()))){
			HX_STACK_LINE(79)
			debugPathDisplay->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(83)
		this->debugScrollFactor = null();
		HX_STACK_LINE(84)
		this->_point = null();
		HX_STACK_LINE(85)
		this->nodes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

::org::flixel::plugin::DebugPathDisplay FlxPath_obj::manager;

::org::flixel::plugin::DebugPathDisplay FlxPath_obj::getManager( ){
	HX_STACK_PUSH("FlxPath::getManager","org/flixel/FlxPath.hx",337);
	HX_STACK_LINE(337)
	return hx::TCast< org::flixel::plugin::DebugPathDisplay >::cast(::org::flixel::FlxG_obj::getPlugin(hx::ClassOf< ::org::flixel::plugin::DebugPathDisplay >()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,getManager,return )


FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(debugScrollFactor,"debugScrollFactor");
	HX_MARK_MEMBER_NAME(debugColor,"debugColor");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(debugScrollFactor,"debugScrollFactor");
	HX_VISIT_MEMBER_NAME(debugColor,"debugColor");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
}

Dynamic FlxPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tail") ) { return tail_dyn(); }
		if (HX_FIELD_EQ(inName,"head") ) { return head_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"addAt") ) { return addAt_dyn(); }
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return inCallProp ? getManager() : manager; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getManager") ) { return getManager_dyn(); }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return addPointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"debugColor") ) { return debugColor; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ignoreDrawDebug; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"debugScrollFactor") ) { return debugScrollFactor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< Array< ::org::flixel::FlxPoint > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::org::flixel::plugin::DebugPathDisplay >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debugColor") ) { debugColor=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"debugScrollFactor") ) { debugScrollFactor=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("ignoreDrawDebug"));
	outFields->push(HX_CSTRING("debugScrollFactor"));
	outFields->push(HX_CSTRING("debugColor"));
	outFields->push(HX_CSTRING("nodes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("getManager"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawDebug"),
	HX_CSTRING("tail"),
	HX_CSTRING("head"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("remove"),
	HX_CSTRING("addPointAt"),
	HX_CSTRING("addPoint"),
	HX_CSTRING("addAt"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_point"),
	HX_CSTRING("ignoreDrawDebug"),
	HX_CSTRING("debugScrollFactor"),
	HX_CSTRING("debugColor"),
	HX_CSTRING("nodes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPath_obj::manager,"manager");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::manager,"manager");
};

Class FlxPath_obj::__mClass;

void FlxPath_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxPath"), hx::TCanCast< FlxPath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxPath_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
