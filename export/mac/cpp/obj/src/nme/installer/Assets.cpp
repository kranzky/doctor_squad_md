#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_format_display_MovieClip
#include <format/display/MovieClip.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_native_media_SoundLoaderContext
#include <native/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace nme{
namespace installer{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::Hash Assets_obj::cachedBitmapData;

bool Assets_obj::initialized;

::Hash Assets_obj::libraryTypes;

::Hash Assets_obj::resourceNames;

::Hash Assets_obj::resourceTypes;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","nme/installer/Assets.hx",39);
		HX_STACK_LINE(39)
		if ((!(::nme::installer::Assets_obj::initialized))){
			HX_STACK_LINE(43)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("Beep"),HX_CSTRING("assets/data/beep.wav"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("Beep"),HX_CSTRING("sound"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/HaxeFlixel.svg"),HX_CSTRING("assets/HaxeFlixel.svg"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/HaxeFlixel.svg"),HX_CSTRING("text"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets/data/autotiles.png"));
			HX_STACK_LINE(48)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("image"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets/data/autotiles_alt.png"));
			HX_STACK_LINE(50)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(51)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/base.png"),HX_CSTRING("assets/data/base.png"));
			HX_STACK_LINE(52)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/base.png"),HX_CSTRING("image"));
			HX_STACK_LINE(53)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("assets/data/beep.mp3"));
			HX_STACK_LINE(54)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("music"));
			HX_STACK_LINE(55)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("assets/data/beep.wav"));
			HX_STACK_LINE(56)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("sound"));
			HX_STACK_LINE(57)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets/data/button.png"));
			HX_STACK_LINE(58)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(59)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_a.png"),HX_CSTRING("assets/data/button_a.png"));
			HX_STACK_LINE(60)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_a.png"),HX_CSTRING("image"));
			HX_STACK_LINE(61)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_b.png"),HX_CSTRING("assets/data/button_b.png"));
			HX_STACK_LINE(62)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_b.png"),HX_CSTRING("image"));
			HX_STACK_LINE(63)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_c.png"),HX_CSTRING("assets/data/button_c.png"));
			HX_STACK_LINE(64)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_c.png"),HX_CSTRING("image"));
			HX_STACK_LINE(65)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_down.png"),HX_CSTRING("assets/data/button_down.png"));
			HX_STACK_LINE(66)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_down.png"),HX_CSTRING("image"));
			HX_STACK_LINE(67)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_left.png"),HX_CSTRING("assets/data/button_left.png"));
			HX_STACK_LINE(68)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_left.png"),HX_CSTRING("image"));
			HX_STACK_LINE(69)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_right.png"),HX_CSTRING("assets/data/button_right.png"));
			HX_STACK_LINE(70)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_right.png"),HX_CSTRING("image"));
			HX_STACK_LINE(71)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_up.png"),HX_CSTRING("assets/data/button_up.png"));
			HX_STACK_LINE(72)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_up.png"),HX_CSTRING("image"));
			HX_STACK_LINE(73)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_x.png"),HX_CSTRING("assets/data/button_x.png"));
			HX_STACK_LINE(74)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_x.png"),HX_CSTRING("image"));
			HX_STACK_LINE(75)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button_y.png"),HX_CSTRING("assets/data/button_y.png"));
			HX_STACK_LINE(76)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button_y.png"),HX_CSTRING("image"));
			HX_STACK_LINE(77)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("assets/data/courier.ttf"));
			HX_STACK_LINE(78)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(79)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets/data/cursor.png"));
			HX_STACK_LINE(80)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("image"));
			HX_STACK_LINE(81)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets/data/default.png"));
			HX_STACK_LINE(82)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("image"));
			HX_STACK_LINE(83)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets/data/fontData10pt.png"));
			HX_STACK_LINE(84)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(85)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets/data/fontData11pt.png"));
			HX_STACK_LINE(86)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(87)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets/data/handle.png"));
			HX_STACK_LINE(88)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("image"));
			HX_STACK_LINE(89)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets/data/logo.png"));
			HX_STACK_LINE(90)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(91)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets/data/logo_corners.png"));
			HX_STACK_LINE(92)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("image"));
			HX_STACK_LINE(93)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets/data/logo_light.png"));
			HX_STACK_LINE(94)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("image"));
			HX_STACK_LINE(95)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("assets/data/nokiafc22.ttf"));
			HX_STACK_LINE(96)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(97)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/stick.png"),HX_CSTRING("assets/data/stick.png"));
			HX_STACK_LINE(98)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/stick.png"),HX_CSTRING("image"));
			HX_STACK_LINE(99)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets/data/vcr/flixel.png"));
			HX_STACK_LINE(100)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(101)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets/data/vcr/open.png"));
			HX_STACK_LINE(102)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(103)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets/data/vcr/pause.png"));
			HX_STACK_LINE(104)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(105)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets/data/vcr/play.png"));
			HX_STACK_LINE(106)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(107)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets/data/vcr/record_off.png"));
			HX_STACK_LINE(108)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(109)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets/data/vcr/record_on.png"));
			HX_STACK_LINE(110)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(111)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets/data/vcr/restart.png"));
			HX_STACK_LINE(112)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(113)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets/data/vcr/step.png"));
			HX_STACK_LINE(114)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(115)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets/data/vcr/stop.png"));
			HX_STACK_LINE(116)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(117)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets/data/vis/bounds.png"));
			HX_STACK_LINE(118)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(121)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::native::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",128);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(130)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(132)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("image")))))){
			HX_STACK_LINE(132)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(134)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(140)
				::native::display::BitmapData data = ::native::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(142)
				if ((useCache)){
					HX_STACK_LINE(142)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(148)
				return data;
			}
		}
		else{
			HX_STACK_LINE(152)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(154)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(155)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(157)
				if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(191)
					::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),193,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(197)
				::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),199,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(203)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::native::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",208);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(210)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(212)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(212)
		return ::native::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(218)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),218,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(220)
		return null();
	}
	HX_STACK_LINE(212)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::native::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",227);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(229)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(231)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("font")))))){
		HX_STACK_LINE(231)
		return ::native::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(237)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),237,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(239)
		return null();
	}
	HX_STACK_LINE(231)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::format::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","nme/installer/Assets.hx",246);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(248)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(250)
	::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(251)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(253)
	if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
	}
	else{
		HX_STACK_LINE(287)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),289,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(293)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",298);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(300)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(302)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::native::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",307);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(309)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(311)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(311)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("sound")))){
			HX_STACK_LINE(313)
			return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(317)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("music")))){
				HX_STACK_LINE(317)
				return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(325)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),325,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(327)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",332);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(334)
	::native::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(336)
	if (((bytes == null()))){
		HX_STACK_LINE(336)
		return null();
	}
	else{
		HX_STACK_LINE(340)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(336)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryTypes") ) { return libraryTypes; }
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { return resourceNames; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { return resourceTypes; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceName") ) { return getResourceName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryTypes") ) { libraryTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { resourceNames=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { resourceTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("initialized"),
	HX_CSTRING("libraryTypes"),
	HX_CSTRING("resourceNames"),
	HX_CSTRING("resourceTypes"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMovieClip"),
	HX_CSTRING("getResourceName"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Assets_obj::libraryTypes,"libraryTypes");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraryTypes,"libraryTypes");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.installer.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::Hash_obj::__new();
	initialized= false;
	libraryTypes= ::Hash_obj::__new();
	resourceNames= ::Hash_obj::__new();
	resourceTypes= ::Hash_obj::__new();
}

} // end namespace nme
} // end namespace installer
