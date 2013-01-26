#ifndef INCLUDED_native_display3D_textures_TextureBase
#define INCLUDED_native_display3D_textures_TextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS3(native,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,gl,Texture)
namespace native{
namespace display3D{
namespace textures{


class TextureBase_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef TextureBase_obj OBJ_;
		TextureBase_obj();
		Void __construct(::native::gl::Texture glTexture);

	public:
		static hx::ObjectPtr< TextureBase_obj > __new(::native::gl::Texture glTexture);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureBase"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		::native::gl::Texture glTexture; /* REM */ 
};

} // end namespace native
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_native_display3D_textures_TextureBase */ 
