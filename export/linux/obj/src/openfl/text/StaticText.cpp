// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_StaticText
#include <openfl/text/StaticText.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e77be1cfd6688cdf_21_new,"openfl.text.StaticText","new",0x0197a5d0,"openfl.text.StaticText.new","openfl/text/StaticText.hx",21,0x282a6b40)
namespace openfl{
namespace text{

void StaticText_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e77be1cfd6688cdf_21_new)
HXLINE(  23)		super::__construct();
HXLINE(  25)		this->_hx___graphics =  ::openfl::display::Graphics_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic StaticText_obj::__CreateEmpty() { return new StaticText_obj; }

void *StaticText_obj::_hx_vtable = 0;

Dynamic StaticText_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticText_obj > _hx_result = new StaticText_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19c29573;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x7550c1d8;
	}
}


hx::ObjectPtr< StaticText_obj > StaticText_obj::__new() {
	hx::ObjectPtr< StaticText_obj > __this = new StaticText_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< StaticText_obj > StaticText_obj::__alloc(hx::Ctx *_hx_ctx) {
	StaticText_obj *__this = (StaticText_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticText_obj), true, "openfl.text.StaticText"));
	*(void **)__this = StaticText_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StaticText_obj::StaticText_obj()
{
}

void StaticText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticText);
	HX_MARK_MEMBER_NAME(text,"text");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val StaticText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StaticText_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StaticText_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StaticText_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StaticText_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticText_obj_sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	::String(null()) };

static void StaticText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticText_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticText_obj::__mClass;

void StaticText_obj::__register()
{
	hx::Object *dummy = new StaticText_obj;
	StaticText_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.StaticText","\xde","\xbd","\x44","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticText_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StaticText_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StaticText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticText_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
