// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ImageFileFormat
#include <lime/graphics/ImageFileFormat.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::ImageFileFormat ImageFileFormat_obj::BMP;

::lime::graphics::ImageFileFormat ImageFileFormat_obj::JPEG;

::lime::graphics::ImageFileFormat ImageFileFormat_obj::PNG;

bool ImageFileFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BMP",25,58,32,00)) { outValue = ImageFileFormat_obj::BMP; return true; }
	if (inName==HX_("JPEG",a8,ba,26,31)) { outValue = ImageFileFormat_obj::JPEG; return true; }
	if (inName==HX_("PNG",89,f8,3c,00)) { outValue = ImageFileFormat_obj::PNG; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageFileFormat_obj)

int ImageFileFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BMP",25,58,32,00)) return 0;
	if (inName==HX_("JPEG",a8,ba,26,31)) return 1;
	if (inName==HX_("PNG",89,f8,3c,00)) return 2;
	return super::__FindIndex(inName);
}

int ImageFileFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BMP",25,58,32,00)) return 0;
	if (inName==HX_("JPEG",a8,ba,26,31)) return 0;
	if (inName==HX_("PNG",89,f8,3c,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val ImageFileFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BMP",25,58,32,00)) return BMP;
	if (inName==HX_("JPEG",a8,ba,26,31)) return JPEG;
	if (inName==HX_("PNG",89,f8,3c,00)) return PNG;
	return super::__Field(inName,inCallProp);
}

static ::String ImageFileFormat_obj_sStaticFields[] = {
	HX_("BMP",25,58,32,00),
	HX_("JPEG",a8,ba,26,31),
	HX_("PNG",89,f8,3c,00),
	::String(null())
};

static void ImageFileFormat_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageFileFormat_obj::BMP,"BMP");
	HX_MARK_MEMBER_NAME(ImageFileFormat_obj::JPEG,"JPEG");
	HX_MARK_MEMBER_NAME(ImageFileFormat_obj::PNG,"PNG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageFileFormat_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageFileFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageFileFormat_obj::BMP,"BMP");
	HX_VISIT_MEMBER_NAME(ImageFileFormat_obj::JPEG,"JPEG");
	HX_VISIT_MEMBER_NAME(ImageFileFormat_obj::PNG,"PNG");
};
#endif

hx::Class ImageFileFormat_obj::__mClass;

Dynamic __Create_ImageFileFormat_obj() { return new ImageFileFormat_obj; }

void ImageFileFormat_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.graphics.ImageFileFormat","\xc4","\xc2","\x81","\x0b"), hx::TCanCast< ImageFileFormat_obj >,ImageFileFormat_obj_sStaticFields,0,
	&__Create_ImageFileFormat_obj, &__Create,
	&super::__SGetClass(), &CreateImageFileFormat_obj, ImageFileFormat_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ImageFileFormat_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageFileFormat_obj::__GetStatic;
}

void ImageFileFormat_obj::__boot()
{
BMP = hx::CreateEnum< ImageFileFormat_obj >(HX_HCSTRING("BMP","\x25","\x58","\x32","\x00"),0,0);
JPEG = hx::CreateEnum< ImageFileFormat_obj >(HX_HCSTRING("JPEG","\xa8","\xba","\x26","\x31"),1,0);
PNG = hx::CreateEnum< ImageFileFormat_obj >(HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00"),2,0);
}


} // end namespace lime
} // end namespace graphics
