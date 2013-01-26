#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DirectRenderer
#include <native/display/DirectRenderer.h>
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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_OpenGLView
#include <native/display/OpenGLView.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_display3D_Context3D
#include <native/display3D/Context3D.h>
#endif
#ifndef INCLUDED_native_display3D_Context3DCompareMode
#include <native/display3D/Context3DCompareMode.h>
#endif
#ifndef INCLUDED_native_display3D_Context3DProgramType
#include <native/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_native_display3D_Context3DStencilAction
#include <native/display3D/Context3DStencilAction.h>
#endif
#ifndef INCLUDED_native_display3D_Context3DTextureFormat
#include <native/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_native_display3D_Context3DTriangleFace
#include <native/display3D/Context3DTriangleFace.h>
#endif
#ifndef INCLUDED_native_display3D_Context3DVertexBufferFormat
#include <native/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_native_display3D_IndexBuffer3D
#include <native/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_native_display3D_Program3D
#include <native/display3D/Program3D.h>
#endif
#ifndef INCLUDED_native_display3D_VertexBuffer3D
#include <native/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_native_display3D_textures_CubeTexture
#include <native/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_native_display3D_textures_Texture
#include <native/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_native_display3D_textures_TextureBase
#include <native/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Matrix3D
#include <native/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_native_gl_Buffer
#include <native/gl/Buffer.h>
#endif
#ifndef INCLUDED_native_gl_Framebuffer
#include <native/gl/Framebuffer.h>
#endif
#ifndef INCLUDED_native_gl_GL
#include <native/gl/GL.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_gl_Program
#include <native/gl/Program.h>
#endif
#ifndef INCLUDED_native_gl_Renderbuffer
#include <native/gl/Renderbuffer.h>
#endif
#ifndef INCLUDED_native_gl_Texture
#include <native/gl/Texture.h>
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
namespace native{
namespace display3D{

Void Context3D_obj::__construct()
{
HX_STACK_PUSH("Context3D::new","native/display3D/Context3D.hx",44);
{
	HX_STACK_LINE(46)
	this->disposed = false;
	HX_STACK_LINE(47)
	this->vertexBuffersCreated = Array_obj< ::native::display3D::VertexBuffer3D >::__new();
	HX_STACK_LINE(48)
	this->indexBuffersCreated = Array_obj< ::native::display3D::IndexBuffer3D >::__new();
	HX_STACK_LINE(49)
	this->programsCreated = Array_obj< ::native::display3D::Program3D >::__new();
	HX_STACK_LINE(50)
	this->texturesCreated = Array_obj< ::native::display3D::textures::TextureBase >::__new();
	HX_STACK_LINE(52)
	::native::display::Stage stage = ::native::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(54)
	this->ogl = ::native::display::OpenGLView_obj::__new();
	HX_STACK_LINE(55)
	this->ogl->set_scrollRect(::native::geom::Rectangle_obj::__new((int)0,(int)0,stage->get_stageWidth(),stage->get_stageHeight()));
	HX_STACK_LINE(56)
	this->ogl->set_width(stage->get_stageWidth());
	HX_STACK_LINE(57)
	this->ogl->set_height(stage->get_stageHeight());
	HX_STACK_LINE(59)
	stage->addChildAt(this->ogl,(int)0);
}
;
	return null();
}

Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new()
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

Void Context3D_obj::updateBlendStatus( ){
{
		HX_STACK_PUSH("Context3D::updateBlendStatus","native/display3D/Context3D.hx",507);
		HX_STACK_THIS(this);
		HX_STACK_LINE(507)
		if ((this->blendEnabled)){
			HX_STACK_LINE(511)
			::native::gl::GL_obj::enable((int)3042);
			HX_STACK_LINE(512)
			::native::gl::GL_obj::blendEquation((int)32774);
			HX_STACK_LINE(513)
			::native::gl::GL_obj::blendFunc(this->blendSourceFactor,this->blendDestinationFactor);
		}
		else{
			HX_STACK_LINE(515)
			::native::gl::GL_obj::disable((int)3042);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,updateBlendStatus,(void))

Void Context3D_obj::setGLSLVertexBufferAt( ::String locationName,::native::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::native::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_PUSH("Context3D::setGLSLVertexBufferAt","native/display3D/Context3D.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(buffer,"buffer");
	HX_STACK_ARG(bufferOffset,"bufferOffset");
	HX_STACK_ARG(format,"format");
{
		HX_STACK_LINE(455)
		int location = ::native::gl::GL_obj::getAttribLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(457)
		::native::gl::GL_obj::bindBuffer((int)34962,buffer->glBuffer);
		HX_STACK_LINE(459)
		int dimension = (int)4;		HX_STACK_VAR(dimension,"dimension");
		HX_STACK_LINE(460)
		int type = (int)5126;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(461)
		int numBytes = (int)4;		HX_STACK_VAR(numBytes,"numBytes");
		HX_STACK_LINE(463)
		if (((format == ::native::display3D::Context3DVertexBufferFormat_obj::BYTES_4_dyn()))){
			HX_STACK_LINE(465)
			dimension = (int)4;
			HX_STACK_LINE(466)
			type = (int)5126;
			HX_STACK_LINE(467)
			numBytes = (int)4;
		}
		else{
			HX_STACK_LINE(469)
			if (((format == ::native::display3D::Context3DVertexBufferFormat_obj::FLOAT_1_dyn()))){
				HX_STACK_LINE(471)
				dimension = (int)1;
				HX_STACK_LINE(472)
				type = (int)5126;
				HX_STACK_LINE(473)
				numBytes = (int)4;
			}
			else{
				HX_STACK_LINE(475)
				if (((format == ::native::display3D::Context3DVertexBufferFormat_obj::FLOAT_2_dyn()))){
					HX_STACK_LINE(477)
					dimension = (int)2;
					HX_STACK_LINE(478)
					type = (int)5126;
					HX_STACK_LINE(479)
					numBytes = (int)4;
				}
				else{
					HX_STACK_LINE(481)
					if (((format == ::native::display3D::Context3DVertexBufferFormat_obj::FLOAT_3_dyn()))){
						HX_STACK_LINE(483)
						dimension = (int)3;
						HX_STACK_LINE(484)
						type = (int)5126;
						HX_STACK_LINE(485)
						numBytes = (int)4;
					}
					else{
						HX_STACK_LINE(487)
						if (((format == ::native::display3D::Context3DVertexBufferFormat_obj::FLOAT_4_dyn()))){
							HX_STACK_LINE(489)
							dimension = (int)4;
							HX_STACK_LINE(490)
							type = (int)5126;
							HX_STACK_LINE(491)
							numBytes = (int)4;
						}
						else{
							HX_STACK_LINE(493)
							hx::Throw (((HX_CSTRING("Buffer format ") + ::Std_obj::string(format)) + HX_CSTRING(" is not supported")));
						}
					}
				}
			}
		}
		HX_STACK_LINE(499)
		::native::gl::GL_obj::vertexAttribPointer(location,dimension,type,false,(buffer->data32PerVertex * numBytes),(bufferOffset * numBytes));
		HX_STACK_LINE(500)
		::native::gl::GL_obj::enableVertexAttribArray(location);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setGLSLVertexBufferAt,(void))

Void Context3D_obj::setVertexBufferAt( int index,::native::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::native::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_PUSH("Context3D::setVertexBufferAt","native/display3D/Context3D.hx",449);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(buffer,"buffer");
	HX_STACK_ARG(bufferOffset,"bufferOffset");
	HX_STACK_ARG(format,"format");
{
		HX_STACK_LINE(450)
		::String locationName = (HX_CSTRING("va") + index);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(451)
		this->setGLSLVertexBufferAt(locationName,buffer,bufferOffset,format);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

Void Context3D_obj::setGLSLTextureAt( ::String locationName,::native::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("Context3D::setGLSLTextureAt","native/display3D/Context3D.hx",423);
		HX_STACK_THIS(this);
		HX_STACK_ARG(locationName,"locationName");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(425)
		Dynamic location = ::native::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(427)
		if ((::Std_obj::is(texture,hx::ClassOf< ::native::display3D::textures::Texture >()))){
			HX_STACK_LINE(430)
			::native::gl::GL_obj::activeTexture((int)33984);
			HX_STACK_LINE(432)
			::native::gl::GL_obj::bindTexture((int)3553,(hx::TCast< native::display3D::textures::Texture >::cast(texture))->glTexture);
			HX_STACK_LINE(433)
			::native::gl::GL_obj::uniform1i(location,(int)0);
			HX_STACK_LINE(436)
			::native::gl::GL_obj::texParameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(437)
			::native::gl::GL_obj::texParameteri((int)3553,(int)10243,(int)33071);
			HX_STACK_LINE(438)
			::native::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9729);
			HX_STACK_LINE(439)
			::native::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9729);
		}
		else{
			HX_STACK_LINE(442)
			hx::Throw (((HX_CSTRING("Texture of type ") + ::Type_obj::getClassName(::Type_obj::getClass(texture))) + HX_CSTRING(" not supported yet")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setGLSLTextureAt,(void))

Void Context3D_obj::setTextureAt( int sampler,::native::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("Context3D::setTextureAt","native/display3D/Context3D.hx",417);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sampler,"sampler");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(418)
		::String locationName = (HX_CSTRING("fs") + sampler);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(419)
		this->setGLSLTextureAt(locationName,texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_PUSH("Context3D::setStencilReferenceValue","native/display3D/Context3D.hx",411);
	HX_STACK_THIS(this);
	HX_STACK_ARG(referenceValue,"referenceValue");
	HX_STACK_ARG(readMask,"readMask");
	HX_STACK_ARG(writeMask,"writeMask");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setStencilActions( ::native::display3D::Context3DTriangleFace triangleFace,::native::display3D::Context3DCompareMode compareMode,::native::display3D::Context3DStencilAction actionOnBothPass,::native::display3D::Context3DStencilAction actionOnDepthFail,::native::display3D::Context3DStencilAction actionOnDepthPassStencilFail){
{
		HX_STACK_PUSH("Context3D::setStencilActions","native/display3D/Context3D.hx",404);
		HX_STACK_THIS(this);
		HX_STACK_ARG(triangleFace,"triangleFace");
		HX_STACK_ARG(compareMode,"compareMode");
		HX_STACK_ARG(actionOnBothPass,"actionOnBothPass");
		HX_STACK_ARG(actionOnDepthFail,"actionOnDepthFail");
		HX_STACK_ARG(actionOnDepthPassStencilFail,"actionOnDepthPassStencilFail");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setScissorRectangle( ::native::geom::Rectangle rectangle){
{
		HX_STACK_PUSH("Context3D::setScissorRectangle","native/display3D/Context3D.hx",396);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rectangle,"rectangle");
		HX_STACK_LINE(396)
		::native::gl::GL_obj::scissor(::Std_obj::_int(rectangle->x),::Std_obj::_int(rectangle->y),::Std_obj::_int(rectangle->width),::Std_obj::_int(rectangle->height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::setRenderToTexture( ::native::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_PUSH("Context3D::setRenderToTexture","native/display3D/Context3D.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil");
	HX_STACK_ARG(antiAlias,"antiAlias");
	HX_STACK_ARG(surfaceSelector,"surfaceSelector");
{
		HX_STACK_LINE(355)
		::native::gl::Framebuffer frameBuffer = ::native::gl::GL_obj::createFramebuffer();		HX_STACK_VAR(frameBuffer,"frameBuffer");
		HX_STACK_LINE(358)
		::native::gl::GL_obj::bindFramebuffer((int)36160,frameBuffer);
		HX_STACK_LINE(359)
		::native::gl::GL_obj::bindTexture((int)3553,texture->glTexture);
		HX_STACK_LINE(365)
		::native::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9728);
		HX_STACK_LINE(366)
		::native::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9728);
		HX_STACK_LINE(370)
		::native::gl::Renderbuffer depthRenderBuffer = ::native::gl::GL_obj::createRenderbuffer();		HX_STACK_VAR(depthRenderBuffer,"depthRenderBuffer");
		HX_STACK_LINE(371)
		::native::gl::GL_obj::bindRenderbuffer((int)36161,depthRenderBuffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		HX_STACK_PUSH("Context3D::setRenderToBackBuffer","native/display3D/Context3D.hx",337);
		HX_STACK_THIS(this);
		HX_STACK_LINE(337)
		::native::gl::GL_obj::bindFramebuffer((int)36160,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::setRenderMethod( Dynamic func){
{
		HX_STACK_PUSH("Context3D::setRenderMethod","native/display3D/Context3D.hx",330);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(330)
		this->ogl->render = func;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setRenderMethod,(void))

Void Context3D_obj::setGLSLProgramConstantsFromVector4( ::String locationName,Array< Float > data,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_PUSH("Context3D::setGLSLProgramConstantsFromVector4","native/display3D/Context3D.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(startIndex,"startIndex");
{
		HX_STACK_LINE(322)
		Dynamic location = ::native::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(323)
		::native::gl::GL_obj::uniform4f(location,data->__get(startIndex),data->__get((startIndex + (int)1)),data->__get((startIndex + (int)1)),data->__get((startIndex + (int)3)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromVector4,(void))

Void Context3D_obj::setGLSLProgramConstantsFromMatrix( ::String locationName,::native::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_PUSH("Context3D::setGLSLProgramConstantsFromMatrix","native/display3D/Context3D.hx",316);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(transposedMatrix,"transposedMatrix");
{
		HX_STACK_LINE(317)
		Dynamic location = ::native::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(318)
		::native::gl::GL_obj::uniformMatrix3D(location,!(transposedMatrix),matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromMatrix,(void))

Void Context3D_obj::setGLSLProgramConstantsFromByteArray( ::String locationName,::native::utils::ByteArray data,hx::Null< int >  __o_byteArrayOffset){
int byteArrayOffset = __o_byteArrayOffset.Default(-1);
	HX_STACK_PUSH("Context3D::setGLSLProgramConstantsFromByteArray","native/display3D/Context3D.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
{
		HX_STACK_LINE(309)
		if (((byteArrayOffset != (int)-1))){
			HX_STACK_LINE(309)
			data->position = byteArrayOffset;
		}
		HX_STACK_LINE(312)
		Dynamic location = ::native::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(313)
		::native::gl::GL_obj::uniform4f(location,data->readFloat(),data->readFloat(),data->readFloat(),data->readFloat());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromVector( ::native::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(-1);
	HX_STACK_PUSH("Context3D::setProgramConstantsFromVector","native/display3D/Context3D.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(firstRegister,"firstRegister");
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(numRegisters,"numRegisters");
{
		HX_STACK_LINE(301)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(301)
		while(((_g < numRegisters))){
			HX_STACK_LINE(301)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(302)
			int currentIndex = (i * (int)4);		HX_STACK_VAR(currentIndex,"currentIndex");
			HX_STACK_LINE(303)
			::String locationName = this->getUniformLocationNameFromAgalRegisterIndex(programType,(firstRegister + i));		HX_STACK_VAR(locationName,"locationName");
			HX_STACK_LINE(304)
			this->setGLSLProgramConstantsFromVector4(locationName,data,currentIndex);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( ::native::display3D::Context3DProgramType programType,int firstRegister,::native::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_PUSH("Context3D::setProgramConstantsFromMatrix","native/display3D/Context3D.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(firstRegister,"firstRegister");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(transposedMatrix,"transposedMatrix");
{
		HX_STACK_LINE(296)
		::String locationName = this->getUniformLocationNameFromAgalRegisterIndex(programType,firstRegister);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(297)
		this->setGLSLProgramConstantsFromMatrix(locationName,matrix,transposedMatrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( ::native::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::native::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_PUSH("Context3D::setProgramConstantsFromByteArray","native/display3D/Context3D.hx",287);
		HX_STACK_THIS(this);
		HX_STACK_ARG(programType,"programType");
		HX_STACK_ARG(firstRegister,"firstRegister");
		HX_STACK_ARG(numRegisters,"numRegisters");
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
		HX_STACK_LINE(288)
		data->position = byteArrayOffset;
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(289)
			while(((_g < numRegisters))){
				HX_STACK_LINE(289)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(290)
				::String locationName = this->getUniformLocationNameFromAgalRegisterIndex(programType,(firstRegister + i));		HX_STACK_VAR(locationName,"locationName");
				HX_STACK_LINE(291)
				this->setGLSLProgramConstantsFromByteArray(locationName,data,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

::String Context3D_obj::getUniformLocationNameFromAgalRegisterIndex( ::native::display3D::Context3DProgramType programType,int firstRegister){
	HX_STACK_PUSH("Context3D::getUniformLocationNameFromAgalRegisterIndex","native/display3D/Context3D.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(firstRegister,"firstRegister");
	HX_STACK_LINE(273)
	if (((programType == ::native::display3D::Context3DProgramType_obj::VERTEX_dyn()))){
		HX_STACK_LINE(273)
		return HX_CSTRING("vc");
	}
	else{
		HX_STACK_LINE(277)
		if (((programType == ::native::display3D::Context3DProgramType_obj::FRAGMENT_dyn()))){
			HX_STACK_LINE(277)
			return HX_CSTRING("fc");
		}
	}
	HX_STACK_LINE(283)
	hx::Throw (((HX_CSTRING("Program Type ") + ::Std_obj::string(programType)) + HX_CSTRING(" not supported")));
	HX_STACK_LINE(283)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,getUniformLocationNameFromAgalRegisterIndex,return )

Void Context3D_obj::setProgram( ::native::display3D::Program3D program3D){
{
		HX_STACK_PUSH("Context3D::setProgram","native/display3D/Context3D.hx",255);
		HX_STACK_THIS(this);
		HX_STACK_ARG(program3D,"program3D");
		HX_STACK_LINE(257)
		::native::gl::Program glProgram = null();		HX_STACK_VAR(glProgram,"glProgram");
		HX_STACK_LINE(259)
		if (((program3D != null()))){
			HX_STACK_LINE(259)
			glProgram = program3D->glProgram;
		}
		HX_STACK_LINE(265)
		::native::gl::GL_obj::useProgram(glProgram);
		HX_STACK_LINE(266)
		this->currentProgram = program3D;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setDepthTest( bool depthMask,int passCompareMode){
{
		HX_STACK_PUSH("Context3D::setDepthTest","native/display3D/Context3D.hx",249);
		HX_STACK_THIS(this);
		HX_STACK_ARG(depthMask,"depthMask");
		HX_STACK_ARG(passCompareMode,"passCompareMode");
		HX_STACK_LINE(250)
		::native::gl::GL_obj::depthFunc(passCompareMode);
		HX_STACK_LINE(251)
		::native::gl::GL_obj::depthMask(depthMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setCulling( int triangleFaceToCull){
{
		HX_STACK_PUSH("Context3D::setCulling","native/display3D/Context3D.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull");
		HX_STACK_LINE(237)
		if (((triangleFaceToCull == (int)0))){
			HX_STACK_LINE(238)
			::native::gl::GL_obj::disable((int)2884);
		}
		else{
			HX_STACK_LINE(241)
			::native::gl::GL_obj::cullFace(triangleFaceToCull);
			HX_STACK_LINE(242)
			::native::gl::GL_obj::enable((int)2884);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_PUSH("Context3D::setColorMask","native/display3D/Context3D.hx",227);
		HX_STACK_THIS(this);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(227)
		::native::gl::GL_obj::colorMask(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setBlendFactors( int sourceFactor,int destinationFactor){
{
		HX_STACK_PUSH("Context3D::setBlendFactors","native/display3D/Context3D.hx",216);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sourceFactor,"sourceFactor");
		HX_STACK_ARG(destinationFactor,"destinationFactor");
		HX_STACK_LINE(218)
		this->blendEnabled = true;
		HX_STACK_LINE(219)
		this->blendSourceFactor = sourceFactor;
		HX_STACK_LINE(220)
		this->blendDestinationFactor = destinationFactor;
		HX_STACK_LINE(222)
		this->updateBlendStatus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::present( ){
{
		HX_STACK_PUSH("Context3D::present","native/display3D/Context3D.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_LINE(208)
		this->drawing = false;
		HX_STACK_LINE(209)
		::native::gl::GL_obj::useProgram(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::drawTriangles( ::native::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_PUSH("Context3D::drawTriangles","native/display3D/Context3D.hx",181);
	HX_STACK_THIS(this);
	HX_STACK_ARG(indexBuffer,"indexBuffer");
	HX_STACK_ARG(firstIndex,"firstIndex");
	HX_STACK_ARG(numTriangles,"numTriangles");
{
		HX_STACK_LINE(183)
		if ((!(this->drawing))){
			HX_STACK_LINE(183)
			hx::Throw (::native::errors::Error_obj::__new(HX_CSTRING("Need to clear before drawing if the buffer has not been cleared since the last present() call."),null()));
		}
		HX_STACK_LINE(189)
		int numIndices;		HX_STACK_VAR(numIndices,"numIndices");
		HX_STACK_LINE(191)
		if (((numTriangles == (int)-1))){
			HX_STACK_LINE(191)
			numIndices = indexBuffer->numIndices;
		}
		else{
			HX_STACK_LINE(195)
			numIndices = (numTriangles * (int)3);
		}
		HX_STACK_LINE(201)
		::native::gl::GL_obj::drawElements((int)4,numIndices,(int)5123,firstIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::drawToBitmapData( ::native::display::BitmapData destination){
{
		HX_STACK_PUSH("Context3D::drawToBitmapData","native/display3D/Context3D.hx",174);
		HX_STACK_THIS(this);
		HX_STACK_ARG(destination,"destination");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::dispose( ){
{
		HX_STACK_PUSH("Context3D::dispose","native/display3D/Context3D.hx",149);
		HX_STACK_THIS(this);
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::native::display3D::VertexBuffer3D > _g1 = this->vertexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(150)
			while(((_g < _g1->length))){
				HX_STACK_LINE(150)
				::native::display3D::VertexBuffer3D vertexBuffer = _g1->__get(_g);		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
				HX_STACK_LINE(150)
				++(_g);
				HX_STACK_LINE(151)
				vertexBuffer->dispose();
			}
		}
		HX_STACK_LINE(153)
		this->vertexBuffersCreated = null();
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::native::display3D::IndexBuffer3D > _g1 = this->indexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(155)
			while(((_g < _g1->length))){
				HX_STACK_LINE(155)
				::native::display3D::IndexBuffer3D indexBuffer = _g1->__get(_g);		HX_STACK_VAR(indexBuffer,"indexBuffer");
				HX_STACK_LINE(155)
				++(_g);
				HX_STACK_LINE(156)
				indexBuffer->dispose();
			}
		}
		HX_STACK_LINE(158)
		this->indexBuffersCreated = null();
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::native::display3D::Program3D > _g1 = this->programsCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(160)
			while(((_g < _g1->length))){
				HX_STACK_LINE(160)
				::native::display3D::Program3D program = _g1->__get(_g);		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(160)
				++(_g);
				HX_STACK_LINE(161)
				program->dispose();
			}
		}
		HX_STACK_LINE(163)
		this->programsCreated = null();
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::native::display3D::textures::TextureBase > _g1 = this->texturesCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(165)
			while(((_g < _g1->length))){
				HX_STACK_LINE(165)
				::native::display3D::textures::TextureBase texture = _g1->__get(_g);		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(165)
				++(_g);
				HX_STACK_LINE(166)
				texture->dispose();
			}
		}
		HX_STACK_LINE(168)
		this->texturesCreated = null();
		HX_STACK_LINE(170)
		this->disposed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

::native::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex){
	HX_STACK_PUSH("Context3D::createVertexBuffer","native/display3D/Context3D.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(numVertices,"numVertices");
	HX_STACK_ARG(data32PerVertex,"data32PerVertex");
	HX_STACK_LINE(141)
	::native::display3D::VertexBuffer3D vertexBuffer = ::native::display3D::VertexBuffer3D_obj::__new(::native::gl::GL_obj::createBuffer(),numVertices,data32PerVertex);		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
	HX_STACK_LINE(142)
	this->vertexBuffersCreated->push(vertexBuffer);
	HX_STACK_LINE(143)
	return vertexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createVertexBuffer,return )

::native::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,::native::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_PUSH("Context3D::createTexture","native/display3D/Context3D.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture");
	HX_STACK_ARG(streamingLevels,"streamingLevels");
{
		HX_STACK_LINE(133)
		::native::display3D::textures::Texture texture = ::native::display3D::textures::Texture_obj::__new(::native::gl::GL_obj::createTexture());		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(134)
		this->texturesCreated->push(texture);
		HX_STACK_LINE(135)
		return texture;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::native::display3D::Program3D Context3D_obj::createProgram( ){
	HX_STACK_PUSH("Context3D::createProgram","native/display3D/Context3D.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_LINE(124)
	::native::display3D::Program3D program = ::native::display3D::Program3D_obj::__new(::native::gl::GL_obj::createProgram());		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(125)
	this->programsCreated->push(program);
	HX_STACK_LINE(126)
	return program;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::native::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices){
	HX_STACK_PUSH("Context3D::createIndexBuffer","native/display3D/Context3D.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(numIndices,"numIndices");
	HX_STACK_LINE(114)
	::native::display3D::IndexBuffer3D indexBuffer = ::native::display3D::IndexBuffer3D_obj::__new(::native::gl::GL_obj::createBuffer(),numIndices);		HX_STACK_VAR(indexBuffer,"indexBuffer");
	HX_STACK_LINE(115)
	this->indexBuffersCreated->push(indexBuffer);
	HX_STACK_LINE(116)
	return indexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,createIndexBuffer,return )

::native::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,::native::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_PUSH("Context3D::createCubeTexture","native/display3D/Context3D.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_ARG(size,"size");
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture");
	HX_STACK_ARG(streamingLevels,"streamingLevels");
{
		HX_STACK_LINE(105)
		::native::display3D::textures::CubeTexture texture = ::native::display3D::textures::CubeTexture_obj::__new(::native::gl::GL_obj::createTexture());		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(106)
		this->texturesCreated->push(texture);
		HX_STACK_LINE(107)
		return texture;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
	HX_STACK_PUSH("Context3D::configureBackBuffer","native/display3D/Context3D.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(antiAlias,"antiAlias");
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil");
{
		HX_STACK_LINE(87)
		if ((enableDepthAndStencil)){
			HX_STACK_LINE(89)
			::native::gl::GL_obj::enable((int)34041);
			HX_STACK_LINE(90)
			::native::gl::GL_obj::enable((int)2929);
		}
		HX_STACK_LINE(98)
		this->ogl->set_scrollRect(::native::geom::Rectangle_obj::__new((int)0,(int)0,width,height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,configureBackBuffer,(void))

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(17664);
	HX_STACK_PUSH("Context3D::clear","native/display3D/Context3D.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(stencil,"stencil");
	HX_STACK_ARG(mask,"mask");
{
		HX_STACK_LINE(66)
		if ((!(this->drawing))){
			HX_STACK_LINE(68)
			this->updateBlendStatus();
			HX_STACK_LINE(69)
			this->drawing = true;
		}
		HX_STACK_LINE(75)
		::native::gl::GL_obj::clearColor(red,green,blue,alpha);
		HX_STACK_LINE(76)
		::native::gl::GL_obj::clearDepth(depth);
		HX_STACK_LINE(77)
		::native::gl::GL_obj::clearStencil(stencil);
		HX_STACK_LINE(79)
		::native::gl::GL_obj::clear(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_MARK_MEMBER_NAME(programsCreated,"programsCreated");
	HX_MARK_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_MARK_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_MARK_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_MARK_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_MARK_MEMBER_NAME(ogl,"ogl");
	HX_MARK_MEMBER_NAME(currentProgram,"currentProgram");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_VISIT_MEMBER_NAME(programsCreated,"programsCreated");
	HX_VISIT_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_VISIT_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_VISIT_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_VISIT_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_VISIT_MEMBER_NAME(ogl,"ogl");
	HX_VISIT_MEMBER_NAME(currentProgram,"currentProgram");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
}

Dynamic Context3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { return ogl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { return blendEnabled; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { return currentProgram; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setRenderMethod") ) { return setRenderMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { return texturesCreated; }
		if (HX_FIELD_EQ(inName,"programsCreated") ) { return programsCreated; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setGLSLTextureAt") ) { return setGLSLTextureAt_dyn(); }
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateBlendStatus") ) { return updateBlendStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { return blendSourceFactor; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { return indexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { return vertexBuffersCreated; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setGLSLVertexBufferAt") ) { return setGLSLVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { return blendDestinationFactor; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromMatrix") ) { return setGLSLProgramConstantsFromMatrix_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromVector4") ) { return setGLSLProgramConstantsFromVector4_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromByteArray") ) { return setGLSLProgramConstantsFromByteArray_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"getUniformLocationNameFromAgalRegisterIndex") ) { return getUniformLocationNameFromAgalRegisterIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { ogl=inValue.Cast< ::native::display::OpenGLView >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { blendEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { currentProgram=inValue.Cast< ::native::display3D::Program3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { texturesCreated=inValue.Cast< Array< ::native::display3D::textures::TextureBase > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"programsCreated") ) { programsCreated=inValue.Cast< Array< ::native::display3D::Program3D > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { blendSourceFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { indexBuffersCreated=inValue.Cast< Array< ::native::display3D::IndexBuffer3D > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { vertexBuffersCreated=inValue.Cast< Array< ::native::display3D::VertexBuffer3D > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { blendDestinationFactor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("texturesCreated"));
	outFields->push(HX_CSTRING("programsCreated"));
	outFields->push(HX_CSTRING("indexBuffersCreated"));
	outFields->push(HX_CSTRING("vertexBuffersCreated"));
	outFields->push(HX_CSTRING("disposed"));
	outFields->push(HX_CSTRING("drawing"));
	outFields->push(HX_CSTRING("blendSourceFactor"));
	outFields->push(HX_CSTRING("blendEnabled"));
	outFields->push(HX_CSTRING("blendDestinationFactor"));
	outFields->push(HX_CSTRING("ogl"));
	outFields->push(HX_CSTRING("currentProgram"));
	outFields->push(HX_CSTRING("enableErrorChecking"));
	outFields->push(HX_CSTRING("driverInfo"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateBlendStatus"),
	HX_CSTRING("setGLSLVertexBufferAt"),
	HX_CSTRING("setVertexBufferAt"),
	HX_CSTRING("setGLSLTextureAt"),
	HX_CSTRING("setTextureAt"),
	HX_CSTRING("setStencilReferenceValue"),
	HX_CSTRING("setStencilActions"),
	HX_CSTRING("setScissorRectangle"),
	HX_CSTRING("setRenderToTexture"),
	HX_CSTRING("setRenderToBackBuffer"),
	HX_CSTRING("setRenderMethod"),
	HX_CSTRING("setGLSLProgramConstantsFromVector4"),
	HX_CSTRING("setGLSLProgramConstantsFromMatrix"),
	HX_CSTRING("setGLSLProgramConstantsFromByteArray"),
	HX_CSTRING("setProgramConstantsFromVector"),
	HX_CSTRING("setProgramConstantsFromMatrix"),
	HX_CSTRING("setProgramConstantsFromByteArray"),
	HX_CSTRING("getUniformLocationNameFromAgalRegisterIndex"),
	HX_CSTRING("setProgram"),
	HX_CSTRING("setDepthTest"),
	HX_CSTRING("setCulling"),
	HX_CSTRING("setColorMask"),
	HX_CSTRING("setBlendFactors"),
	HX_CSTRING("present"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("drawToBitmapData"),
	HX_CSTRING("dispose"),
	HX_CSTRING("createVertexBuffer"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createIndexBuffer"),
	HX_CSTRING("createCubeTexture"),
	HX_CSTRING("configureBackBuffer"),
	HX_CSTRING("clear"),
	HX_CSTRING("texturesCreated"),
	HX_CSTRING("programsCreated"),
	HX_CSTRING("indexBuffersCreated"),
	HX_CSTRING("vertexBuffersCreated"),
	HX_CSTRING("disposed"),
	HX_CSTRING("drawing"),
	HX_CSTRING("blendSourceFactor"),
	HX_CSTRING("blendEnabled"),
	HX_CSTRING("blendDestinationFactor"),
	HX_CSTRING("ogl"),
	HX_CSTRING("currentProgram"),
	HX_CSTRING("enableErrorChecking"),
	HX_CSTRING("driverInfo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
};

Class Context3D_obj::__mClass;

void Context3D_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3D"), hx::TCanCast< Context3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3D_obj::__boot()
{
}

} // end namespace native
} // end namespace display3D
