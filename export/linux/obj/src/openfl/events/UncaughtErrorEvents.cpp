// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f614a07866ea6e55_15_new,"openfl.events.UncaughtErrorEvents","new",0xf17d0a07,"openfl.events.UncaughtErrorEvents.new","openfl/events/UncaughtErrorEvents.hx",15,0x17415d69)
namespace openfl{
namespace events{

void UncaughtErrorEvents_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f614a07866ea6e55_15_new)
HXDLIN(  15)		super::__construct(null());
            	}

Dynamic UncaughtErrorEvents_obj::__CreateEmpty() { return new UncaughtErrorEvents_obj; }

void *UncaughtErrorEvents_obj::_hx_vtable = 0;

Dynamic UncaughtErrorEvents_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UncaughtErrorEvents_obj > _hx_result = new UncaughtErrorEvents_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UncaughtErrorEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dd4339f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dd4339f;
	} else {
		return inClassId==(int)0x1b123bf8;
	}
}


hx::ObjectPtr< UncaughtErrorEvents_obj > UncaughtErrorEvents_obj::__new() {
	hx::ObjectPtr< UncaughtErrorEvents_obj > __this = new UncaughtErrorEvents_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< UncaughtErrorEvents_obj > UncaughtErrorEvents_obj::__alloc(hx::Ctx *_hx_ctx) {
	UncaughtErrorEvents_obj *__this = (UncaughtErrorEvents_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UncaughtErrorEvents_obj), true, "openfl.events.UncaughtErrorEvents"));
	*(void **)__this = UncaughtErrorEvents_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

UncaughtErrorEvents_obj::UncaughtErrorEvents_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *UncaughtErrorEvents_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *UncaughtErrorEvents_obj_sStaticStorageInfo = 0;
#endif

static void UncaughtErrorEvents_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UncaughtErrorEvents_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UncaughtErrorEvents_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UncaughtErrorEvents_obj::__mClass,"__mClass");
};

#endif

hx::Class UncaughtErrorEvents_obj::__mClass;

void UncaughtErrorEvents_obj::__register()
{
	hx::Object *dummy = new UncaughtErrorEvents_obj;
	UncaughtErrorEvents_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.UncaughtErrorEvents","\x95","\xfa","\x87","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UncaughtErrorEvents_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UncaughtErrorEvents_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UncaughtErrorEvents_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UncaughtErrorEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UncaughtErrorEvents_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
