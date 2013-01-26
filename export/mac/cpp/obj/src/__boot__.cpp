#include <hxcpp.h>

#include <sys/net/Socket.h>
#include <sys/net/_Socket/SocketOutput.h>
#include <sys/net/_Socket/SocketInput.h>
#include <sys/net/Host.h>
#include <sys/io/FileSeek.h>
#include <sys/io/FileOutput.h>
#include <sys/io/FileInput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <sys/_FileSystem/FileKind.h>
#include <org/flixel/tweens/util/Ease.h>
#include <org/flixel/tweens/misc/MultiVarTween.h>
#include <org/flixel/tweens/FlxTween.h>
#include <org/flixel/system/replay/MouseRecord.h>
#include <org/flixel/system/replay/FrameRecord.h>
#include <org/flixel/system/replay/CodeValuePair.h>
#include <org/flixel/system/layer/RectanglePointPair.h>
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#include <org/flixel/system/layer/TileSheetData.h>
#include <org/flixel/system/layer/Node.h>
#include <org/flixel/system/layer/DrawStackItem.h>
#include <org/flixel/system/layer/Atlas.h>
#include <org/flixel/system/input/TouchManager.h>
#include <org/flixel/system/input/Touch.h>
#include <org/flixel/system/input/Mouse.h>
#include <org/flixel/system/input/MapObject.h>
#include <org/flixel/system/input/Keyboard.h>
#include <org/flixel/system/input/JoystickManager.h>
#include <org/flixel/system/input/JoyButton.h>
#include <org/flixel/system/input/Joystick.h>
#include <org/flixel/system/input/Input.h>
#include <org/flixel/system/debug/WatchEntry.h>
#include <org/flixel/system/debug/Watch.h>
#include <org/flixel/system/debug/Vis.h>
#include <org/flixel/system/debug/VCR.h>
#include <org/flixel/system/debug/Perf.h>
#include <org/flixel/system/debug/Log.h>
#include <org/flixel/system/FlxWindow.h>
#include <org/flixel/system/FlxTilemapBuffer.h>
#include <org/flixel/system/FlxTile.h>
#include <org/flixel/system/FlxReplay.h>
#include <org/flixel/system/FlxQuadTree.h>
#include <org/flixel/system/FlxList.h>
#include <org/flixel/system/FlxDebugger.h>
#include <org/flixel/system/FlxAnim.h>
#include <org/flixel/plugin/pxText/PxFontSymbol.h>
#include <org/flixel/plugin/pxText/HelperSymbol.h>
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#include <org/flixel/plugin/TimerManager.h>
#include <org/flixel/plugin/DebugPathDisplay.h>
#include <org/flixel/FlxU.h>
#include <org/flixel/FlxTimer.h>
#include <org/flixel/FlxTilemap.h>
#include <org/flixel/FlxText.h>
#include <org/flixel/FlxSound.h>
#include <org/flixel/FlxSave.h>
#include <org/flixel/FlxPath.h>
#include <org/flixel/FlxG.h>
#include <org/flixel/FlxCamera.h>
#include <org/flixel/FlxButton.h>
#include <org/flixel/FlxSprite.h>
#include <org/flixel/FlxObject.h>
#include <org/flixel/FlxPoint.h>
#include <org/flixel/FlxRect.h>
#include <org/flixel/FlxAssets.h>
#include <nme/installer/Assets.h>
#include <nme/VectorHelper.h>
#include <nme/Lib.h>
#include <native/utils/WeakRef.h>
#include <native/utils/Float32Array.h>
#include <native/utils/Endian.h>
#include <native/utils/CompressionAlgorithm.h>
#include <native/utils/ByteArray.h>
#include <native/utils/IDataInput.h>
#include <native/utils/ArrayBufferView.h>
#include <native/utils/IMemoryRange.h>
#include <native/ui/MultitouchInputMode.h>
#include <native/ui/Multitouch.h>
#include <native/ui/Mouse.h>
#include <native/ui/Keyboard.h>
#include <native/text/TextFormatAlign.h>
#include <native/text/TextFormat.h>
#include <native/text/TextFieldType.h>
#include <native/text/TextFieldAutoSize.h>
#include <native/text/TextField.h>
#include <native/text/FontType.h>
#include <native/text/FontStyle.h>
#include <native/text/Font.h>
#include <native/text/AntiAliasType.h>
#include <native/system/System.h>
#include <native/net/URLVariables.h>
#include <native/net/URLRequestMethod.h>
#include <native/net/URLRequestHeader.h>
#include <native/net/URLRequest.h>
#include <native/net/URLLoaderDataFormat.h>
#include <native/net/URLLoader.h>
#include <native/net/SharedObjectFlushStatus.h>
#include <native/net/SharedObject.h>
#include <native/media/SoundTransform.h>
#include <native/media/SoundLoaderContext.h>
#include <native/media/SoundChannel.h>
#include <native/media/Sound.h>
#include <native/media/ID3Info.h>
#include <native/gl/Texture.h>
#include <native/gl/Shader.h>
#include <native/gl/Renderbuffer.h>
#include <native/gl/Program.h>
#include <native/gl/Framebuffer.h>
#include <native/gl/Buffer.h>
#include <native/gl/Object.h>
#include <native/gl/GL.h>
#include <native/geom/Vector3D.h>
#include <native/geom/Transform.h>
#include <native/geom/Rectangle.h>
#include <native/geom/Point.h>
#include <native/geom/Matrix3D.h>
#include <native/geom/Matrix.h>
#include <native/geom/ColorTransform.h>
#include <native/filters/BitmapFilter.h>
#include <native/filesystem/File.h>
#include <native/events/SampleDataEvent.h>
#include <native/events/ProgressEvent.h>
#include <native/events/KeyboardEvent.h>
#include <native/events/JoystickEvent.h>
#include <native/events/IOErrorEvent.h>
#include <native/events/HTTPStatusEvent.h>
#include <native/events/FocusEvent.h>
#include <native/events/EventPhase.h>
#include <native/events/Listener.h>
#include <native/events/ErrorEvent.h>
#include <native/events/TextEvent.h>
#include <native/errors/RangeError.h>
#include <native/errors/EOFError.h>
#include <native/errors/ArgumentError.h>
#include <native/errors/Error.h>
#include <native/display3D/textures/Texture.h>
#include <native/display3D/textures/CubeTexture.h>
#include <native/display3D/textures/TextureBase.h>
#include <native/display3D/VertexBuffer3D.h>
#include <native/display3D/Program3D.h>
#include <native/display3D/IndexBuffer3D.h>
#include <native/display3D/Context3DVertexBufferFormat.h>
#include <native/display3D/Context3DTriangleFace.h>
#include <native/display3D/Context3DTextureFormat.h>
#include <native/display3D/Context3DStencilAction.h>
#include <native/display3D/Context3DProgramType.h>
#include <native/display3D/Context3DCompareMode.h>
#include <native/display3D/Context3DClearMask.h>
#include <native/display3D/Context3D.h>
#include <native/display/TriangleCulling.h>
#include <native/display/Tilesheet.h>
#include <native/display/StageScaleMode.h>
#include <native/display/StageQuality.h>
#include <native/display/StageDisplayState.h>
#include <native/display/StageAlign.h>
#include <native/display/Stage3D.h>
#include <native/display/TouchInfo.h>
#include <native/display/SpreadMethod.h>
#include <native/display/PixelSnapping.h>
#include <native/display/OpenGLView.h>
#include <native/display/MovieClip.h>
#include <native/display/ManagedStage.h>
#include <native/display/Stage.h>
#include <native/events/TouchEvent.h>
#include <native/events/MouseEvent.h>
#include <native/events/Event.h>
#include <native/display/LineScaleMode.h>
#include <native/display/JointStyle.h>
#include <native/display/InterpolationMethod.h>
#include <native/display/IGraphicsData.h>
#include <native/display/GraphicsPathWinding.h>
#include <native/display/Graphics.h>
#include <native/display/GradientType.h>
#include <native/display/DirectRenderer.h>
#include <native/display/CapsStyle.h>
#include <native/display/BlendMode.h>
#include <native/display/OptimizedPerlin.h>
#include <native/display/BitmapData.h>
#include <native/display/Bitmap.h>
#include <native/Lib.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesOutput.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/Utf8.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Serializer.h>
#include <haxe/Log.h>
#include <haxe/Json.h>
#include <haxe/Http.h>
#include <haxe/FastList.h>
#include <haxe/_FastList/FastListIterator.h>
#include <haxe/FastCell.h>
#include <format/display/MovieClip.h>
#include <format/display/FrameLabel.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Gc.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <com/squad/dr/widgets/Generator.h>
#include <com/squad/dr/widgets/Widget.h>
#include <com/squad/dr/Theatre.h>
#include <com/squad/dr/PubNub.h>
#include <com/squad/dr/Lobby.h>
#include <org/flixel/FlxState.h>
#include <org/flixel/FlxGroup.h>
#include <org/flixel/FlxBasic.h>
#include <com/squad/dr/DrSquad.h>
#include <org/flixel/FlxGame.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <Sys.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <Main.h>
#include <native/display/Sprite.h>
#include <native/display/DisplayObjectContainer.h>
#include <native/display/InteractiveObject.h>
#include <native/display/DisplayObject.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <native/Loader.h>
#include <native/display/IBitmapDrawable.h>
#include <native/events/EventDispatcher.h>
#include <native/events/IEventDispatcher.h>
#include <List.h>
#include <IntIter.h>
#include <IntHash.h>
#include <Hash.h>
#include <EReg.h>
#include <cpp/Lib.h>
#include <Date.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::net::Host_obj::__register();
::sys::io::FileSeek_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::sys::_FileSystem::FileKind_obj::__register();
::org::flixel::tweens::util::Ease_obj::__register();
::org::flixel::tweens::misc::MultiVarTween_obj::__register();
::org::flixel::tweens::FlxTween_obj::__register();
::org::flixel::system::replay::MouseRecord_obj::__register();
::org::flixel::system::replay::FrameRecord_obj::__register();
::org::flixel::system::replay::CodeValuePair_obj::__register();
::org::flixel::system::layer::RectanglePointPair_obj::__register();
::org::flixel::system::layer::FlxSpriteFrames_obj::__register();
::org::flixel::system::layer::TileSheetData_obj::__register();
::org::flixel::system::layer::Node_obj::__register();
::org::flixel::system::layer::DrawStackItem_obj::__register();
::org::flixel::system::layer::Atlas_obj::__register();
::org::flixel::system::input::TouchManager_obj::__register();
::org::flixel::system::input::Touch_obj::__register();
::org::flixel::system::input::Mouse_obj::__register();
::org::flixel::system::input::MapObject_obj::__register();
::org::flixel::system::input::Keyboard_obj::__register();
::org::flixel::system::input::JoystickManager_obj::__register();
::org::flixel::system::input::JoyButton_obj::__register();
::org::flixel::system::input::Joystick_obj::__register();
::org::flixel::system::input::Input_obj::__register();
::org::flixel::system::debug::WatchEntry_obj::__register();
::org::flixel::system::debug::Watch_obj::__register();
::org::flixel::system::debug::Vis_obj::__register();
::org::flixel::system::debug::VCR_obj::__register();
::org::flixel::system::debug::Perf_obj::__register();
::org::flixel::system::debug::Log_obj::__register();
::org::flixel::system::FlxWindow_obj::__register();
::org::flixel::system::FlxTilemapBuffer_obj::__register();
::org::flixel::system::FlxTile_obj::__register();
::org::flixel::system::FlxReplay_obj::__register();
::org::flixel::system::FlxQuadTree_obj::__register();
::org::flixel::system::FlxList_obj::__register();
::org::flixel::system::FlxDebugger_obj::__register();
::org::flixel::system::FlxAnim_obj::__register();
::org::flixel::plugin::pxText::PxFontSymbol_obj::__register();
::org::flixel::plugin::pxText::HelperSymbol_obj::__register();
::org::flixel::plugin::pxText::PxBitmapFont_obj::__register();
::org::flixel::plugin::TimerManager_obj::__register();
::org::flixel::plugin::DebugPathDisplay_obj::__register();
::org::flixel::FlxU_obj::__register();
::org::flixel::FlxTimer_obj::__register();
::org::flixel::FlxTilemap_obj::__register();
::org::flixel::FlxText_obj::__register();
::org::flixel::FlxSound_obj::__register();
::org::flixel::FlxSave_obj::__register();
::org::flixel::FlxPath_obj::__register();
::org::flixel::FlxG_obj::__register();
::org::flixel::FlxCamera_obj::__register();
::org::flixel::FlxButton_obj::__register();
::org::flixel::FlxSprite_obj::__register();
::org::flixel::FlxObject_obj::__register();
::org::flixel::FlxPoint_obj::__register();
::org::flixel::FlxRect_obj::__register();
::org::flixel::FlxAssets_obj::__register();
::nme::installer::Assets_obj::__register();
::nme::VectorHelper_obj::__register();
::nme::Lib_obj::__register();
::native::utils::WeakRef_obj::__register();
::native::utils::Float32Array_obj::__register();
::native::utils::Endian_obj::__register();
::native::utils::CompressionAlgorithm_obj::__register();
::native::utils::ByteArray_obj::__register();
::native::utils::IDataInput_obj::__register();
::native::utils::ArrayBufferView_obj::__register();
::native::utils::IMemoryRange_obj::__register();
::native::ui::MultitouchInputMode_obj::__register();
::native::ui::Multitouch_obj::__register();
::native::ui::Mouse_obj::__register();
::native::ui::Keyboard_obj::__register();
::native::text::TextFormatAlign_obj::__register();
::native::text::TextFormat_obj::__register();
::native::text::TextFieldType_obj::__register();
::native::text::TextFieldAutoSize_obj::__register();
::native::text::TextField_obj::__register();
::native::text::FontType_obj::__register();
::native::text::FontStyle_obj::__register();
::native::text::Font_obj::__register();
::native::text::AntiAliasType_obj::__register();
::native::system::System_obj::__register();
::native::net::URLVariables_obj::__register();
::native::net::URLRequestMethod_obj::__register();
::native::net::URLRequestHeader_obj::__register();
::native::net::URLRequest_obj::__register();
::native::net::URLLoaderDataFormat_obj::__register();
::native::net::URLLoader_obj::__register();
::native::net::SharedObjectFlushStatus_obj::__register();
::native::net::SharedObject_obj::__register();
::native::media::SoundTransform_obj::__register();
::native::media::SoundLoaderContext_obj::__register();
::native::media::SoundChannel_obj::__register();
::native::media::Sound_obj::__register();
::native::media::ID3Info_obj::__register();
::native::gl::Texture_obj::__register();
::native::gl::Shader_obj::__register();
::native::gl::Renderbuffer_obj::__register();
::native::gl::Program_obj::__register();
::native::gl::Framebuffer_obj::__register();
::native::gl::Buffer_obj::__register();
::native::gl::Object_obj::__register();
::native::gl::GL_obj::__register();
::native::geom::Vector3D_obj::__register();
::native::geom::Transform_obj::__register();
::native::geom::Rectangle_obj::__register();
::native::geom::Point_obj::__register();
::native::geom::Matrix3D_obj::__register();
::native::geom::Matrix_obj::__register();
::native::geom::ColorTransform_obj::__register();
::native::filters::BitmapFilter_obj::__register();
::native::filesystem::File_obj::__register();
::native::events::SampleDataEvent_obj::__register();
::native::events::ProgressEvent_obj::__register();
::native::events::KeyboardEvent_obj::__register();
::native::events::JoystickEvent_obj::__register();
::native::events::IOErrorEvent_obj::__register();
::native::events::HTTPStatusEvent_obj::__register();
::native::events::FocusEvent_obj::__register();
::native::events::EventPhase_obj::__register();
::native::events::Listener_obj::__register();
::native::events::ErrorEvent_obj::__register();
::native::events::TextEvent_obj::__register();
::native::errors::RangeError_obj::__register();
::native::errors::EOFError_obj::__register();
::native::errors::ArgumentError_obj::__register();
::native::errors::Error_obj::__register();
::native::display3D::textures::Texture_obj::__register();
::native::display3D::textures::CubeTexture_obj::__register();
::native::display3D::textures::TextureBase_obj::__register();
::native::display3D::VertexBuffer3D_obj::__register();
::native::display3D::Program3D_obj::__register();
::native::display3D::IndexBuffer3D_obj::__register();
::native::display3D::Context3DVertexBufferFormat_obj::__register();
::native::display3D::Context3DTriangleFace_obj::__register();
::native::display3D::Context3DTextureFormat_obj::__register();
::native::display3D::Context3DStencilAction_obj::__register();
::native::display3D::Context3DProgramType_obj::__register();
::native::display3D::Context3DCompareMode_obj::__register();
::native::display3D::Context3DClearMask_obj::__register();
::native::display3D::Context3D_obj::__register();
::native::display::TriangleCulling_obj::__register();
::native::display::Tilesheet_obj::__register();
::native::display::StageScaleMode_obj::__register();
::native::display::StageQuality_obj::__register();
::native::display::StageDisplayState_obj::__register();
::native::display::StageAlign_obj::__register();
::native::display::Stage3D_obj::__register();
::native::display::TouchInfo_obj::__register();
::native::display::SpreadMethod_obj::__register();
::native::display::PixelSnapping_obj::__register();
::native::display::OpenGLView_obj::__register();
::native::display::MovieClip_obj::__register();
::native::display::ManagedStage_obj::__register();
::native::display::Stage_obj::__register();
::native::events::TouchEvent_obj::__register();
::native::events::MouseEvent_obj::__register();
::native::events::Event_obj::__register();
::native::display::LineScaleMode_obj::__register();
::native::display::JointStyle_obj::__register();
::native::display::InterpolationMethod_obj::__register();
::native::display::IGraphicsData_obj::__register();
::native::display::GraphicsPathWinding_obj::__register();
::native::display::Graphics_obj::__register();
::native::display::GradientType_obj::__register();
::native::display::DirectRenderer_obj::__register();
::native::display::CapsStyle_obj::__register();
::native::display::BlendMode_obj::__register();
::native::display::OptimizedPerlin_obj::__register();
::native::display::BitmapData_obj::__register();
::native::display::Bitmap_obj::__register();
::native::Lib_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesOutput_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::Utf8_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Log_obj::__register();
::haxe::Json_obj::__register();
::haxe::Http_obj::__register();
::haxe::FastList_obj::__register();
::haxe::_FastList::FastListIterator_obj::__register();
::haxe::FastCell_obj::__register();
::format::display::MovieClip_obj::__register();
::format::display::FrameLabel_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Gc_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::com::squad::dr::widgets::Generator_obj::__register();
::com::squad::dr::widgets::Widget_obj::__register();
::com::squad::dr::Theatre_obj::__register();
::com::squad::dr::PubNub_obj::__register();
::com::squad::dr::Lobby_obj::__register();
::org::flixel::FlxState_obj::__register();
::org::flixel::FlxGroup_obj::__register();
::org::flixel::FlxBasic_obj::__register();
::com::squad::dr::DrSquad_obj::__register();
::org::flixel::FlxGame_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::Sys_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::Main_obj::__register();
::native::display::Sprite_obj::__register();
::native::display::DisplayObjectContainer_obj::__register();
::native::display::InteractiveObject_obj::__register();
::native::display::DisplayObject_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::native::Loader_obj::__register();
::native::display::IBitmapDrawable_obj::__register();
::native::events::EventDispatcher_obj::__register();
::native::events::IEventDispatcher_obj::__register();
::List_obj::__register();
::IntIter_obj::__register();
::IntHash_obj::__register();
::Hash_obj::__register();
::EReg_obj::__register();
::cpp::Lib_obj::__register();
::Date_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::native::ui::Multitouch_obj::__init__();
::native::utils::ByteArray_obj::__init__();
::sys::net::Host_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Gc_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::Date_obj::__boot();
::Hash_obj::__boot();
::IntHash_obj::__boot();
::IntIter_obj::__boot();
::List_obj::__boot();
::native::events::IEventDispatcher_obj::__boot();
::native::events::EventDispatcher_obj::__boot();
::native::display::IBitmapDrawable_obj::__boot();
::native::Loader_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::native::display::DisplayObject_obj::__boot();
::native::display::InteractiveObject_obj::__boot();
::native::display::DisplayObjectContainer_obj::__boot();
::native::display::Sprite_obj::__boot();
::Main_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::org::flixel::FlxGame_obj::__boot();
::com::squad::dr::DrSquad_obj::__boot();
::org::flixel::FlxBasic_obj::__boot();
::org::flixel::FlxGroup_obj::__boot();
::org::flixel::FlxState_obj::__boot();
::com::squad::dr::Lobby_obj::__boot();
::com::squad::dr::PubNub_obj::__boot();
::com::squad::dr::Theatre_obj::__boot();
::com::squad::dr::widgets::Widget_obj::__boot();
::com::squad::dr::widgets::Generator_obj::__boot();
::format::display::FrameLabel_obj::__boot();
::format::display::MovieClip_obj::__boot();
::haxe::FastCell_obj::__boot();
::haxe::_FastList::FastListIterator_obj::__boot();
::haxe::FastList_obj::__boot();
::haxe::Http_obj::__boot();
::haxe::Json_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::Utf8_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::BytesOutput_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::native::Lib_obj::__boot();
::native::display::Bitmap_obj::__boot();
::native::display::BitmapData_obj::__boot();
::native::display::OptimizedPerlin_obj::__boot();
::native::display::BlendMode_obj::__boot();
::native::display::CapsStyle_obj::__boot();
::native::display::DirectRenderer_obj::__boot();
::native::display::GradientType_obj::__boot();
::native::display::Graphics_obj::__boot();
::native::display::GraphicsPathWinding_obj::__boot();
::native::display::IGraphicsData_obj::__boot();
::native::display::InterpolationMethod_obj::__boot();
::native::display::JointStyle_obj::__boot();
::native::display::LineScaleMode_obj::__boot();
::native::events::Event_obj::__boot();
::native::events::MouseEvent_obj::__boot();
::native::events::TouchEvent_obj::__boot();
::native::display::Stage_obj::__boot();
::native::display::ManagedStage_obj::__boot();
::native::display::MovieClip_obj::__boot();
::native::display::OpenGLView_obj::__boot();
::native::display::PixelSnapping_obj::__boot();
::native::display::SpreadMethod_obj::__boot();
::native::display::TouchInfo_obj::__boot();
::native::display::Stage3D_obj::__boot();
::native::display::StageAlign_obj::__boot();
::native::display::StageDisplayState_obj::__boot();
::native::display::StageQuality_obj::__boot();
::native::display::StageScaleMode_obj::__boot();
::native::display::Tilesheet_obj::__boot();
::native::display::TriangleCulling_obj::__boot();
::native::display3D::Context3D_obj::__boot();
::native::display3D::Context3DClearMask_obj::__boot();
::native::display3D::Context3DCompareMode_obj::__boot();
::native::display3D::Context3DProgramType_obj::__boot();
::native::display3D::Context3DStencilAction_obj::__boot();
::native::display3D::Context3DTextureFormat_obj::__boot();
::native::display3D::Context3DTriangleFace_obj::__boot();
::native::display3D::Context3DVertexBufferFormat_obj::__boot();
::native::display3D::IndexBuffer3D_obj::__boot();
::native::display3D::Program3D_obj::__boot();
::native::display3D::VertexBuffer3D_obj::__boot();
::native::display3D::textures::TextureBase_obj::__boot();
::native::display3D::textures::CubeTexture_obj::__boot();
::native::display3D::textures::Texture_obj::__boot();
::native::errors::Error_obj::__boot();
::native::errors::ArgumentError_obj::__boot();
::native::errors::EOFError_obj::__boot();
::native::errors::RangeError_obj::__boot();
::native::events::TextEvent_obj::__boot();
::native::events::ErrorEvent_obj::__boot();
::native::events::Listener_obj::__boot();
::native::events::EventPhase_obj::__boot();
::native::events::FocusEvent_obj::__boot();
::native::events::HTTPStatusEvent_obj::__boot();
::native::events::IOErrorEvent_obj::__boot();
::native::events::JoystickEvent_obj::__boot();
::native::events::KeyboardEvent_obj::__boot();
::native::events::ProgressEvent_obj::__boot();
::native::events::SampleDataEvent_obj::__boot();
::native::filesystem::File_obj::__boot();
::native::filters::BitmapFilter_obj::__boot();
::native::geom::ColorTransform_obj::__boot();
::native::geom::Matrix_obj::__boot();
::native::geom::Matrix3D_obj::__boot();
::native::geom::Point_obj::__boot();
::native::geom::Rectangle_obj::__boot();
::native::geom::Transform_obj::__boot();
::native::geom::Vector3D_obj::__boot();
::native::gl::GL_obj::__boot();
::native::gl::Object_obj::__boot();
::native::gl::Buffer_obj::__boot();
::native::gl::Framebuffer_obj::__boot();
::native::gl::Program_obj::__boot();
::native::gl::Renderbuffer_obj::__boot();
::native::gl::Shader_obj::__boot();
::native::gl::Texture_obj::__boot();
::native::media::ID3Info_obj::__boot();
::native::media::Sound_obj::__boot();
::native::media::SoundChannel_obj::__boot();
::native::media::SoundLoaderContext_obj::__boot();
::native::media::SoundTransform_obj::__boot();
::native::net::SharedObject_obj::__boot();
::native::net::SharedObjectFlushStatus_obj::__boot();
::native::net::URLLoader_obj::__boot();
::native::net::URLLoaderDataFormat_obj::__boot();
::native::net::URLRequest_obj::__boot();
::native::net::URLRequestHeader_obj::__boot();
::native::net::URLRequestMethod_obj::__boot();
::native::net::URLVariables_obj::__boot();
::native::system::System_obj::__boot();
::native::text::AntiAliasType_obj::__boot();
::native::text::Font_obj::__boot();
::native::text::FontStyle_obj::__boot();
::native::text::FontType_obj::__boot();
::native::text::TextField_obj::__boot();
::native::text::TextFieldAutoSize_obj::__boot();
::native::text::TextFieldType_obj::__boot();
::native::text::TextFormat_obj::__boot();
::native::text::TextFormatAlign_obj::__boot();
::native::ui::Keyboard_obj::__boot();
::native::ui::Mouse_obj::__boot();
::native::ui::Multitouch_obj::__boot();
::native::ui::MultitouchInputMode_obj::__boot();
::native::utils::IMemoryRange_obj::__boot();
::native::utils::ArrayBufferView_obj::__boot();
::native::utils::IDataInput_obj::__boot();
::native::utils::ByteArray_obj::__boot();
::native::utils::CompressionAlgorithm_obj::__boot();
::native::utils::Endian_obj::__boot();
::native::utils::Float32Array_obj::__boot();
::native::utils::WeakRef_obj::__boot();
::nme::Lib_obj::__boot();
::nme::VectorHelper_obj::__boot();
::nme::installer::Assets_obj::__boot();
::org::flixel::FlxAssets_obj::__boot();
::org::flixel::FlxRect_obj::__boot();
::org::flixel::FlxPoint_obj::__boot();
::org::flixel::FlxObject_obj::__boot();
::org::flixel::FlxSprite_obj::__boot();
::org::flixel::FlxButton_obj::__boot();
::org::flixel::FlxCamera_obj::__boot();
::org::flixel::FlxG_obj::__boot();
::org::flixel::FlxPath_obj::__boot();
::org::flixel::FlxSave_obj::__boot();
::org::flixel::FlxSound_obj::__boot();
::org::flixel::FlxText_obj::__boot();
::org::flixel::FlxTilemap_obj::__boot();
::org::flixel::FlxTimer_obj::__boot();
::org::flixel::FlxU_obj::__boot();
::org::flixel::plugin::DebugPathDisplay_obj::__boot();
::org::flixel::plugin::TimerManager_obj::__boot();
::org::flixel::plugin::pxText::PxBitmapFont_obj::__boot();
::org::flixel::plugin::pxText::HelperSymbol_obj::__boot();
::org::flixel::plugin::pxText::PxFontSymbol_obj::__boot();
::org::flixel::system::FlxAnim_obj::__boot();
::org::flixel::system::FlxDebugger_obj::__boot();
::org::flixel::system::FlxList_obj::__boot();
::org::flixel::system::FlxQuadTree_obj::__boot();
::org::flixel::system::FlxReplay_obj::__boot();
::org::flixel::system::FlxTile_obj::__boot();
::org::flixel::system::FlxTilemapBuffer_obj::__boot();
::org::flixel::system::FlxWindow_obj::__boot();
::org::flixel::system::debug::Log_obj::__boot();
::org::flixel::system::debug::Perf_obj::__boot();
::org::flixel::system::debug::VCR_obj::__boot();
::org::flixel::system::debug::Vis_obj::__boot();
::org::flixel::system::debug::Watch_obj::__boot();
::org::flixel::system::debug::WatchEntry_obj::__boot();
::org::flixel::system::input::Input_obj::__boot();
::org::flixel::system::input::Joystick_obj::__boot();
::org::flixel::system::input::JoyButton_obj::__boot();
::org::flixel::system::input::JoystickManager_obj::__boot();
::org::flixel::system::input::Keyboard_obj::__boot();
::org::flixel::system::input::MapObject_obj::__boot();
::org::flixel::system::input::Mouse_obj::__boot();
::org::flixel::system::input::Touch_obj::__boot();
::org::flixel::system::input::TouchManager_obj::__boot();
::org::flixel::system::layer::Atlas_obj::__boot();
::org::flixel::system::layer::DrawStackItem_obj::__boot();
::org::flixel::system::layer::Node_obj::__boot();
::org::flixel::system::layer::TileSheetData_obj::__boot();
::org::flixel::system::layer::FlxSpriteFrames_obj::__boot();
::org::flixel::system::layer::RectanglePointPair_obj::__boot();
::org::flixel::system::replay::CodeValuePair_obj::__boot();
::org::flixel::system::replay::FrameRecord_obj::__boot();
::org::flixel::system::replay::MouseRecord_obj::__boot();
::org::flixel::tweens::FlxTween_obj::__boot();
::org::flixel::tweens::misc::MultiVarTween_obj::__boot();
::org::flixel::tweens::util::Ease_obj::__boot();
::sys::_FileSystem::FileKind_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::sys::io::FileSeek_obj::__boot();
::sys::net::Host_obj::__boot();
::sys::net::_Socket::SocketInput_obj::__boot();
::sys::net::_Socket::SocketOutput_obj::__boot();
::sys::net::Socket_obj::__boot();
}

