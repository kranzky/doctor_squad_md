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
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_BlendMode
#include <native/display/BlendMode.h>
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
#ifndef INCLUDED_native_geom_ColorTransform
#include <native/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxAnim
#include <org/flixel/system/FlxAnim.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_PUSH("FlxSprite::new","org/flixel/FlxSprite.hx",27);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(77)
	this->_calculatedPixelsFacing = (int)16;
	HX_STACK_LINE(76)
	this->_calculatedPixelsIndex = (int)-1;
	HX_STACK_LINE(72)
	this->_blendInt = (int)0;
	HX_STACK_LINE(191)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(193)
	this->_flashPoint = ::native::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(194)
	this->_flashRect = ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(195)
	this->_flashRect2 = ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(196)
	this->_flashPointZero = ::native::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(197)
	this->offset = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(198)
	this->origin = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(199)
	this->scale = ::org::flixel::FlxPoint_obj::__new(1.0,1.0);
	HX_STACK_LINE(203)
	this->_color = (int)16777215;
	HX_STACK_LINE(205)
	this->setAlpha(1.0);
	HX_STACK_LINE(209)
	this->_blend = null();
	HX_STACK_LINE(211)
	this->setAntialiasing(false);
	HX_STACK_LINE(212)
	this->cameras = null();
	HX_STACK_LINE(214)
	this->finished = false;
	HX_STACK_LINE(215)
	this->paused = true;
	HX_STACK_LINE(216)
	this->setFacing((int)16);
	HX_STACK_LINE(217)
	this->_animations = Array_obj< ::org::flixel::system::FlxAnim >::__new();
	HX_STACK_LINE(218)
	this->flipped = (int)0;
	HX_STACK_LINE(219)
	this->_curAnim = null();
	HX_STACK_LINE(220)
	this->_curFrame = (int)0;
	HX_STACK_LINE(221)
	this->_curIndex = (int)0;
	HX_STACK_LINE(222)
	this->_frameTimer = (int)0;
	HX_STACK_LINE(224)
	this->_matrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(225)
	this->_callback = null();
	HX_STACK_LINE(228)
	this->_red = 1.0;
	HX_STACK_LINE(229)
	this->_green = 1.0;
	HX_STACK_LINE(230)
	this->_blue = 1.0;
	HX_STACK_LINE(232)
	this->_frameID = (int)0;
	HX_STACK_LINE(235)
	if (((SimpleGraphic == null()))){
		HX_STACK_LINE(236)
		SimpleGraphic = ::org::flixel::FlxAssets_obj::imgDefault;
	}
	HX_STACK_LINE(239)
	this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null(),null());
}
;
	return null();
}

FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool FlxSprite_obj::overlapsPoint( ::org::flixel::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxSprite::overlapsPoint","org/flixel/FlxSprite.hx",1639);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1640)
		if (((bool((this->scale->x == (int)1)) && bool((this->scale->y == (int)1))))){
			HX_STACK_LINE(1641)
			return this->super::overlapsPoint(point,InScreenSpace,Camera);
		}
		HX_STACK_LINE(1645)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1646)
			return (bool((bool((bool((point->x > (this->x - ((0.5 * this->width) * ((this->scale->x - (int)1)))))) && bool((point->x < ((this->x + this->width) + ((0.5 * this->width) * ((this->scale->x - (int)1)))))))) && bool((point->y > (this->y - ((0.5 * this->height) * ((this->scale->y - (int)1)))))))) && bool((point->y < ((this->y + this->height) + ((0.5 * this->height) * ((this->scale->y - (int)1)))))));
		}
		HX_STACK_LINE(1650)
		if (((Camera == null()))){
			HX_STACK_LINE(1651)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1654)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1655)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1656)
		{
			HX_STACK_LINE(1656)
			::org::flixel::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(1656)
			if (((point1 == null()))){
				HX_STACK_LINE(1656)
				point1 = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(1656)
			if (((Camera1 == null()))){
				HX_STACK_LINE(1656)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(1656)
			point1->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(1656)
			point1->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(1656)
			hx::AddEq(point1->x,(  (((point1->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1656)
			hx::AddEq(point1->y,(  (((point1->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1656)
			point1;
		}
		HX_STACK_LINE(1657)
		return (bool((bool((bool((X > (this->_point->x - ((0.5 * this->width) * ((this->scale->x - (int)1)))))) && bool((X < ((this->_point->x + this->width) + ((0.5 * this->width) * ((this->scale->x - (int)1)))))))) && bool((Y > (this->_point->y - ((0.5 * this->height) * ((this->scale->y - (int)1)))))))) && bool((Y < ((this->_point->y + this->height) + ((0.5 * this->height) * ((this->scale->y - (int)1)))))));
	}
}


Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxSprite::updateFrameData","org/flixel/FlxSprite.hx",1621);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1621)
		if (((bool((bool((this->_node != null())) && bool((this->frameWidth >= (int)1)))) && bool((this->frameHeight >= (int)1))))){
			HX_STACK_LINE(1625)
			if (((this->frames > (int)1))){
				HX_STACK_LINE(1626)
				this->_framesData = this->_node->addSpriteFramesData(::Math_obj::floor(this->frameWidth),::Math_obj::floor(this->frameHeight),null(),(int)0,(int)0,(int)0,(int)0,(int)1,(int)1);
			}
			else{
				HX_STACK_LINE(1630)
				this->_framesData = this->_node->addSpriteFramesData(::Math_obj::floor(this->frameWidth),::Math_obj::floor(this->frameHeight),null(),null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(1633)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
	}
return null();
}


::native::display::BlendMode FlxSprite_obj::set_blend( ::native::display::BlendMode value){
	HX_STACK_PUSH("FlxSprite::set_blend","org/flixel/FlxSprite.hx",1601);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1602)
	{
		::native::display::BlendMode _switch_1 = (value);
		switch((_switch_1)->GetIndex()){
			case 7: {
				HX_STACK_LINE(1605)
				this->_blendInt = (int)65536;
				HX_STACK_LINE(1606)
				this->_blend = value;
			}
			;break;
			default: {
				HX_STACK_LINE(1608)
				this->_blendInt = (int)0;
				HX_STACK_LINE(1609)
				this->_blend = ::native::display::BlendMode_obj::NORMAL_dyn();
			}
		}
	}
	HX_STACK_LINE(1612)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::native::display::BlendMode FlxSprite_obj::get_blend( ){
	HX_STACK_PUSH("FlxSprite::get_blend","org/flixel/FlxSprite.hx",1596);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1596)
	return this->_blend;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_blend,return )

bool FlxSprite_obj::simpleRenderSprite( ){
	HX_STACK_PUSH("FlxSprite::simpleRenderSprite","org/flixel/FlxSprite.hx",1584);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1584)
	return (bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,simpleRenderSprite,return )

bool FlxSprite_obj::getSimpleRender( ){
	HX_STACK_PUSH("FlxSprite::getSimpleRender","org/flixel/FlxSprite.hx",1579);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1579)
	return (bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getSimpleRender,return )

bool FlxSprite_obj::setAntialiasing( bool val){
	HX_STACK_PUSH("FlxSprite::setAntialiasing","org/flixel/FlxSprite.hx",1558);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1559)
	this->antialiasing = val;
	HX_STACK_LINE(1560)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setAntialiasing,return )

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxSprite::calcFrame","org/flixel/FlxSprite.hx",1469);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(1471)
		if ((AreYouSure)){
			HX_STACK_LINE(1473)
			if (((bool((this->_calculatedPixelsIndex == this->_curIndex)) && bool((this->_calculatedPixelsFacing == this->facing))))){
				HX_STACK_LINE(1474)
				return null();
			}
			HX_STACK_LINE(1477)
			if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->get_width() != this->width)))) || bool((this->framePixels->get_height() != this->height))))){
				HX_STACK_LINE(1478)
				this->framePixels = ::native::display::BitmapData_obj::__new(::Math_obj::floor(this->frameWidth),::Math_obj::floor(this->frameHeight),null(),null(),null());
			}
			HX_STACK_LINE(1486)
			int indexX = (this->_curIndex * ((this->frameWidth + (int)1)));		HX_STACK_VAR(indexX,"indexX");
			HX_STACK_LINE(1487)
			this->_calculatedPixelsIndex = this->_curIndex;
			HX_STACK_LINE(1488)
			this->_calculatedPixelsFacing = this->facing;
			HX_STACK_LINE(1490)
			int indexY = (int)0;		HX_STACK_VAR(indexY,"indexY");
			HX_STACK_LINE(1496)
			int widthHelper = this->_pixels->get_width();		HX_STACK_VAR(widthHelper,"widthHelper");
			HX_STACK_LINE(1498)
			if (((indexX >= widthHelper))){
				HX_STACK_LINE(1503)
				indexY = (::Math_obj::floor((Float(indexX) / Float(widthHelper))) * ((this->frameHeight + (int)1)));
				HX_STACK_LINE(1505)
				hx::ModEq(indexX,widthHelper);
			}
			HX_STACK_LINE(1517)
			this->_flashRect->x = indexX;
			HX_STACK_LINE(1518)
			this->_flashRect->y = indexY;
			HX_STACK_LINE(1519)
			this->framePixels->copyPixels(this->_pixels,this->_flashRect,this->_flashPointZero,null(),null(),null());
			HX_STACK_LINE(1521)
			if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
				HX_STACK_LINE(1523)
				::native::display::BitmapData temp = this->framePixels->clone();		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1524)
				this->_matrix->identity();
				HX_STACK_LINE(1525)
				this->_matrix->scale((int)-1,(int)1);
				HX_STACK_LINE(1526)
				this->_matrix->translate(temp->get_width(),(int)0);
				HX_STACK_LINE(1528)
				this->framePixels->fillRect(this->framePixels->get_rect(),(int)0);
				HX_STACK_LINE(1532)
				this->framePixels->draw(temp,this->_matrix,null(),null(),null(),null());
			}
			HX_STACK_LINE(1535)
			this->_flashRect->x = this->_flashRect->y = (int)0;
			HX_STACK_LINE(1536)
			if (((this->_colorTransform != null()))){
				HX_STACK_LINE(1537)
				this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
			}
		}
		HX_STACK_LINE(1544)
		if (((this->_callback_dyn() != null()))){
			HX_STACK_LINE(1545)
			::Reflect_obj::callMethod(hx::ObjectPtr<OBJ_>(this),this->__Field(HX_CSTRING("_callback"),true),Dynamic( Array_obj<Dynamic>::__new().Add((  (((this->_curAnim != null()))) ? ::String(this->_curAnim->name) : ::String(null()) )).Add(this->_curFrame).Add(this->_curIndex)));
		}
		HX_STACK_LINE(1548)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::org::flixel::FlxPoint point,hx::Null< int >  __o_Mask,::org::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_PUSH("FlxSprite::pixelsOverlapPoint","org/flixel/FlxSprite.hx",1404);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Mask,"Mask");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1405)
		if (((Camera == null()))){
			HX_STACK_LINE(1406)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1409)
		{
			HX_STACK_LINE(1409)
			::org::flixel::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(1409)
			if (((point1 == null()))){
				HX_STACK_LINE(1409)
				point1 = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(1409)
			if (((Camera1 == null()))){
				HX_STACK_LINE(1409)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(1409)
			point1->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(1409)
			point1->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(1409)
			hx::AddEq(point1->x,(  (((point1->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1409)
			hx::AddEq(point1->y,(  (((point1->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1409)
			point1;
		}
		HX_STACK_LINE(1410)
		this->_point->x = (this->_point->x - this->offset->x);
		HX_STACK_LINE(1411)
		this->_point->y = (this->_point->y - this->offset->y);
		HX_STACK_LINE(1412)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(1413)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(1418)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(1419)
			return false;
		}
		else{
			HX_STACK_LINE(1425)
			int indexX = (this->_curIndex * this->frameWidth);		HX_STACK_VAR(indexX,"indexX");
			HX_STACK_LINE(1426)
			int indexY = (int)0;		HX_STACK_VAR(indexY,"indexY");
			HX_STACK_LINE(1429)
			int widthHelper = (  (((this->flipped != (int)0))) ? int(this->flipped) : int(this->_pixels->get_width()) );		HX_STACK_VAR(widthHelper,"widthHelper");
			HX_STACK_LINE(1430)
			if (((indexX >= widthHelper))){
				HX_STACK_LINE(1432)
				indexY = (::Math_obj::floor((Float(indexX) / Float(widthHelper))) * this->frameHeight);
				HX_STACK_LINE(1433)
				hx::ModEq(indexX,widthHelper);
			}
			HX_STACK_LINE(1437)
			int pixelColor = (int)0;		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1442)
			if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
				HX_STACK_LINE(1443)
				pixelColor = this->_pixels->getPixel32(::Math_obj::floor(((indexX + this->frameWidth) - this->_flashPoint->x)),::Math_obj::floor((indexY + this->_flashPoint->y)));
			}
			else{
				HX_STACK_LINE(1447)
				pixelColor = this->_pixels->getPixel32(::Math_obj::floor((indexX + this->_flashPoint->x)),::Math_obj::floor((indexY + this->_flashPoint->y)));
			}
			HX_STACK_LINE(1452)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1456)
			return (pixelAlpha >= Mask);
		}
		HX_STACK_LINE(1418)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

bool FlxSprite_obj::onScreenSprite( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreenSprite","org/flixel/FlxSprite.hx",1358);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(1359)
	if (((Camera == null()))){
		HX_STACK_LINE(1360)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1363)
	{
		HX_STACK_LINE(1363)
		::org::flixel::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
		::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
		HX_STACK_LINE(1363)
		if (((point == null()))){
			HX_STACK_LINE(1363)
			point = ::org::flixel::FlxPoint_obj::__new(null(),null());
		}
		HX_STACK_LINE(1363)
		if (((Camera1 == null()))){
			HX_STACK_LINE(1363)
			Camera1 = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1363)
		point->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
		HX_STACK_LINE(1363)
		point->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
		HX_STACK_LINE(1363)
		hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(1363)
		hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(1363)
		point;
	}
	HX_STACK_LINE(1364)
	this->_point->x = (this->_point->x - this->offset->x);
	HX_STACK_LINE(1365)
	this->_point->y = (this->_point->y - this->offset->y);
	HX_STACK_LINE(1367)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1368)
	if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
		HX_STACK_LINE(1369)
		result = (bool((bool((bool(((this->_point->x + this->frameWidth) > (int)0)) && bool((this->_point->x < Camera->width)))) && bool(((this->_point->y + this->frameHeight) > (int)0)))) && bool((this->_point->y < Camera->height)));
	}
	else{
		HX_STACK_LINE(1374)
		Float halfWidth = (0.5 * this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(1375)
		Float halfHeight = (0.5 * this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(1376)
		Float absScaleX = (  (((this->scale->x > (int)0))) ? Float(this->scale->x) : Float(-(this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
		HX_STACK_LINE(1377)
		Float absScaleY = (  (((this->scale->y > (int)0))) ? Float(this->scale->y) : Float(-(this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
		HX_STACK_LINE(1381)
		Float radius = (((  (((this->frameWidth >= this->frameHeight))) ? int(this->frameWidth) : int(this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1383)
		hx::AddEq(this->_point->x,halfWidth);
		HX_STACK_LINE(1384)
		hx::AddEq(this->_point->y,halfHeight);
		HX_STACK_LINE(1385)
		result = (bool((bool((bool(((this->_point->x + radius) > (int)0)) && bool(((this->_point->x - radius) < Camera->width)))) && bool(((this->_point->y + radius) > (int)0)))) && bool(((this->_point->y - radius) < Camera->height)));
	}
	HX_STACK_LINE(1388)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,onScreenSprite,return )

bool FlxSprite_obj::onScreen( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreen","org/flixel/FlxSprite.hx",1353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxSprite_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",1354);
			{
				HX_STACK_LINE(1354)
				::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
				HX_STACK_LINE(1354)
				if (((Camera1 == null()))){
					HX_STACK_LINE(1354)
					Camera1 = ::org::flixel::FlxG_obj::camera;
				}
				HX_STACK_LINE(1354)
				{
					HX_STACK_LINE(1354)
					::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera2 = Camera1;		HX_STACK_VAR(Camera2,"Camera2");
					HX_STACK_LINE(1354)
					if (((point == null()))){
						HX_STACK_LINE(1354)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(1354)
					if (((Camera2 == null()))){
						HX_STACK_LINE(1354)
						Camera2 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(1354)
					point->x = (__this->x - ::Math_obj::floor((Camera2->scroll->x * __this->scrollFactor->x)));
					HX_STACK_LINE(1354)
					point->y = (__this->y - ::Math_obj::floor((Camera2->scroll->y * __this->scrollFactor->y)));
					HX_STACK_LINE(1354)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(1354)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(1354)
					point;
				}
				HX_STACK_LINE(1354)
				__this->_point->x = (__this->_point->x - __this->offset->x);
				HX_STACK_LINE(1354)
				__this->_point->y = (__this->_point->y - __this->offset->y);
				HX_STACK_LINE(1354)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1354)
				if (((bool((bool(((bool((__this->angle == (int)0)) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1))))){
					HX_STACK_LINE(1354)
					result = (bool((bool((bool(((__this->_point->x + __this->frameWidth) > (int)0)) && bool((__this->_point->x < Camera1->width)))) && bool(((__this->_point->y + __this->frameHeight) > (int)0)))) && bool((__this->_point->y < Camera1->height)));
				}
				else{
					HX_STACK_LINE(1354)
					Float halfWidth = (0.5 * __this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
					HX_STACK_LINE(1354)
					Float halfHeight = (0.5 * __this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
					HX_STACK_LINE(1354)
					Float absScaleX = (  (((__this->scale->x > (int)0))) ? Float(__this->scale->x) : Float(-(__this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
					HX_STACK_LINE(1354)
					Float absScaleY = (  (((__this->scale->y > (int)0))) ? Float(__this->scale->y) : Float(-(__this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
					HX_STACK_LINE(1354)
					Float radius = (((  (((__this->frameWidth >= __this->frameHeight))) ? int(__this->frameWidth) : int(__this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
					HX_STACK_LINE(1354)
					hx::AddEq(__this->_point->x,halfWidth);
					HX_STACK_LINE(1354)
					hx::AddEq(__this->_point->y,halfHeight);
					HX_STACK_LINE(1354)
					result = (bool((bool((bool(((__this->_point->x + radius) > (int)0)) && bool(((__this->_point->x - radius) < Camera1->width)))) && bool(((__this->_point->y + radius) > (int)0)))) && bool(((__this->_point->y - radius) < Camera1->height)));
				}
				HX_STACK_LINE(1354)
				return result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1353)
	return _Function_1_1::Block(Camera,this);
}


int FlxSprite_obj::setFrame( int Frame){
	HX_STACK_PUSH("FlxSprite::setFrame","org/flixel/FlxSprite.hx",1331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_LINE(1332)
	this->_curAnim = null();
	HX_STACK_LINE(1333)
	this->_curIndex = hx::Mod(Frame,this->frames);
	HX_STACK_LINE(1335)
	if (((this->_framesData != null()))){
		HX_STACK_LINE(1336)
		this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
	}
	HX_STACK_LINE(1340)
	this->dirty = true;
	HX_STACK_LINE(1341)
	return Frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setFrame,return )

int FlxSprite_obj::getFrame( ){
	HX_STACK_PUSH("FlxSprite::getFrame","org/flixel/FlxSprite.hx",1319);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1319)
	return this->_curIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFrame,return )

int FlxSprite_obj::setColor( int Color){
	HX_STACK_PUSH("FlxSprite::setColor","org/flixel/FlxSprite.hx",1262);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1278)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1279)
	if (((this->_color == Color))){
		HX_STACK_LINE(1280)
		return this->_color;
	}
	HX_STACK_LINE(1283)
	this->_color = Color;
	HX_STACK_LINE(1284)
	if (((bool((this->alpha != (int)1)) || bool((this->_color != (int)16777215))))){
		HX_STACK_LINE(1285)
		this->_colorTransform = ::native::geom::ColorTransform_obj::__new((((int(this->_color) >> int((int)16))) * 0.00392),(((int((int(this->_color) >> int((int)8))) & int((int)255))) * 0.00392),(((int(this->_color) & int((int)255))) * 0.00392),this->alpha,null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(1289)
		this->_colorTransform = null();
	}
	HX_STACK_LINE(1294)
	this->dirty = true;
	HX_STACK_LINE(1297)
	this->_red = (((int(this->_color) >> int((int)16))) * 0.00392);
	HX_STACK_LINE(1298)
	this->_green = (((int((int(this->_color) >> int((int)8))) & int((int)255))) * 0.00392);
	HX_STACK_LINE(1299)
	this->_blue = (((int(this->_color) & int((int)255))) * 0.00392);
	HX_STACK_LINE(1306)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setColor,return )

int FlxSprite_obj::getColor( ){
	HX_STACK_PUSH("FlxSprite::getColor","org/flixel/FlxSprite.hx",1250);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1250)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getColor,return )

Float FlxSprite_obj::setAlpha( Float Alpha){
	HX_STACK_PUSH("FlxSprite::setAlpha","org/flixel/FlxSprite.hx",1212);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_LINE(1213)
	if (((Alpha > (int)1))){
		HX_STACK_LINE(1214)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1217)
	if (((Alpha < (int)0))){
		HX_STACK_LINE(1218)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1221)
	if (((Alpha == this->alpha))){
		HX_STACK_LINE(1222)
		return this->alpha;
	}
	HX_STACK_LINE(1225)
	this->alpha = Alpha;
	HX_STACK_LINE(1237)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setAlpha,return )

int FlxSprite_obj::setFacing( int Direction){
	HX_STACK_PUSH("FlxSprite::setFacing","org/flixel/FlxSprite.hx",1194);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1195)
	if (((this->facing != Direction))){
		HX_STACK_LINE(1196)
		this->dirty = true;
	}
	HX_STACK_LINE(1199)
	this->facing = Direction;
	HX_STACK_LINE(1200)
	return Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setFacing,return )

::native::display::BitmapData FlxSprite_obj::setPixels( ::native::display::BitmapData Pixels){
	HX_STACK_PUSH("FlxSprite::setPixels","org/flixel/FlxSprite.hx",1171);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Pixels,"Pixels");
	HX_STACK_LINE(1172)
	this->_pixels = Pixels;
	HX_STACK_LINE(1173)
	this->width = this->frameWidth = this->_pixels->get_width();
	HX_STACK_LINE(1174)
	this->height = this->frameHeight = this->_pixels->get_height();
	HX_STACK_LINE(1175)
	this->resetHelpers();
	HX_STACK_LINE(1177)
	this->_bitmapDataKey = ::org::flixel::FlxG_obj::getCacheKeyFor(this->_pixels);
	HX_STACK_LINE(1178)
	if (((this->_bitmapDataKey == null()))){
		HX_STACK_LINE(1180)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::getUniqueBitmapKey(null());
		HX_STACK_LINE(1181)
		::org::flixel::FlxG_obj::addBitmap(Pixels,false,false,this->_bitmapDataKey,null(),null());
	}
	HX_STACK_LINE(1184)
	this->_calculatedPixelsIndex = (int)-1;
	HX_STACK_LINE(1186)
	this->updateAtlasInfo(true);
	HX_STACK_LINE(1187)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setPixels,return )

::native::display::BitmapData FlxSprite_obj::getPixels( ){
	HX_STACK_PUSH("FlxSprite::getPixels","org/flixel/FlxSprite.hx",1163);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1163)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getPixels,return )

Array< ::org::flixel::FlxPoint > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_PUSH("FlxSprite::replaceColor","org/flixel/FlxSprite.hx",1122);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(NewColor,"NewColor");
	HX_STACK_ARG(FetchPositions,"FetchPositions");
{
		HX_STACK_LINE(1123)
		Array< ::org::flixel::FlxPoint > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1124)
		if ((FetchPositions)){
			HX_STACK_LINE(1125)
			positions = Array_obj< ::org::flixel::FlxPoint >::__new();
		}
		HX_STACK_LINE(1129)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1130)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1131)
		int rows = this->_pixels->get_height();		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(1132)
		int columns = this->_pixels->get_width();		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(1133)
		while(((row < rows))){
			HX_STACK_LINE(1135)
			column = (int)0;
			HX_STACK_LINE(1136)
			while(((column < columns))){
				HX_STACK_LINE(1138)
				if (((this->_pixels->getPixel32(column,row) == Color))){
					HX_STACK_LINE(1140)
					this->_pixels->setPixel32(column,row,NewColor);
					HX_STACK_LINE(1141)
					if ((FetchPositions)){
						HX_STACK_LINE(1142)
						positions->push(::org::flixel::FlxPoint_obj::__new(column,row));
					}
					HX_STACK_LINE(1145)
					this->dirty = true;
				}
				HX_STACK_LINE(1147)
				(column)++;
			}
			HX_STACK_LINE(1149)
			(row)++;
		}
		HX_STACK_LINE(1152)
		this->updateAtlasInfo(true);
		HX_STACK_LINE(1153)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_PUSH("FlxSprite::centerOffsets","org/flixel/FlxSprite.hx",1107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AdjustPosition,"AdjustPosition");
{
		HX_STACK_LINE(1108)
		this->offset->x = (((this->frameWidth - this->width)) * 0.5);
		HX_STACK_LINE(1109)
		this->offset->y = (((this->frameHeight - this->height)) * 0.5);
		HX_STACK_LINE(1110)
		if ((AdjustPosition)){
			HX_STACK_LINE(1112)
			hx::AddEq(this->x,this->offset->x);
			HX_STACK_LINE(1113)
			hx::AddEq(this->y,this->offset->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::setOriginToCorner( ){
{
		HX_STACK_PUSH("FlxSprite::setOriginToCorner","org/flixel/FlxSprite.hx",1098);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1098)
		this->origin->x = this->origin->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,setOriginToCorner,(void))

Void FlxSprite_obj::randomFrame( ){
{
		HX_STACK_PUSH("FlxSprite::randomFrame","org/flixel/FlxSprite.hx",1082);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1083)
		this->_curAnim = null();
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",1084);
				{
					HX_STACK_LINE(1084)
					::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
					HX_STACK_LINE(1084)
					if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
						HX_STACK_LINE(1084)
						hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
					}
					HX_STACK_LINE(1084)
					return ::org::flixel::FlxG_obj::globalSeed;
				}
				return null();
			}
		};
		HX_STACK_LINE(1084)
		this->_curIndex = ::Math_obj::floor((_Function_1_1::Block() * ((Float(this->_pixels->get_width()) / Float(this->frameWidth)))));
		HX_STACK_LINE(1086)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1087)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
		HX_STACK_LINE(1091)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,randomFrame,(void))

Void FlxSprite_obj::play( ::String AnimName,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxSprite::play","org/flixel/FlxSprite.hx",1031);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AnimName,"AnimName");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(1032)
		if (((bool((bool((bool(!(Force)) && bool((this->_curAnim != null())))) && bool((AnimName == this->_curAnim->name)))) && bool(((bool(this->_curAnim->looped) || bool(!(this->finished)))))))){
			HX_STACK_LINE(1034)
			this->paused = false;
			HX_STACK_LINE(1035)
			return null();
		}
		HX_STACK_LINE(1037)
		this->_curFrame = (int)0;
		HX_STACK_LINE(1038)
		this->_curIndex = (int)0;
		HX_STACK_LINE(1040)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1041)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
		HX_STACK_LINE(1045)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(1046)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1047)
		int l = this->_animations->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1048)
		while(((i < l))){
			HX_STACK_LINE(1050)
			if (((this->_animations->__get(i)->name == AnimName))){
				HX_STACK_LINE(1052)
				this->_curAnim = this->_animations->__get(i);
				HX_STACK_LINE(1053)
				if (((this->_curAnim->delay <= (int)0))){
					HX_STACK_LINE(1054)
					this->finished = true;
				}
				else{
					HX_STACK_LINE(1058)
					this->finished = false;
				}
				HX_STACK_LINE(1061)
				this->_curIndex = this->_curAnim->frames->__get(this->_curFrame);
				HX_STACK_LINE(1063)
				if (((this->_framesData != null()))){
					HX_STACK_LINE(1064)
					this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
				}
				HX_STACK_LINE(1068)
				this->dirty = true;
				HX_STACK_LINE(1069)
				this->paused = false;
				HX_STACK_LINE(1070)
				return null();
			}
			HX_STACK_LINE(1072)
			(i)++;
		}
		HX_STACK_LINE(1074)
		::org::flixel::FlxG_obj::log(((HX_CSTRING("WARNING: No animation called \"") + AnimName) + HX_CSTRING("\"")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,play,(void))

Void FlxSprite_obj::addAnimationCallback( Dynamic AnimationCallback){
{
		HX_STACK_PUSH("FlxSprite::addAnimationCallback","org/flixel/FlxSprite.hx",1020);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnimationCallback,"AnimationCallback");
		HX_STACK_LINE(1020)
		this->_callback = AnimationCallback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,addAnimationCallback,(void))

Void FlxSprite_obj::addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_PUSH("FlxSprite::addAnimation","org/flixel/FlxSprite.hx",1007);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_ARG(Frames,"Frames");
	HX_STACK_ARG(FrameRate,"FrameRate");
	HX_STACK_ARG(Looped,"Looped");
{
		HX_STACK_LINE(1007)
		this->_animations->push(::org::flixel::system::FlxAnim_obj::__new(Name,Frames,FrameRate,Looped));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,addAnimation,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxSprite::drawFrame","org/flixel/FlxSprite.hx",988);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(988)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::updateAnimation( ){
{
		HX_STACK_PUSH("FlxSprite::updateAnimation","org/flixel/FlxSprite.hx",916);
		HX_STACK_THIS(this);
		HX_STACK_LINE(917)
		if (((this->bakedRotation > (int)0))){
			HX_STACK_LINE(919)
			int oldIndex = this->_curIndex;		HX_STACK_VAR(oldIndex,"oldIndex");
			HX_STACK_LINE(920)
			int angleHelper = ::Math_obj::floor(hx::Mod(this->angle,(int)360));		HX_STACK_VAR(angleHelper,"angleHelper");
			HX_STACK_LINE(928)
			while(((angleHelper < (int)0))){
				HX_STACK_LINE(929)
				hx::AddEq(angleHelper,(int)360);
			}
			HX_STACK_LINE(934)
			this->_curIndex = ::Math_obj::floor(((Float(angleHelper) / Float(this->bakedRotation)) + 0.5));
			HX_STACK_LINE(937)
			if (((this->_framesData != null()))){
				HX_STACK_LINE(938)
				this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
			}
			HX_STACK_LINE(942)
			if (((oldIndex != this->_curIndex))){
				HX_STACK_LINE(943)
				this->dirty = true;
			}
		}
		else{
			HX_STACK_LINE(947)
			if (((bool((bool((bool((this->_curAnim != null())) && bool((this->_curAnim->delay > (int)0)))) && bool(((bool(this->_curAnim->looped) || bool(!(this->finished))))))) && bool(!(this->paused))))){
				HX_STACK_LINE(949)
				hx::AddEq(this->_frameTimer,::org::flixel::FlxG_obj::elapsed);
				HX_STACK_LINE(950)
				while(((this->_frameTimer > this->_curAnim->delay))){
					HX_STACK_LINE(952)
					this->_frameTimer = (this->_frameTimer - this->_curAnim->delay);
					HX_STACK_LINE(953)
					if (((::Math_obj::floor(this->_curFrame) == (this->_curAnim->frames->length - (int)1)))){
						HX_STACK_LINE(955)
						if ((this->_curAnim->looped)){
							HX_STACK_LINE(956)
							this->_curFrame = (int)0;
						}
						HX_STACK_LINE(959)
						this->finished = true;
					}
					else{
						HX_STACK_LINE(962)
						(this->_curFrame)++;
					}
					HX_STACK_LINE(965)
					this->_curIndex = this->_curAnim->frames->__get(this->_curFrame);
					HX_STACK_LINE(967)
					if (((this->_framesData != null()))){
						HX_STACK_LINE(968)
						this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
					}
					HX_STACK_LINE(972)
					this->dirty = true;
				}
			}
		}
		HX_STACK_LINE(976)
		if ((this->dirty)){
			HX_STACK_LINE(977)
			this->calcFrame(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateAnimation,(void))

Void FlxSprite_obj::fill( int Color){
{
		HX_STACK_PUSH("FlxSprite::fill","org/flixel/FlxSprite.hx",896);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(897)
		this->_pixels->fillRect(this->_flashRect2,Color);
		HX_STACK_LINE(898)
		if (((this->_pixels != this->framePixels))){
			HX_STACK_LINE(899)
			this->dirty = true;
		}
		HX_STACK_LINE(904)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(907)
		this->updateAtlasInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,fill,(void))

Void FlxSprite_obj::drawLine( Float StartX,Float StartY,Float EndX,Float EndY,int Color,hx::Null< int >  __o_Thickness){
int Thickness = __o_Thickness.Default(1);
	HX_STACK_PUSH("FlxSprite::drawLine","org/flixel/FlxSprite.hx",855);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartX,"StartX");
	HX_STACK_ARG(StartY,"StartY");
	HX_STACK_ARG(EndX,"EndX");
	HX_STACK_ARG(EndY,"EndY");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Thickness,"Thickness");
{
		HX_STACK_LINE(857)
		::native::display::Graphics gfx = ::org::flixel::FlxG_obj::flashGfx;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(858)
		gfx->clear();
		HX_STACK_LINE(859)
		gfx->moveTo(StartX,StartY);
		HX_STACK_LINE(861)
		Float alphaComponent = (Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(865)
		if (((alphaComponent <= (int)0))){
			HX_STACK_LINE(866)
			alphaComponent = (int)1;
		}
		HX_STACK_LINE(872)
		gfx->lineStyle(Thickness,Color,alphaComponent,null(),null(),null(),null(),null());
		HX_STACK_LINE(874)
		gfx->lineTo(EndX,EndY);
		HX_STACK_LINE(877)
		this->_pixels->draw(::org::flixel::FlxG_obj::flashGfxSprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(878)
		this->dirty = true;
		HX_STACK_LINE(881)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(884)
		this->updateAtlasInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,drawLine,(void))

Void FlxSprite_obj::stamp( ::org::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxSprite::stamp","org/flixel/FlxSprite.hx",800);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Brush,"Brush");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(801)
		Brush->drawFrame(null());
		HX_STACK_LINE(802)
		::native::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(805)
		if (((bool((bool((bool(((bool((Brush->angle == (int)0)) || bool((Brush->bakedRotation > (int)0))))) && bool((Brush->scale->x == (int)1)))) && bool((Brush->scale->y == (int)1)))) && bool((Brush->get_blend() == null()))))){
			HX_STACK_LINE(807)
			this->_flashPoint->x = X;
			HX_STACK_LINE(808)
			this->_flashPoint->y = Y;
			HX_STACK_LINE(809)
			this->_flashRect2->width = bitmapData->get_width();
			HX_STACK_LINE(810)
			this->_flashRect2->height = bitmapData->get_height();
			HX_STACK_LINE(811)
			this->_pixels->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(812)
			this->_flashRect2->width = this->_pixels->get_width();
			HX_STACK_LINE(813)
			this->_flashRect2->height = this->_pixels->get_height();
			HX_STACK_LINE(817)
			return null();
		}
		HX_STACK_LINE(821)
		this->_matrix->identity();
		HX_STACK_LINE(822)
		this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
		HX_STACK_LINE(823)
		this->_matrix->scale(Brush->scale->x,Brush->scale->y);
		HX_STACK_LINE(824)
		if (((Brush->angle != (int)0))){
			HX_STACK_LINE(825)
			this->_matrix->rotate((Brush->angle * 0.017453293));
		}
		HX_STACK_LINE(828)
		this->_matrix->translate((X + Brush->origin->x),(Y + Brush->origin->y));
		HX_STACK_LINE(829)
		::native::display::BlendMode brushBlend = Brush->get_blend();		HX_STACK_VAR(brushBlend,"brushBlend");
		HX_STACK_LINE(831)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(833)
		this->_pixels->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
		HX_STACK_LINE(837)
		this->updateAtlasInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::draw( ){
{
		HX_STACK_PUSH("FlxSprite::draw","org/flixel/FlxSprite.hx",610);
		HX_STACK_THIS(this);
		HX_STACK_LINE(612)
		if (((this->_atlas == null()))){
			HX_STACK_LINE(613)
			return null();
		}
		HX_STACK_LINE(618)
		if (((this->_flickerTimer != (int)0))){
			HX_STACK_LINE(620)
			this->_flicker = !(this->_flicker);
			HX_STACK_LINE(621)
			if ((this->_flicker)){
				HX_STACK_LINE(622)
				return null();
			}
		}
		HX_STACK_LINE(627)
		if ((this->dirty)){
			HX_STACK_LINE(628)
			this->calcFrame(null());
		}
		HX_STACK_LINE(632)
		if (((this->cameras == null()))){
			HX_STACK_LINE(633)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(636)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(637)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(638)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(641)
		::org::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(642)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(643)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(644)
		bool isColored = (this->_color < (int)16777215);		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(646)
		Float radians;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(647)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(648)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(651)
		while(((i < l))){
			HX_STACK_LINE(653)
			camera = this->cameras->__get((i)++);
			struct _Function_2_1{
				inline static bool Block( ::org::flixel::FlxCamera &camera,::org::flixel::FlxSprite_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",655);
					{
						HX_STACK_LINE(655)
						::org::flixel::FlxCamera Camera = camera;		HX_STACK_VAR(Camera,"Camera");
						HX_STACK_LINE(655)
						if (((Camera == null()))){
							HX_STACK_LINE(655)
							Camera = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(655)
						{
							HX_STACK_LINE(655)
							::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
							HX_STACK_LINE(655)
							if (((point == null()))){
								HX_STACK_LINE(655)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(655)
							if (((Camera1 == null()))){
								HX_STACK_LINE(655)
								Camera1 = ::org::flixel::FlxG_obj::camera;
							}
							HX_STACK_LINE(655)
							point->x = (__this->x - ::Math_obj::floor((Camera1->scroll->x * __this->scrollFactor->x)));
							HX_STACK_LINE(655)
							point->y = (__this->y - ::Math_obj::floor((Camera1->scroll->y * __this->scrollFactor->y)));
							HX_STACK_LINE(655)
							hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(655)
							hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(655)
							point;
						}
						HX_STACK_LINE(655)
						__this->_point->x = (__this->_point->x - __this->offset->x);
						HX_STACK_LINE(655)
						__this->_point->y = (__this->_point->y - __this->offset->y);
						HX_STACK_LINE(655)
						bool result = false;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(655)
						if (((bool((bool(((bool((__this->angle == (int)0)) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1))))){
							HX_STACK_LINE(655)
							result = (bool((bool((bool(((__this->_point->x + __this->frameWidth) > (int)0)) && bool((__this->_point->x < Camera->width)))) && bool(((__this->_point->y + __this->frameHeight) > (int)0)))) && bool((__this->_point->y < Camera->height)));
						}
						else{
							HX_STACK_LINE(655)
							Float halfWidth = (0.5 * __this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
							HX_STACK_LINE(655)
							Float halfHeight = (0.5 * __this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
							HX_STACK_LINE(655)
							Float absScaleX = (  (((__this->scale->x > (int)0))) ? Float(__this->scale->x) : Float(-(__this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
							HX_STACK_LINE(655)
							Float absScaleY = (  (((__this->scale->y > (int)0))) ? Float(__this->scale->y) : Float(-(__this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
							HX_STACK_LINE(655)
							Float radius = (((  (((__this->frameWidth >= __this->frameHeight))) ? int(__this->frameWidth) : int(__this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(655)
							hx::AddEq(__this->_point->x,halfWidth);
							HX_STACK_LINE(655)
							hx::AddEq(__this->_point->y,halfHeight);
							HX_STACK_LINE(655)
							result = (bool((bool((bool(((__this->_point->x + radius) > (int)0)) && bool(((__this->_point->x - radius) < Camera->width)))) && bool(((__this->_point->y + radius) > (int)0)))) && bool(((__this->_point->y - radius) < Camera->height)));
						}
						HX_STACK_LINE(655)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(655)
			if (((bool((bool(!(_Function_2_1::Block(camera,this))) || bool(!(camera->visible)))) || bool(!(camera->exists))))){
				HX_STACK_LINE(656)
				continue;
			}
			HX_STACK_LINE(661)
			bool isColoredCamera = (camera->color < (int)16777215);		HX_STACK_VAR(isColoredCamera,"isColoredCamera");
			struct _Function_2_2{
				inline static ::org::flixel::system::layer::DrawStackItem Block( ::org::flixel::FlxSprite_obj *__this,::org::flixel::FlxCamera &camera,bool &isColored,bool &isColoredCamera){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",662);
					{
						HX_STACK_LINE(662)
						::org::flixel::system::layer::Atlas ObjAtlas = __this->_atlas;		HX_STACK_VAR(ObjAtlas,"ObjAtlas");
						bool ObjColored = (bool(isColored) || bool(isColoredCamera));		HX_STACK_VAR(ObjColored,"ObjColored");
						int ObjBlending = __this->_blendInt;		HX_STACK_VAR(ObjBlending,"ObjBlending");
						HX_STACK_LINE(662)
						::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
						HX_STACK_LINE(662)
						if (((camera->_currentStackItem->initialized == false))){
							HX_STACK_LINE(662)
							camera->_headOfDrawStack = camera->_currentStackItem;
							HX_STACK_LINE(662)
							camera->_currentStackItem->atlas = ObjAtlas;
							HX_STACK_LINE(662)
							camera->_currentStackItem->colored = ObjColored;
							HX_STACK_LINE(662)
							camera->_currentStackItem->blending = ObjBlending;
							HX_STACK_LINE(662)
							itemToReturn = camera->_currentStackItem;
						}
						else{
							HX_STACK_LINE(662)
							if (((bool((bool((camera->_currentStackItem->atlas == ObjAtlas)) && bool((camera->_currentStackItem->colored == ObjColored)))) && bool((camera->_currentStackItem->blending == ObjBlending))))){
								HX_STACK_LINE(662)
								itemToReturn = camera->_currentStackItem;
							}
						}
						HX_STACK_LINE(662)
						if (((itemToReturn == null()))){
							HX_STACK_LINE(662)
							::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
							HX_STACK_LINE(662)
							if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
								HX_STACK_LINE(662)
								newItem = ::org::flixel::FlxCamera_obj::_storageHead;
								HX_STACK_LINE(662)
								::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
								HX_STACK_LINE(662)
								newItem->next = null();
								HX_STACK_LINE(662)
								::org::flixel::FlxCamera_obj::_storageHead = newHead;
							}
							else{
								HX_STACK_LINE(662)
								newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
							}
							HX_STACK_LINE(662)
							newItem->atlas = ObjAtlas;
							HX_STACK_LINE(662)
							newItem->colored = ObjColored;
							HX_STACK_LINE(662)
							newItem->blending = ObjBlending;
							HX_STACK_LINE(662)
							camera->_currentStackItem->next = newItem;
							HX_STACK_LINE(662)
							camera->_currentStackItem = newItem;
							HX_STACK_LINE(662)
							itemToReturn = camera->_currentStackItem;
						}
						HX_STACK_LINE(662)
						itemToReturn->initialized = true;
						HX_STACK_LINE(662)
						return itemToReturn;
					}
					return null();
				}
			};
			HX_STACK_LINE(662)
			drawItem = _Function_2_2::Block(this,camera,isColored,isColoredCamera);
			HX_STACK_LINE(663)
			currDrawData = drawItem->drawData;
			HX_STACK_LINE(664)
			currIndex = drawItem->position;
			HX_STACK_LINE(666)
			this->_point->x = ((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x);
			HX_STACK_LINE(667)
			this->_point->y = ((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y);
			HX_STACK_LINE(669)
			this->_point->x = (this->_point->x + this->origin->x);
			HX_STACK_LINE(670)
			this->_point->y = (this->_point->y + this->origin->y);
			HX_STACK_LINE(678)
			if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
				HX_STACK_LINE(686)
				currDrawData[(currIndex)++] = this->_point->x;
				HX_STACK_LINE(687)
				currDrawData[(currIndex)++] = this->_point->y;
				HX_STACK_LINE(689)
				currDrawData[(currIndex)++] = this->_frameID;
				HX_STACK_LINE(692)
				if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
					HX_STACK_LINE(694)
					currDrawData[(currIndex)++] = (int)-1;
					HX_STACK_LINE(695)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(696)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(697)
					currDrawData[(currIndex)++] = (int)1;
				}
				else{
					HX_STACK_LINE(701)
					currDrawData[(currIndex)++] = (int)1;
					HX_STACK_LINE(702)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(703)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(704)
					currDrawData[(currIndex)++] = (int)1;
				}
				HX_STACK_LINE(707)
				if (((bool(isColored) || bool(isColoredCamera)))){
					HX_STACK_LINE(708)
					if ((isColoredCamera)){
						HX_STACK_LINE(711)
						currDrawData[(currIndex)++] = (this->_red * camera->red);
						HX_STACK_LINE(712)
						currDrawData[(currIndex)++] = (this->_green * camera->green);
						HX_STACK_LINE(713)
						currDrawData[(currIndex)++] = (this->_blue * camera->blue);
					}
					else{
						HX_STACK_LINE(717)
						currDrawData[(currIndex)++] = this->_red;
						HX_STACK_LINE(718)
						currDrawData[(currIndex)++] = this->_green;
						HX_STACK_LINE(719)
						currDrawData[(currIndex)++] = this->_blue;
					}
				}
				HX_STACK_LINE(723)
				currDrawData[(currIndex)++] = this->alpha;
				HX_STACK_LINE(724)
				drawItem->position = currIndex;
			}
			else{
				HX_STACK_LINE(740)
				radians = (-(this->angle) * 0.017453293);
				HX_STACK_LINE(741)
				cos = ::Math_obj::cos(radians);
				HX_STACK_LINE(742)
				sin = ::Math_obj::sin(radians);
				HX_STACK_LINE(744)
				currDrawData[(currIndex)++] = this->_point->x;
				HX_STACK_LINE(745)
				currDrawData[(currIndex)++] = this->_point->y;
				HX_STACK_LINE(747)
				currDrawData[(currIndex)++] = this->_frameID;
				HX_STACK_LINE(749)
				if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
					HX_STACK_LINE(751)
					currDrawData[(currIndex)++] = (-(cos) * this->scale->x);
					HX_STACK_LINE(752)
					currDrawData[(currIndex)++] = (sin * this->scale->y);
					HX_STACK_LINE(753)
					currDrawData[(currIndex)++] = (-(sin) * this->scale->x);
					HX_STACK_LINE(754)
					currDrawData[(currIndex)++] = (cos * this->scale->y);
				}
				else{
					HX_STACK_LINE(758)
					currDrawData[(currIndex)++] = (cos * this->scale->x);
					HX_STACK_LINE(759)
					currDrawData[(currIndex)++] = (sin * this->scale->y);
					HX_STACK_LINE(760)
					currDrawData[(currIndex)++] = (-(sin) * this->scale->x);
					HX_STACK_LINE(761)
					currDrawData[(currIndex)++] = (cos * this->scale->y);
				}
				HX_STACK_LINE(764)
				if (((bool(isColored) || bool(isColoredCamera)))){
					HX_STACK_LINE(765)
					if ((isColoredCamera)){
						HX_STACK_LINE(768)
						currDrawData[(currIndex)++] = (this->_red * camera->red);
						HX_STACK_LINE(769)
						currDrawData[(currIndex)++] = (this->_green * camera->green);
						HX_STACK_LINE(770)
						currDrawData[(currIndex)++] = (this->_blue * camera->blue);
					}
					else{
						HX_STACK_LINE(774)
						currDrawData[(currIndex)++] = this->_red;
						HX_STACK_LINE(775)
						currDrawData[(currIndex)++] = this->_green;
						HX_STACK_LINE(776)
						currDrawData[(currIndex)++] = this->_blue;
					}
				}
				HX_STACK_LINE(780)
				currDrawData[(currIndex)++] = this->alpha;
				HX_STACK_LINE(781)
				drawItem->position = currIndex;
			}
			HX_STACK_LINE(784)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			HX_STACK_LINE(785)
			if (((bool(::org::flixel::FlxG_obj::visualDebug) && bool(!(this->ignoreDrawDebug))))){
				HX_STACK_LINE(786)
				this->drawDebug(camera);
			}
		}
	}
return null();
}


bool FlxSprite_obj::isColored( ){
	HX_STACK_PUSH("FlxSprite::isColored","org/flixel/FlxSprite.hx",598);
	HX_STACK_THIS(this);
	HX_STACK_LINE(598)
	return (this->_color < (int)16777215);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,isColored,return )

Void FlxSprite_obj::postUpdate( ){
{
		HX_STACK_PUSH("FlxSprite::postUpdate","org/flixel/FlxSprite.hx",592);
		HX_STACK_THIS(this);
		HX_STACK_LINE(593)
		this->super::postUpdate();
		HX_STACK_LINE(594)
		this->updateAnimation();
	}
return null();
}


Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_PUSH("FlxSprite::resetHelpers","org/flixel/FlxSprite.hx",549);
		HX_STACK_THIS(this);
		HX_STACK_LINE(550)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(551)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(552)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(553)
		this->_flashRect->height = this->frameHeight;
		HX_STACK_LINE(554)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(555)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(556)
		this->_flashRect2->width = this->_pixels->get_width();
		HX_STACK_LINE(557)
		this->_flashRect2->height = this->_pixels->get_height();
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(559)
			::org::flixel::FlxPoint _this = this->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(559)
			_this->x = (this->frameWidth * 0.5);
			HX_STACK_LINE(559)
			_this->y = (this->frameHeight * 0.5);
			HX_STACK_LINE(559)
			_this;
		}
		HX_STACK_LINE(571)
		this->frames = ::Math_obj::floor((Float(((Float(this->_flashRect2->width) / Float(((this->_flashRect->width + (int)1)))) * this->_flashRect2->height)) / Float(((this->_flashRect->height + (int)1)))));
		HX_STACK_LINE(572)
		if (((this->frames == (int)0))){
			HX_STACK_LINE(572)
			this->frames = (int)1;
		}
		HX_STACK_LINE(573)
		if (((this->flipped > (int)0))){
			HX_STACK_LINE(574)
			hx::MultEq(this->frames,(int)2);
		}
		HX_STACK_LINE(578)
		this->_curIndex = (int)0;
		HX_STACK_LINE(580)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(581)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

::org::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,Dynamic Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::makeGraphic","org/flixel/FlxSprite.hx",520);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(522)
		if (((Color == null()))){
			HX_STACK_LINE(523)
			Color = (int)-1;
		}
		HX_STACK_LINE(532)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(533)
		this->_pixels = ::org::flixel::FlxG_obj::createBitmap(Width,Height,Color,Unique,Key);
		HX_STACK_LINE(535)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(536)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(538)
		this->width = this->frameWidth = this->_pixels->get_width();
		HX_STACK_LINE(539)
		this->height = this->frameHeight = this->_pixels->get_height();
		HX_STACK_LINE(540)
		this->resetHelpers();
		HX_STACK_LINE(541)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(542)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

::org::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedGraphic","org/flixel/FlxSprite.hx",377);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(379)
		int rows = ::Math_obj::floor(::Math_obj::sqrt(Rotations));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(380)
		::native::display::BitmapData brush = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,false,Key,null(),null());		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(381)
		if (((Frame >= (int)0))){
			HX_STACK_LINE(384)
			::native::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(385)
			brush = ::native::display::BitmapData_obj::__new(full->get_height(),full->get_height(),null(),null(),null());
			HX_STACK_LINE(386)
			int rx = (Frame * brush->get_width());		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(387)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(388)
			int fw = full->get_width();		HX_STACK_VAR(fw,"fw");
			HX_STACK_LINE(389)
			if (((rx >= fw))){
				HX_STACK_LINE(391)
				ry = (::Math_obj::floor((Float(rx) / Float(fw))) * brush->get_height());
				HX_STACK_LINE(392)
				hx::ModEq(rx,fw);
			}
			HX_STACK_LINE(394)
			this->_flashRect->x = rx;
			HX_STACK_LINE(395)
			this->_flashRect->y = ry;
			HX_STACK_LINE(396)
			this->_flashRect->width = brush->get_width();
			HX_STACK_LINE(397)
			this->_flashRect->height = brush->get_height();
			HX_STACK_LINE(398)
			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(401)
		int max = brush->get_width();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(402)
		if (((brush->get_height() > max))){
			HX_STACK_LINE(403)
			max = brush->get_height();
		}
		HX_STACK_LINE(407)
		if ((AutoBuffer)){
			HX_STACK_LINE(408)
			max = ::Math_obj::floor((max * 1.5));
		}
		struct _Function_1_1{
			inline static int Block( int &Rotations,int &rows){
				HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",412);
				{
					HX_STACK_LINE(412)
					Float Value = (Float(Rotations) / Float(rows));		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(412)
					int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
					struct _Function_2_1{
						inline static int Block( int &number,Float &Value){
							HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",412);
							{
								HX_STACK_LINE(412)
								return (  (((number != Value))) ? int((number + (int)1)) : int(number) );
							}
							return null();
						}
					};
					HX_STACK_LINE(412)
					return (  (((Value > (int)0))) ? int(_Function_2_1::Block(number,Value)) : int(number) );
				}
				return null();
			}
		};
		HX_STACK_LINE(412)
		int columns = _Function_1_1::Block(Rotations,rows);		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(413)
		this->width = (max * columns);
		HX_STACK_LINE(414)
		this->height = (max * rows);
		HX_STACK_LINE(415)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(416)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(417)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(420)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(421)
				key = ::Type_obj::getClassName(Graphic);
			}
			else{
				HX_STACK_LINE(424)
				if (((bool(::Std_obj::is(Graphic,hx::ClassOf< ::native::display::BitmapData >())) && bool((Key != null()))))){
					HX_STACK_LINE(425)
					key = Key;
				}
				else{
					HX_STACK_LINE(429)
					return null();
				}
			}
		}
		HX_STACK_LINE(435)
		hx::AddEq(key,(((((((HX_CSTRING(":") + Frame) + HX_CSTRING(":")) + this->width) + HX_CSTRING("x")) + this->height) + HX_CSTRING(":")) + Rotations));
		HX_STACK_LINE(437)
		bool skipGen = ::org::flixel::FlxG_obj::checkBitmapCache(key);		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(442)
		this->_pixels = ::org::flixel::FlxG_obj::createBitmap((::Math_obj::floor(this->width) + columns),(::Math_obj::floor(this->height) + rows),(int)0,true,key);
		HX_STACK_LINE(448)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(449)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(452)
		this->width = this->frameWidth = this->_pixels->get_width();
		HX_STACK_LINE(453)
		this->height = this->frameHeight = this->_pixels->get_height();
		HX_STACK_LINE(454)
		this->bakedRotation = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(457)
		if ((!(skipGen))){
			HX_STACK_LINE(459)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(460)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(461)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(462)
			int halfBrushWidth = ::Math_obj::floor((brush->get_width() * 0.5));		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(463)
			int halfBrushHeight = ::Math_obj::floor((brush->get_height() * 0.5));		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(464)
			int midpointX = ::Math_obj::floor((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(465)
			int midpointY = ::Math_obj::floor((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(466)
			while(((row < rows))){
				HX_STACK_LINE(468)
				column = (int)0;
				HX_STACK_LINE(469)
				while(((column < columns))){
					HX_STACK_LINE(471)
					this->_matrix->identity();
					HX_STACK_LINE(472)
					this->_matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
					HX_STACK_LINE(473)
					this->_matrix->rotate((bakedAngle * 0.017453293));
					HX_STACK_LINE(477)
					this->_matrix->translate((((max * column) + midpointX) + column),(midpointY + row));
					HX_STACK_LINE(479)
					hx::AddEq(bakedAngle,this->bakedRotation);
					HX_STACK_LINE(480)
					this->_pixels->draw(brush,this->_matrix,null(),null(),null(),AntiAliasing);
					HX_STACK_LINE(481)
					(column)++;
				}
				HX_STACK_LINE(483)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(484)
				(row)++;
			}
		}
		HX_STACK_LINE(487)
		this->frameWidth = this->frameHeight = max;
		HX_STACK_LINE(488)
		this->width = this->height = max;
		HX_STACK_LINE(489)
		this->resetHelpers();
		HX_STACK_LINE(490)
		if ((AutoBuffer)){
			HX_STACK_LINE(492)
			this->width = brush->get_width();
			HX_STACK_LINE(493)
			this->height = brush->get_height();
			HX_STACK_LINE(494)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(498)
		this->setAntialiasing(AntiAliasing);
		HX_STACK_LINE(501)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(503)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::org::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< bool >  __o_Reverse,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
bool Reverse = __o_Reverse.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadGraphic","org/flixel/FlxSprite.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Animated,"Animated");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(300)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(302)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,Unique,Key,null(),null());
		HX_STACK_LINE(303)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(305)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(310)
		if ((Reverse)){
			HX_STACK_LINE(311)
			this->flipped = (int(this->_pixels->get_width()) >> int((int)1));
		}
		else{
			HX_STACK_LINE(315)
			this->flipped = (int)0;
		}
		HX_STACK_LINE(318)
		if (((Width == (int)0))){
			HX_STACK_LINE(319)
			if ((Animated)){
				HX_STACK_LINE(321)
				Width = this->_pixels->get_height();
			}
			else{
				HX_STACK_LINE(324)
				if (((this->flipped > (int)0))){
					HX_STACK_LINE(325)
					Width = this->_pixels->get_width();
				}
				else{
					HX_STACK_LINE(333)
					Width = this->_pixels->get_width();
				}
			}
		}
		HX_STACK_LINE(337)
		this->width = this->frameWidth = Width;
		HX_STACK_LINE(338)
		if (((Height == (int)0))){
			HX_STACK_LINE(339)
			if ((Animated)){
				HX_STACK_LINE(341)
				Height = ::Math_obj::floor(this->width);
			}
			else{
				HX_STACK_LINE(345)
				Height = this->_pixels->get_height();
			}
		}
		HX_STACK_LINE(351)
		if (((bool((Key != null())) && bool(((bool((Width != (int)0)) || bool((Height != (int)0)))))))){
			HX_STACK_LINE(352)
			hx::AddEq(Key,(((HX_CSTRING("FrameSize:") + Width) + HX_CSTRING("_")) + Height));
		}
		HX_STACK_LINE(355)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,Unique,Key,Width,Height);
		HX_STACK_LINE(356)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(359)
		this->height = this->frameHeight = Height;
		HX_STACK_LINE(360)
		this->resetHelpers();
		HX_STACK_LINE(361)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(362)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxSprite_obj,loadGraphic,return )

Void FlxSprite_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSprite::destroy","org/flixel/FlxSprite.hx",246);
		HX_STACK_THIS(this);
		HX_STACK_LINE(247)
		if (((this->_animations != null()))){
			HX_STACK_LINE(249)
			::org::flixel::system::FlxAnim a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(250)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(251)
			int l = this->_animations->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(252)
			while(((i < l))){
				HX_STACK_LINE(254)
				a = this->_animations->__get((i)++);
				HX_STACK_LINE(255)
				if (((a != null()))){
					HX_STACK_LINE(256)
					a->destroy();
				}
			}
			HX_STACK_LINE(260)
			this->_animations = null();
		}
		HX_STACK_LINE(263)
		this->_flashPoint = null();
		HX_STACK_LINE(264)
		this->_flashRect = null();
		HX_STACK_LINE(265)
		this->_flashRect2 = null();
		HX_STACK_LINE(266)
		this->_flashPointZero = null();
		HX_STACK_LINE(267)
		this->offset = null();
		HX_STACK_LINE(268)
		this->origin = null();
		HX_STACK_LINE(269)
		this->scale = null();
		HX_STACK_LINE(270)
		this->_curAnim = null();
		HX_STACK_LINE(271)
		this->_matrix = null();
		HX_STACK_LINE(272)
		this->_callback = null();
		HX_STACK_LINE(273)
		if (((this->framePixels != null()))){
			HX_STACK_LINE(274)
			this->framePixels->dispose();
		}
		HX_STACK_LINE(277)
		this->framePixels = null();
		HX_STACK_LINE(281)
		this->_blend = null();
		HX_STACK_LINE(283)
		this->super::destroy();
	}
return null();
}



FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(simpleRender,"simpleRender");
	HX_MARK_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_frameID,"_frameID");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_curFrame,"_curFrame");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_calculatedPixelsFacing,"_calculatedPixelsFacing");
	HX_MARK_MEMBER_NAME(_calculatedPixelsIndex,"_calculatedPixelsIndex");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(_blend,"_blend");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(facing,"facing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(simpleRender,"simpleRender");
	HX_VISIT_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_frameID,"_frameID");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_curFrame,"_curFrame");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_calculatedPixelsFacing,"_calculatedPixelsFacing");
	HX_VISIT_MEMBER_NAME(_calculatedPixelsIndex,"_calculatedPixelsIndex");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(_blend,"_blend");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return inCallProp ? get_blend() : blend; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"frame") ) { return inCallProp ? getFrame() : frame; }
		if (HX_FIELD_EQ(inName,"color") ) { return inCallProp ? getColor() : color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp ? getPixels() : pixels; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"_blend") ) { return _blend; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_pixels") ) { return _pixels; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"_frameID") ) { return _frameID; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return _curAnim; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setFacing") ) { return setFacing_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored_dyn(); }
		if (HX_FIELD_EQ(inName,"_callback") ) { return _callback; }
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return _curIndex; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { return _curFrame; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return randomFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		if (HX_FIELD_EQ(inName,"_animations") ) { return _animations; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { return inCallProp ? getSimpleRender() : simpleRender; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { return bakedRotation; }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onScreenSprite") ) { return onScreenSprite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"getSimpleRender") ) { return getSimpleRender_dyn(); }
		if (HX_FIELD_EQ(inName,"setAntialiasing") ) { return setAntialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setOriginToCorner") ) { return setOriginToCorner_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"simpleRenderSprite") ) { return simpleRenderSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addAnimationCallback") ) { return addAnimationCallback_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsIndex") ) { return _calculatedPixelsIndex; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsFacing") ) { return _calculatedPixelsFacing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp) return set_blend(inValue);blend=inValue.Cast< ::native::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return setAlpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp) return setFrame(inValue);frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return setColor(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp) return setPixels(inValue);pixels=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blend") ) { _blend=inValue.Cast< ::native::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp) return setFacing(inValue);facing=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::native::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_frameID") ) { _frameID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast< ::org::flixel::system::FlxAnim >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { _curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::native::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast< Array< ::org::flixel::system::FlxAnim > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { simpleRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return setAntialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { bakedRotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::native::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsIndex") ) { _calculatedPixelsIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsFacing") ) { _calculatedPixelsFacing=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("simpleRender"));
	outFields->push(HX_CSTRING("bakedRotation"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_frameID"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_flashPointZero"));
	outFields->push(HX_CSTRING("_flashRect2"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_pixels"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_frameTimer"));
	outFields->push(HX_CSTRING("_curIndex"));
	outFields->push(HX_CSTRING("_curFrame"));
	outFields->push(HX_CSTRING("_curAnim"));
	outFields->push(HX_CSTRING("_animations"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("framePixels"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("_calculatedPixelsFacing"));
	outFields->push(HX_CSTRING("_calculatedPixelsIndex"));
	outFields->push(HX_CSTRING("_blendInt"));
	outFields->push(HX_CSTRING("_blend"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("facing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("blend"),
	HX_CSTRING("simpleRenderSprite"),
	HX_CSTRING("getSimpleRender"),
	HX_CSTRING("simpleRender"),
	HX_CSTRING("bakedRotation"),
	HX_CSTRING("flipped"),
	HX_CSTRING("setAntialiasing"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("onScreenSprite"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("setColor"),
	HX_CSTRING("getColor"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("setFacing"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("pixels"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("centerOffsets"),
	HX_CSTRING("setOriginToCorner"),
	HX_CSTRING("randomFrame"),
	HX_CSTRING("play"),
	HX_CSTRING("addAnimationCallback"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("updateAnimation"),
	HX_CSTRING("fill"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("stamp"),
	HX_CSTRING("draw"),
	HX_CSTRING("isColored"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("_frameID"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_flashPointZero"),
	HX_CSTRING("_flashRect2"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_pixels"),
	HX_CSTRING("_color"),
	HX_CSTRING("_callback"),
	HX_CSTRING("_frameTimer"),
	HX_CSTRING("_curIndex"),
	HX_CSTRING("_curFrame"),
	HX_CSTRING("_curAnim"),
	HX_CSTRING("_animations"),
	HX_CSTRING("dirty"),
	HX_CSTRING("framePixels"),
	HX_CSTRING("frames"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("paused"),
	HX_CSTRING("finished"),
	HX_CSTRING("_calculatedPixelsFacing"),
	HX_CSTRING("_calculatedPixelsIndex"),
	HX_CSTRING("_blendInt"),
	HX_CSTRING("_blend"),
	HX_CSTRING("scale"),
	HX_CSTRING("offset"),
	HX_CSTRING("origin"),
	HX_CSTRING("frame"),
	HX_CSTRING("color"),
	HX_CSTRING("facing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxSprite"), hx::TCanCast< FlxSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSprite_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
