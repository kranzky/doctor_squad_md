#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_native_events_TouchEvent
#include <native/events/TouchEvent.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxButton
#include <org/flixel/FlxButton.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Touch
#include <org/flixel/system/input/Touch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_TouchManager
#include <org/flixel/system/input/TouchManager.h>
#endif
namespace org{
namespace flixel{

Void FlxButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{
HX_STACK_PUSH("FlxButton::new","org/flixel/FlxButton.hx",106);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(107)
	super::__construct(X,Y,null());
	HX_STACK_LINE(108)
	if (((Label != null()))){
		HX_STACK_LINE(110)
		this->label = ::org::flixel::FlxText_obj::__new((int)0,(int)0,(int)80,Label,null());
		HX_STACK_LINE(111)
		this->label->setFormat(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null());
		HX_STACK_LINE(112)
		this->labelOffset = ::org::flixel::FlxPoint_obj::__new((int)-1,(int)3);
	}
	HX_STACK_LINE(114)
	this->loadGraphic(::org::flixel::FlxAssets_obj::imgDefaultButton,true,false,(int)80,(int)20,null(),null());
	HX_STACK_LINE(116)
	this->onUp = OnClick;
	HX_STACK_LINE(117)
	this->onDown = null();
	HX_STACK_LINE(118)
	this->onOut = null();
	HX_STACK_LINE(119)
	this->onOver = null();
	HX_STACK_LINE(121)
	this->soundOver = null();
	HX_STACK_LINE(122)
	this->soundOut = null();
	HX_STACK_LINE(123)
	this->soundDown = null();
	HX_STACK_LINE(124)
	this->soundUp = null();
	HX_STACK_LINE(126)
	this->status = (int)0;
	HX_STACK_LINE(127)
	this->on = false;
	HX_STACK_LINE(128)
	this->_pressed = false;
	HX_STACK_LINE(129)
	this->_initialized = false;
}
;
	return null();
}

FlxButton_obj::~FlxButton_obj() { }

Dynamic FlxButton_obj::__CreateEmpty() { return  new FlxButton_obj; }
hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{  hx::ObjectPtr< FlxButton_obj > result = new FlxButton_obj();
	result->__construct(__o_X,__o_Y,Label,OnClick);
	return result;}

Dynamic FlxButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxButton_obj > result = new FlxButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxButton_obj::onMouseUp( ::native::events::Event event){
{
		HX_STACK_PUSH("FlxButton::onMouseUp","org/flixel/FlxButton.hx",423);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(424)
		if (((bool((bool((bool(!(this->exists)) || bool(!(this->visible)))) || bool(!(this->active)))) || bool((this->status != (int)2))))){
			HX_STACK_LINE(425)
			return null();
		}
		HX_STACK_LINE(428)
		if (((this->onUp_dyn() != null()))){
			HX_STACK_LINE(429)
			this->onUp();
		}
		HX_STACK_LINE(432)
		if (((this->soundUp != null()))){
			HX_STACK_LINE(433)
			this->soundUp->play(true);
		}
		HX_STACK_LINE(436)
		this->status = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,onMouseUp,(void))

Void FlxButton_obj::setSounds( ::native::media::Sound SoundOver,hx::Null< Float >  __o_SoundOverVolume,::native::media::Sound SoundOut,hx::Null< Float >  __o_SoundOutVolume,::native::media::Sound SoundDown,hx::Null< Float >  __o_SoundDownVolume,::native::media::Sound SoundUp,hx::Null< Float >  __o_SoundUpVolume){
Float SoundOverVolume = __o_SoundOverVolume.Default(1.0);
Float SoundOutVolume = __o_SoundOutVolume.Default(1.0);
Float SoundDownVolume = __o_SoundDownVolume.Default(1.0);
Float SoundUpVolume = __o_SoundUpVolume.Default(1.0);
	HX_STACK_PUSH("FlxButton::setSounds","org/flixel/FlxButton.hx",400);
	HX_STACK_THIS(this);
	HX_STACK_ARG(SoundOver,"SoundOver");
	HX_STACK_ARG(SoundOverVolume,"SoundOverVolume");
	HX_STACK_ARG(SoundOut,"SoundOut");
	HX_STACK_ARG(SoundOutVolume,"SoundOutVolume");
	HX_STACK_ARG(SoundDown,"SoundDown");
	HX_STACK_ARG(SoundDownVolume,"SoundDownVolume");
	HX_STACK_ARG(SoundUp,"SoundUp");
	HX_STACK_ARG(SoundUpVolume,"SoundUpVolume");
{
		HX_STACK_LINE(401)
		if (((SoundOver != null()))){
			HX_STACK_LINE(402)
			this->soundOver = ::org::flixel::FlxG_obj::loadSound(SoundOver,SoundOverVolume,null(),null(),null(),null());
		}
		HX_STACK_LINE(405)
		if (((SoundOut != null()))){
			HX_STACK_LINE(406)
			this->soundOut = ::org::flixel::FlxG_obj::loadSound(SoundOut,SoundOutVolume,null(),null(),null(),null());
		}
		HX_STACK_LINE(409)
		if (((SoundDown != null()))){
			HX_STACK_LINE(410)
			this->soundDown = ::org::flixel::FlxG_obj::loadSound(SoundDown,SoundDownVolume,null(),null(),null(),null());
		}
		HX_STACK_LINE(413)
		if (((SoundUp != null()))){
			HX_STACK_LINE(414)
			this->soundUp = ::org::flixel::FlxG_obj::loadSound(SoundUp,SoundUpVolume,null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxButton_obj,setSounds,(void))

Void FlxButton_obj::resetHelpers( ){
{
		HX_STACK_PUSH("FlxButton::resetHelpers","org/flixel/FlxButton.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		this->super::resetHelpers();
		HX_STACK_LINE(377)
		if (((this->label != null()))){
			HX_STACK_LINE(379)
			this->label->width = this->label->frameWidth = ::Std_obj::_int(this->width);
			HX_STACK_LINE(380)
			this->label->setSize(this->label->getSize());
		}
	}
return null();
}


Void FlxButton_obj::draw( ){
{
		HX_STACK_PUSH("FlxButton::draw","org/flixel/FlxButton.hx",362);
		HX_STACK_THIS(this);
		HX_STACK_LINE(363)
		this->super::draw();
		HX_STACK_LINE(364)
		if (((this->label != null()))){
			HX_STACK_LINE(366)
			this->label->cameras = this->cameras;
			HX_STACK_LINE(367)
			this->label->draw();
		}
	}
return null();
}


bool FlxButton_obj::updateButtonStatus( ::org::flixel::FlxPoint Point,::org::flixel::FlxCamera Camera,bool JustPressed){
	HX_STACK_PUSH("FlxButton::updateButtonStatus","org/flixel/FlxButton.hx",324);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Point,"Point");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(JustPressed,"JustPressed");
	HX_STACK_LINE(325)
	bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
	HX_STACK_LINE(326)
	if ((this->overlapsPoint(Point,true,Camera))){
		HX_STACK_LINE(328)
		offAll = false;
		HX_STACK_LINE(329)
		if ((JustPressed)){
			HX_STACK_LINE(331)
			this->status = (int)2;
			HX_STACK_LINE(332)
			if (((this->onDown_dyn() != null()))){
				HX_STACK_LINE(333)
				this->onDown();
			}
			HX_STACK_LINE(336)
			if (((this->soundDown != null()))){
				HX_STACK_LINE(337)
				this->soundDown->play(true);
			}
		}
		HX_STACK_LINE(341)
		if (((this->status == (int)0))){
			HX_STACK_LINE(343)
			this->status = (int)1;
			HX_STACK_LINE(344)
			if (((this->onOver_dyn() != null()))){
				HX_STACK_LINE(345)
				this->onOver();
			}
			HX_STACK_LINE(348)
			if (((this->soundOver != null()))){
				HX_STACK_LINE(349)
				this->soundOver->play(true);
			}
		}
	}
	HX_STACK_LINE(355)
	return offAll;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxButton_obj,updateButtonStatus,return )

Void FlxButton_obj::updateButton( ){
{
		HX_STACK_PUSH("FlxButton::updateButton","org/flixel/FlxButton.hx",248);
		HX_STACK_THIS(this);
		HX_STACK_LINE(251)
		if (((bool(::org::flixel::FlxG_obj::mouse->_updateCursorContainer) || bool(::org::flixel::FlxG_obj::supportsTouchEvents)))){
			HX_STACK_LINE(253)
			if (((this->cameras == null()))){
				HX_STACK_LINE(254)
				this->cameras = ::org::flixel::FlxG_obj::cameras;
			}
			HX_STACK_LINE(257)
			::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(258)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(259)
			int l = this->cameras->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(260)
			bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
			HX_STACK_LINE(261)
			while(((i < l))){
				HX_STACK_LINE(263)
				camera = this->cameras->__get((i)++);
				HX_STACK_LINE(264)
				if ((!(::org::flixel::FlxG_obj::supportsTouchEvents))){
					HX_STACK_LINE(266)
					::org::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
					HX_STACK_LINE(267)
					offAll = (  (((this->updateButtonStatus(this->_point,camera,::org::flixel::FlxG_obj::mouse->justPressed()) == false))) ? bool(false) : bool(offAll) );
				}
				else{
					HX_STACK_LINE(271)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = ::org::flixel::FlxG_obj::touchManager->touches->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(271)
					while(((_g1 < _g))){
						HX_STACK_LINE(271)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(273)
						::org::flixel::system::input::Touch touch = ::org::flixel::FlxG_obj::touchManager->touches->__get(j);		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(274)
						touch->getWorldPosition(camera,this->_point);
						HX_STACK_LINE(275)
						offAll = (  (((this->updateButtonStatus(this->_point,camera,touch->justPressed()) == false))) ? bool(false) : bool(offAll) );
					}
				}
			}
			HX_STACK_LINE(279)
			if ((offAll)){
				HX_STACK_LINE(281)
				if (((this->status != (int)0))){
					HX_STACK_LINE(283)
					if (((this->onOut_dyn() != null()))){
						HX_STACK_LINE(284)
						this->onOut();
					}
					HX_STACK_LINE(287)
					if (((this->soundOut != null()))){
						HX_STACK_LINE(288)
						this->soundOut->play(true);
					}
				}
				HX_STACK_LINE(292)
				this->status = (int)0;
			}
		}
		HX_STACK_LINE(298)
		if (((this->label != null()))){
			HX_STACK_LINE(300)
			this->label->x = this->x;
			HX_STACK_LINE(301)
			this->label->y = this->y;
			HX_STACK_LINE(303)
			if (((this->labelOffset != null()))){
				HX_STACK_LINE(305)
				hx::AddEq(this->label->x,this->labelOffset->x);
				HX_STACK_LINE(306)
				hx::AddEq(this->label->y,this->labelOffset->y);
			}
			HX_STACK_LINE(309)
			this->label->scrollFactor = this->scrollFactor;
		}
		HX_STACK_LINE(313)
		if (((bool((this->status == (int)1)) && bool(this->on)))){
			HX_STACK_LINE(314)
			this->setFrame((int)0);
		}
		else{
			HX_STACK_LINE(318)
			this->setFrame(this->status);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButton_obj,updateButton,(void))

Void FlxButton_obj::update( ){
{
		HX_STACK_PUSH("FlxButton::update","org/flixel/FlxButton.hx",222);
		HX_STACK_THIS(this);
		HX_STACK_LINE(223)
		this->updateButton();
		HX_STACK_LINE(227)
		if (((this->label == null()))){
			HX_STACK_LINE(228)
			return null();
		}
		HX_STACK_LINE(231)
		switch( (int)(this->getFrame())){
			case (int)1: {
				HX_STACK_LINE(233)
				this->label->setAlpha(1.0);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(236)
				this->label->setAlpha(0.5);
				HX_STACK_LINE(237)
				(this->label->y)++;
			}
			;break;
			default: {
				HX_STACK_LINE(239)
				this->label->setAlpha(0.8);
			}
		}
	}
return null();
}


Void FlxButton_obj::preUpdate( ){
{
		HX_STACK_PUSH("FlxButton::preUpdate","org/flixel/FlxButton.hx",190);
		HX_STACK_THIS(this);
		HX_STACK_LINE(191)
		this->super::preUpdate();
		HX_STACK_LINE(193)
		if ((!(this->_initialized))){
			HX_STACK_LINE(194)
			if (((::org::flixel::FlxG_obj::getStage() != null()))){
				HX_STACK_LINE(197)
				if ((!(::org::flixel::FlxG_obj::supportsTouchEvents))){
					HX_STACK_LINE(198)
					::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(206)
					::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::TouchEvent_obj::TOUCH_END,this->onMouseUp_dyn(),null(),null(),null());
				}
				HX_STACK_LINE(213)
				this->_initialized = true;
			}
		}
	}
return null();
}


Void FlxButton_obj::destroy( ){
{
		HX_STACK_PUSH("FlxButton::destroy","org/flixel/FlxButton.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_LINE(137)
		if (((::org::flixel::FlxG_obj::getStage() != null()))){
			HX_STACK_LINE(138)
			if ((!(::org::flixel::FlxG_obj::supportsTouchEvents))){
				HX_STACK_LINE(140)
				::org::flixel::FlxGame_obj::clickableArea->removeEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
			}
			else{
				HX_STACK_LINE(148)
				::org::flixel::FlxGame_obj::clickableArea->removeEventListener(::native::events::TouchEvent_obj::TOUCH_END,this->onMouseUp_dyn(),null());
			}
		}
		HX_STACK_LINE(156)
		if (((this->label != null()))){
			HX_STACK_LINE(158)
			this->label->destroy();
			HX_STACK_LINE(159)
			this->label = null();
		}
		HX_STACK_LINE(161)
		this->onUp = null();
		HX_STACK_LINE(162)
		this->onDown = null();
		HX_STACK_LINE(163)
		this->onOut = null();
		HX_STACK_LINE(164)
		this->onOver = null();
		HX_STACK_LINE(165)
		if (((this->soundOver != null()))){
			HX_STACK_LINE(166)
			this->soundOver->destroy();
		}
		HX_STACK_LINE(169)
		if (((this->soundOut != null()))){
			HX_STACK_LINE(170)
			this->soundOut->destroy();
		}
		HX_STACK_LINE(173)
		if (((this->soundDown != null()))){
			HX_STACK_LINE(174)
			this->soundDown->destroy();
		}
		HX_STACK_LINE(177)
		if (((this->soundUp != null()))){
			HX_STACK_LINE(178)
			this->soundUp->destroy();
		}
		HX_STACK_LINE(181)
		this->super::destroy();
	}
return null();
}


int FlxButton_obj::NORMAL;

int FlxButton_obj::HIGHLIGHT;

int FlxButton_obj::PRESSED;


FlxButton_obj::FlxButton_obj()
{
}

void FlxButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxButton);
	HX_MARK_MEMBER_NAME(_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(_pressed,"_pressed");
	HX_MARK_MEMBER_NAME(soundUp,"soundUp");
	HX_MARK_MEMBER_NAME(soundDown,"soundDown");
	HX_MARK_MEMBER_NAME(soundOut,"soundOut");
	HX_MARK_MEMBER_NAME(soundOver,"soundOver");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(labelOffset,"labelOffset");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(on,"on");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(_pressed,"_pressed");
	HX_VISIT_MEMBER_NAME(soundUp,"soundUp");
	HX_VISIT_MEMBER_NAME(soundDown,"soundDown");
	HX_VISIT_MEMBER_NAME(soundOut,"soundOut");
	HX_VISIT_MEMBER_NAME(soundOver,"soundOver");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(labelOffset,"labelOffset");
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(on,"on");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { return NORMAL; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PRESSED") ) { return PRESSED; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"soundUp") ) { return soundUp; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pressed") ) { return _pressed; }
		if (HX_FIELD_EQ(inName,"soundOut") ) { return soundOut; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HIGHLIGHT") ) { return HIGHLIGHT; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"setSounds") ) { return setSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"soundDown") ) { return soundDown; }
		if (HX_FIELD_EQ(inName,"soundOver") ) { return soundOver; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelOffset") ) { return labelOffset; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_initialized") ) { return _initialized; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateButtonStatus") ) { return updateButtonStatus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { on=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { NORMAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PRESSED") ) { PRESSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundUp") ) { soundUp=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pressed") ) { _pressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundOut") ) { soundOut=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HIGHLIGHT") ) { HIGHLIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundDown") ) { soundDown=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundOver") ) { soundOver=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelOffset") ) { labelOffset=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_initialized"));
	outFields->push(HX_CSTRING("_pressed"));
	outFields->push(HX_CSTRING("soundUp"));
	outFields->push(HX_CSTRING("soundDown"));
	outFields->push(HX_CSTRING("soundOut"));
	outFields->push(HX_CSTRING("soundOver"));
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("labelOffset"));
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("on"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL"),
	HX_CSTRING("HIGHLIGHT"),
	HX_CSTRING("PRESSED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("setSounds"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateButtonStatus"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("update"),
	HX_CSTRING("preUpdate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_initialized"),
	HX_CSTRING("_pressed"),
	HX_CSTRING("soundUp"),
	HX_CSTRING("soundDown"),
	HX_CSTRING("soundOut"),
	HX_CSTRING("soundOver"),
	HX_CSTRING("status"),
	HX_CSTRING("onOut"),
	HX_CSTRING("onOver"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onUp"),
	HX_CSTRING("labelOffset"),
	HX_CSTRING("label"),
	HX_CSTRING("on"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

Class FlxButton_obj::__mClass;

void FlxButton_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxButton"), hx::TCanCast< FlxButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxButton_obj::__boot()
{
	NORMAL= (int)0;
	HIGHLIGHT= (int)1;
	PRESSED= (int)2;
}

} // end namespace org
} // end namespace flixel
