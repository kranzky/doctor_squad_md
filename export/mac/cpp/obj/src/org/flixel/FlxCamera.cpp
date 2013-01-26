#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
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
namespace org{
namespace flixel{

Void FlxCamera_obj::__construct(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_PUSH("FlxCamera::new","org/flixel/FlxCamera.hx",377);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(378)
	super::__construct();
	HX_STACK_LINE(380)
	this->x = X;
	HX_STACK_LINE(381)
	this->y = Y;
	HX_STACK_LINE(382)
	this->setWidth(Width);
	HX_STACK_LINE(383)
	this->setHeight(Height);
	HX_STACK_LINE(384)
	this->target = null();
	HX_STACK_LINE(385)
	this->deadzone = null();
	HX_STACK_LINE(386)
	this->scroll = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(387)
	this->_point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(388)
	this->bounds = null();
	HX_STACK_LINE(395)
	this->bgColor = ::org::flixel::FlxG_obj::getBgColor();
	HX_STACK_LINE(402)
	this->_canvas = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(403)
	this->_canvas->set_x((-(this->width) * 0.5));
	HX_STACK_LINE(404)
	this->_canvas->set_y((-(this->height) * 0.5));
	HX_STACK_LINE(408)
	this->setColor((int)16777215);
	HX_STACK_LINE(413)
	this->_flashSprite = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(414)
	this->setZoom(Zoom);
	HX_STACK_LINE(416)
	this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
	HX_STACK_LINE(417)
	this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
	HX_STACK_LINE(419)
	this->_flashSprite->set_x((this->x + this->_flashOffsetX));
	HX_STACK_LINE(420)
	this->_flashSprite->set_y((this->y + this->_flashOffsetY));
	HX_STACK_LINE(425)
	this->_flashSprite->addChild(this->_canvas);
	HX_STACK_LINE(427)
	this->_flashRect = ::native::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	HX_STACK_LINE(428)
	this->_flashPoint = ::native::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(431)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(435)
	this->_fxFlashDuration = 0.0;
	HX_STACK_LINE(436)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(437)
	this->_fxFlashAlpha = 0.0;
	HX_STACK_LINE(440)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(444)
	this->_fxFadeDuration = 0.0;
	HX_STACK_LINE(445)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(446)
	this->_fxFadeAlpha = 0.0;
	HX_STACK_LINE(448)
	this->_fxShakeIntensity = 0.0;
	HX_STACK_LINE(449)
	this->_fxShakeDuration = 0.0;
	HX_STACK_LINE(450)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(451)
	this->_fxShakeOffset = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(452)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(455)
	this->_fill = ::native::display::BitmapData_obj::__new(this->width,this->height,true,(int)0,null());
	HX_STACK_LINE(461)
	this->_canvas->set_scrollRect(::native::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height));
	HX_STACK_LINE(463)
	this->_debugLayer = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(464)
	this->_debugLayer->set_x((-(this->width) * 0.5));
	HX_STACK_LINE(465)
	this->_debugLayer->set_y((-(this->height) * 0.5));
	HX_STACK_LINE(466)
	this->_flashSprite->addChild(this->_debugLayer);
	HX_STACK_LINE(468)
	this->red = 1.0;
	HX_STACK_LINE(469)
	this->green = 1.0;
	HX_STACK_LINE(470)
	this->blue = 1.0;
	HX_STACK_LINE(472)
	this->fog = 0.0;
	HX_STACK_LINE(474)
	this->_currentStackItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
	HX_STACK_LINE(475)
	this->_headOfDrawStack = this->_currentStackItem;
	HX_STACK_LINE(478)
	this->_fxFadeIn = false;
	HX_STACK_LINE(480)
	this->setAlpha(1.0);
	HX_STACK_LINE(481)
	this->setAngle(0.0);
	HX_STACK_LINE(482)
	this->setAntialiasing(false);
}
;
	return null();
}

FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(X,Y,Width,Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

int FlxCamera_obj::setHeight( int val){
	HX_STACK_PUSH("FlxCamera::setHeight","org/flixel/FlxCamera.hx",1253);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1254)
	if (((val > (int)0))){
		HX_STACK_LINE(1256)
		this->height = val;
		HX_STACK_LINE(1264)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1266)
			::native::geom::Rectangle rect = this->_canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1267)
			rect->height = val;
			HX_STACK_LINE(1268)
			this->_canvas->set_scrollRect(rect);
			HX_STACK_LINE(1270)
			this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
			HX_STACK_LINE(1271)
			this->_debugLayer->set_y(this->_canvas->set_y((-(this->height) * 0.5)));
		}
	}
	HX_STACK_LINE(1275)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setHeight,return )

int FlxCamera_obj::setWidth( int val){
	HX_STACK_PUSH("FlxCamera::setWidth","org/flixel/FlxCamera.hx",1227);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1228)
	if (((val > (int)0))){
		HX_STACK_LINE(1230)
		this->width = val;
		HX_STACK_LINE(1238)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1240)
			::native::geom::Rectangle rect = this->_canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1241)
			rect->width = val;
			HX_STACK_LINE(1242)
			this->_canvas->set_scrollRect(rect);
			HX_STACK_LINE(1244)
			this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
			HX_STACK_LINE(1245)
			this->_debugLayer->set_x(this->_canvas->set_x((-(this->width) * 0.5)));
		}
	}
	HX_STACK_LINE(1249)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setWidth,return )

bool FlxCamera_obj::isColored( ){
	HX_STACK_PUSH("FlxCamera::isColored","org/flixel/FlxCamera.hx",1217);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1217)
	return (this->color < (int)16777215);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,isColored,return )

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_PUSH("FlxCamera::drawFX","org/flixel/FlxCamera.hx",1158);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1159)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1162)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(1167)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1173)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),this->_debugLayer->get_graphics());
		}
		HX_STACK_LINE(1180)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(1185)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1191)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),this->_debugLayer->get_graphics());
		}
		HX_STACK_LINE(1197)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(1199)
			this->_flashSprite->set_x(((this->x + this->_flashOffsetX) + this->_fxShakeOffset->x));
			HX_STACK_LINE(1200)
			this->_flashSprite->set_y(((this->y + this->_flashOffsetY) + this->_fxShakeOffset->y));
		}
		HX_STACK_LINE(1204)
		if (((this->fog > (int)0))){
			HX_STACK_LINE(1206)
			this->_debugLayer->get_graphics()->beginFill((int)16777215,this->fog);
			HX_STACK_LINE(1207)
			this->_debugLayer->get_graphics()->drawRect((int)0,(int)0,this->width,this->height);
			HX_STACK_LINE(1208)
			this->_debugLayer->get_graphics()->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::native::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_PUSH("FlxCamera::fill","org/flixel/FlxCamera.hx",1114);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(BlendAlpha,"BlendAlpha");
	HX_STACK_ARG(FxAlpha,"FxAlpha");
	HX_STACK_ARG(graphics,"graphics");
{
		HX_STACK_LINE(1122)
		::native::display::Graphics targetGraphics = (  (((graphics == null()))) ? ::native::display::Graphics(this->_canvas->get_graphics()) : ::native::display::Graphics(graphics) );		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(1126)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(1127)
		if (((bool((bool((this->red != 1.0)) || bool((this->green != 1.0)))) || bool((this->blue != 1.0))))){
			HX_STACK_LINE(1129)
			int redComponent = ::Math_obj::floor((((int(Color) >> int((int)16))) * this->red));		HX_STACK_VAR(redComponent,"redComponent");
			HX_STACK_LINE(1130)
			int greenComponent = ::Math_obj::floor((((int((int(Color) >> int((int)8))) & int((int)255))) * this->green));		HX_STACK_VAR(greenComponent,"greenComponent");
			HX_STACK_LINE(1131)
			int blueComponent = ::Math_obj::floor((((int(Color) & int((int)255))) * this->blue));		HX_STACK_VAR(blueComponent,"blueComponent");
			HX_STACK_LINE(1132)
			Color = (int((int((int(redComponent) << int((int)16))) | int((int(greenComponent) << int((int)8))))) | int(blueComponent));
		}
		HX_STACK_LINE(1136)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(1149)
		targetGraphics->drawRect((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(1150)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

::native::display::Sprite FlxCamera_obj::getContainerSprite( ){
	HX_STACK_PUSH("FlxCamera::getContainerSprite","org/flixel/FlxCamera.hx",1098);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1098)
	return this->_flashSprite;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getContainerSprite,return )

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_PUSH("FlxCamera::setScale","org/flixel/FlxCamera.hx",1078);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(1079)
		this->_flashSprite->set_scaleX(X);
		HX_STACK_LINE(1080)
		this->_flashSprite->set_scaleY(Y);
		HX_STACK_LINE(1083)
		this->_flashOffsetX = ((this->width * 0.5) * X);
		HX_STACK_LINE(1084)
		this->_flashOffsetY = ((this->height * 0.5) * Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

::org::flixel::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_PUSH("FlxCamera::getScale","org/flixel/FlxCamera.hx",1070);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",1071);
			{
				HX_STACK_LINE(1071)
				::org::flixel::FlxPoint _this = __this->_point;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1071)
				_this->x = __this->_flashSprite->get_scaleX();
				HX_STACK_LINE(1071)
				_this->y = __this->_flashSprite->get_scaleY();
				HX_STACK_LINE(1071)
				return _this;
			}
			return null();
		}
	};
	HX_STACK_LINE(1070)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

bool FlxCamera_obj::setAntialiasing( bool Antialiasing){
	HX_STACK_PUSH("FlxCamera::setAntialiasing","org/flixel/FlxCamera.hx",1055);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Antialiasing,"Antialiasing");
	HX_STACK_LINE(1056)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1060)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setAntialiasing,return )

int FlxCamera_obj::setColor( int Color){
	HX_STACK_PUSH("FlxCamera::setColor","org/flixel/FlxCamera.hx",1019);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1020)
	this->color = Color;
	HX_STACK_LINE(1033)
	this->red = (((int(this->color) >> int((int)16))) * 0.00392);
	HX_STACK_LINE(1034)
	this->green = (((int((int(this->color) >> int((int)8))) & int((int)255))) * 0.0039);
	HX_STACK_LINE(1035)
	this->blue = (((int(this->color) & int((int)255))) * 0.00392);
	HX_STACK_LINE(1042)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setColor,return )

Float FlxCamera_obj::setAngle( Float Angle){
	HX_STACK_PUSH("FlxCamera::setAngle","org/flixel/FlxCamera.hx",995);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_LINE(996)
	this->angle = Angle;
	HX_STACK_LINE(997)
	this->_flashSprite->set_rotation(Angle);
	HX_STACK_LINE(998)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setAngle,return )

Float FlxCamera_obj::setAlpha( Float Alpha){
	HX_STACK_PUSH("FlxCamera::setAlpha","org/flixel/FlxCamera.hx",977);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	struct _Function_1_1{
		inline static Float Block( Float &Alpha){
			HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",978);
			{
				HX_STACK_LINE(978)
				Float lowerBound = (  (((Alpha < (int)0))) ? Float((int)0) : Float(Alpha) );		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(978)
				return (  (((lowerBound > (int)1))) ? Float((int)1) : Float(lowerBound) );
			}
			return null();
		}
	};
	HX_STACK_LINE(978)
	this->alpha = _Function_1_1::Block(Alpha);
	HX_STACK_LINE(982)
	this->_canvas->set_alpha(Alpha);
	HX_STACK_LINE(984)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setAlpha,return )

Float FlxCamera_obj::setZoom( Float Zoom){
	HX_STACK_PUSH("FlxCamera::setZoom","org/flixel/FlxCamera.hx",955);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Zoom,"Zoom");
	HX_STACK_LINE(956)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(957)
		this->zoom = ::org::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(961)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(964)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(965)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setZoom,return )

::org::flixel::FlxCamera FlxCamera_obj::copyFrom( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxCamera::copyFrom","org/flixel/FlxCamera.hx",916);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(917)
	if (((Camera->bounds == null()))){
		HX_STACK_LINE(918)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(923)
		if (((this->bounds == null()))){
			HX_STACK_LINE(924)
			this->bounds = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			::org::flixel::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			::org::flixel::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(927)
			_this->x = Rect->x;
			HX_STACK_LINE(927)
			_this->y = Rect->y;
			HX_STACK_LINE(927)
			_this->width = Rect->width;
			HX_STACK_LINE(927)
			_this->height = Rect->height;
			HX_STACK_LINE(927)
			_this;
		}
	}
	HX_STACK_LINE(929)
	this->target = Camera->target;
	HX_STACK_LINE(930)
	if (((this->target != null()))){
		HX_STACK_LINE(931)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(933)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(938)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(939)
				this->deadzone = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
			}
			HX_STACK_LINE(942)
			{
				HX_STACK_LINE(942)
				::org::flixel::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				::org::flixel::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(942)
				_this->x = Rect->x;
				HX_STACK_LINE(942)
				_this->y = Rect->y;
				HX_STACK_LINE(942)
				_this->width = Rect->width;
				HX_STACK_LINE(942)
				_this->height = Rect->height;
				HX_STACK_LINE(942)
				_this;
			}
		}
	}
	HX_STACK_LINE(945)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_PUSH("FlxCamera::stopFX","org/flixel/FlxCamera.hx",902);
		HX_STACK_THIS(this);
		HX_STACK_LINE(903)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(904)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(905)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(906)
		this->_flashSprite->set_x((this->x + this->_flashOffsetX));
		HX_STACK_LINE(907)
		this->_flashSprite->set_y((this->y + this->_flashOffsetY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("FlxCamera::shake","org/flixel/FlxCamera.hx",886);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(887)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(888)
			return null();
		}
		HX_STACK_LINE(891)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(892)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(893)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(894)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(895)
		{
			HX_STACK_LINE(895)
			::org::flixel::FlxPoint _this = this->_fxShakeOffset;		HX_STACK_VAR(_this,"_this");
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(895)
			_this->x = X;
			HX_STACK_LINE(895)
			_this->y = Y;
			HX_STACK_LINE(895)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::fade( Dynamic Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::fade","org/flixel/FlxCamera.hx",840);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(842)
		if (((Color == null()))){
			HX_STACK_LINE(843)
			Color = (int)-16777216;
		}
		HX_STACK_LINE(853)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(854)
			return null();
		}
		HX_STACK_LINE(857)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(858)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(859)
			Duration = 5e-324;
		}
		HX_STACK_LINE(863)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(864)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(865)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(867)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(868)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(872)
			this->_fxFadeAlpha = 5e-324;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::flash( Dynamic Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::flash","org/flixel/FlxCamera.hx",800);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(802)
		if (((Color == null()))){
			HX_STACK_LINE(803)
			Color = (int)-1;
		}
		HX_STACK_LINE(813)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(814)
			return null();
		}
		HX_STACK_LINE(817)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(818)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(819)
			Duration = 5e-324;
		}
		HX_STACK_LINE(822)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(823)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(824)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_PUSH("FlxCamera::setBounds","org/flixel/FlxCamera.hx",775);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(776)
		if (((this->bounds == null()))){
			HX_STACK_LINE(777)
			this->bounds = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(780)
		{
			HX_STACK_LINE(780)
			::org::flixel::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(780)
			_this->x = X;
			HX_STACK_LINE(780)
			_this->y = Y;
			HX_STACK_LINE(780)
			_this->width = Width;
			HX_STACK_LINE(780)
			_this->height = Height;
			HX_STACK_LINE(780)
			_this;
		}
		HX_STACK_LINE(781)
		if ((UpdateWorld)){
			HX_STACK_LINE(783)
			::org::flixel::FlxRect _this = ::org::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::org::flixel::FlxRect Rect = this->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(783)
			_this->x = Rect->x;
			HX_STACK_LINE(783)
			_this->y = Rect->y;
			HX_STACK_LINE(783)
			_this->width = Rect->width;
			HX_STACK_LINE(783)
			_this->height = Rect->height;
			HX_STACK_LINE(783)
			_this;
		}
		HX_STACK_LINE(785)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::focusOn( ::org::flixel::FlxPoint point){
{
		HX_STACK_PUSH("FlxCamera::focusOn","org/flixel/FlxCamera.hx",760);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(761)
		hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(762)
		hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(763)
		{
			HX_STACK_LINE(763)
			::org::flixel::FlxPoint _this = this->scroll;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(763)
			_this->x = (point->x - (this->width * 0.5));
			HX_STACK_LINE(763)
			_this->y = (point->y - (this->height * 0.5));
			HX_STACK_LINE(763)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::follow( ::org::flixel::FlxObject Target,hx::Null< int >  __o_Style,::org::flixel::FlxPoint Offset){
int Style = __o_Style.Default(0);
	HX_STACK_PUSH("FlxCamera::follow","org/flixel/FlxCamera.hx",723);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Offset,"Offset");
{
		HX_STACK_LINE(724)
		this->style = Style;
		HX_STACK_LINE(725)
		this->target = Target;
		HX_STACK_LINE(726)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(727)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(728)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(729)
		switch( (int)(Style)){
			case (int)1: {
				HX_STACK_LINE(732)
				Float w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(733)
				Float h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(734)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - w1))) / Float((int)2)),((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25)),w1,h1);
			}
			;break;
			case (int)2: {
				struct _Function_2_1{
					inline static Float Block( ::org::flixel::FlxCamera_obj *__this){
						HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",736);
						{
							HX_STACK_LINE(736)
							Float Number1 = __this->width;		HX_STACK_VAR(Number1,"Number1");
							Float Number2 = __this->height;		HX_STACK_VAR(Number2,"Number2");
							HX_STACK_LINE(736)
							return (  (((Number1 >= Number2))) ? Float(Number1) : Float(Number2) );
						}
						return null();
					}
				};
				HX_STACK_LINE(736)
				helper = (Float(_Function_2_1::Block(this)) / Float((int)4));
				HX_STACK_LINE(737)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)3: {
				struct _Function_2_1{
					inline static Float Block( ::org::flixel::FlxCamera_obj *__this){
						HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",739);
						{
							HX_STACK_LINE(739)
							Float Number1 = __this->width;		HX_STACK_VAR(Number1,"Number1");
							Float Number2 = __this->height;		HX_STACK_VAR(Number2,"Number2");
							HX_STACK_LINE(739)
							return (  (((Number1 >= Number2))) ? Float(Number1) : Float(Number2) );
						}
						return null();
					}
				};
				HX_STACK_LINE(739)
				helper = (Float(_Function_2_1::Block(this)) / Float((int)8));
				HX_STACK_LINE(740)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(742)
				if (((this->target != null()))){
					HX_STACK_LINE(744)
					w = (this->target->width + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(745)
					h = (this->target->height + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				}
				HX_STACK_LINE(747)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - w))) / Float((int)2)),((Float(((this->height - h))) / Float((int)2)) - (h * 0.25)),w,h);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(748)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((int)0,(int)0,this->width,this->height);
			}
			;break;
			default: {
				HX_STACK_LINE(750)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::update( ){
{
		HX_STACK_PUSH("FlxCamera::update","org/flixel/FlxCamera.hx",539);
		HX_STACK_THIS(this);
		HX_STACK_LINE(542)
		if (((this->target != null()))){
			HX_STACK_LINE(543)
			if (((this->deadzone == null()))){
				struct _Function_3_1{
					inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera_obj *__this){
						HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",546);
						{
							HX_STACK_LINE(546)
							::org::flixel::FlxObject _this = __this->target;		HX_STACK_VAR(_this,"_this");
							::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(546)
							if (((point == null()))){
								HX_STACK_LINE(546)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(546)
							point->x = (_this->x + (_this->width * 0.5));
							HX_STACK_LINE(546)
							point->y = (_this->y + (_this->height * 0.5));
							HX_STACK_LINE(546)
							return point;
						}
						return null();
					}
				};
				HX_STACK_LINE(545)
				this->focusOn(_Function_3_1::Block(this));
			}
			else{
				HX_STACK_LINE(550)
				Float edge;		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(551)
				Float targetX;		HX_STACK_VAR(targetX,"targetX");
				HX_STACK_LINE(552)
				Float targetY;		HX_STACK_VAR(targetY,"targetY");
				HX_STACK_LINE(574)
				targetX = this->target->x;
				HX_STACK_LINE(575)
				targetY = this->target->y;
				HX_STACK_LINE(578)
				if (((this->style == (int)4))){
					HX_STACK_LINE(580)
					if (((targetX > (this->scroll->x + this->width)))){
						HX_STACK_LINE(581)
						hx::AddEq(this->scroll->x,this->width);
					}
					else{
						HX_STACK_LINE(584)
						if (((targetX < this->scroll->x))){
							HX_STACK_LINE(585)
							hx::SubEq(this->scroll->x,this->width);
						}
					}
					HX_STACK_LINE(589)
					if (((targetY > (this->scroll->y + this->height)))){
						HX_STACK_LINE(590)
						hx::AddEq(this->scroll->y,this->height);
					}
					else{
						HX_STACK_LINE(593)
						if (((targetY < this->scroll->y))){
							HX_STACK_LINE(594)
							hx::SubEq(this->scroll->y,this->height);
						}
					}
				}
				else{
					HX_STACK_LINE(600)
					edge = (targetX - this->deadzone->x);
					HX_STACK_LINE(601)
					if (((this->scroll->x > edge))){
						HX_STACK_LINE(602)
						this->scroll->x = edge;
					}
					HX_STACK_LINE(605)
					edge = (((targetX + this->target->width) - this->deadzone->x) - this->deadzone->width);
					HX_STACK_LINE(606)
					if (((this->scroll->x < edge))){
						HX_STACK_LINE(607)
						this->scroll->x = edge;
					}
					HX_STACK_LINE(611)
					edge = (targetY - this->deadzone->y);
					HX_STACK_LINE(612)
					if (((this->scroll->y > edge))){
						HX_STACK_LINE(613)
						this->scroll->y = edge;
					}
					HX_STACK_LINE(616)
					edge = (((targetY + this->target->height) - this->deadzone->y) - this->deadzone->height);
					HX_STACK_LINE(617)
					if (((this->scroll->y < edge))){
						HX_STACK_LINE(618)
						this->scroll->y = edge;
					}
				}
			}
		}
		HX_STACK_LINE(626)
		if (((this->bounds != null()))){
			HX_STACK_LINE(628)
			if (((this->scroll->x < this->bounds->getLeft()))){
				HX_STACK_LINE(629)
				this->scroll->x = this->bounds->getLeft();
			}
			HX_STACK_LINE(632)
			if (((this->scroll->x > (this->bounds->getRight() - this->width)))){
				HX_STACK_LINE(633)
				this->scroll->x = (this->bounds->getRight() - this->width);
			}
			HX_STACK_LINE(636)
			if (((this->scroll->y < this->bounds->getTop()))){
				HX_STACK_LINE(637)
				this->scroll->y = this->bounds->getTop();
			}
			HX_STACK_LINE(640)
			if (((this->scroll->y > (this->bounds->getBottom() - this->height)))){
				HX_STACK_LINE(641)
				this->scroll->y = (this->bounds->getBottom() - this->height);
			}
		}
		HX_STACK_LINE(647)
		this->scroll->x = (Float(::Math_obj::floor((this->scroll->x * (int)100))) / Float((int)100));
		HX_STACK_LINE(648)
		this->scroll->y = (Float(::Math_obj::floor((this->scroll->y * (int)100))) / Float((int)100));
		HX_STACK_LINE(652)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(654)
			hx::SubEq(this->_fxFlashAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(655)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(656)
				this->_fxFlashComplete();
			}
		}
		HX_STACK_LINE(662)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(663)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(666)
				hx::SubEq(this->_fxFadeAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(667)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(669)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(670)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(671)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(678)
				hx::AddEq(this->_fxFadeAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(679)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(681)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(682)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(683)
						this->_fxFadeComplete();
					}
				}
			}
		}
		HX_STACK_LINE(691)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(693)
			hx::SubEq(this->_fxShakeDuration,::org::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(694)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(696)
				{
					HX_STACK_LINE(696)
					::org::flixel::FlxPoint _this = this->_fxShakeOffset;		HX_STACK_VAR(_this,"_this");
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(696)
					_this->x = X;
					HX_STACK_LINE(696)
					_this->y = Y;
					HX_STACK_LINE(696)
					_this;
				}
				HX_STACK_LINE(697)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(698)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(704)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)1))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",706);
							{
								HX_STACK_LINE(706)
								::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(706)
								if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(706)
									hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(706)
								return ::org::flixel::FlxG_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(705)
					this->_fxShakeOffset->x = ((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->width) * (int)2) - (this->_fxShakeIntensity * this->width))) * this->zoom);
				}
				HX_STACK_LINE(708)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)2))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",710);
							{
								HX_STACK_LINE(710)
								::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(710)
								if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(710)
									hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(710)
								return ::org::flixel::FlxG_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(709)
					this->_fxShakeOffset->y = ((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->height) * (int)2) - (this->_fxShakeIntensity * this->height))) * this->zoom);
				}
			}
		}
	}
return null();
}


Void FlxCamera_obj::destroy( ){
{
		HX_STACK_PUSH("FlxCamera::destroy","org/flixel/FlxCamera.hx",489);
		HX_STACK_THIS(this);
		HX_STACK_LINE(497)
		this->target = null();
		HX_STACK_LINE(498)
		this->scroll = null();
		HX_STACK_LINE(499)
		this->deadzone = null();
		HX_STACK_LINE(500)
		this->bounds = null();
		HX_STACK_LINE(505)
		this->_flashRect = null();
		HX_STACK_LINE(506)
		this->_flashPoint = null();
		HX_STACK_LINE(507)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(508)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(509)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(510)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(511)
		this->_fill = null();
		HX_STACK_LINE(514)
		this->_flashSprite->removeChild(this->_debugLayer);
		HX_STACK_LINE(515)
		this->_flashSprite->removeChild(this->_canvas);
		HX_STACK_LINE(516)
		int canvasNumChildren = this->_canvas->get_numChildren();		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(517)
		{
			HX_STACK_LINE(517)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(517)
			while(((_g1 < _g))){
				HX_STACK_LINE(517)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(519)
				this->_canvas->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(521)
		this->_debugLayer = null();
		HX_STACK_LINE(522)
		this->_canvas = null();
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			::org::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
			HX_STACK_LINE(524)
			while(((currItem != null()))){
				HX_STACK_LINE(524)
				{
					HX_STACK_LINE(524)
					currItem->atlas = null();
					HX_STACK_LINE(524)
					currItem->initialized = false;
					HX_STACK_LINE(524)
					currItem->position = (int)0;
				}
				HX_STACK_LINE(524)
				::org::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
				HX_STACK_LINE(524)
				currItem = currItem->next;
				HX_STACK_LINE(524)
				if (((::org::flixel::FlxCamera_obj::_storageHead == null()))){
					HX_STACK_LINE(524)
					::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
					HX_STACK_LINE(524)
					newStorageHead->next = null();
				}
				else{
					HX_STACK_LINE(524)
					newStorageHead->next = ::org::flixel::FlxCamera_obj::_storageHead;
					HX_STACK_LINE(524)
					::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				}
			}
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				::org::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(524)
				_this->atlas = null();
				HX_STACK_LINE(524)
				_this->initialized = false;
				HX_STACK_LINE(524)
				_this->position = (int)0;
			}
			HX_STACK_LINE(524)
			this->_headOfDrawStack->next = null();
			HX_STACK_LINE(524)
			this->_currentStackItem = this->_headOfDrawStack;
		}
		HX_STACK_LINE(526)
		this->_headOfDrawStack->dispose();
		HX_STACK_LINE(527)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(528)
		this->_currentStackItem = null();
		HX_STACK_LINE(530)
		this->_flashSprite = null();
		HX_STACK_LINE(532)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::render( ){
{
		HX_STACK_PUSH("FlxCamera::render","org/flixel/FlxCamera.hx",333);
		HX_STACK_THIS(this);
		HX_STACK_LINE(334)
		::org::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(335)
		bool useColor = (this->color < (int)16777215);		HX_STACK_VAR(useColor,"useColor");
		HX_STACK_LINE(336)
		while(((currItem != null()))){
			HX_STACK_LINE(338)
			Array< Float > data = currItem->drawData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(339)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(340)
			int position = currItem->position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(341)
			if (((position > (int)0))){
				HX_STACK_LINE(343)
				if (((dataLen != position))){
					HX_STACK_LINE(344)
					data->splice(position,(dataLen - position));
				}
				HX_STACK_LINE(348)
				int tempFlags = (int)24;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(349)
				if (((bool(currItem->colored) || bool(useColor)))){
					HX_STACK_LINE(350)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(353)
				hx::OrEq(tempFlags,currItem->blending);
				HX_STACK_LINE(355)
				currItem->atlas->_tileSheetData->tileSheet->drawTiles(this->_canvas->get_graphics(),data,this->antialiasing,tempFlags);
				HX_STACK_LINE(356)
				(::org::flixel::system::layer::TileSheetData_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(358)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_PUSH("FlxCamera::clearDrawStack","org/flixel/FlxCamera.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_LINE(309)
		::org::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(310)
		while(((currItem != null()))){
			HX_STACK_LINE(312)
			{
				HX_STACK_LINE(312)
				currItem->atlas = null();
				HX_STACK_LINE(312)
				currItem->initialized = false;
				HX_STACK_LINE(312)
				currItem->position = (int)0;
			}
			HX_STACK_LINE(313)
			::org::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(314)
			currItem = currItem->next;
			HX_STACK_LINE(315)
			if (((::org::flixel::FlxCamera_obj::_storageHead == null()))){
				HX_STACK_LINE(317)
				::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(318)
				newStorageHead->next = null();
			}
			else{
				HX_STACK_LINE(322)
				newStorageHead->next = ::org::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(323)
				::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			::org::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(327)
			_this->atlas = null();
			HX_STACK_LINE(327)
			_this->initialized = false;
			HX_STACK_LINE(327)
			_this->position = (int)0;
		}
		HX_STACK_LINE(328)
		this->_headOfDrawStack->next = null();
		HX_STACK_LINE(329)
		this->_currentStackItem = this->_headOfDrawStack;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

::org::flixel::system::layer::DrawStackItem FlxCamera_obj::getDrawStackItem( ::org::flixel::system::layer::Atlas ObjAtlas,bool ObjColored,int ObjBlending){
	HX_STACK_PUSH("FlxCamera::getDrawStackItem","org/flixel/FlxCamera.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjAtlas,"ObjAtlas");
	HX_STACK_ARG(ObjColored,"ObjColored");
	HX_STACK_ARG(ObjBlending,"ObjBlending");
	HX_STACK_LINE(266)
	::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
	HX_STACK_LINE(267)
	if (((this->_currentStackItem->initialized == false))){
		HX_STACK_LINE(269)
		this->_headOfDrawStack = this->_currentStackItem;
		HX_STACK_LINE(270)
		this->_currentStackItem->atlas = ObjAtlas;
		HX_STACK_LINE(271)
		this->_currentStackItem->colored = ObjColored;
		HX_STACK_LINE(272)
		this->_currentStackItem->blending = ObjBlending;
		HX_STACK_LINE(273)
		itemToReturn = this->_currentStackItem;
	}
	else{
		HX_STACK_LINE(275)
		if (((bool((bool((this->_currentStackItem->atlas == ObjAtlas)) && bool((this->_currentStackItem->colored == ObjColored)))) && bool((this->_currentStackItem->blending == ObjBlending))))){
			HX_STACK_LINE(276)
			itemToReturn = this->_currentStackItem;
		}
	}
	HX_STACK_LINE(280)
	if (((itemToReturn == null()))){
		HX_STACK_LINE(282)
		::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
		HX_STACK_LINE(283)
		if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
			HX_STACK_LINE(285)
			newItem = ::org::flixel::FlxCamera_obj::_storageHead;
			HX_STACK_LINE(286)
			::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(287)
			newItem->next = null();
			HX_STACK_LINE(288)
			::org::flixel::FlxCamera_obj::_storageHead = newHead;
		}
		else{
			HX_STACK_LINE(291)
			newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
		}
		HX_STACK_LINE(295)
		newItem->atlas = ObjAtlas;
		HX_STACK_LINE(296)
		newItem->colored = ObjColored;
		HX_STACK_LINE(297)
		newItem->blending = ObjBlending;
		HX_STACK_LINE(298)
		this->_currentStackItem->next = newItem;
		HX_STACK_LINE(299)
		this->_currentStackItem = newItem;
		HX_STACK_LINE(300)
		itemToReturn = this->_currentStackItem;
	}
	HX_STACK_LINE(303)
	itemToReturn->initialized = true;
	HX_STACK_LINE(304)
	return itemToReturn;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,getDrawStackItem,return )

int FlxCamera_obj::STYLE_LOCKON;

int FlxCamera_obj::STYLE_PLATFORMER;

int FlxCamera_obj::STYLE_TOPDOWN;

int FlxCamera_obj::STYLE_TOPDOWN_TIGHT;

int FlxCamera_obj::STYLE_SCREEN_BY_SCREEN;

int FlxCamera_obj::STYLE_NO_DEAD_ZONE;

int FlxCamera_obj::SHAKE_BOTH_AXES;

int FlxCamera_obj::SHAKE_HORIZONTAL_ONLY;

int FlxCamera_obj::SHAKE_VERTICAL_ONLY;

Float FlxCamera_obj::defaultZoom;

::org::flixel::system::layer::DrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(fog,"fog");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(blue,"blue");
	HX_MARK_MEMBER_NAME(green,"green");
	HX_MARK_MEMBER_NAME(red,"red");
	HX_MARK_MEMBER_NAME(_debugLayer,"_debugLayer");
	HX_MARK_MEMBER_NAME(_canvas,"_canvas");
	HX_MARK_MEMBER_NAME(_fill,"_fill");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_MARK_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_MARK_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fog,"fog");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(blue,"blue");
	HX_VISIT_MEMBER_NAME(green,"green");
	HX_VISIT_MEMBER_NAME(red,"red");
	HX_VISIT_MEMBER_NAME(_debugLayer,"_debugLayer");
	HX_VISIT_MEMBER_NAME(_canvas,"_canvas");
	HX_VISIT_MEMBER_NAME(_fill,"_fill");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_VISIT_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_VISIT_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fog") ) { return fog; }
		if (HX_FIELD_EQ(inName,"red") ) { return red; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"blue") ) { return blue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"green") ) { return green; }
		if (HX_FIELD_EQ(inName,"_fill") ) { return _fill; }
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setZoom") ) { return setZoom_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_canvas") ) { return _canvas; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setHeight") ) { return setHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"_debugLayer") ) { return _debugLayer; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STYLE_LOCKON") ) { return STYLE_LOCKON; }
		if (HX_FIELD_EQ(inName,"_storageHead") ) { return _storageHead; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { return _flashSprite; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN") ) { return STYLE_TOPDOWN; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { return _flashOffsetY; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { return _flashOffsetX; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SHAKE_BOTH_AXES") ) { return SHAKE_BOTH_AXES; }
		if (HX_FIELD_EQ(inName,"setAntialiasing") ) { return setAntialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STYLE_PLATFORMER") ) { return STYLE_PLATFORMER; }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STYLE_NO_DEAD_ZONE") ) { return STYLE_NO_DEAD_ZONE; }
		if (HX_FIELD_EQ(inName,"getContainerSprite") ) { return getContainerSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN_TIGHT") ) { return STYLE_TOPDOWN_TIGHT; }
		if (HX_FIELD_EQ(inName,"SHAKE_VERTICAL_ONLY") ) { return SHAKE_VERTICAL_ONLY; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SHAKE_HORIZONTAL_ONLY") ) { return SHAKE_HORIZONTAL_ONLY; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STYLE_SCREEN_BY_SCREEN") ) { return STYLE_SCREEN_BY_SCREEN; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fog") ) { fog=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"red") ) { red=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return setZoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blue") ) { blue=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return setColor(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return setAngle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return setAlpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"green") ) { green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fill") ) { _fill=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return setWidth(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::org::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return setHeight(inValue);height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debugLayer") ) { _debugLayer=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STYLE_LOCKON") ) { STYLE_LOCKON=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=inValue.Cast< ::org::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return setAntialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { _flashSprite=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN") ) { STYLE_TOPDOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { _flashOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { _flashOffsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SHAKE_BOTH_AXES") ) { SHAKE_BOTH_AXES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STYLE_PLATFORMER") ) { STYLE_PLATFORMER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::org::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::org::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STYLE_NO_DEAD_ZONE") ) { STYLE_NO_DEAD_ZONE=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN_TIGHT") ) { STYLE_TOPDOWN_TIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHAKE_VERTICAL_ONLY") ) { SHAKE_VERTICAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SHAKE_HORIZONTAL_ONLY") ) { SHAKE_HORIZONTAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STYLE_SCREEN_BY_SCREEN") ) { STYLE_SCREEN_BY_SCREEN=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fog"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("_headOfDrawStack"));
	outFields->push(HX_CSTRING("_currentStackItem"));
	outFields->push(HX_CSTRING("blue"));
	outFields->push(HX_CSTRING("green"));
	outFields->push(HX_CSTRING("red"));
	outFields->push(HX_CSTRING("_debugLayer"));
	outFields->push(HX_CSTRING("_canvas"));
	outFields->push(HX_CSTRING("_fill"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashOffsetY"));
	outFields->push(HX_CSTRING("_flashOffsetX"));
	outFields->push(HX_CSTRING("_flashSprite"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STYLE_LOCKON"),
	HX_CSTRING("STYLE_PLATFORMER"),
	HX_CSTRING("STYLE_TOPDOWN"),
	HX_CSTRING("STYLE_TOPDOWN_TIGHT"),
	HX_CSTRING("STYLE_SCREEN_BY_SCREEN"),
	HX_CSTRING("STYLE_NO_DEAD_ZONE"),
	HX_CSTRING("SHAKE_BOTH_AXES"),
	HX_CSTRING("SHAKE_HORIZONTAL_ONLY"),
	HX_CSTRING("SHAKE_VERTICAL_ONLY"),
	HX_CSTRING("defaultZoom"),
	HX_CSTRING("_storageHead"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setHeight"),
	HX_CSTRING("setWidth"),
	HX_CSTRING("isColored"),
	HX_CSTRING("fog"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("fill"),
	HX_CSTRING("getContainerSprite"),
	HX_CSTRING("setScale"),
	HX_CSTRING("getScale"),
	HX_CSTRING("setAntialiasing"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("setColor"),
	HX_CSTRING("color"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("angle"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("setZoom"),
	HX_CSTRING("zoom"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("shake"),
	HX_CSTRING("fade"),
	HX_CSTRING("flash"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("follow"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("render"),
	HX_CSTRING("clearDrawStack"),
	HX_CSTRING("getDrawStackItem"),
	HX_CSTRING("_headOfDrawStack"),
	HX_CSTRING("_currentStackItem"),
	HX_CSTRING("blue"),
	HX_CSTRING("green"),
	HX_CSTRING("red"),
	HX_CSTRING("_debugLayer"),
	HX_CSTRING("_canvas"),
	HX_CSTRING("_fill"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashOffsetY"),
	HX_CSTRING("_flashOffsetX"),
	HX_CSTRING("_flashSprite"),
	HX_CSTRING("_point"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bounds"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("target"),
	HX_CSTRING("style"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCamera_obj::__boot()
{
	STYLE_LOCKON= (int)0;
	STYLE_PLATFORMER= (int)1;
	STYLE_TOPDOWN= (int)2;
	STYLE_TOPDOWN_TIGHT= (int)3;
	STYLE_SCREEN_BY_SCREEN= (int)4;
	STYLE_NO_DEAD_ZONE= (int)5;
	SHAKE_BOTH_AXES= (int)0;
	SHAKE_HORIZONTAL_ONLY= (int)1;
	SHAKE_VERTICAL_ONLY= (int)2;
}

} // end namespace org
} // end namespace flixel
