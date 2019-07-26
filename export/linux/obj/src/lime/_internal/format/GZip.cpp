// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_GZip
#include <lime/_internal/format/GZip.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d82d32e5304980fb_23_compress,"lime._internal.format.GZip","compress",0x187e488a,"lime._internal.format.GZip.compress","lime/_internal/format/GZip.hx",23,0xd3eb8ad9)
HX_LOCAL_STACK_FRAME(_hx_pos_d82d32e5304980fb_53_decompress,"lime._internal.format.GZip","decompress",0x5d43930b,"lime._internal.format.GZip.decompress","lime/_internal/format/GZip.hx",53,0xd3eb8ad9)
namespace lime{
namespace _internal{
namespace format{

void GZip_obj::__construct() { }

Dynamic GZip_obj::__CreateEmpty() { return new GZip_obj; }

void *GZip_obj::_hx_vtable = 0;

Dynamic GZip_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GZip_obj > _hx_result = new GZip_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GZip_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ba74f14;
}

 ::haxe::io::Bytes GZip_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_d82d32e5304980fb_23_compress)
HXDLIN(  23)		 ::Dynamic _hx_tmp = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN(  23)		 ::haxe::io::Bytes _hx_tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  23)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_gzip_compress(hx::DynamicPtr(bytes),hx::DynamicPtr(_hx_tmp1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GZip_obj,compress,return )

 ::haxe::io::Bytes GZip_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_d82d32e5304980fb_53_decompress)
HXDLIN(  53)		 ::Dynamic _hx_tmp = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN(  53)		 ::haxe::io::Bytes _hx_tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  53)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_gzip_decompress(hx::DynamicPtr(bytes),hx::DynamicPtr(_hx_tmp1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GZip_obj,decompress,return )


GZip_obj::GZip_obj()
{
}

bool GZip_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GZip_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GZip_obj_sStaticStorageInfo = 0;
#endif

static void GZip_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GZip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GZip_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GZip_obj::__mClass,"__mClass");
};

#endif

hx::Class GZip_obj::__mClass;

static ::String GZip_obj_sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	::String(null())
};

void GZip_obj::__register()
{
	hx::Object *dummy = new GZip_obj;
	GZip_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.format.GZip","\x86","\x1c","\x99","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GZip_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GZip_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GZip_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GZip_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GZip_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GZip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GZip_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace format
