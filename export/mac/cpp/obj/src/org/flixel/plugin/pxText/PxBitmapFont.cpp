#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_HelperSymbol
#include <org/flixel/plugin/pxText/HelperSymbol.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxBitmapFont
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxFontSymbol
#include <org/flixel/plugin/pxText/PxFontSymbol.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace pxText{

Void PxBitmapFont_obj::__construct()
{
HX_STACK_PUSH("PxBitmapFont::new","org/flixel/plugin/pxText/PxBitmapFont.hx",58);
{
	HX_STACK_LINE(59)
	this->_maxHeight = (int)0;
	HX_STACK_LINE(60)
	this->_point = ::native::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(66)
	this->_bgTileID = (int)-1;
	HX_STACK_LINE(67)
	this->_glyphs = ::IntHash_obj::__new();
	HX_STACK_LINE(68)
	this->_num_letters = (int)0;
	HX_STACK_LINE(70)
	this->_atlasGlyphs = ::Hash_obj::__new();
	HX_STACK_LINE(71)
	this->_bgTiles = ::Hash_obj::__new();
}
;
	return null();
}

PxBitmapFont_obj::~PxBitmapFont_obj() { }

Dynamic PxBitmapFont_obj::__CreateEmpty() { return  new PxBitmapFont_obj; }
hx::ObjectPtr< PxBitmapFont_obj > PxBitmapFont_obj::__new()
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

Dynamic PxBitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

int PxBitmapFont_obj::get_numLetters( ){
	HX_STACK_PUSH("PxBitmapFont::get_numLetters","org/flixel/plugin/pxText/PxBitmapFont.hx",739);
	HX_STACK_THIS(this);
	HX_STACK_LINE(739)
	return this->_num_letters;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_numLetters,return )

::String PxBitmapFont_obj::get_bitmapDataKey( ){
	HX_STACK_PUSH("PxBitmapFont::get_bitmapDataKey","org/flixel/plugin/pxText/PxBitmapFont.hx",733);
	HX_STACK_THIS(this);
	HX_STACK_LINE(733)
	return this->_bitmapDataKey;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_bitmapDataKey,return )

::native::display::BitmapData PxBitmapFont_obj::get_pixels( ){
	HX_STACK_PUSH("PxBitmapFont::get_pixels","org/flixel/plugin/pxText/PxBitmapFont.hx",726);
	HX_STACK_THIS(this);
	HX_STACK_LINE(726)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_pixels,return )

int PxBitmapFont_obj::bgTileID( ::String AtlasName){
	HX_STACK_PUSH("PxBitmapFont::bgTileID","org/flixel/plugin/pxText/PxBitmapFont.hx",719);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AtlasName,"AtlasName");
	HX_STACK_LINE(719)
	return this->_bgTiles->get(AtlasName);
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,bgTileID,return )

int PxBitmapFont_obj::getFontHeight( ){
	HX_STACK_PUSH("PxBitmapFont::getFontHeight","org/flixel/plugin/pxText/PxBitmapFont.hx",707);
	HX_STACK_THIS(this);
	HX_STACK_LINE(707)
	return this->_maxHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,getFontHeight,return )

int PxBitmapFont_obj::getTextWidth( ::String pText,hx::Null< int >  __o_pLetterSpacing,hx::Null< Float >  __o_pFontScale){
int pLetterSpacing = __o_pLetterSpacing.Default(0);
Float pFontScale = __o_pFontScale.Default(1.0);
	HX_STACK_PUSH("PxBitmapFont::getTextWidth","org/flixel/plugin/pxText/PxBitmapFont.hx",669);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pText,"pText");
	HX_STACK_ARG(pLetterSpacing,"pLetterSpacing");
	HX_STACK_ARG(pFontScale,"pFontScale");
{
		HX_STACK_LINE(670)
		int w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(672)
		int textLength = pText.length;		HX_STACK_VAR(textLength,"textLength");
		HX_STACK_LINE(673)
		{
			HX_STACK_LINE(673)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = textLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(673)
			while(((_g1 < _g))){
				HX_STACK_LINE(673)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(675)
				int charCode = pText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(684)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(685)
					hx::AddEq(w,this->_glyphs->get(charCode)->__Field(HX_CSTRING("xadvance"),true));
				}
			}
		}
		HX_STACK_LINE(692)
		w = ::Math_obj::round((w * pFontScale));
		HX_STACK_LINE(694)
		if (((textLength > (int)1))){
			HX_STACK_LINE(695)
			hx::AddEq(w,(((textLength - (int)1)) * pLetterSpacing));
		}
		HX_STACK_LINE(699)
		return w;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,getTextWidth,return )

Void PxBitmapFont_obj::render( ::String atlasName,Array< Float > drawData,::String pText,int pColor,int pSecondColor,Float pAlpha,int pOffsetX,int pOffsetY,int pLetterSpacing,Float pScale,hx::Null< bool >  __o_pUseColor){
bool pUseColor = __o_pUseColor.Default(true);
	HX_STACK_PUSH("PxBitmapFont::render","org/flixel/plugin/pxText/PxBitmapFont.hx",589);
	HX_STACK_THIS(this);
	HX_STACK_ARG(atlasName,"atlasName");
	HX_STACK_ARG(drawData,"drawData");
	HX_STACK_ARG(pText,"pText");
	HX_STACK_ARG(pColor,"pColor");
	HX_STACK_ARG(pSecondColor,"pSecondColor");
	HX_STACK_ARG(pAlpha,"pAlpha");
	HX_STACK_ARG(pOffsetX,"pOffsetX");
	HX_STACK_ARG(pOffsetY,"pOffsetY");
	HX_STACK_ARG(pLetterSpacing,"pLetterSpacing");
	HX_STACK_ARG(pScale,"pScale");
	HX_STACK_ARG(pUseColor,"pUseColor");
{
		HX_STACK_LINE(592)
		Float colorMultiplier = 0.00392;		HX_STACK_VAR(colorMultiplier,"colorMultiplier");
		HX_STACK_LINE(593)
		Float red = colorMultiplier;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(594)
		Float green = colorMultiplier;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(595)
		Float blue = colorMultiplier;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(597)
		if ((pUseColor)){
			HX_STACK_LINE(599)
			red = (((int(pColor) >> int((int)16))) * colorMultiplier);
			HX_STACK_LINE(600)
			green = (((int((int(pColor) >> int((int)8))) & int((int)255))) * colorMultiplier);
			HX_STACK_LINE(601)
			blue = (((int(pColor) & int((int)255))) * colorMultiplier);
		}
		HX_STACK_LINE(605)
		hx::AndEq(pSecondColor,(int)16777215);
		HX_STACK_LINE(606)
		hx::MultEq(red,(int(pSecondColor) >> int((int)16)));
		HX_STACK_LINE(607)
		hx::MultEq(green,(int((int(pSecondColor) >> int((int)8))) & int((int)255)));
		HX_STACK_LINE(608)
		hx::MultEq(blue,(int(pSecondColor) & int((int)255)));
		HX_STACK_LINE(617)
		this->_point->x = pOffsetX;
		HX_STACK_LINE(618)
		this->_point->y = pOffsetY;
		HX_STACK_LINE(622)
		::org::flixel::plugin::pxText::PxFontSymbol glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(623)
		int glyphWidth;		HX_STACK_VAR(glyphWidth,"glyphWidth");
		HX_STACK_LINE(624)
		this->_glyphs = this->_atlasGlyphs->get(atlasName);
		HX_STACK_LINE(625)
		if (((this->_glyphs == null()))){
			HX_STACK_LINE(626)
			return null();
		}
		HX_STACK_LINE(631)
		{
			HX_STACK_LINE(631)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = pText.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(631)
			while(((_g1 < _g))){
				HX_STACK_LINE(631)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(633)
				int charCode = pText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(638)
				glyph = this->_glyphs->get(charCode);
				HX_STACK_LINE(639)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(646)
					glyphWidth = glyph->xadvance;
					HX_STACK_LINE(648)
					drawData->push(glyph->tileID);
					HX_STACK_LINE(649)
					drawData->push((this->_point->x + (glyph->xoffset * pScale)));
					HX_STACK_LINE(650)
					drawData->push((this->_point->y + (glyph->yoffset * pScale)));
					HX_STACK_LINE(651)
					drawData->push(red);
					HX_STACK_LINE(652)
					drawData->push(green);
					HX_STACK_LINE(653)
					drawData->push(blue);
					HX_STACK_LINE(655)
					hx::AddEq(this->_point->x,((glyphWidth * pScale) + pLetterSpacing));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(PxBitmapFont_obj,render,(void))

Void PxBitmapFont_obj::setGlyph( ::org::flixel::system::layer::Node node,int pCharID,::native::geom::Rectangle pRect,hx::Null< int >  __o_pOffsetX,hx::Null< int >  __o_pOffsetY,hx::Null< int >  __o_pAdvanceX){
int pOffsetX = __o_pOffsetX.Default(0);
int pOffsetY = __o_pOffsetY.Default(0);
int pAdvanceX = __o_pAdvanceX.Default(0);
	HX_STACK_PUSH("PxBitmapFont::setGlyph","org/flixel/plugin/pxText/PxBitmapFont.hx",555);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(pCharID,"pCharID");
	HX_STACK_ARG(pRect,"pRect");
	HX_STACK_ARG(pOffsetX,"pOffsetX");
	HX_STACK_ARG(pOffsetY,"pOffsetY");
	HX_STACK_ARG(pAdvanceX,"pAdvanceX");
{
		HX_STACK_LINE(556)
		int tileID = node->addTileRect(pRect,::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT);		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(558)
		::org::flixel::plugin::pxText::PxFontSymbol symbol = ::org::flixel::plugin::pxText::PxFontSymbol_obj::__new();		HX_STACK_VAR(symbol,"symbol");
		HX_STACK_LINE(559)
		symbol->tileID = tileID;
		HX_STACK_LINE(560)
		symbol->xoffset = pOffsetX;
		HX_STACK_LINE(561)
		symbol->yoffset = pOffsetY;
		HX_STACK_LINE(562)
		symbol->xadvance = pAdvanceX;
		HX_STACK_LINE(564)
		this->_glyphs->set(pCharID,symbol);
		HX_STACK_LINE(565)
		(this->_num_letters)++;
		HX_STACK_LINE(567)
		if ((((::Math_obj::floor(pRect->height) + pOffsetY) > this->_maxHeight))){
			HX_STACK_LINE(568)
			this->_maxHeight = (::Math_obj::floor(pRect->height) + pOffsetY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PxBitmapFont_obj,setGlyph,(void))

Void PxBitmapFont_obj::dispose( hx::Null< bool >  __o_total){
bool total = __o_total.Default(true);
	HX_STACK_PUSH("PxBitmapFont::dispose","org/flixel/plugin/pxText/PxBitmapFont.hx",483);
	HX_STACK_THIS(this);
	HX_STACK_ARG(total,"total");
{
		HX_STACK_LINE(496)
		this->_symbols = null();
		HX_STACK_LINE(497)
		this->_tileRects = null();
		HX_STACK_LINE(498)
		this->_pixels = null();
		HX_STACK_LINE(499)
		this->_bitmapDataKey = null();
		HX_STACK_LINE(500)
		this->_glyphs = null();
		HX_STACK_LINE(503)
		if ((total)){
			HX_STACK_LINE(505)
			this->_atlasGlyphs = null();
			HX_STACK_LINE(506)
			this->_bgTiles = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,dispose,(void))

::native::display::BitmapData PxBitmapFont_obj::prepareAngelCodeBitmapData( ::native::display::BitmapData pBitmapData,::Xml pXMLData,Array< ::org::flixel::plugin::pxText::HelperSymbol > pSymbols){
	HX_STACK_PUSH("PxBitmapFont::prepareAngelCodeBitmapData","org/flixel/plugin/pxText/PxBitmapFont.hx",365);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pXMLData,"pXMLData");
	HX_STACK_ARG(pSymbols,"pSymbols");
	HX_STACK_LINE(366)
	::Xml chars = null();		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(367)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(pXMLData->elements());  __it->hasNext(); ){
		::Xml node = __it->next();
		if (((node->getNodeName() == HX_CSTRING("font")))){
			HX_STACK_LINE(370)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
				::Xml nodeChild = __it->next();
				if (((nodeChild->getNodeName() == HX_CSTRING("chars")))){
					HX_STACK_LINE(375)
					chars = nodeChild;
					HX_STACK_LINE(376)
					break;
				}
;
			}
		}
;
	}
	HX_STACK_LINE(382)
	::org::flixel::plugin::pxText::HelperSymbol symbol;		HX_STACK_VAR(symbol,"symbol");
	HX_STACK_LINE(383)
	int maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(384)
	int maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(386)
	if (((chars != null()))){
		HX_STACK_LINE(387)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(chars->elements());  __it->hasNext(); ){
			::Xml node = __it->next();
			if (((node->getNodeName() == HX_CSTRING("char")))){
				HX_STACK_LINE(392)
				symbol = ::org::flixel::plugin::pxText::HelperSymbol_obj::__new();
				HX_STACK_LINE(393)
				symbol->x = ::Std_obj::parseInt(node->get(HX_CSTRING("x")));
				HX_STACK_LINE(394)
				symbol->y = ::Std_obj::parseInt(node->get(HX_CSTRING("y")));
				HX_STACK_LINE(395)
				symbol->width = ::Std_obj::parseInt(node->get(HX_CSTRING("width")));
				HX_STACK_LINE(396)
				symbol->height = ::Std_obj::parseInt(node->get(HX_CSTRING("height")));
				HX_STACK_LINE(397)
				symbol->xoffset = ::Std_obj::parseInt(node->get(HX_CSTRING("xoffset")));
				HX_STACK_LINE(398)
				symbol->yoffset = ::Std_obj::parseInt(node->get(HX_CSTRING("yoffset")));
				HX_STACK_LINE(399)
				symbol->xadvance = ::Std_obj::parseInt(node->get(HX_CSTRING("xadvance")));
				HX_STACK_LINE(400)
				symbol->charCode = ::Std_obj::parseInt(node->get(HX_CSTRING("id")));
				HX_STACK_LINE(402)
				pSymbols->push(symbol);
				HX_STACK_LINE(404)
				maxX = (symbol->x + symbol->width);
				HX_STACK_LINE(405)
				maxY = (symbol->y + symbol->height);
			}
;
		}
	}
	HX_STACK_LINE(410)
	int newWidth = pBitmapData->get_width();		HX_STACK_VAR(newWidth,"newWidth");
	HX_STACK_LINE(411)
	int newHeight = pBitmapData->get_height();		HX_STACK_VAR(newHeight,"newHeight");
	HX_STACK_LINE(413)
	if ((((pBitmapData->get_width() - (int)2) < maxX))){
		HX_STACK_LINE(414)
		hx::AddEq(newWidth,(int)2);
	}
	else{
		HX_STACK_LINE(417)
		if ((((pBitmapData->get_height() - (int)2) < maxY))){
			HX_STACK_LINE(418)
			hx::AddEq(newHeight,(int)2);
		}
	}
	HX_STACK_LINE(425)
	::native::display::BitmapData resultBitmapData = ::native::display::BitmapData_obj::__new(newWidth,newHeight,true,(int)0,null());		HX_STACK_VAR(resultBitmapData,"resultBitmapData");
	HX_STACK_LINE(428)
	resultBitmapData->copyPixels(pBitmapData,pBitmapData->get_rect(),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT,null(),null(),null());
	HX_STACK_LINE(433)
	resultBitmapData->setPixel32((resultBitmapData->get_width() - (int)1),(resultBitmapData->get_height() - (int)1),(int)-1);
	HX_STACK_LINE(436)
	return resultBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,prepareAngelCodeBitmapData,return )

::native::display::BitmapData PxBitmapFont_obj::preparePixelizerBitmapData( ::native::display::BitmapData pBitmapData,Array< ::native::geom::Rectangle > pRects){
	HX_STACK_PUSH("PxBitmapFont::preparePixelizerBitmapData","org/flixel/plugin/pxText/PxBitmapFont.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pRects,"pRects");
	HX_STACK_LINE(264)
	int bgColor = pBitmapData->getPixel((int)0,(int)0);		HX_STACK_VAR(bgColor,"bgColor");
	HX_STACK_LINE(265)
	int cy = (int)0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(266)
	int cx;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(268)
	while(((cy < pBitmapData->get_height()))){
		HX_STACK_LINE(270)
		int rowHeight = (int)0;		HX_STACK_VAR(rowHeight,"rowHeight");
		HX_STACK_LINE(271)
		cx = (int)0;
		HX_STACK_LINE(273)
		while(((cx < pBitmapData->get_width()))){
			HX_STACK_LINE(275)
			if (((::Std_obj::_int(pBitmapData->getPixel(cx,cy)) != bgColor))){
				HX_STACK_LINE(278)
				int gx = cx;		HX_STACK_VAR(gx,"gx");
				HX_STACK_LINE(279)
				int gy = cy;		HX_STACK_VAR(gy,"gy");
				HX_STACK_LINE(281)
				while(((::Std_obj::_int(pBitmapData->getPixel(gx,cy)) != bgColor))){
					HX_STACK_LINE(282)
					(gx)++;
				}
				HX_STACK_LINE(285)
				while(((::Std_obj::_int(pBitmapData->getPixel(cx,gy)) != bgColor))){
					HX_STACK_LINE(286)
					(gy)++;
				}
				HX_STACK_LINE(289)
				int gw = (gx - cx);		HX_STACK_VAR(gw,"gw");
				HX_STACK_LINE(290)
				int gh = (gy - cy);		HX_STACK_VAR(gh,"gh");
				HX_STACK_LINE(292)
				pRects->push(::native::geom::Rectangle_obj::__new(cx,cy,gw,gh));
				HX_STACK_LINE(295)
				if (((gh > rowHeight))){
					HX_STACK_LINE(296)
					rowHeight = gh;
				}
				HX_STACK_LINE(299)
				if (((gh > this->_maxHeight))){
					HX_STACK_LINE(300)
					this->_maxHeight = gh;
				}
				HX_STACK_LINE(305)
				hx::AddEq(cx,gw);
			}
			HX_STACK_LINE(308)
			(cx)++;
		}
		HX_STACK_LINE(311)
		hx::AddEq(cy,(rowHeight + (int)1));
	}
	HX_STACK_LINE(317)
	::native::display::BitmapData resultBitmapData = ::native::display::BitmapData_obj::__new((pBitmapData->get_width() + (int)2),pBitmapData->get_height(),true,(int)0,null());		HX_STACK_VAR(resultBitmapData,"resultBitmapData");
	HX_STACK_LINE(319)
	resultBitmapData->copyPixels(pBitmapData,pBitmapData->get_rect(),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT,null(),null(),null());
	HX_STACK_LINE(328)
	int pixelColor;		HX_STACK_VAR(pixelColor,"pixelColor");
	HX_STACK_LINE(329)
	int bgColor32 = pBitmapData->getPixel32((int)0,(int)0);		HX_STACK_VAR(bgColor32,"bgColor32");
	HX_STACK_LINE(332)
	cy = (int)0;
	HX_STACK_LINE(333)
	while(((cy < pBitmapData->get_height()))){
		HX_STACK_LINE(335)
		cx = (int)0;
		HX_STACK_LINE(336)
		while(((cx < pBitmapData->get_width()))){
			HX_STACK_LINE(338)
			pixelColor = pBitmapData->getPixel32(cx,cy);
			HX_STACK_LINE(345)
			if (((pixelColor == bgColor32))){
				HX_STACK_LINE(346)
				resultBitmapData->setPixel32(cx,cy,(int)0);
			}
			HX_STACK_LINE(350)
			(cx)++;
		}
		HX_STACK_LINE(352)
		(cy)++;
	}
	HX_STACK_LINE(356)
	resultBitmapData->setPixel32((resultBitmapData->get_width() - (int)1),(resultBitmapData->get_height() - (int)1),(int)-1);
	HX_STACK_LINE(361)
	return resultBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,preparePixelizerBitmapData,return )

Void PxBitmapFont_obj::reset( ){
{
		HX_STACK_PUSH("PxBitmapFont::reset","org/flixel/plugin/pxText/PxBitmapFont.hx",248);
		HX_STACK_THIS(this);
		HX_STACK_LINE(249)
		this->dispose(false);
		HX_STACK_LINE(250)
		this->_maxHeight = (int)0;
		HX_STACK_LINE(254)
		this->_glyphs = ::IntHash_obj::__new();
		HX_STACK_LINE(255)
		this->_bgTileID = (int)-1;
		HX_STACK_LINE(257)
		this->_symbols = null();
		HX_STACK_LINE(258)
		this->_tileRects = null();
		HX_STACK_LINE(259)
		this->_glyphString = HX_CSTRING("");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,reset,(void))

Void PxBitmapFont_obj::updateAtlasGlyphs( ::String AtlasName){
{
		HX_STACK_PUSH("PxBitmapFont::updateAtlasGlyphs","org/flixel/plugin/pxText/PxBitmapFont.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AtlasName,"AtlasName");
		HX_STACK_LINE(239)
		this->_atlasGlyphs->set(AtlasName,this->_glyphs);
		HX_STACK_LINE(240)
		this->_bgTiles->set(AtlasName,this->_bgTileID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,updateAtlasGlyphs,(void))

Void PxBitmapFont_obj::updateGlyphData( ::org::flixel::system::layer::Node node){
{
		HX_STACK_PUSH("PxBitmapFont::updateGlyphData","org/flixel/plugin/pxText/PxBitmapFont.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(141)
		this->_glyphs = ::IntHash_obj::__new();
		HX_STACK_LINE(143)
		::native::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(145)
		if (((this->_symbols != null()))){
			HX_STACK_LINE(147)
			this->_glyphString = HX_CSTRING("");
			HX_STACK_LINE(148)
			::native::geom::Point point = ::native::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(149)
			::native::display::BitmapData bd;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(150)
			::String charString;		HX_STACK_VAR(charString,"charString");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::org::flixel::plugin::pxText::HelperSymbol > _g1 = this->_symbols;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(152)
				while(((_g < _g1->length))){
					HX_STACK_LINE(152)
					::org::flixel::plugin::pxText::HelperSymbol symbol = _g1->__get(_g);		HX_STACK_VAR(symbol,"symbol");
					HX_STACK_LINE(152)
					++(_g);
					HX_STACK_LINE(154)
					rect = ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());
					HX_STACK_LINE(155)
					rect->x = symbol->x;
					HX_STACK_LINE(156)
					rect->y = symbol->y;
					HX_STACK_LINE(157)
					rect->width = symbol->width;
					HX_STACK_LINE(158)
					rect->height = symbol->height;
					HX_STACK_LINE(160)
					point->x = symbol->xoffset;
					HX_STACK_LINE(161)
					point->y = symbol->yoffset;
					HX_STACK_LINE(163)
					charString = ::String::fromCharCode(symbol->charCode);
					HX_STACK_LINE(164)
					hx::AddEq(this->_glyphString,charString);
					HX_STACK_LINE(166)
					int xadvance = symbol->xadvance;		HX_STACK_VAR(xadvance,"xadvance");
					HX_STACK_LINE(167)
					int charWidth = xadvance;		HX_STACK_VAR(charWidth,"charWidth");
					HX_STACK_LINE(169)
					if (((rect->width > xadvance))){
						HX_STACK_LINE(171)
						charWidth = symbol->width;
						HX_STACK_LINE(172)
						point->x = (int)0;
					}
					HX_STACK_LINE(190)
					if (((bool((charString != HX_CSTRING(" "))) && bool((charString != HX_CSTRING("")))))){
						HX_STACK_LINE(191)
						this->setGlyph(node,symbol->charCode,rect,::Math_obj::floor(point->x),::Math_obj::floor(point->y),charWidth);
					}
					else{
						HX_STACK_LINE(195)
						this->setGlyph(node,symbol->charCode,rect,::Math_obj::floor(point->x),(int)1,charWidth);
					}
				}
			}
			HX_STACK_LINE(202)
			this->_bgTileID = node->addTileRect(::native::geom::Rectangle_obj::__new((this->_pixels->get_width() - (int)1),(this->_pixels->get_height() - (int)1),(int)1,(int)1),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT);
			HX_STACK_LINE(204)
			this->updateAtlasGlyphs(node->atlas->name);
		}
		else{
			HX_STACK_LINE(207)
			if (((this->_tileRects != null()))){
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_tileRects->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(209)
					while(((_g1 < _g))){
						HX_STACK_LINE(209)
						int letterID = (_g1)++;		HX_STACK_VAR(letterID,"letterID");
						HX_STACK_LINE(211)
						rect = this->_tileRects->__get(letterID);
						HX_STACK_LINE(221)
						this->setGlyph(node,this->_glyphString.charCodeAt(letterID),rect,(int)0,(int)0,::Math_obj::floor(rect->width));
					}
				}
				HX_STACK_LINE(226)
				this->_bgTileID = node->addTileRect(::native::geom::Rectangle_obj::__new((this->_pixels->get_width() - (int)1),(this->_pixels->get_height() - (int)1),(int)1,(int)1),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT);
				HX_STACK_LINE(228)
				this->updateAtlasGlyphs(node->atlas->name);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,updateGlyphData,(void))

::org::flixel::plugin::pxText::PxBitmapFont PxBitmapFont_obj::loadAngelCode( ::native::display::BitmapData pBitmapData,::Xml pXMLData){
	HX_STACK_PUSH("PxBitmapFont::loadAngelCode","org/flixel/plugin/pxText/PxBitmapFont.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pXMLData,"pXMLData");
	HX_STACK_LINE(119)
	this->reset();
	HX_STACK_LINE(121)
	if (((bool((pBitmapData != null())) && bool((pXMLData != null()))))){
		HX_STACK_LINE(123)
		this->_symbols = Array_obj< ::org::flixel::plugin::pxText::HelperSymbol >::__new();
		HX_STACK_LINE(124)
		::native::display::BitmapData result = this->prepareAngelCodeBitmapData(pBitmapData,pXMLData,this->_symbols);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(125)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("font"));
		HX_STACK_LINE(126)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(result,false,false,this->_bitmapDataKey,null(),null());
	}
	HX_STACK_LINE(132)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadAngelCode,return )

::org::flixel::plugin::pxText::PxBitmapFont PxBitmapFont_obj::loadPixelizer( ::native::display::BitmapData pBitmapData,::String pLetters){
	HX_STACK_PUSH("PxBitmapFont::loadPixelizer","org/flixel/plugin/pxText/PxBitmapFont.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pLetters,"pLetters");
	HX_STACK_LINE(83)
	this->reset();
	HX_STACK_LINE(85)
	this->_glyphString = pLetters;
	HX_STACK_LINE(95)
	if (((pBitmapData != null()))){
		HX_STACK_LINE(97)
		this->_tileRects = Array_obj< ::native::geom::Rectangle >::__new();
		HX_STACK_LINE(98)
		::native::display::BitmapData result = this->preparePixelizerBitmapData(pBitmapData,this->_tileRects);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(99)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("font"));
		HX_STACK_LINE(100)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(result,false,false,this->_bitmapDataKey,null(),null());
		HX_STACK_LINE(101)
		::native::geom::Rectangle currRect;		HX_STACK_VAR(currRect,"currRect");
	}
	HX_STACK_LINE(108)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadPixelizer,return )

::Hash PxBitmapFont_obj::_storedFonts;

::native::geom::Point PxBitmapFont_obj::ZERO_POINT;

Void PxBitmapFont_obj::store( ::String pHandle,::org::flixel::plugin::pxText::PxBitmapFont pFont){
{
		HX_STACK_PUSH("PxBitmapFont::store","org/flixel/plugin/pxText/PxBitmapFont.hx",753);
		HX_STACK_ARG(pHandle,"pHandle");
		HX_STACK_ARG(pFont,"pFont");
		HX_STACK_LINE(753)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts->set(pHandle,pFont);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,store,(void))

::org::flixel::plugin::pxText::PxBitmapFont PxBitmapFont_obj::fetch( ::String pHandle){
	HX_STACK_PUSH("PxBitmapFont::fetch","org/flixel/plugin/pxText/PxBitmapFont.hx",763);
	HX_STACK_ARG(pHandle,"pHandle");
	HX_STACK_LINE(764)
	::org::flixel::plugin::pxText::PxBitmapFont f = ::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts->get(pHandle);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(765)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,fetch,return )

Void PxBitmapFont_obj::clearStorage( ){
{
		HX_STACK_PUSH("PxBitmapFont::clearStorage","org/flixel/plugin/pxText/PxBitmapFont.hx",769);
		HX_STACK_LINE(770)
		for(::cpp::FastIterator_obj< ::org::flixel::plugin::pxText::PxBitmapFont > *__it = ::cpp::CreateFastIterator< ::org::flixel::plugin::pxText::PxBitmapFont >(::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts->iterator());  __it->hasNext(); ){
			::org::flixel::plugin::pxText::PxBitmapFont font = __it->next();
			font->dispose(null());
		}
		HX_STACK_LINE(775)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts = ::Hash_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,clearStorage,(void))


PxBitmapFont_obj::PxBitmapFont_obj()
{
}

void PxBitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PxBitmapFont);
	HX_MARK_MEMBER_NAME(bitmapDataKey,"bitmapDataKey");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(numLetters,"numLetters");
	HX_MARK_MEMBER_NAME(_bitmapDataKey,"_bitmapDataKey");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_MEMBER_NAME(_symbols,"_symbols");
	HX_MARK_MEMBER_NAME(_tileRects,"_tileRects");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_glyphString,"_glyphString");
	HX_MARK_MEMBER_NAME(_bgTiles,"_bgTiles");
	HX_MARK_MEMBER_NAME(_atlasGlyphs,"_atlasGlyphs");
	HX_MARK_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_MARK_MEMBER_NAME(_num_letters,"_num_letters");
	HX_MARK_MEMBER_NAME(_glyphs,"_glyphs");
	HX_MARK_END_CLASS();
}

void PxBitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapDataKey,"bitmapDataKey");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(numLetters,"numLetters");
	HX_VISIT_MEMBER_NAME(_bitmapDataKey,"_bitmapDataKey");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
	HX_VISIT_MEMBER_NAME(_symbols,"_symbols");
	HX_VISIT_MEMBER_NAME(_tileRects,"_tileRects");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_glyphString,"_glyphString");
	HX_VISIT_MEMBER_NAME(_bgTiles,"_bgTiles");
	HX_VISIT_MEMBER_NAME(_atlasGlyphs,"_atlasGlyphs");
	HX_VISIT_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_VISIT_MEMBER_NAME(_num_letters,"_num_letters");
	HX_VISIT_MEMBER_NAME(_glyphs,"_glyphs");
}

Dynamic PxBitmapFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"store") ) { return store_dyn(); }
		if (HX_FIELD_EQ(inName,"fetch") ) { return fetch_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp ? get_pixels() : pixels; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_pixels") ) { return _pixels; }
		if (HX_FIELD_EQ(inName,"_glyphs") ) { return _glyphs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgTileID") ) { return bgTileID_dyn(); }
		if (HX_FIELD_EQ(inName,"setGlyph") ) { return setGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"_symbols") ) { return _symbols; }
		if (HX_FIELD_EQ(inName,"_bgTiles") ) { return _bgTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { return _bgTileID; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { return ZERO_POINT; }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"numLetters") ) { return inCallProp ? get_numLetters() : numLetters; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { return _tileRects; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { return _storedFonts; }
		if (HX_FIELD_EQ(inName,"clearStorage") ) { return clearStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return getTextWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { return _glyphString; }
		if (HX_FIELD_EQ(inName,"_atlasGlyphs") ) { return _atlasGlyphs; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { return _num_letters; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapDataKey") ) { return inCallProp ? get_bitmapDataKey() : bitmapDataKey; }
		if (HX_FIELD_EQ(inName,"getFontHeight") ) { return getFontHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAngelCode") ) { return loadAngelCode_dyn(); }
		if (HX_FIELD_EQ(inName,"loadPixelizer") ) { return loadPixelizer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numLetters") ) { return get_numLetters_dyn(); }
		if (HX_FIELD_EQ(inName,"_bitmapDataKey") ) { return _bitmapDataKey; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateGlyphData") ) { return updateGlyphData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_bitmapDataKey") ) { return get_bitmapDataKey_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAtlasGlyphs") ) { return updateAtlasGlyphs_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"prepareAngelCodeBitmapData") ) { return prepareAngelCodeBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"preparePixelizerBitmapData") ) { return preparePixelizerBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PxBitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphs") ) { _glyphs=inValue.Cast< ::IntHash >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_symbols") ) { _symbols=inValue.Cast< Array< ::org::flixel::plugin::pxText::HelperSymbol > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bgTiles") ) { _bgTiles=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { _bgTileID=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { ZERO_POINT=inValue.Cast< ::native::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { numLetters=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { _tileRects=inValue.Cast< Array< ::native::geom::Rectangle > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { _storedFonts=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { _glyphString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_atlasGlyphs") ) { _atlasGlyphs=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { _num_letters=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapDataKey") ) { bitmapDataKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bitmapDataKey") ) { _bitmapDataKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PxBitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapDataKey"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("numLetters"));
	outFields->push(HX_CSTRING("_bitmapDataKey"));
	outFields->push(HX_CSTRING("_pixels"));
	outFields->push(HX_CSTRING("_symbols"));
	outFields->push(HX_CSTRING("_tileRects"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_glyphString"));
	outFields->push(HX_CSTRING("_bgTiles"));
	outFields->push(HX_CSTRING("_atlasGlyphs"));
	outFields->push(HX_CSTRING("_bgTileID"));
	outFields->push(HX_CSTRING("_num_letters"));
	outFields->push(HX_CSTRING("_glyphs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_storedFonts"),
	HX_CSTRING("ZERO_POINT"),
	HX_CSTRING("store"),
	HX_CSTRING("fetch"),
	HX_CSTRING("clearStorage"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_numLetters"),
	HX_CSTRING("get_bitmapDataKey"),
	HX_CSTRING("bitmapDataKey"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("pixels"),
	HX_CSTRING("bgTileID"),
	HX_CSTRING("numLetters"),
	HX_CSTRING("getFontHeight"),
	HX_CSTRING("getTextWidth"),
	HX_CSTRING("render"),
	HX_CSTRING("setGlyph"),
	HX_CSTRING("dispose"),
	HX_CSTRING("prepareAngelCodeBitmapData"),
	HX_CSTRING("preparePixelizerBitmapData"),
	HX_CSTRING("reset"),
	HX_CSTRING("updateAtlasGlyphs"),
	HX_CSTRING("updateGlyphData"),
	HX_CSTRING("loadAngelCode"),
	HX_CSTRING("loadPixelizer"),
	HX_CSTRING("_bitmapDataKey"),
	HX_CSTRING("_pixels"),
	HX_CSTRING("_symbols"),
	HX_CSTRING("_tileRects"),
	HX_CSTRING("_point"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_glyphString"),
	HX_CSTRING("_bgTiles"),
	HX_CSTRING("_atlasGlyphs"),
	HX_CSTRING("_bgTileID"),
	HX_CSTRING("_num_letters"),
	HX_CSTRING("_glyphs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

Class PxBitmapFont_obj::__mClass;

void PxBitmapFont_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.pxText.PxBitmapFont"), hx::TCanCast< PxBitmapFont_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PxBitmapFont_obj::__boot()
{
	_storedFonts= ::Hash_obj::__new();
	ZERO_POINT= ::native::geom::Point_obj::__new(null(),null());
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace pxText
