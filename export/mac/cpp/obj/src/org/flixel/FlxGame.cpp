#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_display_StageAlign
#include <native/display/StageAlign.h>
#endif
#ifndef INCLUDED_native_display_StageScaleMode
#include <native/display/StageScaleMode.h>
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
#ifndef INCLUDED_native_events_JoystickEvent
#include <native/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_native_events_KeyboardEvent
#include <native/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_native_events_TouchEvent
#include <native/events/TouchEvent.h>
#endif
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_native_text_TextFormat
#include <native/text/TextFormat.h>
#endif
#ifndef INCLUDED_native_text_TextFormatAlign
#include <native/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_native_ui_Mouse
#include <native/ui/Mouse.h>
#endif
#ifndef INCLUDED_native_ui_Multitouch
#include <native/ui/Multitouch.h>
#endif
#ifndef INCLUDED_native_ui_MultitouchInputMode
#include <native/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
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
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSave
#include <org/flixel/FlxSave.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTimer
#include <org/flixel/FlxTimer.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_TimerManager
#include <org/flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxBitmapFont
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxReplay
#include <org/flixel/system/FlxReplay.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Perf
#include <org/flixel/system/debug/Perf.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_VCR
#include <org/flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Input
#include <org/flixel/system/input/Input.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_JoystickManager
#include <org/flixel/system/input/JoystickManager.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Keyboard
#include <org/flixel/system/input/Keyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_TouchManager
#include <org/flixel/system/input/TouchManager.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
namespace org{
namespace flixel{

Void FlxGame_obj::__construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_UseSystemCursor)
{
HX_STACK_PUSH("FlxGame::new","org/flixel/FlxGame.hx",208);
Float Zoom = __o_Zoom.Default(1);
int GameFramerate = __o_GameFramerate.Default(60);
int FlashFramerate = __o_FlashFramerate.Default(30);
bool UseSystemCursor = __o_UseSystemCursor.Default(false);
{
	HX_STACK_LINE(209)
	super::__construct();
	HX_STACK_LINE(212)
	this->_lostFocus = false;
	HX_STACK_LINE(213)
	this->_focus = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(214)
	this->_focus->set_visible(false);
	HX_STACK_LINE(215)
	this->_soundTray = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(216)
	this->_mouse = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(219)
	::org::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(220)
	::org::flixel::FlxG_obj::setFramerate(GameFramerate);
	HX_STACK_LINE(221)
	::org::flixel::FlxG_obj::setFlashFramerate(FlashFramerate);
	HX_STACK_LINE(222)
	this->_accumulator = this->_step;
	HX_STACK_LINE(223)
	this->_total = (int)0;
	HX_STACK_LINE(224)
	this->_mark = (int)0;
	HX_STACK_LINE(225)
	this->_state = null();
	HX_STACK_LINE(226)
	this->useSoundHotKeys = true;
	HX_STACK_LINE(227)
	this->useSystemCursor = UseSystemCursor;
	HX_STACK_LINE(228)
	if ((!(this->useSystemCursor))){
		HX_STACK_LINE(229)
		::native::ui::Mouse_obj::hide();
	}
	HX_STACK_LINE(235)
	this->forceDebugger = false;
	HX_STACK_LINE(237)
	this->_debuggerUp = false;
	HX_STACK_LINE(240)
	this->_replay = ::org::flixel::system::FlxReplay_obj::__new();
	HX_STACK_LINE(241)
	this->_replayRequested = false;
	HX_STACK_LINE(242)
	this->_recordingRequested = false;
	HX_STACK_LINE(243)
	this->_replaying = false;
	HX_STACK_LINE(244)
	this->_recording = false;
	HX_STACK_LINE(247)
	this->_iState = InitialState;
	HX_STACK_LINE(248)
	this->_requestedState = null();
	HX_STACK_LINE(249)
	this->_requestedReset = true;
	HX_STACK_LINE(251)
	this->addEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_UseSystemCursor)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(GameSizeX,GameSizeY,InitialState,__o_Zoom,__o_GameFramerate,__o_FlashFramerate,__o_UseSystemCursor);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::org::flixel::system::FlxDebugger FlxGame_obj::getDebugger( ){
	HX_STACK_PUSH("FlxGame::getDebugger","org/flixel/FlxGame.hx",1089);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1089)
	return this->_debugger;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,getDebugger,return )

Void FlxGame_obj::createFocusScreen( ){
{
		HX_STACK_PUSH("FlxGame::createFocusScreen","org/flixel/FlxGame.hx",1046);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1047)
		::native::display::Graphics gfx = this->_focus->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(1048)
		int screenWidth = ::Math_obj::floor((::org::flixel::FlxG_obj::width * ::org::flixel::FlxCamera_obj::defaultZoom));		HX_STACK_VAR(screenWidth,"screenWidth");
		HX_STACK_LINE(1049)
		int screenHeight = ::Math_obj::floor((::org::flixel::FlxG_obj::height * ::org::flixel::FlxCamera_obj::defaultZoom));		HX_STACK_VAR(screenHeight,"screenHeight");
		HX_STACK_LINE(1052)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(1053)
		gfx->beginFill((int)0,0.5);
		HX_STACK_LINE(1054)
		gfx->lineTo(screenWidth,(int)0);
		HX_STACK_LINE(1055)
		gfx->lineTo(screenWidth,screenHeight);
		HX_STACK_LINE(1056)
		gfx->lineTo((int)0,screenHeight);
		HX_STACK_LINE(1057)
		gfx->lineTo((int)0,(int)0);
		HX_STACK_LINE(1058)
		gfx->endFill();
		HX_STACK_LINE(1061)
		int halfWidth = ::Math_obj::floor((Float(screenWidth) / Float((int)2)));		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(1062)
		int halfHeight = ::Math_obj::floor((Float(screenHeight) / Float((int)2)));		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(1063)
		int helper = ::Math_obj::floor((Float(((  (((halfWidth <= halfHeight))) ? Float(halfWidth) : Float(halfHeight) ))) / Float((int)3)));		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(1064)
		gfx->moveTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(1065)
		gfx->beginFill((int)16777215,0.65);
		HX_STACK_LINE(1066)
		gfx->lineTo((halfWidth + helper),halfHeight);
		HX_STACK_LINE(1067)
		gfx->lineTo((halfWidth - helper),(halfHeight + helper));
		HX_STACK_LINE(1068)
		gfx->lineTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(1069)
		gfx->endFill();
		HX_STACK_LINE(1071)
		::native::display::Sprite logo = ::native::display::Sprite_obj::__new();		HX_STACK_VAR(logo,"logo");
		HX_STACK_LINE(1072)
		::org::flixel::FlxAssets_obj::drawLogo(logo->get_graphics());
		HX_STACK_LINE(1073)
		logo->set_scaleX((Float(helper) / Float((int)1000)));
		HX_STACK_LINE(1074)
		if (((logo->get_scaleX() < 0.2))){
			HX_STACK_LINE(1075)
			logo->set_scaleX(0.2);
		}
		HX_STACK_LINE(1078)
		logo->set_scaleY(logo->get_scaleX());
		HX_STACK_LINE(1079)
		logo->set_x(logo->set_y((int)5));
		HX_STACK_LINE(1080)
		logo->set_alpha(0.35);
		HX_STACK_LINE(1081)
		this->_focus->addChild(logo);
		HX_STACK_LINE(1083)
		this->addChild(this->_focus);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,createFocusScreen,(void))

Void FlxGame_obj::createSoundTray( ){
{
		HX_STACK_PUSH("FlxGame::createSoundTray","org/flixel/FlxGame.hx",971);
		HX_STACK_THIS(this);
		HX_STACK_LINE(972)
		this->_soundTray->set_visible(false);
		HX_STACK_LINE(973)
		this->_soundTray->set_scaleX((int)2);
		HX_STACK_LINE(974)
		this->_soundTray->set_scaleY((int)2);
		HX_STACK_LINE(976)
		::native::display::Bitmap tmp = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new((int)80,(int)30,true,(int)2130706432,null()),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(980)
		this->_soundTray->set_x((((Float(::org::flixel::FlxG_obj::width) / Float((int)2)) * ::org::flixel::FlxCamera_obj::defaultZoom) - ((Float(tmp->get_width()) / Float((int)2)) * this->_soundTray->get_scaleX())));
		HX_STACK_LINE(981)
		this->_soundTray->addChild(tmp);
		HX_STACK_LINE(983)
		::native::text::TextField text = ::native::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(984)
		text->set_width(tmp->get_width());
		HX_STACK_LINE(985)
		text->set_height(tmp->get_height());
		HX_STACK_LINE(986)
		text->set_multiline(true);
		HX_STACK_LINE(987)
		text->set_wordWrap(true);
		HX_STACK_LINE(988)
		text->set_selectable(false);
		HX_STACK_LINE(996)
		::native::text::TextFormat dtf = ::native::text::TextFormat_obj::__new(::org::flixel::FlxAssets_obj::nokiaFont,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
		HX_STACK_LINE(997)
		dtf->align = ::native::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(998)
		text->set_defaultTextFormat(dtf);
		HX_STACK_LINE(999)
		this->_soundTray->addChild(text);
		HX_STACK_LINE(1000)
		text->set_text(HX_CSTRING("VOLUME"));
		HX_STACK_LINE(1001)
		text->set_y((int)16);
		HX_STACK_LINE(1003)
		int bx = (int)10;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(1004)
		int by = (int)14;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(1005)
		this->_soundTrayBars = Array_obj< ::native::display::Bitmap >::__new();
		HX_STACK_LINE(1006)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1007)
		while(((i < (int)10))){
			HX_STACK_LINE(1010)
			tmp = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new((int)4,++(i),false,(int)16777215,null()),null(),null());
			HX_STACK_LINE(1014)
			tmp->set_x(bx);
			HX_STACK_LINE(1015)
			tmp->set_y(by);
			HX_STACK_LINE(1016)
			this->_soundTray->addChild(tmp);
			HX_STACK_LINE(1017)
			this->_soundTrayBars->push(tmp);
			HX_STACK_LINE(1018)
			hx::AddEq(bx,(int)6);
			HX_STACK_LINE(1019)
			(by)--;
		}
		HX_STACK_LINE(1022)
		this->_soundTray->set_y(-(this->_soundTray->get_height()));
		HX_STACK_LINE(1023)
		this->_soundTray->set_visible(false);
		HX_STACK_LINE(1024)
		this->addChild(this->_soundTray);
		HX_STACK_LINE(1027)
		::org::flixel::FlxSave soundPrefs = ::org::flixel::FlxSave_obj::__new();		HX_STACK_VAR(soundPrefs,"soundPrefs");
		HX_STACK_LINE(1028)
		if (((bool(soundPrefs->bind(HX_CSTRING("flixel"))) && bool((soundPrefs->data->__Field(HX_CSTRING("sound"),true) != null()))))){
			HX_STACK_LINE(1030)
			if (((soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("volume"),true) != null()))){
				HX_STACK_LINE(1031)
				::org::flixel::FlxG_obj::setVolume(soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("volume"),true));
			}
			HX_STACK_LINE(1034)
			if (((soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("mute"),true) != null()))){
				HX_STACK_LINE(1035)
				::org::flixel::FlxG_obj::mute = soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("mute"),true);
			}
			HX_STACK_LINE(1038)
			soundPrefs->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,createSoundTray,(void))

Void FlxGame_obj::create( ::native::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::create","org/flixel/FlxGame.hx",867);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(868)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(869)
			return null();
		}
		HX_STACK_LINE(872)
		this->removeEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(874)
		this->_total = ::native::Lib_obj::getTimer();
		HX_STACK_LINE(876)
		this->get_stage()->set_scaleMode(::native::display::StageScaleMode_obj::NO_SCALE_dyn());
		HX_STACK_LINE(877)
		this->get_stage()->set_align(::native::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_STACK_LINE(878)
		this->get_stage()->set_frameRate(this->_flashFramerate);
		HX_STACK_LINE(880)
		::org::flixel::FlxG_obj::supportsTouchEvents = ::native::ui::Multitouch_obj::get_supportsTouchEvents();
		HX_STACK_LINE(881)
		if ((::org::flixel::FlxG_obj::supportsTouchEvents)){
			HX_STACK_LINE(883)
			::org::flixel::FlxG_obj::maxTouchPoints = ::native::ui::Multitouch_obj::maxTouchPoints;
			HX_STACK_LINE(884)
			::native::ui::Multitouch_obj::set_inputMode(::native::ui::MultitouchInputMode_obj::TOUCH_POINT_dyn());
		}
		HX_STACK_LINE(886)
		::org::flixel::FlxG_obj::touchManager = ::org::flixel::system::input::TouchManager_obj::__new();
		HX_STACK_LINE(901)
		::org::flixel::FlxGame_obj::clickableArea = ::native::display::Sprite_obj::__new();
		HX_STACK_LINE(902)
		::org::flixel::FlxGame_obj::clickableArea->get_graphics()->beginFill((int)16711680,null());
		HX_STACK_LINE(903)
		::org::flixel::FlxGame_obj::clickableArea->get_graphics()->drawRect((int)0,(int)0,this->get_stage()->get_stageWidth(),this->get_stage()->get_stageHeight());
		HX_STACK_LINE(904)
		::org::flixel::FlxGame_obj::clickableArea->get_graphics()->endFill();
		HX_STACK_LINE(905)
		::nme::Lib_obj::get_current()->get_stage()->addChild(::org::flixel::FlxGame_obj::clickableArea);
		HX_STACK_LINE(906)
		::org::flixel::FlxGame_obj::clickableArea->set_alpha((int)0);
		HX_STACK_LINE(907)
		::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(908)
		::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(909)
		::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
		HX_STACK_LINE(911)
		if ((::org::flixel::FlxG_obj::supportsTouchEvents)){
			HX_STACK_LINE(913)
			::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchBegin_dyn(),null(),null(),null());
			HX_STACK_LINE(914)
			::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::TouchEvent_obj::TOUCH_END,this->onTouchEnd_dyn(),null(),null(),null());
			HX_STACK_LINE(915)
			::org::flixel::FlxGame_obj::clickableArea->addEventListener(::native::events::TouchEvent_obj::TOUCH_MOVE,this->onTouchMove_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(920)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("axisMove"),this->onJoyAxisMove_dyn(),null(),null(),null());
		HX_STACK_LINE(921)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("ballMove"),this->onJoyBallMove_dyn(),null(),null(),null());
		HX_STACK_LINE(922)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonDown"),this->onJoyButtonDown_dyn(),null(),null(),null());
		HX_STACK_LINE(923)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonUp"),this->onJoyButtonUp_dyn(),null(),null(),null());
		HX_STACK_LINE(924)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("hatMove"),this->onJoyHatMove_dyn(),null(),null(),null());
		HX_STACK_LINE(927)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(::native::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
		HX_STACK_LINE(928)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(::native::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(930)
		this->addChild(this->_mouse);
		HX_STACK_LINE(933)
		if ((!(::org::flixel::FlxG_obj::mobile))){
			HX_STACK_LINE(936)
			if (((bool(::org::flixel::FlxG_obj::debug) || bool(this->forceDebugger)))){
				HX_STACK_LINE(938)
				this->_debugger = ::org::flixel::system::FlxDebugger_obj::__new((::org::flixel::FlxG_obj::width * ::org::flixel::FlxCamera_obj::defaultZoom),(::org::flixel::FlxG_obj::height * ::org::flixel::FlxCamera_obj::defaultZoom));
				HX_STACK_LINE(942)
				::nme::Lib_obj::get_current()->get_stage()->addChild(this->_debugger);
			}
			HX_STACK_LINE(947)
			this->createSoundTray();
			HX_STACK_LINE(950)
			this->get_stage()->addEventListener(::native::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
			HX_STACK_LINE(951)
			this->get_stage()->addEventListener(::native::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
			HX_STACK_LINE(952)
			this->createFocusScreen();
		}
		HX_STACK_LINE(956)
		if ((this->_requestedReset)){
			HX_STACK_LINE(958)
			{
				HX_STACK_LINE(958)
				this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(958)
				this->_replayTimer = (int)0;
				HX_STACK_LINE(958)
				this->_replayCancelKeys = null();
				HX_STACK_LINE(958)
				::org::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(959)
			this->switchState();
			HX_STACK_LINE(960)
			this->_requestedReset = false;
		}
		HX_STACK_LINE(964)
		::nme::Lib_obj::get_current()->get_stage()->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_PUSH("FlxGame::draw","org/flixel/FlxGame.hx",835);
		HX_STACK_THIS(this);
		HX_STACK_LINE(836)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(837)
			this->_mark = ::native::Lib_obj::getTimer();
		}
		HX_STACK_LINE(840)
		::org::flixel::system::layer::TileSheetData_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(843)
		{
			HX_STACK_LINE(843)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(843)
			Array< ::org::flixel::FlxCamera > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(843)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(843)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(843)
			while(((i < l))){
				HX_STACK_LINE(843)
				cam = cams->__get((i)++);
				HX_STACK_LINE(843)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(843)
					continue;
				}
				HX_STACK_LINE(843)
				{
					HX_STACK_LINE(843)
					::org::flixel::system::layer::DrawStackItem currItem = cam->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
					HX_STACK_LINE(843)
					while(((currItem != null()))){
						HX_STACK_LINE(843)
						{
							HX_STACK_LINE(843)
							currItem->atlas = null();
							HX_STACK_LINE(843)
							currItem->initialized = false;
							HX_STACK_LINE(843)
							currItem->position = (int)0;
						}
						HX_STACK_LINE(843)
						::org::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
						HX_STACK_LINE(843)
						currItem = currItem->next;
						HX_STACK_LINE(843)
						if (((::org::flixel::FlxCamera_obj::_storageHead == null()))){
							HX_STACK_LINE(843)
							::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
							HX_STACK_LINE(843)
							newStorageHead->next = null();
						}
						else{
							HX_STACK_LINE(843)
							newStorageHead->next = ::org::flixel::FlxCamera_obj::_storageHead;
							HX_STACK_LINE(843)
							::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
						}
					}
					HX_STACK_LINE(843)
					{
						HX_STACK_LINE(843)
						::org::flixel::system::layer::DrawStackItem _this = cam->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(843)
						_this->atlas = null();
						HX_STACK_LINE(843)
						_this->initialized = false;
						HX_STACK_LINE(843)
						_this->position = (int)0;
					}
					HX_STACK_LINE(843)
					cam->_headOfDrawStack->next = null();
					HX_STACK_LINE(843)
					cam->_currentStackItem = cam->_headOfDrawStack;
				}
				HX_STACK_LINE(843)
				cam->_canvas->get_graphics()->clear();
				HX_STACK_LINE(843)
				cam->_debugLayer->get_graphics()->clear();
				HX_STACK_LINE(843)
				cam->fill((int(cam->bgColor) & int((int)16777215)),true,(Float(((int((int(cam->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(844)
		this->_state->draw();
		HX_STACK_LINE(847)
		{
			HX_STACK_LINE(847)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(847)
			Array< ::org::flixel::FlxCamera > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(847)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(847)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(847)
			while(((i < l))){
				HX_STACK_LINE(847)
				cam = cams->__get((i)++);
				HX_STACK_LINE(847)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(847)
					continue;
				}
				HX_STACK_LINE(847)
				cam->render();
			}
		}
		HX_STACK_LINE(849)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(850)
			this->_debugger->perf->drawCalls(::org::flixel::system::layer::TileSheetData_obj::_DRAWCALLS);
		}
		HX_STACK_LINE(855)
		{
			HX_STACK_LINE(855)
			::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(855)
			Array< ::org::flixel::FlxBasic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
			HX_STACK_LINE(855)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(855)
			int l = pluginList->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(855)
			while(((i < l))){
				HX_STACK_LINE(855)
				plugin = pluginList->__get((i)++);
				HX_STACK_LINE(855)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(855)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(856)
		{
			HX_STACK_LINE(856)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(856)
			Array< ::org::flixel::FlxCamera > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(856)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(856)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(856)
			while(((i < l))){
				HX_STACK_LINE(856)
				cam = cams->__get((i)++);
				HX_STACK_LINE(856)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(856)
					continue;
				}
				HX_STACK_LINE(856)
				cam->drawFX();
			}
		}
		HX_STACK_LINE(857)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(858)
			this->_debugger->perf->flixelDraw((::native::Lib_obj::getTimer() - this->_mark));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_PUSH("FlxGame::update","org/flixel/FlxGame.hx",811);
		HX_STACK_THIS(this);
		HX_STACK_LINE(812)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(813)
			this->_mark = ::native::Lib_obj::getTimer();
		}
		HX_STACK_LINE(815)
		::org::flixel::FlxG_obj::elapsed = (::org::flixel::FlxG_obj::timeScale * this->_stepSeconds);
		HX_STACK_LINE(816)
		::org::flixel::FlxG_obj::updateSounds();
		HX_STACK_LINE(817)
		{
			HX_STACK_LINE(817)
			::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(817)
			Array< ::org::flixel::FlxBasic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
			HX_STACK_LINE(817)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(817)
			int l = pluginList->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(817)
			while(((i < l))){
				HX_STACK_LINE(817)
				plugin = pluginList->__get((i)++);
				HX_STACK_LINE(817)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(817)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(818)
		this->_state->update();
		HX_STACK_LINE(820)
		if (((bool(::org::flixel::FlxG_obj::tweener->active) && bool(::org::flixel::FlxG_obj::tweener->getTween())))){
			HX_STACK_LINE(822)
			::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(822)
			Dynamic ft = ::org::flixel::FlxG_obj::tweener->_tween;		HX_STACK_VAR(ft,"ft");
			HX_STACK_LINE(822)
			while(((ft != null()))){
				HX_STACK_LINE(822)
				t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
				HX_STACK_LINE(822)
				if ((t->active)){
					HX_STACK_LINE(822)
					t->update();
					HX_STACK_LINE(822)
					if ((ft->__Field(HX_CSTRING("_finish"),true))){
						HX_STACK_LINE(822)
						ft->__Field(HX_CSTRING("finish"),true)();
					}
				}
				HX_STACK_LINE(822)
				ft = ft->__Field(HX_CSTRING("_next"),true);
			}
		}
		HX_STACK_LINE(825)
		{
			HX_STACK_LINE(825)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(825)
			Array< ::org::flixel::FlxCamera > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(825)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(825)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(825)
			while(((i < l))){
				HX_STACK_LINE(825)
				cam = cams->__get((i)++);
				HX_STACK_LINE(825)
				if (((bool((cam != null())) && bool(cam->exists)))){
					HX_STACK_LINE(825)
					if ((cam->active)){
						HX_STACK_LINE(825)
						cam->update();
					}
					HX_STACK_LINE(825)
					cam->_flashSprite->set_x((cam->x + cam->_flashOffsetX));
					HX_STACK_LINE(825)
					cam->_flashSprite->set_y((cam->y + cam->_flashOffsetY));
					HX_STACK_LINE(825)
					cam->_flashSprite->set_visible(cam->visible);
				}
			}
		}
		HX_STACK_LINE(827)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(828)
			this->_debugger->perf->flixelUpdate((::native::Lib_obj::getTimer() - this->_mark));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateSoundTray( Float MS){
{
		HX_STACK_PUSH("FlxGame::updateSoundTray","org/flixel/FlxGame.hx",776);
		HX_STACK_THIS(this);
		HX_STACK_ARG(MS,"MS");
		HX_STACK_LINE(776)
		if (((this->_soundTrayTimer > (int)0))){
			HX_STACK_LINE(779)
			hx::SubEq(this->_soundTrayTimer,(Float(MS) / Float((int)1000)));
		}
		else{
			HX_STACK_LINE(782)
			if (((this->_soundTray->get_y() > -(this->_soundTray->get_height())))){
				HX_STACK_LINE(784)
				{
					HX_STACK_LINE(784)
					::native::display::Sprite _g = this->_soundTray;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(784)
					_g->set_y((_g->get_y() - (((Float(MS) / Float((int)1000)) * ::org::flixel::FlxG_obj::height) * (int)2)));
				}
				HX_STACK_LINE(785)
				if (((this->_soundTray->get_y() <= -(this->_soundTray->get_height())))){
					HX_STACK_LINE(787)
					this->_soundTray->set_visible(false);
					HX_STACK_LINE(788)
					this->_updateSoundTray = false;
					HX_STACK_LINE(791)
					::org::flixel::FlxSave soundPrefs = ::org::flixel::FlxSave_obj::__new();		HX_STACK_VAR(soundPrefs,"soundPrefs");
					HX_STACK_LINE(792)
					if ((soundPrefs->bind(HX_CSTRING("flixel")))){
						HX_STACK_LINE(794)
						if (((soundPrefs->data->__Field(HX_CSTRING("sound"),true) == null()))){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_PUSH("*::closure","org/flixel/FlxGame.hx",796);
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(795)
							soundPrefs->data->__FieldRef(HX_CSTRING("sound")) = _Function_6_1::Block();
						}
						HX_STACK_LINE(798)
						soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__FieldRef(HX_CSTRING("mute")) = ::org::flixel::FlxG_obj::mute;
						HX_STACK_LINE(799)
						soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__FieldRef(HX_CSTRING("volume")) = ::org::flixel::FlxG_obj::volume;
						HX_STACK_LINE(800)
						soundPrefs->close(null(),null());
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,updateSoundTray,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_PUSH("FlxGame::step","org/flixel/FlxGame.hx",680);
		HX_STACK_THIS(this);
		HX_STACK_LINE(682)
		if ((this->_requestedReset)){
			HX_STACK_LINE(684)
			{
				HX_STACK_LINE(684)
				this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(684)
				this->_replayTimer = (int)0;
				HX_STACK_LINE(684)
				this->_replayCancelKeys = null();
				HX_STACK_LINE(684)
				::org::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(685)
			this->_requestedReset = false;
		}
		HX_STACK_LINE(688)
		if ((this->_recordingRequested)){
			HX_STACK_LINE(690)
			this->_recordingRequested = false;
			HX_STACK_LINE(691)
			this->_replay->create(::org::flixel::FlxG_obj::globalSeed);
			HX_STACK_LINE(692)
			this->_recording = true;
			HX_STACK_LINE(693)
			if (((this->_debugger != null()))){
				HX_STACK_LINE(695)
				this->_debugger->vcr->recording();
				HX_STACK_LINE(696)
				::org::flixel::FlxG_obj::log(HX_CSTRING("FLIXEL: starting new flixel gameplay record."));
			}
		}
		else{
			HX_STACK_LINE(699)
			if ((this->_replayRequested)){
				HX_STACK_LINE(701)
				this->_replayRequested = false;
				HX_STACK_LINE(702)
				this->_replay->rewind();
				HX_STACK_LINE(703)
				::org::flixel::FlxG_obj::globalSeed = this->_replay->seed;
				HX_STACK_LINE(704)
				if (((this->_debugger != null()))){
					HX_STACK_LINE(705)
					this->_debugger->vcr->playing();
				}
				HX_STACK_LINE(708)
				this->_replaying = true;
			}
		}
		HX_STACK_LINE(712)
		if (((this->_state != this->_requestedState))){
			HX_STACK_LINE(713)
			this->switchState();
		}
		HX_STACK_LINE(718)
		::org::flixel::FlxBasic_obj::_ACTIVECOUNT = (int)0;
		HX_STACK_LINE(719)
		if ((this->_replaying)){
			HX_STACK_LINE(721)
			this->_replay->playNextFrame();
			HX_STACK_LINE(722)
			if (((this->_replayTimer > (int)0))){
				HX_STACK_LINE(724)
				hx::SubEq(this->_replayTimer,this->_step);
				HX_STACK_LINE(725)
				if (((this->_replayTimer <= (int)0))){
					HX_STACK_LINE(726)
					if (((this->_replayCallback_dyn() != null()))){
						HX_STACK_LINE(729)
						this->_replayCallback();
						HX_STACK_LINE(730)
						this->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(733)
						::org::flixel::FlxG_obj::stopReplay();
					}
				}
			}
			HX_STACK_LINE(738)
			if (((bool(this->_replaying) && bool(this->_replay->finished)))){
				HX_STACK_LINE(740)
				::org::flixel::FlxG_obj::stopReplay();
				HX_STACK_LINE(741)
				if (((this->_replayCallback_dyn() != null()))){
					HX_STACK_LINE(743)
					this->_replayCallback();
					HX_STACK_LINE(744)
					this->_replayCallback = null();
				}
			}
			HX_STACK_LINE(747)
			if (((this->_debugger != null()))){
				HX_STACK_LINE(748)
				this->_debugger->vcr->updateRuntime(this->_step);
			}
		}
		else{
			HX_STACK_LINE(754)
			::org::flixel::FlxG_obj::keys->update();
			HX_STACK_LINE(754)
			if ((::org::flixel::FlxG_obj::mouse->_updateCursorContainer)){
				HX_STACK_LINE(754)
				::org::flixel::FlxG_obj::mouse->update(::Math_obj::floor(::org::flixel::FlxG_obj::_game->get_mouseX()),::Math_obj::floor(::org::flixel::FlxG_obj::_game->get_mouseY()));
			}
			HX_STACK_LINE(754)
			if ((::org::flixel::FlxG_obj::supportsTouchEvents)){
				HX_STACK_LINE(754)
				::org::flixel::FlxG_obj::touchManager->update();
			}
			HX_STACK_LINE(754)
			::org::flixel::FlxG_obj::joystickManager->update();
		}
		HX_STACK_LINE(756)
		if ((this->_recording)){
			HX_STACK_LINE(758)
			this->_replay->recordFrame();
			HX_STACK_LINE(759)
			if (((this->_debugger != null()))){
				HX_STACK_LINE(760)
				this->_debugger->vcr->updateRuntime(this->_step);
			}
		}
		HX_STACK_LINE(764)
		this->update();
		HX_STACK_LINE(765)
		::org::flixel::FlxG_obj::mouse->wheel = (int)0;
		HX_STACK_LINE(766)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(767)
			this->_debugger->perf->activeObjects(::org::flixel::FlxBasic_obj::_ACTIVECOUNT);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_PUSH("FlxGame::switchState","org/flixel/FlxGame.hx",637);
		HX_STACK_THIS(this);
		HX_STACK_LINE(640)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(641)
		::org::flixel::system::layer::Atlas_obj::clearAtlasCache();
		HX_STACK_LINE(642)
		::org::flixel::system::layer::TileSheetData_obj::clear();
		HX_STACK_LINE(644)
		::org::flixel::FlxG_obj::clearBitmapCache();
		HX_STACK_LINE(645)
		::org::flixel::FlxG_obj::resetCameras(null());
		HX_STACK_LINE(646)
		::org::flixel::FlxG_obj::resetInput();
		HX_STACK_LINE(647)
		::org::flixel::FlxG_obj::destroySounds(null());
		HX_STACK_LINE(650)
		if (((this->_debugger != null()))){
			HX_STACK_LINE(651)
			this->_debugger->watch->removeAll();
		}
		HX_STACK_LINE(656)
		::org::flixel::plugin::TimerManager timerManager = ::org::flixel::FlxTimer_obj::getManager();		HX_STACK_VAR(timerManager,"timerManager");
		HX_STACK_LINE(657)
		if (((timerManager != null()))){
			HX_STACK_LINE(658)
			timerManager->clear();
		}
		HX_STACK_LINE(663)
		if (((this->_state != null()))){
			HX_STACK_LINE(664)
			this->_state->destroy();
		}
		HX_STACK_LINE(669)
		this->_state = this->_requestedState;
		HX_STACK_LINE(670)
		this->_state->create();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxGame::resetGame","org/flixel/FlxGame.hx",624);
		HX_STACK_THIS(this);
		HX_STACK_LINE(625)
		this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(626)
		this->_replayTimer = (int)0;
		HX_STACK_LINE(627)
		this->_replayCancelKeys = null();
		HX_STACK_LINE(628)
		::org::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::onEnterFrame( ::native::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onEnterFrame","org/flixel/FlxGame.hx",572);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(573)
		this->_mark = ::native::Lib_obj::getTimer();
		HX_STACK_LINE(574)
		this->_elapsedMS = (this->_mark - this->_total);
		HX_STACK_LINE(575)
		this->_total = this->_mark;
		HX_STACK_LINE(577)
		if ((this->_updateSoundTray)){
			HX_STACK_LINE(578)
			this->updateSoundTray(this->_elapsedMS);
		}
		HX_STACK_LINE(580)
		if ((!(this->_lostFocus))){
			HX_STACK_LINE(582)
			if (((bool((this->_debugger != null())) && bool(this->_debugger->vcr->paused)))){
				HX_STACK_LINE(583)
				if ((this->_debugger->vcr->stepRequested)){
					HX_STACK_LINE(586)
					this->_debugger->vcr->stepRequested = false;
					HX_STACK_LINE(587)
					this->step();
				}
			}
			else{
				HX_STACK_LINE(592)
				hx::AddEq(this->_accumulator,this->_elapsedMS);
				HX_STACK_LINE(593)
				if (((this->_accumulator > this->_maxAccumulation))){
					HX_STACK_LINE(594)
					this->_accumulator = this->_maxAccumulation;
				}
				HX_STACK_LINE(599)
				while(((this->_accumulator > this->_step))){
					HX_STACK_LINE(601)
					this->step();
					HX_STACK_LINE(602)
					this->_accumulator = (this->_accumulator - this->_step);
				}
			}
			HX_STACK_LINE(606)
			::org::flixel::FlxBasic_obj::_VISIBLECOUNT = (int)0;
			HX_STACK_LINE(607)
			this->draw();
			HX_STACK_LINE(609)
			if ((this->_debuggerUp)){
				HX_STACK_LINE(611)
				this->_debugger->perf->flash(this->_elapsedMS);
				HX_STACK_LINE(612)
				this->_debugger->perf->visibleObjects(::org::flixel::FlxBasic_obj::_VISIBLECOUNT);
				HX_STACK_LINE(613)
				this->_debugger->perf->update();
				HX_STACK_LINE(614)
				this->_debugger->watch->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::onFocusLost( ::native::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocusLost","org/flixel/FlxGame.hx",553);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(554)
		if (((bool((this->get_x() != (int)0)) || bool((this->get_y() != (int)0))))){
			HX_STACK_LINE(556)
			this->set_x((int)0);
			HX_STACK_LINE(557)
			this->set_y((int)0);
		}
		HX_STACK_LINE(559)
		::native::ui::Mouse_obj::show();
		HX_STACK_LINE(560)
		this->_lostFocus = this->_focus->set_visible(true);
		HX_STACK_LINE(561)
		this->get_stage()->set_frameRate((int)10);
		HX_STACK_LINE(562)
		::org::flixel::FlxG_obj::pauseSounds();
		HX_STACK_LINE(564)
		this->_state->onFocusLost();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onFocus( ::native::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocus","org/flixel/FlxGame.hx",535);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(536)
		if (((bool(!(this->_debuggerUp)) && bool(!(this->useSystemCursor))))){
			HX_STACK_LINE(537)
			::native::ui::Mouse_obj::hide();
		}
		HX_STACK_LINE(540)
		::org::flixel::FlxG_obj::resetInput();
		HX_STACK_LINE(541)
		this->_lostFocus = this->_focus->set_visible(false);
		HX_STACK_LINE(542)
		this->get_stage()->set_frameRate(this->_flashFramerate);
		HX_STACK_LINE(543)
		::org::flixel::FlxG_obj::resumeSounds();
		HX_STACK_LINE(545)
		this->_state->onFocus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::onJoyHatMove( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyHatMove","org/flixel/FlxGame.hx",525);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(525)
		::org::flixel::FlxG_obj::joystickManager->handleHatMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyHatMove,(void))

Void FlxGame_obj::onJoyButtonUp( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyButtonUp","org/flixel/FlxGame.hx",516);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(516)
		::org::flixel::FlxG_obj::joystickManager->handleButtonUp(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyButtonUp,(void))

Void FlxGame_obj::onJoyButtonDown( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyButtonDown","org/flixel/FlxGame.hx",507);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(507)
		::org::flixel::FlxG_obj::joystickManager->handleButtonDown(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyButtonDown,(void))

Void FlxGame_obj::onJoyBallMove( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyBallMove","org/flixel/FlxGame.hx",498);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(498)
		::org::flixel::FlxG_obj::joystickManager->handleBallMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyBallMove,(void))

Void FlxGame_obj::onJoyAxisMove( ::native::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyAxisMove","org/flixel/FlxGame.hx",489);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(489)
		::org::flixel::FlxG_obj::joystickManager->handleAxisMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyAxisMove,(void))

Void FlxGame_obj::onTouchMove( ::native::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onTouchMove","org/flixel/FlxGame.hx",479);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(479)
		::org::flixel::FlxG_obj::touchManager->handleTouchMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onTouchMove,(void))

Void FlxGame_obj::onTouchEnd( ::native::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onTouchEnd","org/flixel/FlxGame.hx",470);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(470)
		::org::flixel::FlxG_obj::touchManager->handleTouchEnd(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onTouchEnd,(void))

Void FlxGame_obj::onTouchBegin( ::native::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onTouchBegin","org/flixel/FlxGame.hx",461);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(461)
		::org::flixel::FlxG_obj::touchManager->handleTouchBegin(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onTouchBegin,(void))

Void FlxGame_obj::onMouseWheel( ::native::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onMouseWheel","org/flixel/FlxGame.hx",448);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(449)
		if (((bool((bool(this->_debuggerUp) && bool(this->_debugger->hasMouse))) || bool(this->_replaying)))){
			HX_STACK_LINE(450)
			return null();
		}
		HX_STACK_LINE(453)
		::org::flixel::FlxG_obj::mouse->handleMouseWheel(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onMouseWheel,(void))

Void FlxGame_obj::onMouseUp( ::native::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onMouseUp","org/flixel/FlxGame.hx",435);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(436)
		if (((bool((bool(this->_debuggerUp) && bool(this->_debugger->hasMouse))) || bool(this->_replaying)))){
			HX_STACK_LINE(437)
			return null();
		}
		HX_STACK_LINE(440)
		::org::flixel::FlxG_obj::mouse->handleMouseUp(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onMouseUp,(void))

Void FlxGame_obj::onMouseDown( ::native::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onMouseDown","org/flixel/FlxGame.hx",391);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(392)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(394)
			if ((this->_debugger->hasMouse)){
				HX_STACK_LINE(395)
				return null();
			}
			HX_STACK_LINE(398)
			if ((this->_debugger->watch->editing)){
				HX_STACK_LINE(399)
				this->_debugger->watch->submit();
			}
		}
		HX_STACK_LINE(403)
		if (((bool(this->_replaying) && bool((this->_replayCancelKeys != null()))))){
			HX_STACK_LINE(405)
			::String replayCancelKey;		HX_STACK_VAR(replayCancelKey,"replayCancelKey");
			HX_STACK_LINE(406)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(407)
			int l = this->_replayCancelKeys->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(408)
			while(((i < l))){
				HX_STACK_LINE(410)
				replayCancelKey = this->_replayCancelKeys->__get((i)++);
				HX_STACK_LINE(411)
				if (((bool((replayCancelKey == HX_CSTRING("MOUSE"))) || bool((replayCancelKey == HX_CSTRING("ANY")))))){
					HX_STACK_LINE(413)
					if (((this->_replayCallback_dyn() != null()))){
						HX_STACK_LINE(415)
						this->_replayCallback();
						HX_STACK_LINE(416)
						this->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(419)
						::org::flixel::FlxG_obj::stopReplay();
					}
					HX_STACK_LINE(422)
					break;
				}
			}
			HX_STACK_LINE(425)
			return null();
		}
		HX_STACK_LINE(427)
		::org::flixel::FlxG_obj::mouse->handleMouseDown(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onMouseDown,(void))

Void FlxGame_obj::onKeyDown( ::native::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onKeyDown","org/flixel/FlxGame.hx",353);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(354)
		if (((bool(this->_debuggerUp) && bool(this->_debugger->watch->editing)))){
			HX_STACK_LINE(355)
			return null();
		}
		HX_STACK_LINE(358)
		if (((bool((bool((bool((bool(this->_replaying) && bool((this->_replayCancelKeys != null())))) && bool((this->_debugger == null())))) && bool((FlashEvent->keyCode != (int)192)))) && bool((FlashEvent->keyCode != (int)220))))){
			HX_STACK_LINE(360)
			bool cancel = false;		HX_STACK_VAR(cancel,"cancel");
			HX_STACK_LINE(361)
			::String replayCancelKey;		HX_STACK_VAR(replayCancelKey,"replayCancelKey");
			HX_STACK_LINE(362)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(363)
			int l = this->_replayCancelKeys->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(364)
			while(((i < l))){
				HX_STACK_LINE(366)
				replayCancelKey = this->_replayCancelKeys->__get((i)++);
				HX_STACK_LINE(367)
				if (((bool((replayCancelKey == HX_CSTRING("ANY"))) || bool((::org::flixel::FlxG_obj::keys->getKeyCode(replayCancelKey) == ::Std_obj::_int(FlashEvent->keyCode)))))){
					HX_STACK_LINE(369)
					if (((this->_replayCallback_dyn() != null()))){
						HX_STACK_LINE(371)
						this->_replayCallback();
						HX_STACK_LINE(372)
						this->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(375)
						::org::flixel::FlxG_obj::stopReplay();
					}
					HX_STACK_LINE(378)
					break;
				}
			}
			HX_STACK_LINE(381)
			return null();
		}
		HX_STACK_LINE(383)
		::org::flixel::FlxG_obj::keys->handleKeyDown(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onKeyDown,(void))

Void FlxGame_obj::onKeyUp( ::native::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onKeyUp","org/flixel/FlxGame.hx",285);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(286)
		if (((bool(this->_debuggerUp) && bool(this->_debugger->watch->editing)))){
			HX_STACK_LINE(287)
			return null();
		}
		HX_STACK_LINE(290)
		if ((!(::org::flixel::FlxG_obj::mobile))){
			HX_STACK_LINE(292)
			if (((bool((this->_debugger != null())) && bool(((bool((FlashEvent->keyCode == (int)192)) || bool((FlashEvent->keyCode == (int)220)))))))){
				HX_STACK_LINE(294)
				this->_debugger->set_visible(!(this->_debugger->get_visible()));
				HX_STACK_LINE(295)
				this->_debuggerUp = this->_debugger->get_visible();
				HX_STACK_LINE(296)
				if ((this->_debugger->get_visible())){
					HX_STACK_LINE(297)
					::native::ui::Mouse_obj::show();
				}
				else{
					HX_STACK_LINE(300)
					if ((!(this->useSystemCursor))){
						HX_STACK_LINE(301)
						::native::ui::Mouse_obj::hide();
					}
				}
				HX_STACK_LINE(305)
				return null();
			}
			HX_STACK_LINE(307)
			if ((this->useSoundHotKeys)){
				HX_STACK_LINE(309)
				int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(310)
				::String code = ::String::fromCharCode(FlashEvent->charCode);		HX_STACK_VAR(code,"code");
				HX_STACK_LINE(311)
				if (((bool((c == (int)48)) || bool((c == (int)96))))){
					HX_STACK_LINE(313)
					::org::flixel::FlxG_obj::mute = !(::org::flixel::FlxG_obj::mute);
					HX_STACK_LINE(314)
					if (((::org::flixel::FlxG_obj::volumeHandler_dyn() != null()))){
						HX_STACK_LINE(315)
						::org::flixel::FlxG_obj::volumeHandler((  ((::org::flixel::FlxG_obj::mute)) ? Float((int)0) : Float(::org::flixel::FlxG_obj::volume) ));
					}
					HX_STACK_LINE(318)
					this->showSoundTray(null());
					HX_STACK_LINE(319)
					return null();
				}
				else{
					HX_STACK_LINE(321)
					if (((bool((c == (int)109)) || bool((c == (int)189))))){
						HX_STACK_LINE(323)
						::org::flixel::FlxG_obj::mute = false;
						HX_STACK_LINE(324)
						::org::flixel::FlxG_obj::setVolume((::org::flixel::FlxG_obj::volume - 0.1));
						HX_STACK_LINE(325)
						this->showSoundTray(null());
						HX_STACK_LINE(326)
						return null();
					}
					else{
						HX_STACK_LINE(328)
						if (((bool((c == (int)107)) || bool((c == (int)187))))){
							HX_STACK_LINE(330)
							::org::flixel::FlxG_obj::mute = false;
							HX_STACK_LINE(331)
							::org::flixel::FlxG_obj::setVolume((::org::flixel::FlxG_obj::volume + 0.1));
							HX_STACK_LINE(332)
							this->showSoundTray(null());
							HX_STACK_LINE(333)
							return null();
						}
						else{
						}
					}
				}
			}
		}
		HX_STACK_LINE(341)
		if ((this->_replaying)){
			HX_STACK_LINE(342)
			return null();
		}
		HX_STACK_LINE(345)
		::org::flixel::FlxG_obj::keys->handleKeyUp(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onKeyUp,(void))

Void FlxGame_obj::showSoundTray( hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
	HX_STACK_PUSH("FlxGame::showSoundTray","org/flixel/FlxGame.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Silent,"Silent");
{
		HX_STACK_LINE(260)
		if ((!(Silent))){
			HX_STACK_LINE(261)
			::org::flixel::FlxG_obj::play(::org::flixel::FlxAssets_obj::sndBeep,null(),null(),null());
		}
		HX_STACK_LINE(264)
		this->_soundTrayTimer = (int)1;
		HX_STACK_LINE(265)
		this->_soundTray->set_y((int)0);
		HX_STACK_LINE(266)
		this->_soundTray->set_visible(true);
		HX_STACK_LINE(267)
		this->_updateSoundTray = true;
		HX_STACK_LINE(268)
		int globalVolume = ::Math_obj::round((::org::flixel::FlxG_obj::volume * (int)10));		HX_STACK_VAR(globalVolume,"globalVolume");
		HX_STACK_LINE(269)
		if ((::org::flixel::FlxG_obj::mute)){
			HX_STACK_LINE(270)
			globalVolume = (int)0;
		}
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_soundTrayBars->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			while(((_g1 < _g))){
				HX_STACK_LINE(273)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(275)
				if (((i < globalVolume))){
					HX_STACK_LINE(275)
					this->_soundTrayBars->__get(i)->set_alpha((int)1);
				}
				else{
					HX_STACK_LINE(276)
					this->_soundTrayBars->__get(i)->set_alpha(0.5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,showSoundTray,(void))

::native::display::Sprite FlxGame_obj::clickableArea;


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(debugger,"debugger");
	HX_MARK_MEMBER_NAME(_replayCallback,"_replayCallback");
	HX_MARK_MEMBER_NAME(_replayTimer,"_replayTimer");
	HX_MARK_MEMBER_NAME(_replayCancelKeys,"_replayCancelKeys");
	HX_MARK_MEMBER_NAME(_recording,"_recording");
	HX_MARK_MEMBER_NAME(_replaying,"_replaying");
	HX_MARK_MEMBER_NAME(_recordingRequested,"_recordingRequested");
	HX_MARK_MEMBER_NAME(_replayRequested,"_replayRequested");
	HX_MARK_MEMBER_NAME(_replay,"_replay");
	HX_MARK_MEMBER_NAME(_debuggerUp,"_debuggerUp");
	HX_MARK_MEMBER_NAME(_debugger,"_debugger");
	HX_MARK_MEMBER_NAME(_soundTrayBars,"_soundTrayBars");
	HX_MARK_MEMBER_NAME(_updateSoundTray,"_updateSoundTray");
	HX_MARK_MEMBER_NAME(_soundTrayTimer,"_soundTrayTimer");
	HX_MARK_MEMBER_NAME(_soundTray,"_soundTray");
	HX_MARK_MEMBER_NAME(_focus,"_focus");
	HX_MARK_MEMBER_NAME(_requestedReset,"_requestedReset");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_flashFramerate,"_flashFramerate");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_step,"_step");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_mark,"_mark");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_iState,"_iState");
	HX_MARK_MEMBER_NAME(_mouse,"_mouse");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(forceDebugger,"forceDebugger");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(useSoundHotKeys,"useSoundHotKeys");
	HX_MARK_MEMBER_NAME(junk,"junk");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debugger,"debugger");
	HX_VISIT_MEMBER_NAME(_replayCallback,"_replayCallback");
	HX_VISIT_MEMBER_NAME(_replayTimer,"_replayTimer");
	HX_VISIT_MEMBER_NAME(_replayCancelKeys,"_replayCancelKeys");
	HX_VISIT_MEMBER_NAME(_recording,"_recording");
	HX_VISIT_MEMBER_NAME(_replaying,"_replaying");
	HX_VISIT_MEMBER_NAME(_recordingRequested,"_recordingRequested");
	HX_VISIT_MEMBER_NAME(_replayRequested,"_replayRequested");
	HX_VISIT_MEMBER_NAME(_replay,"_replay");
	HX_VISIT_MEMBER_NAME(_debuggerUp,"_debuggerUp");
	HX_VISIT_MEMBER_NAME(_debugger,"_debugger");
	HX_VISIT_MEMBER_NAME(_soundTrayBars,"_soundTrayBars");
	HX_VISIT_MEMBER_NAME(_updateSoundTray,"_updateSoundTray");
	HX_VISIT_MEMBER_NAME(_soundTrayTimer,"_soundTrayTimer");
	HX_VISIT_MEMBER_NAME(_soundTray,"_soundTray");
	HX_VISIT_MEMBER_NAME(_focus,"_focus");
	HX_VISIT_MEMBER_NAME(_requestedReset,"_requestedReset");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_flashFramerate,"_flashFramerate");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_step,"_step");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_mark,"_mark");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_iState,"_iState");
	HX_VISIT_MEMBER_NAME(_mouse,"_mouse");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(forceDebugger,"forceDebugger");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(useSoundHotKeys,"useSoundHotKeys");
	HX_VISIT_MEMBER_NAME(junk,"junk");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"junk") ) { return junk; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_step") ) { return _step; }
		if (HX_FIELD_EQ(inName,"_mark") ) { return _mark; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_focus") ) { return _focus; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"_mouse") ) { return _mouse; }
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_replay") ) { return _replay; }
		if (HX_FIELD_EQ(inName,"_iState") ) { return _iState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { return inCallProp ? getDebugger() : debugger; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_debugger") ) { return _debugger; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"_recording") ) { return _recording; }
		if (HX_FIELD_EQ(inName,"_replaying") ) { return _replaying; }
		if (HX_FIELD_EQ(inName,"_soundTray") ) { return _soundTray; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDebugger") ) { return getDebugger_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_debuggerUp") ) { return _debuggerUp; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyHatMove") ) { return onJoyHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayTimer") ) { return _replayTimer; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickableArea") ) { return clickableArea; }
		if (HX_FIELD_EQ(inName,"onJoyButtonUp") ) { return onJoyButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyBallMove") ) { return onJoyBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyAxisMove") ) { return onJoyAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return showSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"forceDebugger") ) { return forceDebugger; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_soundTrayBars") ) { return _soundTrayBars; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createSoundTray") ) { return createSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSoundTray") ) { return updateSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonDown") ) { return onJoyButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayCallback") ) { return _replayCallback; }
		if (HX_FIELD_EQ(inName,"_soundTrayTimer") ) { return _soundTrayTimer; }
		if (HX_FIELD_EQ(inName,"_requestedReset") ) { return _requestedReset; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		if (HX_FIELD_EQ(inName,"_flashFramerate") ) { return _flashFramerate; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"useSoundHotKeys") ) { return useSoundHotKeys; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_replayRequested") ) { return _replayRequested; }
		if (HX_FIELD_EQ(inName,"_updateSoundTray") ) { return _updateSoundTray; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createFocusScreen") ) { return createFocusScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayCancelKeys") ) { return _replayCancelKeys; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_recordingRequested") ) { return _recordingRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"junk") ) { junk=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_step") ) { _step=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mark") ) { _mark=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { _focus=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouse") ) { _mouse=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_replay") ) { _replay=inValue.Cast< ::org::flixel::system::FlxReplay >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iState") ) { _iState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::org::flixel::system::FlxDebugger >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_debugger") ) { _debugger=inValue.Cast< ::org::flixel::system::FlxDebugger >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_recording") ) { _recording=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_replaying") ) { _replaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_soundTray") ) { _soundTray=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_debuggerUp") ) { _debuggerUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_replayTimer") ) { _replayTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickableArea") ) { clickableArea=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceDebugger") ) { forceDebugger=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_soundTrayBars") ) { _soundTrayBars=inValue.Cast< Array< ::native::display::Bitmap > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_replayCallback") ) { _replayCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_soundTrayTimer") ) { _soundTrayTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedReset") ) { _requestedReset=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashFramerate") ) { _flashFramerate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { useSystemCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSoundHotKeys") ) { useSoundHotKeys=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_replayRequested") ) { _replayRequested=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateSoundTray") ) { _updateSoundTray=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_replayCancelKeys") ) { _replayCancelKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_recordingRequested") ) { _recordingRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("debugger"));
	outFields->push(HX_CSTRING("_replayTimer"));
	outFields->push(HX_CSTRING("_replayCancelKeys"));
	outFields->push(HX_CSTRING("_recording"));
	outFields->push(HX_CSTRING("_replaying"));
	outFields->push(HX_CSTRING("_recordingRequested"));
	outFields->push(HX_CSTRING("_replayRequested"));
	outFields->push(HX_CSTRING("_replay"));
	outFields->push(HX_CSTRING("_debuggerUp"));
	outFields->push(HX_CSTRING("_debugger"));
	outFields->push(HX_CSTRING("_soundTrayBars"));
	outFields->push(HX_CSTRING("_updateSoundTray"));
	outFields->push(HX_CSTRING("_soundTrayTimer"));
	outFields->push(HX_CSTRING("_soundTray"));
	outFields->push(HX_CSTRING("_focus"));
	outFields->push(HX_CSTRING("_requestedReset"));
	outFields->push(HX_CSTRING("_requestedState"));
	outFields->push(HX_CSTRING("_maxAccumulation"));
	outFields->push(HX_CSTRING("_flashFramerate"));
	outFields->push(HX_CSTRING("_stepSeconds"));
	outFields->push(HX_CSTRING("_step"));
	outFields->push(HX_CSTRING("_elapsedMS"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_mark"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_iState"));
	outFields->push(HX_CSTRING("_mouse"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("forceDebugger"));
	outFields->push(HX_CSTRING("useSystemCursor"));
	outFields->push(HX_CSTRING("useSoundHotKeys"));
	outFields->push(HX_CSTRING("junk"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("clickableArea"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getDebugger"),
	HX_CSTRING("debugger"),
	HX_CSTRING("createFocusScreen"),
	HX_CSTRING("createSoundTray"),
	HX_CSTRING("create"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("updateSoundTray"),
	HX_CSTRING("step"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onJoyHatMove"),
	HX_CSTRING("onJoyButtonUp"),
	HX_CSTRING("onJoyButtonDown"),
	HX_CSTRING("onJoyBallMove"),
	HX_CSTRING("onJoyAxisMove"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("showSoundTray"),
	HX_CSTRING("_replayCallback"),
	HX_CSTRING("_replayTimer"),
	HX_CSTRING("_replayCancelKeys"),
	HX_CSTRING("_recording"),
	HX_CSTRING("_replaying"),
	HX_CSTRING("_recordingRequested"),
	HX_CSTRING("_replayRequested"),
	HX_CSTRING("_replay"),
	HX_CSTRING("_debuggerUp"),
	HX_CSTRING("_debugger"),
	HX_CSTRING("_soundTrayBars"),
	HX_CSTRING("_updateSoundTray"),
	HX_CSTRING("_soundTrayTimer"),
	HX_CSTRING("_soundTray"),
	HX_CSTRING("_focus"),
	HX_CSTRING("_requestedReset"),
	HX_CSTRING("_requestedState"),
	HX_CSTRING("_maxAccumulation"),
	HX_CSTRING("_flashFramerate"),
	HX_CSTRING("_stepSeconds"),
	HX_CSTRING("_step"),
	HX_CSTRING("_elapsedMS"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_mark"),
	HX_CSTRING("_total"),
	HX_CSTRING("_iState"),
	HX_CSTRING("_mouse"),
	HX_CSTRING("_state"),
	HX_CSTRING("forceDebugger"),
	HX_CSTRING("useSystemCursor"),
	HX_CSTRING("useSoundHotKeys"),
	HX_CSTRING("junk"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGame_obj::clickableArea,"clickableArea");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGame_obj::clickableArea,"clickableArea");
};

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGame_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
