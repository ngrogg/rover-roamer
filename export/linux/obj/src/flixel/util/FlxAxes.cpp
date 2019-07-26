// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxAxes FlxAxes_obj::X;

::flixel::util::FlxAxes FlxAxes_obj::XY;

::flixel::util::FlxAxes FlxAxes_obj::Y;

bool FlxAxes_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("X",58,00,00,00)) { outValue = FlxAxes_obj::X; return true; }
	if (inName==HX_("XY",01,4d,00,00)) { outValue = FlxAxes_obj::XY; return true; }
	if (inName==HX_("Y",59,00,00,00)) { outValue = FlxAxes_obj::Y; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxAxes_obj)

int FlxAxes_obj::__FindIndex(::String inName)
{
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("XY",01,4d,00,00)) return 2;
	if (inName==HX_("Y",59,00,00,00)) return 1;
	return super::__FindIndex(inName);
}

int FlxAxes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("XY",01,4d,00,00)) return 0;
	if (inName==HX_("Y",59,00,00,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxAxes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("X",58,00,00,00)) return X;
	if (inName==HX_("XY",01,4d,00,00)) return XY;
	if (inName==HX_("Y",59,00,00,00)) return Y;
	return super::__Field(inName,inCallProp);
}

static ::String FlxAxes_obj_sStaticFields[] = {
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	HX_("XY",01,4d,00,00),
	::String(null())
};

static void FlxAxes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAxes_obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxAxes_obj::XY,"XY");
	HX_MARK_MEMBER_NAME(FlxAxes_obj::Y,"Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAxes_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::XY,"XY");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::Y,"Y");
};
#endif

hx::Class FlxAxes_obj::__mClass;

Dynamic __Create_FlxAxes_obj() { return new FlxAxes_obj; }

void FlxAxes_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.util.FlxAxes","\x7d","\xff","\x79","\xb0"), hx::TCanCast< FlxAxes_obj >,FlxAxes_obj_sStaticFields,0,
	&__Create_FlxAxes_obj, &__Create,
	&super::__SGetClass(), &CreateFlxAxes_obj, FlxAxes_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxAxes_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxAxes_obj::__GetStatic;
}

void FlxAxes_obj::__boot()
{
X = hx::CreateEnum< FlxAxes_obj >(HX_HCSTRING("X","\x58","\x00","\x00","\x00"),0,0);
XY = hx::CreateEnum< FlxAxes_obj >(HX_HCSTRING("XY","\x01","\x4d","\x00","\x00"),2,0);
Y = hx::CreateEnum< FlxAxes_obj >(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),1,0);
}


} // end namespace flixel
} // end namespace util
