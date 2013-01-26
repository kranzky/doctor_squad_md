#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_RectanglePointPair
#include <org/flixel/system/layer/RectanglePointPair.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void TileSheetData_obj::__construct(::native::display::Tilesheet tileSheet)
{
HX_STACK_PUSH("TileSheetData::new","org/flixel/system/layer/TileSheetData.hx",106);
{
	HX_STACK_LINE(107)
	this->tileSheet = tileSheet;
	HX_STACK_LINE(108)
	this->pairsData = Array_obj< ::org::flixel::system::layer::RectanglePointPair >::__new();
	HX_STACK_LINE(109)
	this->flxSpriteFrames = Array_obj< ::org::flixel::system::layer::FlxSpriteFrames >::__new();
}
;
	return null();
}

TileSheetData_obj::~TileSheetData_obj() { }

Dynamic TileSheetData_obj::__CreateEmpty() { return  new TileSheetData_obj; }
hx::ObjectPtr< TileSheetData_obj > TileSheetData_obj::__new(::native::display::Tilesheet tileSheet)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(tileSheet);
	return result;}

Dynamic TileSheetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TileSheetData_obj::destroy( ){
{
		HX_STACK_PUSH("TileSheetData::destroy","org/flixel/system/layer/TileSheetData.hx",272);
		HX_STACK_THIS(this);
		HX_STACK_LINE(273)
		this->tileSheet->nmeBitmap = null();
		HX_STACK_LINE(274)
		this->tileSheet = null();
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::layer::RectanglePointPair > _g1 = this->pairsData;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(276)
			while(((_g < _g1->length))){
				HX_STACK_LINE(276)
				::org::flixel::system::layer::RectanglePointPair pair = _g1->__get(_g);		HX_STACK_VAR(pair,"pair");
				HX_STACK_LINE(276)
				++(_g);
				HX_STACK_LINE(278)
				pair->destroy();
			}
		}
		HX_STACK_LINE(280)
		this->pairsData = null();
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::layer::FlxSpriteFrames > _g1 = this->flxSpriteFrames;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(282)
			while(((_g < _g1->length))){
				HX_STACK_LINE(282)
				::org::flixel::system::layer::FlxSpriteFrames spriteData = _g1->__get(_g);		HX_STACK_VAR(spriteData,"spriteData");
				HX_STACK_LINE(282)
				++(_g);
				HX_STACK_LINE(284)
				spriteData->destroy();
			}
		}
		HX_STACK_LINE(286)
		this->flxSpriteFrames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroy,(void))

int TileSheetData_obj::getTileRectID( ::native::geom::Rectangle rect,::native::geom::Point point){
	HX_STACK_PUSH("TileSheetData::getTileRectID","org/flixel/system/layer/TileSheetData.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(251)
	::org::flixel::system::layer::RectanglePointPair pair;		HX_STACK_VAR(pair,"pair");
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->pairsData->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		while(((_g1 < _g))){
			HX_STACK_LINE(252)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(254)
			pair = this->pairsData->__get(i);
			HX_STACK_LINE(255)
			if ((pair->rect->equals(rect))){
				HX_STACK_LINE(256)
				if (((bool((bool((pair->point != null())) && bool((point != null())))) && bool(pair->point->equals(point))))){
					HX_STACK_LINE(258)
					return i;
				}
				else{
					HX_STACK_LINE(261)
					if (((bool((pair->point == null())) && bool((point == null()))))){
						HX_STACK_LINE(262)
						return i;
					}
				}
			}
		}
	}
	HX_STACK_LINE(268)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getTileRectID,return )

bool TileSheetData_obj::containsTileRect( ::native::geom::Rectangle rect,::native::geom::Point point){
	HX_STACK_PUSH("TileSheetData::containsTileRect","org/flixel/system/layer/TileSheetData.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(228)
	{
		HX_STACK_LINE(228)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::RectanglePointPair > _g1 = this->pairsData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		while(((_g < _g1->length))){
			HX_STACK_LINE(228)
			::org::flixel::system::layer::RectanglePointPair pair = _g1->__get(_g);		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(228)
			++(_g);
			HX_STACK_LINE(230)
			if ((pair->rect->equals(rect))){
				HX_STACK_LINE(231)
				if (((bool((bool((pair->point != null())) && bool((point != null())))) && bool(pair->point->equals(point))))){
					HX_STACK_LINE(233)
					return true;
				}
				else{
					HX_STACK_LINE(236)
					if (((bool((pair->point == null())) && bool((point == null()))))){
						HX_STACK_LINE(237)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(243)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,containsTileRect,return )

int TileSheetData_obj::addTileRect( ::native::geom::Rectangle rect,::native::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addTileRect","org/flixel/system/layer/TileSheetData.hx",212);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(213)
	if ((this->containsTileRect(rect,point))){
		HX_STACK_LINE(214)
		return this->getTileRectID(rect,point);
	}
	HX_STACK_LINE(218)
	this->tileSheet->addTileRect(rect,point);
	HX_STACK_LINE(219)
	this->pairsData->push(::org::flixel::system::layer::RectanglePointPair_obj::__new(rect,point));
	HX_STACK_LINE(220)
	return (this->pairsData->length - (int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addTileRect,return )

int TileSheetData_obj::getIDforSpriteFrameData( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::getIDforSpriteFrameData","org/flixel/system/layer/TileSheetData.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(194)
	::org::flixel::system::layer::FlxSpriteFrames spriteData;		HX_STACK_VAR(spriteData,"spriteData");
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->flxSpriteFrames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		while(((_g1 < _g))){
			HX_STACK_LINE(195)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(197)
			spriteData = this->flxSpriteFrames->__get(i);
			HX_STACK_LINE(198)
			if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((spriteData->width == width)) && bool((spriteData->height == height)))) && bool((spriteData->startX == startX)))) && bool((spriteData->startY == startY)))) && bool((spriteData->endX == endX)))) && bool((spriteData->endY == endY)))) && bool((spriteData->xSpacing == xSpacing)))) && bool((spriteData->ySpacing == ySpacing)))) && bool((spriteData->pointX == pointX)))) && bool((spriteData->pointY == pointY))))){
				HX_STACK_LINE(199)
				return i;
			}
		}
	}
	HX_STACK_LINE(204)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,getIDforSpriteFrameData,return )

bool TileSheetData_obj::containsSpriteFrameData( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::containsSpriteFrameData","org/flixel/system/layer/TileSheetData.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::FlxSpriteFrames > _g1 = this->flxSpriteFrames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(181)
		while(((_g < _g1->length))){
			HX_STACK_LINE(181)
			::org::flixel::system::layer::FlxSpriteFrames spriteData = _g1->__get(_g);		HX_STACK_VAR(spriteData,"spriteData");
			HX_STACK_LINE(181)
			++(_g);
			HX_STACK_LINE(183)
			if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((spriteData->width == width)) && bool((spriteData->height == height)))) && bool((spriteData->startX == startX)))) && bool((spriteData->startY == startY)))) && bool((spriteData->endX == endX)))) && bool((spriteData->endY == endY)))) && bool((spriteData->xSpacing == xSpacing)))) && bool((spriteData->ySpacing == ySpacing)))) && bool((spriteData->pointX == pointX)))) && bool((spriteData->pointY == pointY))))){
				HX_STACK_LINE(184)
				return true;
			}
		}
	}
	HX_STACK_LINE(189)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,containsSpriteFrameData,return )

::org::flixel::system::layer::FlxSpriteFrames TileSheetData_obj::addSpriteFramesData( int width,int height,::native::geom::Point origin,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_endX,hx::Null< int >  __o_endY,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int endX = __o_endX.Default(0);
int endY = __o_endY.Default(0);
int xSpacing = __o_xSpacing.Default(0);
int ySpacing = __o_ySpacing.Default(0);
	HX_STACK_PUSH("TileSheetData::addSpriteFramesData","org/flixel/system/layer/TileSheetData.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(origin,"origin");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
{
		HX_STACK_LINE(120)
		int bitmapWidth = this->tileSheet->nmeBitmap->get_width();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(121)
		int bitmapHeight = this->tileSheet->nmeBitmap->get_height();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(123)
		if (((endX == (int)0))){
			HX_STACK_LINE(124)
			endX = bitmapWidth;
		}
		HX_STACK_LINE(127)
		if (((endY == (int)0))){
			HX_STACK_LINE(128)
			endY = bitmapHeight;
		}
		HX_STACK_LINE(132)
		Float pointX = (0.5 * width);		HX_STACK_VAR(pointX,"pointX");
		HX_STACK_LINE(133)
		Float pointY = (0.5 * height);		HX_STACK_VAR(pointY,"pointY");
		HX_STACK_LINE(135)
		if (((origin != null()))){
			HX_STACK_LINE(137)
			pointX = origin->x;
			HX_STACK_LINE(138)
			pointY = origin->y;
		}
		HX_STACK_LINE(141)
		if ((this->containsSpriteFrameData(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY))){
			HX_STACK_LINE(143)
			int id = this->getIDforSpriteFrameData(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(144)
			return this->flxSpriteFrames->__get(id);
		}
		HX_STACK_LINE(147)
		int numRows = ::Math_obj::floor((Float(((endY - startY))) / Float(((height + ySpacing)))));		HX_STACK_VAR(numRows,"numRows");
		HX_STACK_LINE(148)
		int numCols = ::Math_obj::floor((Float(((endX - startX))) / Float(((width + xSpacing)))));		HX_STACK_VAR(numCols,"numCols");
		HX_STACK_LINE(150)
		::native::geom::Point tempPoint = origin;		HX_STACK_VAR(tempPoint,"tempPoint");
		HX_STACK_LINE(151)
		if (((origin == null()))){
			HX_STACK_LINE(152)
			tempPoint = ::native::geom::Point_obj::__new(pointX,pointY);
		}
		HX_STACK_LINE(156)
		::org::flixel::system::layer::FlxSpriteFrames spriteData = ::org::flixel::system::layer::FlxSpriteFrames_obj::__new(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY);		HX_STACK_VAR(spriteData,"spriteData");
		HX_STACK_LINE(158)
		::native::geom::Rectangle tempRect;		HX_STACK_VAR(tempRect,"tempRect");
		HX_STACK_LINE(159)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(161)
		int spacedWidth = (width + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
		HX_STACK_LINE(162)
		int spacedHeight = (height + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = numRows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			while(((_g1 < _g))){
				HX_STACK_LINE(164)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = numCols;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(166)
					while(((_g3 < _g2))){
						HX_STACK_LINE(166)
						int i = (_g3)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(168)
						tempRect = ::native::geom::Rectangle_obj::__new((startX + (i * spacedWidth)),(startY + (j * spacedHeight)),width,height);
						HX_STACK_LINE(169)
						tileID = this->addTileRect(tempRect,tempPoint);
						HX_STACK_LINE(170)
						spriteData->frameIDs->push(tileID);
					}
				}
			}
		}
		HX_STACK_LINE(174)
		spriteData->halfFrameNumber = ::Math_obj::floor((0.5 * spriteData->frameIDs->length));
		HX_STACK_LINE(175)
		this->flxSpriteFrames->push(spriteData);
		HX_STACK_LINE(176)
		return spriteData;
	}
}


HX_DEFINE_DYNAMIC_FUNC9(TileSheetData_obj,addSpriteFramesData,return )

Array< ::org::flixel::system::layer::TileSheetData > TileSheetData_obj::tileSheetData;

int TileSheetData_obj::_DRAWCALLS;

::org::flixel::system::layer::TileSheetData TileSheetData_obj::addTileSheet( ::native::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::addTileSheet","org/flixel/system/layer/TileSheetData.hx",26);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(27)
	::org::flixel::system::layer::TileSheetData tempTileSheetData;		HX_STACK_VAR(tempTileSheetData,"tempTileSheetData");
	HX_STACK_LINE(29)
	if ((::org::flixel::system::layer::TileSheetData_obj::containsTileSheet(bitmapData))){
		HX_STACK_LINE(31)
		tempTileSheetData = ::org::flixel::system::layer::TileSheetData_obj::getTileSheet(bitmapData);
		HX_STACK_LINE(32)
		return ::org::flixel::system::layer::TileSheetData_obj::getTileSheet(bitmapData);
	}
	HX_STACK_LINE(35)
	tempTileSheetData = ::org::flixel::system::layer::TileSheetData_obj::__new(::native::display::Tilesheet_obj::__new(bitmapData));
	HX_STACK_LINE(36)
	::org::flixel::system::layer::TileSheetData_obj::tileSheetData->push(tempTileSheetData);
	HX_STACK_LINE(37)
	return tempTileSheetData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,addTileSheet,return )

bool TileSheetData_obj::containsTileSheet( ::native::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::containsTileSheet","org/flixel/system/layer/TileSheetData.hx",41);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::TileSheetData > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		while(((_g < _g1->length))){
			HX_STACK_LINE(42)
			::org::flixel::system::layer::TileSheetData tsd = _g1->__get(_g);		HX_STACK_VAR(tsd,"tsd");
			HX_STACK_LINE(42)
			++(_g);
			HX_STACK_LINE(44)
			if (((tsd->tileSheet->nmeBitmap == bitmapData))){
				HX_STACK_LINE(45)
				return true;
			}
		}
	}
	HX_STACK_LINE(49)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsTileSheet,return )

::org::flixel::system::layer::TileSheetData TileSheetData_obj::getTileSheet( ::native::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::getTileSheet","org/flixel/system/layer/TileSheetData.hx",53);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::TileSheetData > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		while(((_g < _g1->length))){
			HX_STACK_LINE(54)
			::org::flixel::system::layer::TileSheetData tsd = _g1->__get(_g);		HX_STACK_VAR(tsd,"tsd");
			HX_STACK_LINE(54)
			++(_g);
			HX_STACK_LINE(56)
			if (((tsd->tileSheet->nmeBitmap == bitmapData))){
				HX_STACK_LINE(57)
				return tsd;
			}
		}
	}
	HX_STACK_LINE(61)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getTileSheet,return )

Void TileSheetData_obj::removeTileSheet( ::org::flixel::system::layer::TileSheetData tileSheetObj){
{
		HX_STACK_PUSH("TileSheetData::removeTileSheet","org/flixel/system/layer/TileSheetData.hx",65);
		HX_STACK_ARG(tileSheetObj,"tileSheetObj");
		HX_STACK_LINE(66)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		while(((_g1 < _g))){
			HX_STACK_LINE(66)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(68)
			if (((::org::flixel::system::layer::TileSheetData_obj::tileSheetData->__get(i) == tileSheetObj))){
				HX_STACK_LINE(71)
				::org::flixel::system::layer::TileSheetData_obj::tileSheetData[i] = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData->__get((::org::flixel::system::layer::TileSheetData_obj::tileSheetData->length - (int)1));
				HX_STACK_LINE(72)
				::org::flixel::system::layer::TileSheetData_obj::tileSheetData->pop();
				HX_STACK_LINE(74)
				tileSheetObj->destroy();
				HX_STACK_LINE(75)
				return null();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,removeTileSheet,(void))

Void TileSheetData_obj::clear( ){
{
		HX_STACK_PUSH("TileSheetData::clear","org/flixel/system/layer/TileSheetData.hx",81);
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::layer::TileSheetData > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(82)
			while(((_g < _g1->length))){
				HX_STACK_LINE(82)
				::org::flixel::system::layer::TileSheetData dataObject = _g1->__get(_g);		HX_STACK_VAR(dataObject,"dataObject");
				HX_STACK_LINE(82)
				++(_g);
				HX_STACK_LINE(84)
				dataObject->destroy();
			}
		}
		HX_STACK_LINE(86)
		::org::flixel::system::layer::TileSheetData_obj::tileSheetData = Array_obj< ::org::flixel::system::layer::TileSheetData >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,clear,(void))


TileSheetData_obj::TileSheetData_obj()
{
}

void TileSheetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetData);
	HX_MARK_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_MARK_MEMBER_NAME(pairsData,"pairsData");
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_END_CLASS();
}

void TileSheetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_VISIT_MEMBER_NAME(pairsData,"pairsData");
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
}

Dynamic TileSheetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pairsData") ) { return pairsData; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { return _DRAWCALLS; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTileSheet") ) { return addTileSheet_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileSheet") ) { return getTileSheet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileSheetData") ) { return tileSheetData; }
		if (HX_FIELD_EQ(inName,"getTileRectID") ) { return getTileRectID_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeTileSheet") ) { return removeTileSheet_dyn(); }
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { return flxSpriteFrames; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"containsTileRect") ) { return containsTileRect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsTileSheet") ) { return containsTileSheet_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteFramesData") ) { return addSpriteFramesData_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getIDforSpriteFrameData") ) { return getIDforSpriteFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"containsSpriteFrameData") ) { return containsSpriteFrameData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"pairsData") ) { pairsData=inValue.Cast< Array< ::org::flixel::system::layer::RectanglePointPair > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::native::display::Tilesheet >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { _DRAWCALLS=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileSheetData") ) { tileSheetData=inValue.Cast< Array< ::org::flixel::system::layer::TileSheetData > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { flxSpriteFrames=inValue.Cast< Array< ::org::flixel::system::layer::FlxSpriteFrames > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("flxSpriteFrames"));
	outFields->push(HX_CSTRING("pairsData"));
	outFields->push(HX_CSTRING("tileSheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tileSheetData"),
	HX_CSTRING("_DRAWCALLS"),
	HX_CSTRING("addTileSheet"),
	HX_CSTRING("containsTileSheet"),
	HX_CSTRING("getTileSheet"),
	HX_CSTRING("removeTileSheet"),
	HX_CSTRING("clear"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("getTileRectID"),
	HX_CSTRING("containsTileRect"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("getIDforSpriteFrameData"),
	HX_CSTRING("containsSpriteFrameData"),
	HX_CSTRING("addSpriteFramesData"),
	HX_CSTRING("flxSpriteFrames"),
	HX_CSTRING("pairsData"),
	HX_CSTRING("tileSheet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileSheetData_obj::tileSheetData,"tileSheetData");
	HX_MARK_MEMBER_NAME(TileSheetData_obj::_DRAWCALLS,"_DRAWCALLS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::tileSheetData,"tileSheetData");
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::_DRAWCALLS,"_DRAWCALLS");
};

Class TileSheetData_obj::__mClass;

void TileSheetData_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.TileSheetData"), hx::TCanCast< TileSheetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSheetData_obj::__boot()
{
	tileSheetData= Array_obj< ::org::flixel::system::layer::TileSheetData >::__new();
	_DRAWCALLS= (int)0;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
