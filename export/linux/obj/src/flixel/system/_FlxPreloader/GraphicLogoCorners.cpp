// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system__FlxPreloader_GraphicLogoCorners
#include <flixel/system/_FlxPreloader/GraphicLogoCorners.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f94035369fdfefc7_51_new,"flixel.system._FlxPreloader.GraphicLogoCorners","new",0x2a125ad5,"flixel.system._FlxPreloader.GraphicLogoCorners.new","openfl/_internal/macros/AssetsMacro.hx",51,0xf7db08ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0560227b527158cb_1_boot,"flixel.system._FlxPreloader.GraphicLogoCorners","boot",0x9e16201d,"flixel.system._FlxPreloader.GraphicLogoCorners.boot","?",1,0x0000003f)
namespace flixel{
namespace _hx_system{
namespace _FlxPreloader{

void GraphicLogoCorners_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_f94035369fdfefc7_51_new)
HXLINE(  83)		super::__construct((int)0,(int)0,transparent,fillRGBA);
HXLINE(  85)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::_FlxPreloader::GraphicLogoCorners_obj::resourceName));
HXLINE(  86)		{
HXLINE(  86)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray));
HXDLIN(  86)			this->_hx___fromImage(image);
            		}
            	}

Dynamic GraphicLogoCorners_obj::__CreateEmpty() { return new GraphicLogoCorners_obj; }

void *GraphicLogoCorners_obj::_hx_vtable = 0;

Dynamic GraphicLogoCorners_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicLogoCorners_obj > _hx_result = new GraphicLogoCorners_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicLogoCorners_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16efda23) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x16efda23;
	} else {
		return inClassId==(int)0x28c743a7;
	}
}

::String GraphicLogoCorners_obj::resourceName;


hx::ObjectPtr< GraphicLogoCorners_obj > GraphicLogoCorners_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicLogoCorners_obj > __this = new GraphicLogoCorners_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicLogoCorners_obj > GraphicLogoCorners_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicLogoCorners_obj *__this = (GraphicLogoCorners_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicLogoCorners_obj), true, "flixel.system._FlxPreloader.GraphicLogoCorners"));
	*(void **)__this = GraphicLogoCorners_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicLogoCorners_obj::GraphicLogoCorners_obj()
{
}

bool GraphicLogoCorners_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicLogoCorners_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicLogoCorners_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicLogoCorners_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicLogoCorners_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicLogoCorners_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicLogoCorners_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicLogoCorners_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicLogoCorners_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicLogoCorners_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicLogoCorners_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicLogoCorners_obj::__mClass;

static ::String GraphicLogoCorners_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicLogoCorners_obj::__register()
{
	hx::Object *dummy = new GraphicLogoCorners_obj;
	GraphicLogoCorners_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system._FlxPreloader.GraphicLogoCorners","\x63","\x4c","\x15","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicLogoCorners_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicLogoCorners_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicLogoCorners_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicLogoCorners_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicLogoCorners_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicLogoCorners_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicLogoCorners_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicLogoCorners_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicLogoCorners_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0560227b527158cb_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_system__FlxPreloader_GraphicLogoCorners",da,69,74,ee);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace _FlxPreloader
