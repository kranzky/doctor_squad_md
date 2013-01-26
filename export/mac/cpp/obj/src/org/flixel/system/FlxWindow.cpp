#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
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
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
namespace org{
namespace flixel{
namespace system{

Void FlxWindow_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor)
{
HX_STACK_PUSH("FlxWindow::new","org/flixel/system/FlxWindow.hx",106);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(107)
	super::__construct();
	HX_STACK_LINE(110)
	if (((BGColor == null()))){
		HX_STACK_LINE(111)
		BGColor = (int)2139062143;
	}
	HX_STACK_LINE(118)
	if (((TopColor == null()))){
		HX_STACK_LINE(119)
		TopColor = (int)2130706432;
	}
	HX_STACK_LINE(128)
	this->_width = ::Math_obj::floor(::Math_obj::abs(Width));
	HX_STACK_LINE(129)
	this->_height = ::Math_obj::floor(::Math_obj::abs(Height));
	HX_STACK_LINE(130)
	this->_bounds = Bounds;
	HX_STACK_LINE(131)
	this->minSize = ::native::geom::Point_obj::__new((int)50,(int)30);
	HX_STACK_LINE(132)
	if (((this->_bounds != null()))){
		HX_STACK_LINE(133)
		this->maxSize = ::native::geom::Point_obj::__new(this->_bounds->width,this->_bounds->height);
	}
	else{
		HX_STACK_LINE(137)
		this->maxSize = ::native::geom::Point_obj::__new(1.79e+308,1.79e+308);
	}
	HX_STACK_LINE(140)
	this->_drag = ::native::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(142)
	this->_resizable = Resizable;
	HX_STACK_LINE(146)
	this->_shadow = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new((int)1,(int)2,true,(int)-16777216,null()),null(),null());
	HX_STACK_LINE(150)
	this->addChild(this->_shadow);
	HX_STACK_LINE(151)
	this->_background = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new((int)1,(int)1,true,BGColor,null()),null(),null());
	HX_STACK_LINE(152)
	this->_background->set_y((int)15);
	HX_STACK_LINE(153)
	this->addChild(this->_background);
	HX_STACK_LINE(154)
	this->_header = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new((int)1,(int)15,true,TopColor,null()),null(),null());
	HX_STACK_LINE(155)
	this->addChild(this->_header);
	HX_STACK_LINE(157)
	this->_title = ::native::text::TextField_obj::__new();
	HX_STACK_LINE(158)
	this->_title->set_x((int)2);
	HX_STACK_LINE(159)
	this->_title->set_height((int)16);
	HX_STACK_LINE(160)
	this->_title->set_selectable(false);
	HX_STACK_LINE(161)
	this->_title->set_multiline(false);
	HX_STACK_LINE(162)
	this->_title->set_defaultTextFormat(::native::text::TextFormat_obj::__new(::org::flixel::FlxAssets_obj::courierFont,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(163)
	this->_title->set_text(Title);
	HX_STACK_LINE(164)
	this->addChild(this->_title);
	HX_STACK_LINE(166)
	if ((this->_resizable)){
		HX_STACK_LINE(168)
		this->_handle = ::native::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgHandle),null(),null());
		HX_STACK_LINE(169)
		this->addChild(this->_handle);
	}
	HX_STACK_LINE(172)
	if (((bool((this->_width != (int)0)) || bool((this->_height != (int)0))))){
		HX_STACK_LINE(173)
		this->updateSize();
	}
	HX_STACK_LINE(176)
	this->bound();
	HX_STACK_LINE(178)
	this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

FlxWindow_obj::~FlxWindow_obj() { }

Dynamic FlxWindow_obj::__CreateEmpty() { return  new FlxWindow_obj; }
hx::ObjectPtr< FlxWindow_obj > FlxWindow_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::native::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor)
{  hx::ObjectPtr< FlxWindow_obj > result = new FlxWindow_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds,BGColor,TopColor);
	return result;}

Dynamic FlxWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxWindow_obj > result = new FlxWindow_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void FlxWindow_obj::updateGUI( ){
{
		HX_STACK_PUSH("FlxWindow::updateGUI","org/flixel/system/FlxWindow.hx",351);
		HX_STACK_THIS(this);
		HX_STACK_LINE(351)
		if (((bool(this->_overHeader) || bool(this->_overHandle)))){
			HX_STACK_LINE(353)
			if (((this->_title->get_alpha() != 1.0))){
				HX_STACK_LINE(355)
				this->_title->set_alpha(1.0);
			}
		}
		else{
			HX_STACK_LINE(360)
			if (((this->_title->get_alpha() != 0.65))){
				HX_STACK_LINE(362)
				this->_title->set_alpha(0.65);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWindow_obj,updateGUI,(void))

Void FlxWindow_obj::updateSize( ){
{
		HX_STACK_PUSH("FlxWindow::updateSize","org/flixel/system/FlxWindow.hx",330);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Float Block( ::org::flixel::system::FlxWindow_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/FlxWindow.hx",331);
				{
					HX_STACK_LINE(331)
					Float Value = __this->_width;		HX_STACK_VAR(Value,"Value");
					Float Min = __this->minSize->x;		HX_STACK_VAR(Min,"Min");
					Float Max = __this->maxSize->x;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(331)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(331)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(331)
		this->_width = ::Math_obj::floor(_Function_1_1::Block(this));
		struct _Function_1_2{
			inline static Float Block( ::org::flixel::system::FlxWindow_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/FlxWindow.hx",332);
				{
					HX_STACK_LINE(332)
					Float Value = __this->_height;		HX_STACK_VAR(Value,"Value");
					Float Min = __this->minSize->y;		HX_STACK_VAR(Min,"Min");
					Float Max = __this->maxSize->y;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(332)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(332)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(332)
		this->_height = ::Math_obj::floor(_Function_1_2::Block(this));
		HX_STACK_LINE(334)
		this->_header->set_scaleX(this->_width);
		HX_STACK_LINE(335)
		this->_background->set_scaleX(this->_width);
		HX_STACK_LINE(336)
		this->_background->set_scaleY((this->_height - (int)15));
		HX_STACK_LINE(337)
		this->_shadow->set_scaleX(this->_width);
		HX_STACK_LINE(338)
		this->_shadow->set_y(this->_height);
		HX_STACK_LINE(339)
		this->_title->set_width((this->_width - (int)4));
		HX_STACK_LINE(340)
		if ((this->_resizable)){
			HX_STACK_LINE(342)
			this->_handle->set_x((this->_width - this->_handle->get_width()));
			HX_STACK_LINE(343)
			this->_handle->set_y((this->_height - this->_handle->get_height()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWindow_obj,updateSize,(void))

Void FlxWindow_obj::bound( ){
{
		HX_STACK_PUSH("FlxWindow::bound","org/flixel/system/FlxWindow.hx",318);
		HX_STACK_THIS(this);
		HX_STACK_LINE(318)
		if (((this->_bounds != null()))){
			struct _Function_2_1{
				inline static Float Block( ::org::flixel::system::FlxWindow_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/system/FlxWindow.hx",321);
					{
						HX_STACK_LINE(321)
						Float Value = __this->get_x();		HX_STACK_VAR(Value,"Value");
						Float Min = __this->_bounds->get_left();		HX_STACK_VAR(Min,"Min");
						Float Max = (__this->_bounds->get_right() - __this->_width);		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(321)
						Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(321)
						return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(321)
			this->set_x(_Function_2_1::Block(this));
			struct _Function_2_2{
				inline static Float Block( ::org::flixel::system::FlxWindow_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/system/FlxWindow.hx",322);
					{
						HX_STACK_LINE(322)
						Float Value = __this->get_y();		HX_STACK_VAR(Value,"Value");
						Float Min = __this->_bounds->get_top();		HX_STACK_VAR(Min,"Min");
						Float Max = (__this->_bounds->get_bottom() - __this->_height);		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(322)
						Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(322)
						return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(322)
			this->set_y(_Function_2_2::Block(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWindow_obj,bound,(void))

Void FlxWindow_obj::onMouseUp( ::native::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxWindow::onMouseUp","org/flixel/system/FlxWindow.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(308)
		this->_dragging = false;
		HX_STACK_LINE(309)
		this->_resizing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWindow_obj,onMouseUp,(void))

Void FlxWindow_obj::onMouseDown( ::native::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxWindow::onMouseDown","org/flixel/system/FlxWindow.hx",287);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(287)
		if ((this->_overHeader)){
			HX_STACK_LINE(290)
			this->_dragging = true;
			HX_STACK_LINE(291)
			this->_drag->x = this->get_mouseX();
			HX_STACK_LINE(292)
			this->_drag->y = this->get_mouseY();
		}
		else{
			HX_STACK_LINE(294)
			if ((this->_overHandle)){
				HX_STACK_LINE(296)
				this->_resizing = true;
				HX_STACK_LINE(297)
				this->_drag->x = (this->_width - this->get_mouseX());
				HX_STACK_LINE(298)
				this->_drag->y = (this->_height - this->get_mouseY());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWindow_obj,onMouseDown,(void))

Void FlxWindow_obj::onMouseMove( ::native::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxWindow::onMouseMove","org/flixel/system/FlxWindow.hx",255);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(256)
		if ((this->_dragging)){
			HX_STACK_LINE(258)
			this->_overHeader = true;
			HX_STACK_LINE(259)
			this->reposition((this->get_parent()->get_mouseX() - this->_drag->x),(this->get_parent()->get_mouseY() - this->_drag->y));
		}
		else{
			HX_STACK_LINE(261)
			if ((this->_resizing)){
				HX_STACK_LINE(263)
				this->_overHandle = true;
				HX_STACK_LINE(264)
				this->resize((this->get_mouseX() - this->_drag->x),(this->get_mouseY() - this->_drag->y));
			}
			else{
				HX_STACK_LINE(266)
				if (((bool((bool((bool((this->get_mouseX() >= (int)0)) && bool((this->get_mouseX() <= this->_width)))) && bool((this->get_mouseY() >= (int)0)))) && bool((this->get_mouseY() <= this->_height))))){
					HX_STACK_LINE(268)
					this->_overHeader = (bool((this->get_mouseX() <= this->_header->get_width())) && bool((this->get_mouseY() <= this->_header->get_height())));
					HX_STACK_LINE(269)
					if ((this->_resizable)){
						HX_STACK_LINE(270)
						this->_overHandle = (bool((this->get_mouseX() >= (this->_width - this->_handle->get_width()))) && bool((this->get_mouseY() >= (this->_height - this->_handle->get_height()))));
					}
				}
				else{
					HX_STACK_LINE(275)
					this->_overHandle = this->_overHeader = false;
				}
			}
		}
		HX_STACK_LINE(279)
		this->updateGUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWindow_obj,onMouseMove,(void))

Void FlxWindow_obj::init( ::native::events::Event E){
{
		HX_STACK_PUSH("FlxWindow::init","org/flixel/system/FlxWindow.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(238)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(240)
			return null();
		}
		HX_STACK_LINE(243)
		this->removeEventListener(::native::events::Event_obj::ENTER_FRAME,this->init_dyn(),null());
		HX_STACK_LINE(245)
		this->get_stage()->addEventListener(::native::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(246)
		this->get_stage()->addEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(247)
		this->get_stage()->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWindow_obj,init,(void))

Void FlxWindow_obj::reposition( Float X,Float Y){
{
		HX_STACK_PUSH("FlxWindow::reposition","org/flixel/system/FlxWindow.hx",221);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(222)
		this->set_x(X);
		HX_STACK_LINE(223)
		this->set_y(Y);
		HX_STACK_LINE(224)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWindow_obj,reposition,(void))

Void FlxWindow_obj::resize( Float Width,Float Height){
{
		HX_STACK_PUSH("FlxWindow::resize","org/flixel/system/FlxWindow.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(210)
		this->_width = ::Math_obj::floor(::Math_obj::abs(Width));
		HX_STACK_LINE(211)
		this->_height = ::Math_obj::floor(::Math_obj::abs(Height));
		HX_STACK_LINE(212)
		this->updateSize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWindow_obj,resize,(void))

Void FlxWindow_obj::destroy( ){
{
		HX_STACK_PUSH("FlxWindow::destroy","org/flixel/system/FlxWindow.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_LINE(186)
		this->minSize = null();
		HX_STACK_LINE(187)
		this->maxSize = null();
		HX_STACK_LINE(188)
		this->_bounds = null();
		HX_STACK_LINE(189)
		this->removeChild(this->_shadow);
		HX_STACK_LINE(190)
		this->_shadow = null();
		HX_STACK_LINE(191)
		this->removeChild(this->_background);
		HX_STACK_LINE(192)
		this->_background = null();
		HX_STACK_LINE(193)
		this->removeChild(this->_header);
		HX_STACK_LINE(194)
		this->_header = null();
		HX_STACK_LINE(195)
		this->removeChild(this->_title);
		HX_STACK_LINE(196)
		this->_title = null();
		HX_STACK_LINE(197)
		if (((this->_handle != null()))){
			HX_STACK_LINE(198)
			this->removeChild(this->_handle);
		}
		HX_STACK_LINE(199)
		this->_handle = null();
		HX_STACK_LINE(200)
		this->_drag = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWindow_obj,destroy,(void))


FlxWindow_obj::FlxWindow_obj()
{
}

void FlxWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxWindow);
	HX_MARK_MEMBER_NAME(_resizable,"_resizable");
	HX_MARK_MEMBER_NAME(_resizing,"_resizing");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_drag,"_drag");
	HX_MARK_MEMBER_NAME(_overHandle,"_overHandle");
	HX_MARK_MEMBER_NAME(_overHeader,"_overHeader");
	HX_MARK_MEMBER_NAME(_handle,"_handle");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(minSize,"minSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_resizable,"_resizable");
	HX_VISIT_MEMBER_NAME(_resizing,"_resizing");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_drag,"_drag");
	HX_VISIT_MEMBER_NAME(_overHandle,"_overHandle");
	HX_VISIT_MEMBER_NAME(_overHeader,"_overHeader");
	HX_VISIT_MEMBER_NAME(_handle,"_handle");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(minSize,"minSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxWindow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"_drag") ) { return _drag; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_handle") ) { return _handle; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"_header") ) { return _header; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"minSize") ) { return minSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateGUI") ) { return updateGUI_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_resizing") ) { return _resizing; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		if (HX_FIELD_EQ(inName,"_resizable") ) { return _resizable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { return _overHandle; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { return _overHeader; }
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { _drag=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::native::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_handle") ) { _handle=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< ::native::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minSize") ) { minSize=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resizing") ) { _resizing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { _resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_overHandle") ) { _overHandle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { _overHeader=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_resizable"));
	outFields->push(HX_CSTRING("_resizing"));
	outFields->push(HX_CSTRING("_dragging"));
	outFields->push(HX_CSTRING("_drag"));
	outFields->push(HX_CSTRING("_overHandle"));
	outFields->push(HX_CSTRING("_overHeader"));
	outFields->push(HX_CSTRING("_handle"));
	outFields->push(HX_CSTRING("_title"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_header"));
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_bounds"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("minSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateGUI"),
	HX_CSTRING("updateSize"),
	HX_CSTRING("bound"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("init"),
	HX_CSTRING("reposition"),
	HX_CSTRING("resize"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_resizable"),
	HX_CSTRING("_resizing"),
	HX_CSTRING("_dragging"),
	HX_CSTRING("_drag"),
	HX_CSTRING("_overHandle"),
	HX_CSTRING("_overHeader"),
	HX_CSTRING("_handle"),
	HX_CSTRING("_title"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_header"),
	HX_CSTRING("_background"),
	HX_CSTRING("_bounds"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("minSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWindow_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWindow_obj::__mClass,"__mClass");
};

Class FlxWindow_obj::__mClass;

void FlxWindow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.FlxWindow"), hx::TCanCast< FlxWindow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxWindow_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
