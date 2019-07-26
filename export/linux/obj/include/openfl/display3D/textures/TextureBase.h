// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#define INCLUDED_openfl_display3D_textures_TextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(openfl,_internal,renderer,SamplerState)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES TextureBase_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef TextureBase_obj OBJ_;
		TextureBase_obj();

	public:
		enum { _hx_ClassId = 0x19affbf1 };

		void __construct( ::openfl::display3D::Context3D context);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.TextureBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.textures.TextureBase"); }
		static hx::ObjectPtr< TextureBase_obj > __new( ::openfl::display3D::Context3D context);
		static hx::ObjectPtr< TextureBase_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextureBase","\x6c","\x7e","\xc2","\xdb"); }

		static void __boot();
		static  ::haxe::ds::IntMap _hx___compressedFormats;
		static  ::haxe::ds::IntMap _hx___compressedFormatsAlpha;
		static  ::Dynamic _hx___supportsBGRA;
		static int _hx___textureFormat;
		static int _hx___textureInternalFormat;
		 ::openfl::display3D::textures::TextureBase _hx___alphaTexture;
		 ::openfl::display3D::Context3D _hx___context;
		int _hx___format;
		 ::lime::graphics::opengl::GLObject _hx___glDepthRenderbuffer;
		 ::lime::graphics::opengl::GLObject _hx___glFramebuffer;
		 ::lime::graphics::opengl::GLObject _hx___glStencilRenderbuffer;
		int _hx___height;
		int _hx___internalFormat;
		bool _hx___optimizeForRenderToTexture;
		 ::openfl::_internal::renderer::SamplerState _hx___samplerState;
		int _hx___streamingLevels;
		 ::lime::graphics::RenderContext _hx___textureContext;
		 ::lime::graphics::opengl::GLObject _hx___textureID;
		int _hx___textureTarget;
		int _hx___width;
		void dispose();
		::Dynamic dispose_dyn();

		virtual  ::lime::graphics::opengl::GLObject _hx___getGLFramebuffer(bool enableDepthAndStencil,int antiAlias,int surfaceSelector);
		::Dynamic _hx___getGLFramebuffer_dyn();

		 ::lime::graphics::Image _hx___getImage( ::openfl::display::BitmapData bitmapData);
		::Dynamic _hx___getImage_dyn();

		virtual  ::lime::graphics::opengl::GLObject _hx___getTexture();
		::Dynamic _hx___getTexture_dyn();

		virtual bool _hx___setSamplerState( ::openfl::_internal::renderer::SamplerState state);
		::Dynamic _hx___setSamplerState_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_TextureBase */ 
