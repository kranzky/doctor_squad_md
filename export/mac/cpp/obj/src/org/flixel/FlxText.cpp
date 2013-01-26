#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_BlendMode
#include <native/display/BlendMode.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
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
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_native_text_TextFormat
#include <native/text/TextFormat.h>
#endif
#ifndef INCLUDED_native_text_TextFormatAlign
#include <native/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
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
namespace org{
namespace flixel{

Void FlxText_obj::__construct(Float X,Float Y,int Width,::String Text,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_PUSH("FlxText::new","org/flixel/FlxText.hx",69);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(70)
	super::__construct(X,Y,null());
	HX_STACK_LINE(72)
	::String key = ::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(74)
	this->makeGraphic(Width,(int)1,(int)0,false,key);
	HX_STACK_LINE(79)
	if (((Text == null()))){
		HX_STACK_LINE(80)
		Text = HX_CSTRING("");
	}
	HX_STACK_LINE(83)
	this->_textField = ::native::text::TextField_obj::__new();
	HX_STACK_LINE(84)
	this->_textField->set_width(Width);
	HX_STACK_LINE(85)
	this->_textField->set_selectable(false);
	HX_STACK_LINE(86)
	this->_textField->set_multiline(true);
	HX_STACK_LINE(87)
	this->_textField->set_wordWrap(true);
	HX_STACK_LINE(88)
	this->_format = ::native::text::TextFormat_obj::__new(::org::flixel::FlxAssets_obj::nokiaFont,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(89)
	this->_formatAdjusted = ::native::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(90)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(91)
	this->_textField->set_text(Text);
	HX_STACK_LINE(96)
	if (((Text.length <= (int)0))){
		HX_STACK_LINE(97)
		this->_textField->set_height((int)1);
	}
	else{
		HX_STACK_LINE(101)
		this->_textField->set_height((int)10);
	}
	HX_STACK_LINE(105)
	this->_regen = true;
	HX_STACK_LINE(106)
	this->_shadow = (int)0;
	HX_STACK_LINE(107)
	this->_useShadow = false;
	HX_STACK_LINE(108)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(109)
	this->moves = false;
	HX_STACK_LINE(113)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(114)
		this->calcFrame(true);
	}
}
;
	return null();
}

FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(Float X,Float Y,int Width,::String Text,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(X,Y,Width,Text,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxText::updateFrameData","org/flixel/FlxText.hx",541);
		HX_STACK_THIS(this);
		HX_STACK_LINE(541)
		if (((bool((bool((this->_node != null())) && bool((this->frameWidth >= (int)1)))) && bool((this->frameHeight >= (int)1))))){
			HX_STACK_LINE(545)
			this->_framesData = this->_node->addSpriteFramesData(::Math_obj::floor(this->width),::Math_obj::floor(this->height),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(546)
			this->_frameID = this->_framesData->frameIDs->__get((int)0);
		}
	}
return null();
}


Void FlxText_obj::updateAtlasInfo( hx::Null< bool >  __o_updateAtlas){
bool updateAtlas = __o_updateAtlas.Default(false);
	HX_STACK_PUSH("FlxText::updateAtlasInfo","org/flixel/FlxText.hx",525);
	HX_STACK_THIS(this);
	HX_STACK_ARG(updateAtlas,"updateAtlas");
{
		HX_STACK_LINE(527)
		this->_atlas = ::org::flixel::FlxG_obj::getState()->getAtlasFor(this->_bitmapDataKey);
		HX_STACK_LINE(528)
		::native::display::BitmapData cachedBmd = ::org::flixel::FlxG_obj::_cache->get(this->_bitmapDataKey);		HX_STACK_VAR(cachedBmd,"cachedBmd");
		HX_STACK_LINE(529)
		if (((cachedBmd != this->_pixels))){
			HX_STACK_LINE(531)
			cachedBmd->dispose();
			HX_STACK_LINE(532)
			::org::flixel::FlxG_obj::_cache->set(this->_bitmapDataKey,this->_pixels);
			HX_STACK_LINE(533)
			this->_atlas->clearAndFillWith(this->_pixels);
		}
		HX_STACK_LINE(535)
		this->_node = this->_atlas->getNodeByKey(this->_bitmapDataKey);
		HX_STACK_LINE(536)
		this->updateFrameData();
	}
return null();
}


::org::flixel::system::layer::Atlas FlxText_obj::set_atlas( ::org::flixel::system::layer::Atlas value){
	HX_STACK_PUSH("FlxText::set_atlas","org/flixel/FlxText.hx",519);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(519)
	return value;
}


::String FlxText_obj::convertTextAlignmentFromString( ::String strAlign){
	HX_STACK_PUSH("FlxText::convertTextAlignmentFromString","org/flixel/FlxText.hx",509);
	HX_STACK_THIS(this);
	HX_STACK_ARG(strAlign,"strAlign");
	HX_STACK_LINE(509)
	return strAlign;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

::native::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_PUSH("FlxText::dtfCopy","org/flixel/FlxText.hx",479);
	HX_STACK_THIS(this);
	HX_STACK_LINE(480)
	::native::text::TextFormat defaultTextFormat = this->_textField->get_defaultTextFormat();		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(481)
	return ::native::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxText::calcFrame","org/flixel/FlxText.hx",386);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(386)
		if ((AreYouSure)){
			HX_STACK_LINE(390)
			this->_regen = true;
			HX_STACK_LINE(392)
			if ((this->_regen)){
				HX_STACK_LINE(395)
				this->height = this->_textField->get_textHeight();
				HX_STACK_LINE(396)
				hx::AddEq(this->height,(int)4);
				HX_STACK_LINE(398)
				this->_pixels = ::native::display::BitmapData_obj::__new(::Std_obj::_int(this->width),::Std_obj::_int(this->height),true,(int)0,null());
				HX_STACK_LINE(402)
				this->frameHeight = ::Std_obj::_int(this->height);
				HX_STACK_LINE(403)
				this->_textField->set_height((this->height * 1.2));
				HX_STACK_LINE(404)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(405)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(406)
				this->_flashRect->width = this->width;
				HX_STACK_LINE(407)
				this->_flashRect->height = this->height;
				HX_STACK_LINE(408)
				this->_regen = false;
			}
			else{
				HX_STACK_LINE(411)
				this->_pixels->fillRect(this->_flashRect,(int)0);
			}
			HX_STACK_LINE(419)
			if (((bool((bool((this->_textField != null())) && bool((this->_textField->get_text() != null())))) && bool((this->_textField->get_text().length > (int)0))))){
				HX_STACK_LINE(422)
				this->_formatAdjusted->font = this->_format->font;
				HX_STACK_LINE(423)
				this->_formatAdjusted->size = this->_format->size;
				HX_STACK_LINE(424)
				this->_formatAdjusted->color = this->_format->color;
				HX_STACK_LINE(425)
				this->_formatAdjusted->align = this->_format->align;
				HX_STACK_LINE(426)
				this->_matrix->identity();
				HX_STACK_LINE(431)
				if (((bool((this->_format->align == ::native::text::TextFormatAlign_obj::CENTER)) && bool((this->_textField->get_numLines() == (int)1))))){
					HX_STACK_LINE(434)
					this->_formatAdjusted->align = ::native::text::TextFormatAlign_obj::LEFT;
					HX_STACK_LINE(435)
					this->_textField->setTextFormat(this->_formatAdjusted,null(),null());
					HX_STACK_LINE(439)
					this->_matrix->translate(::Math_obj::floor((Float(((this->width - this->_textField->get_textWidth()))) / Float((int)2))),(int)0);
				}
				HX_STACK_LINE(443)
				if ((this->_useShadow)){
					HX_STACK_LINE(445)
					this->_formatAdjusted->color = this->_shadow;
					HX_STACK_LINE(446)
					this->_textField->setTextFormat(this->_formatAdjusted,null(),null());
					HX_STACK_LINE(447)
					this->_matrix->translate((int)1,(int)1);
					HX_STACK_LINE(448)
					this->_pixels->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
					HX_STACK_LINE(449)
					this->_matrix->translate((int)-1,(int)-1);
					HX_STACK_LINE(450)
					this->_formatAdjusted->color = this->_format->color;
					HX_STACK_LINE(451)
					this->_textField->setTextFormat(this->_formatAdjusted,null(),null());
				}
				HX_STACK_LINE(454)
				this->_pixels->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
				HX_STACK_LINE(455)
				this->_textField->setTextFormat(this->_format,null(),null());
			}
			HX_STACK_LINE(458)
			this->updateAtlasInfo(null());
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				::org::flixel::FlxPoint _this = this->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(469)
				_this->x = (this->frameWidth * 0.5);
				HX_STACK_LINE(469)
				_this->y = (this->frameHeight * 0.5);
				HX_STACK_LINE(469)
				_this;
			}
		}
	}
return null();
}


bool FlxText_obj::set_useShadow( bool value){
	HX_STACK_PUSH("FlxText::set_useShadow","org/flixel/FlxText.hx",365);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(366)
	if (((value != this->_useShadow))){
		HX_STACK_LINE(368)
		this->_useShadow = value;
		HX_STACK_LINE(372)
		this->calcFrame(true);
	}
	HX_STACK_LINE(375)
	return this->_useShadow;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_useShadow,return )

bool FlxText_obj::get_useShadow( ){
	HX_STACK_PUSH("FlxText::get_useShadow","org/flixel/FlxText.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_LINE(360)
	return this->_useShadow;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_useShadow,return )

int FlxText_obj::setShadow( int Color){
	HX_STACK_PUSH("FlxText::setShadow","org/flixel/FlxText.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(350)
	this->_shadow = Color;
	HX_STACK_LINE(354)
	this->calcFrame(true);
	HX_STACK_LINE(356)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setShadow,return )

int FlxText_obj::getShadow( ){
	HX_STACK_PUSH("FlxText::getShadow","org/flixel/FlxText.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_LINE(337)
	return this->_shadow;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getShadow,return )

::String FlxText_obj::setAlignment( ::String Alignment){
	HX_STACK_PUSH("FlxText::setAlignment","org/flixel/FlxText.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_LINE(318)
	this->_format->align = this->convertTextAlignmentFromString(Alignment);
	HX_STACK_LINE(319)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(320)
	this->_textField->setTextFormat(this->_format,null(),null());
	HX_STACK_LINE(324)
	this->calcFrame(true);
	HX_STACK_LINE(326)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setAlignment,return )

::String FlxText_obj::getAlignment( ){
	HX_STACK_PUSH("FlxText::getAlignment","org/flixel/FlxText.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return hx::TCast< String >::cast(this->_format->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getAlignment,return )

::String FlxText_obj::setFont( ::String Font){
	HX_STACK_PUSH("FlxText::setFont","org/flixel/FlxText.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(291)
	this->_format->font = Font;
	HX_STACK_LINE(292)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(293)
	this->_textField->setTextFormat(this->_format,null(),null());
	HX_STACK_LINE(294)
	this->_regen = true;
	HX_STACK_LINE(298)
	this->calcFrame(true);
	HX_STACK_LINE(300)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setFont,return )

::String FlxText_obj::getFont( ){
	HX_STACK_PUSH("FlxText::getFont","org/flixel/FlxText.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_LINE(282)
	return this->_format->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getFont,return )

int FlxText_obj::setColor( int Color){
	HX_STACK_PUSH("FlxText::setColor","org/flixel/FlxText.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(263)
	this->_format->color = Color;
	HX_STACK_LINE(265)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(266)
	this->_textField->setTextFormat(this->_format,null(),null());
	HX_STACK_LINE(267)
	this->_regen = true;
	HX_STACK_LINE(271)
	this->calcFrame(true);
	HX_STACK_LINE(273)
	return Color;
}


int FlxText_obj::getColor( ){
	HX_STACK_PUSH("FlxText::getColor","org/flixel/FlxText.hx",242);
	HX_STACK_THIS(this);
	HX_STACK_LINE(242)
	return this->_format->color;
}


Float FlxText_obj::setSize( Float Size){
	HX_STACK_PUSH("FlxText::setSize","org/flixel/FlxText.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(220)
	this->_format->size = Size;
	HX_STACK_LINE(221)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(222)
	this->_textField->setTextFormat(this->_format,null(),null());
	HX_STACK_LINE(223)
	this->_regen = true;
	HX_STACK_LINE(227)
	this->calcFrame(true);
	HX_STACK_LINE(229)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setSize,return )

Float FlxText_obj::getSize( ){
	HX_STACK_PUSH("FlxText::getSize","org/flixel/FlxText.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	return this->_format->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getSize,return )

::String FlxText_obj::setText( ::String Text){
	HX_STACK_PUSH("FlxText::setText","org/flixel/FlxText.hx",190);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_LINE(191)
	::String ot = this->_textField->get_text();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(192)
	this->_textField->set_text(Text);
	HX_STACK_LINE(193)
	if (((this->_textField->get_text() != ot))){
		HX_STACK_LINE(195)
		this->_regen = true;
		HX_STACK_LINE(199)
		this->calcFrame(true);
	}
	HX_STACK_LINE(202)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setText,return )

::String FlxText_obj::getText( ){
	HX_STACK_PUSH("FlxText::getText","org/flixel/FlxText.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(182)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getText,return )

::org::flixel::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_ShadowColor,hx::Null< bool >  __o_UseShadow){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int ShadowColor = __o_ShadowColor.Default(0);
bool UseShadow = __o_UseShadow.Default(false);
	HX_STACK_PUSH("FlxText::setFormat","org/flixel/FlxText.hx",150);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(ShadowColor,"ShadowColor");
	HX_STACK_ARG(UseShadow,"UseShadow");
{
		HX_STACK_LINE(151)
		if (((Font == null()))){
			HX_STACK_LINE(152)
			Font = ::org::flixel::FlxAssets_obj::nokiaFont;
		}
		HX_STACK_LINE(159)
		this->_format->font = Font;
		HX_STACK_LINE(160)
		this->_format->size = Size;
		HX_STACK_LINE(161)
		this->_format->color = Color;
		HX_STACK_LINE(162)
		this->_format->align = this->convertTextAlignmentFromString(Alignment);
		HX_STACK_LINE(163)
		this->_textField->set_defaultTextFormat(this->_format);
		HX_STACK_LINE(164)
		this->_textField->setTextFormat(this->_format,null(),null());
		HX_STACK_LINE(165)
		this->_shadow = ShadowColor;
		HX_STACK_LINE(166)
		this->_useShadow = UseShadow;
		HX_STACK_LINE(167)
		this->_regen = true;
		HX_STACK_LINE(171)
		this->calcFrame(true);
		HX_STACK_LINE(173)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxText_obj,setFormat,return )

Void FlxText_obj::destroy( ){
{
		HX_STACK_PUSH("FlxText::destroy","org/flixel/FlxText.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_LINE(125)
		if (((this->_pixels != null()))){
			HX_STACK_LINE(126)
			this->_pixels->dispose();
		}
		HX_STACK_LINE(129)
		this->_textField = null();
		HX_STACK_LINE(130)
		this->_format = null();
		HX_STACK_LINE(131)
		this->_formatAdjusted = null();
		HX_STACK_LINE(132)
		this->super::destroy();
	}
return null();
}



FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(alignment,"alignment");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_useShadow,"_useShadow");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	HX_MARK_MEMBER_NAME(useShadow,"useShadow");
	HX_MARK_MEMBER_NAME(shadow,"shadow");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alignment,"alignment");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_useShadow,"_useShadow");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	HX_VISIT_MEMBER_NAME(useShadow,"useShadow");
	HX_VISIT_MEMBER_NAME(shadow,"shadow");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return inCallProp ? getFont() : font; }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp ? getSize() : size; }
		if (HX_FIELD_EQ(inName,"text") ) { return inCallProp ? getText() : text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		if (HX_FIELD_EQ(inName,"shadow") ) { return inCallProp ? getShadow() : shadow; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return getSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_atlas") ) { return set_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setShadow") ) { return setShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"getShadow") ) { return getShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return inCallProp ? getAlignment() : alignment; }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"useShadow") ) { return inCallProp ? get_useShadow() : useShadow; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_useShadow") ) { return _useShadow; }
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setAlignment") ) { return setAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"getAlignment") ) { return getAlignment_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_useShadow") ) { return set_useShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useShadow") ) { return get_useShadow_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAtlasInfo") ) { return updateAtlasInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return setFont(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return setSize(inValue);size=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return setText(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow") ) { if (inCallProp) return setShadow(inValue);shadow=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::native::text::TextFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp) return setAlignment(inValue);alignment=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useShadow") ) { if (inCallProp) return set_useShadow(inValue);useShadow=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_useShadow") ) { _useShadow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::native::text::TextField >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::native::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("_useShadow"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_regen"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_textField"));
	outFields->push(HX_CSTRING("useShadow"));
	outFields->push(HX_CSTRING("shadow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("updateAtlasInfo"),
	HX_CSTRING("set_atlas"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("set_useShadow"),
	HX_CSTRING("get_useShadow"),
	HX_CSTRING("setShadow"),
	HX_CSTRING("getShadow"),
	HX_CSTRING("setAlignment"),
	HX_CSTRING("getAlignment"),
	HX_CSTRING("alignment"),
	HX_CSTRING("setFont"),
	HX_CSTRING("getFont"),
	HX_CSTRING("font"),
	HX_CSTRING("setColor"),
	HX_CSTRING("getColor"),
	HX_CSTRING("setSize"),
	HX_CSTRING("getSize"),
	HX_CSTRING("size"),
	HX_CSTRING("setText"),
	HX_CSTRING("getText"),
	HX_CSTRING("text"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_useShadow"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_regen"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_format"),
	HX_CSTRING("_textField"),
	HX_CSTRING("useShadow"),
	HX_CSTRING("shadow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxText_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
