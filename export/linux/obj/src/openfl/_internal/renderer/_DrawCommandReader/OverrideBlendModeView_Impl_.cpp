// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideBlendModeView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/OverrideBlendModeView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f28381e732c8d0ff_453__new,"openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_","_new",0x903c20aa,"openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",453,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_f28381e732c8d0ff_454_get_blendMode,"openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_","get_blendMode",0xf9417bc2,"openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_.get_blendMode","openfl/_internal/renderer/DrawCommandReader.hx",454,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void OverrideBlendModeView_Impl__obj::__construct() { }

Dynamic OverrideBlendModeView_Impl__obj::__CreateEmpty() { return new OverrideBlendModeView_Impl__obj; }

void *OverrideBlendModeView_Impl__obj::_hx_vtable = 0;

Dynamic OverrideBlendModeView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OverrideBlendModeView_Impl__obj > _hx_result = new OverrideBlendModeView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OverrideBlendModeView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a1123b3;
}

 ::openfl::_internal::renderer::DrawCommandReader OverrideBlendModeView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_f28381e732c8d0ff_453__new)
HXDLIN( 453)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 453)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideBlendModeView_Impl__obj,_new,return )

 ::Dynamic OverrideBlendModeView_Impl__obj::get_blendMode( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_f28381e732c8d0ff_454_get_blendMode)
HXDLIN( 454)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideBlendModeView_Impl__obj,get_blendMode,return )


OverrideBlendModeView_Impl__obj::OverrideBlendModeView_Impl__obj()
{
}

bool OverrideBlendModeView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { outValue = get_blendMode_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OverrideBlendModeView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *OverrideBlendModeView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void OverrideBlendModeView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OverrideBlendModeView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OverrideBlendModeView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OverrideBlendModeView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class OverrideBlendModeView_Impl__obj::__mClass;

static ::String OverrideBlendModeView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_blendMode","\x2b","\xb8","\x9b","\xcd"),
	::String(null())
};

void OverrideBlendModeView_Impl__obj::__register()
{
	hx::Object *dummy = new OverrideBlendModeView_Impl__obj;
	OverrideBlendModeView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_","\xc5","\x19","\x85","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OverrideBlendModeView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OverrideBlendModeView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OverrideBlendModeView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OverrideBlendModeView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OverrideBlendModeView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OverrideBlendModeView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OverrideBlendModeView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
