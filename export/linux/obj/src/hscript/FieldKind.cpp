// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_hscript_FieldKind
#include <hscript/FieldKind.h>
#endif
namespace hscript{

::hscript::FieldKind FieldKind_obj::KFunction( ::Dynamic f)
{
	return hx::CreateEnum< FieldKind_obj >(HX_("KFunction",83,2a,be,ba),0,1)->_hx_init(0,f);
}

::hscript::FieldKind FieldKind_obj::KVar( ::Dynamic v)
{
	return hx::CreateEnum< FieldKind_obj >(HX_("KVar",5c,97,d4,31),1,1)->_hx_init(0,v);
}

bool FieldKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) { outValue = FieldKind_obj::KFunction_dyn(); return true; }
	if (inName==HX_("KVar",5c,97,d4,31)) { outValue = FieldKind_obj::KVar_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FieldKind_obj)

int FieldKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) return 0;
	if (inName==HX_("KVar",5c,97,d4,31)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldKind_obj,KFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldKind_obj,KVar,return)

int FieldKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) return 1;
	if (inName==HX_("KVar",5c,97,d4,31)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val FieldKind_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) return KFunction_dyn();
	if (inName==HX_("KVar",5c,97,d4,31)) return KVar_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FieldKind_obj_sStaticFields[] = {
	HX_("KFunction",83,2a,be,ba),
	HX_("KVar",5c,97,d4,31),
	::String(null())
};

static void FieldKind_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void FieldKind_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FieldKind_obj::__mClass,"__mClass");
};
#endif

hx::Class FieldKind_obj::__mClass;

Dynamic __Create_FieldKind_obj() { return new FieldKind_obj; }

void FieldKind_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("hscript.FieldKind","\x53","\xab","\x36","\xce"), hx::TCanCast< FieldKind_obj >,FieldKind_obj_sStaticFields,0,
	&__Create_FieldKind_obj, &__Create,
	&super::__SGetClass(), &CreateFieldKind_obj, FieldKind_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FieldKind_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FieldKind_obj::__GetStatic;
}

void FieldKind_obj::__boot()
{
}


} // end namespace hscript
