// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl__internal_text_GlyphPosition
#include <openfl/_internal/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f12f05933266a8d8_36_new,"openfl._internal.text.TextLayoutGroup","new",0x78a7f549,"openfl._internal.text.TextLayoutGroup.new","openfl/_internal/text/TextLayoutGroup.hx",36,0xbe6fd786)
HX_LOCAL_STACK_FRAME(_hx_pos_f12f05933266a8d8_50_getAdvance,"openfl._internal.text.TextLayoutGroup","getAdvance",0x5f8fc8c3,"openfl._internal.text.TextLayoutGroup.getAdvance","openfl/_internal/text/TextLayoutGroup.hx",50,0xbe6fd786)
namespace openfl{
namespace _internal{
namespace text{

void TextLayoutGroup_obj::__construct( ::openfl::text::TextFormat format,int startIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_f12f05933266a8d8_36_new)
HXLINE(  38)		this->format = format;
HXLINE(  39)		this->startIndex = startIndex;
HXLINE(  40)		this->endIndex = endIndex;
            	}

Dynamic TextLayoutGroup_obj::__CreateEmpty() { return new TextLayoutGroup_obj; }

void *TextLayoutGroup_obj::_hx_vtable = 0;

Dynamic TextLayoutGroup_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextLayoutGroup_obj > _hx_result = new TextLayoutGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TextLayoutGroup_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0456b333;
}

Float TextLayoutGroup_obj::getAdvance(int index){
            	HX_STACKFRAME(&_hx_pos_f12f05933266a8d8_50_getAdvance)
HXDLIN(  50)		bool _hx_tmp;
HXDLIN(  50)		if ((index >= (int)0)) {
HXDLIN(  50)			_hx_tmp = (index < this->positions->length);
            		}
            		else {
HXDLIN(  50)			_hx_tmp = false;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXDLIN(  50)			return this->positions->__get(index).StaticCast<  ::openfl::_internal::text::GlyphPosition >()->advance->x;
            		}
            		else {
HXDLIN(  50)			return (int)0;
            		}
HXDLIN(  50)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayoutGroup_obj,getAdvance,return )


hx::ObjectPtr< TextLayoutGroup_obj > TextLayoutGroup_obj::__new( ::openfl::text::TextFormat format,int startIndex,int endIndex) {
	hx::ObjectPtr< TextLayoutGroup_obj > __this = new TextLayoutGroup_obj();
	__this->__construct(format,startIndex,endIndex);
	return __this;
}

hx::ObjectPtr< TextLayoutGroup_obj > TextLayoutGroup_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::text::TextFormat format,int startIndex,int endIndex) {
	TextLayoutGroup_obj *__this = (TextLayoutGroup_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextLayoutGroup_obj), true, "openfl._internal.text.TextLayoutGroup"));
	*(void **)__this = TextLayoutGroup_obj::_hx_vtable;
	__this->__construct(format,startIndex,endIndex);
	return __this;
}

TextLayoutGroup_obj::TextLayoutGroup_obj()
{
}

void TextLayoutGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayoutGroup);
	HX_MARK_MEMBER_NAME(ascent,"ascent");
	HX_MARK_MEMBER_NAME(descent,"descent");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(lineIndex,"lineIndex");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(startIndex,"startIndex");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void TextLayoutGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ascent,"ascent");
	HX_VISIT_MEMBER_NAME(descent,"descent");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(lineIndex,"lineIndex");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(startIndex,"startIndex");
	HX_VISIT_MEMBER_NAME(width,"width");
}

hx::Val TextLayoutGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return hx::Val( ascent ); }
		if (HX_FIELD_EQ(inName,"format") ) { return hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return hx::Val( descent ); }
		if (HX_FIELD_EQ(inName,"leading") ) { return hx::Val( leading ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return hx::Val( offsetY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { return hx::Val( endIndex ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineIndex") ) { return hx::Val( lineIndex ); }
		if (HX_FIELD_EQ(inName,"positions") ) { return hx::Val( positions ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { return hx::Val( startIndex ); }
		if (HX_FIELD_EQ(inName,"getAdvance") ) { return hx::Val( getAdvance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextLayoutGroup_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineIndex") ) { lineIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { startIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLayoutGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"));
	outFields->push(HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"));
	outFields->push(HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("lineIndex","\x7e","\x9e","\x0f","\x05"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("startIndex","\x50","\x73","\x2b","\xda"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextLayoutGroup_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,ascent),HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,descent),HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,endIndex),HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextLayoutGroup_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,lineIndex),HX_HCSTRING("lineIndex","\x7e","\x9e","\x0f","\x05")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextLayoutGroup_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,startIndex),HX_HCSTRING("startIndex","\x50","\x73","\x2b","\xda")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextLayoutGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String TextLayoutGroup_obj_sMemberFields[] = {
	HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"),
	HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"),
	HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("lineIndex","\x7e","\x9e","\x0f","\x05"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("startIndex","\x50","\x73","\x2b","\xda"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("getAdvance","\x8c","\x8e","\x6d","\x3e"),
	::String(null()) };

static void TextLayoutGroup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayoutGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextLayoutGroup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayoutGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class TextLayoutGroup_obj::__mClass;

void TextLayoutGroup_obj::__register()
{
	hx::Object *dummy = new TextLayoutGroup_obj;
	TextLayoutGroup_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextLayoutGroup","\xd7","\x9c","\xc7","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextLayoutGroup_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextLayoutGroup_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLayoutGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextLayoutGroup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextLayoutGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextLayoutGroup_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text