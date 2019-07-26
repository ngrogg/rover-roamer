// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer_SamplerState
#define INCLUDED_openfl__internal_renderer_SamplerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d0c904c9b65dc455_27_new)
HX_DECLARE_CLASS3(openfl,_internal,renderer,SamplerState)

namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES SamplerState_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SamplerState_obj OBJ_;
		SamplerState_obj();

	public:
		enum { _hx_ClassId = 0x05ff5b74 };

		void __construct( ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,hx::Null< Float >  __o_lodBias,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_textureAlpha);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.SamplerState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.SamplerState"); }

		hx::ObjectPtr< SamplerState_obj > __new( ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,hx::Null< Float >  __o_lodBias,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_textureAlpha) {
			hx::ObjectPtr< SamplerState_obj > __this = new SamplerState_obj();
			__this->__construct(__o_wrap,__o_filter,__o_mipfilter,__o_lodBias,__o_ignoreSampler,__o_centroid,__o_textureAlpha);
			return __this;
		}

		static hx::ObjectPtr< SamplerState_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,hx::Null< Float >  __o_lodBias,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_textureAlpha) {
			SamplerState_obj *__this = (SamplerState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SamplerState_obj), true, "openfl._internal.renderer.SamplerState"));
			*(void **)__this = SamplerState_obj::_hx_vtable;
{
 ::Dynamic wrap = __o_wrap.Default(0);
 ::Dynamic filter = __o_filter.Default(5);
 ::Dynamic mipfilter = __o_mipfilter.Default(2);
Float lodBias = __o_lodBias.Default(((Float)0.0));
bool ignoreSampler = __o_ignoreSampler.Default(false);
bool centroid = __o_centroid.Default(false);
bool textureAlpha = __o_textureAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_d0c904c9b65dc455_27_new)
HXLINE(  29)		( ( ::openfl::_internal::renderer::SamplerState)(__this) )->wrap = wrap;
HXLINE(  30)		( ( ::openfl::_internal::renderer::SamplerState)(__this) )->filter = filter;
HXLINE(  31)		( ( ::openfl::_internal::renderer::SamplerState)(__this) )->mipfilter = mipfilter;
HXLINE(  32)		( ( ::openfl::_internal::renderer::SamplerState)(__this) )->lodBias = lodBias;
HXLINE(  33)		( ( ::openfl::_internal::renderer::SamplerState)(__this) )->ignoreSampler = ignoreSampler;
HXLINE(  34)		( ( ::openfl::_internal::renderer::SamplerState)(__this) )->centroid = centroid;
HXLINE(  35)		( ( ::openfl::_internal::renderer::SamplerState)(__this) )->textureAlpha = textureAlpha;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SamplerState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SamplerState","\x09","\x30","\xd2","\x83"); }

		bool centroid;
		 ::Dynamic filter;
		bool ignoreSampler;
		Float lodBias;
		 ::Dynamic mipfilter;
		bool mipmapGenerated;
		bool textureAlpha;
		 ::Dynamic wrap;
		 ::openfl::_internal::renderer::SamplerState clone();
		::Dynamic clone_dyn();

		void copyFrom( ::openfl::_internal::renderer::SamplerState other);
		::Dynamic copyFrom_dyn();

		bool equals( ::openfl::_internal::renderer::SamplerState other);
		::Dynamic equals_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_SamplerState */ 