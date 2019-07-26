// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::ATLAS;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::FILTER;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::FONT;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::IMAGE;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::TILES;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::USER(::String type)
{
	return hx::CreateEnum< FlxFrameCollectionType_obj >(HX_("USER",4b,5a,6e,38),4,1)->_hx_init(0,type);
}

bool FlxFrameCollectionType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ATLAS",2b,85,cb,a4)) { outValue = FlxFrameCollectionType_obj::ATLAS; return true; }
	if (inName==HX_("FILTER",b8,cb,b7,37)) { outValue = FlxFrameCollectionType_obj::FILTER; return true; }
	if (inName==HX_("FONT",cf,25,81,2e)) { outValue = FlxFrameCollectionType_obj::FONT; return true; }
	if (inName==HX_("IMAGE",3b,57,57,3b)) { outValue = FlxFrameCollectionType_obj::IMAGE; return true; }
	if (inName==HX_("TILES",65,35,23,8e)) { outValue = FlxFrameCollectionType_obj::TILES; return true; }
	if (inName==HX_("USER",4b,5a,6e,38)) { outValue = FlxFrameCollectionType_obj::USER_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxFrameCollectionType_obj)

int FlxFrameCollectionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ATLAS",2b,85,cb,a4)) return 2;
	if (inName==HX_("FILTER",b8,cb,b7,37)) return 5;
	if (inName==HX_("FONT",cf,25,81,2e)) return 3;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 0;
	if (inName==HX_("TILES",65,35,23,8e)) return 1;
	if (inName==HX_("USER",4b,5a,6e,38)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFrameCollectionType_obj,USER,return)

int FlxFrameCollectionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ATLAS",2b,85,cb,a4)) return 0;
	if (inName==HX_("FILTER",b8,cb,b7,37)) return 0;
	if (inName==HX_("FONT",cf,25,81,2e)) return 0;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 0;
	if (inName==HX_("TILES",65,35,23,8e)) return 0;
	if (inName==HX_("USER",4b,5a,6e,38)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val FlxFrameCollectionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ATLAS",2b,85,cb,a4)) return ATLAS;
	if (inName==HX_("FILTER",b8,cb,b7,37)) return FILTER;
	if (inName==HX_("FONT",cf,25,81,2e)) return FONT;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return IMAGE;
	if (inName==HX_("TILES",65,35,23,8e)) return TILES;
	if (inName==HX_("USER",4b,5a,6e,38)) return USER_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FlxFrameCollectionType_obj_sStaticFields[] = {
	HX_("IMAGE",3b,57,57,3b),
	HX_("TILES",65,35,23,8e),
	HX_("ATLAS",2b,85,cb,a4),
	HX_("FONT",cf,25,81,2e),
	HX_("USER",4b,5a,6e,38),
	HX_("FILTER",b8,cb,b7,37),
	::String(null())
};

static void FlxFrameCollectionType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::ATLAS,"ATLAS");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::FILTER,"FILTER");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::FONT,"FONT");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::TILES,"TILES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFrameCollectionType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::ATLAS,"ATLAS");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::FILTER,"FILTER");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::FONT,"FONT");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::TILES,"TILES");
};
#endif

hx::Class FlxFrameCollectionType_obj::__mClass;

Dynamic __Create_FlxFrameCollectionType_obj() { return new FlxFrameCollectionType_obj; }

void FlxFrameCollectionType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.graphics.frames.FlxFrameCollectionType","\xca","\xae","\x38","\xe8"), hx::TCanCast< FlxFrameCollectionType_obj >,FlxFrameCollectionType_obj_sStaticFields,0,
	&__Create_FlxFrameCollectionType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxFrameCollectionType_obj, FlxFrameCollectionType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxFrameCollectionType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxFrameCollectionType_obj::__GetStatic;
}

void FlxFrameCollectionType_obj::__boot()
{
ATLAS = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("ATLAS","\x2b","\x85","\xcb","\xa4"),2,0);
FILTER = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("FILTER","\xb8","\xcb","\xb7","\x37"),5,0);
FONT = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),3,0);
IMAGE = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),0,0);
TILES = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e"),1,0);
}


} // end namespace flixel
} // end namespace graphics
} // end namespace frames
