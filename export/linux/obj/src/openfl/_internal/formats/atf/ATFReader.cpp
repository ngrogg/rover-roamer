// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_atf_ATFReader
#include <openfl/_internal/formats/atf/ATFReader.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_31_new,"openfl._internal.formats.atf.ATFReader","new",0x7c26602b,"openfl._internal.formats.atf.ATFReader.new","openfl/_internal/formats/atf/ATFReader.hx",31,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_83_readHeader,"openfl._internal.formats.atf.ATFReader","readHeader",0x01a9bd18,"openfl._internal.formats.atf.ATFReader.readHeader","openfl/_internal/formats/atf/ATFReader.hx",83,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_127_readTextures,"openfl._internal.formats.atf.ATFReader","readTextures",0x2ef4e383,"openfl._internal.formats.atf.ATFReader.readTextures","openfl/_internal/formats/atf/ATFReader.hx",127,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_164___readUInt24,"openfl._internal.formats.atf.ATFReader","__readUInt24",0xd90f37a7,"openfl._internal.formats.atf.ATFReader.__readUInt24","openfl/_internal/formats/atf/ATFReader.hx",164,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_175___readUInt32,"openfl._internal.formats.atf.ATFReader","__readUInt32",0xd90f3884,"openfl._internal.formats.atf.ATFReader.__readUInt32","openfl/_internal/formats/atf/ATFReader.hx",175,0xe5c2fe69)
namespace openfl{
namespace _internal{
namespace formats{
namespace atf{

void ATFReader_obj::__construct( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_31_new)
HXLINE(  39)		this->version = (int)0;
HXLINE(  45)		data->position = byteArrayOffset;
HXLINE(  46)		::String signature = data->readUTFBytes((int)3);
HXLINE(  47)		data->position = byteArrayOffset;
HXLINE(  49)		if ((signature != HX_("ATF",f3,9b,31,00))) {
HXLINE(  51)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF signature not found",a0,f7,2f,3a)));
            		}
HXLINE(  55)		int length = (int)0;
HXLINE(  58)		if ((data->b->__get((byteArrayOffset + (int)6)) == (int)255)) {
HXLINE(  60)			this->version = data->b->__get((byteArrayOffset + (int)7));
HXLINE(  61)			data->position = (byteArrayOffset + (int)8);
HXLINE(  62)			length = this->_hx___readUInt32(data);
            		}
            		else {
HXLINE(  66)			this->version = (int)0;
HXLINE(  67)			data->position = (byteArrayOffset + (int)3);
HXLINE(  68)			length = this->_hx___readUInt24(data);
            		}
HXLINE(  72)		int a = (byteArrayOffset + length);
HXDLIN(  72)		int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data);
HXDLIN(  72)		bool aNeg = (a < (int)0);
HXDLIN(  72)		bool bNeg = (b < (int)0);
HXDLIN(  72)		bool _hx_tmp;
HXDLIN(  72)		if ((aNeg != bNeg)) {
HXLINE(  72)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE(  72)			_hx_tmp = (a > b);
            		}
HXDLIN(  72)		if (_hx_tmp) {
HXLINE(  74)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF length exceeds byte array length",d7,29,45,0f)));
            		}
HXLINE(  78)		this->data = data;
            	}

Dynamic ATFReader_obj::__CreateEmpty() { return new ATFReader_obj; }

void *ATFReader_obj::_hx_vtable = 0;

Dynamic ATFReader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ATFReader_obj > _hx_result = new ATFReader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ATFReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32a52097;
}

bool ATFReader_obj::readHeader(int _hx___width,int _hx___height,bool cubeMap){
            	HX_GC_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_83_readHeader)
HXLINE(  85)		int tdata = this->data->readUnsignedByte();
HXLINE(  86)		int type = hx::UShr(tdata,(int)7);
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		if (!(cubeMap)) {
HXLINE(  88)			_hx_tmp = (type != (int)0);
            		}
            		else {
HXLINE(  88)			_hx_tmp = false;
            		}
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  90)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map not expected",a7,74,ca,c8)));
            		}
HXLINE(  94)		bool _hx_tmp1;
HXDLIN(  94)		if (cubeMap) {
HXLINE(  94)			_hx_tmp1 = (type != (int)1);
            		}
            		else {
HXLINE(  94)			_hx_tmp1 = false;
            		}
HXDLIN(  94)		if (_hx_tmp1) {
HXLINE(  96)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map expected",fa,fe,ed,52)));
            		}
HXLINE( 100)		this->cubeMap = cubeMap;
HXLINE( 102)		this->atfFormat = ((int)tdata & (int)(int)127);
HXLINE( 105)		bool _hx_tmp2;
HXDLIN( 105)		if ((this->atfFormat != (int)3)) {
HXLINE( 105)			_hx_tmp2 = (this->atfFormat != (int)5);
            		}
            		else {
HXLINE( 105)			_hx_tmp2 = false;
            		}
HXDLIN( 105)		if (_hx_tmp2) {
HXLINE( 107)			::lime::utils::Log_obj::warn(HX_("Only ATF block compressed textures without JPEG-XR+LZMA are supported",25,8c,50,6a),hx::SourceInfo(HX_("ATFReader.hx",e8,b6,75,e1),107,HX_("openfl._internal.formats.atf.ATFReader",b9,6e,7a,7f),HX_("readHeader",83,ed,7b,f6)));
            		}
HXLINE( 111)		this->width = ((int)(int)1 << (int)this->data->readUnsignedByte());
HXLINE( 112)		this->height = ((int)(int)1 << (int)this->data->readUnsignedByte());
HXLINE( 114)		bool _hx_tmp3;
HXDLIN( 114)		if ((this->width == _hx___width)) {
HXLINE( 114)			_hx_tmp3 = (this->height != _hx___height);
            		}
            		else {
HXLINE( 114)			_hx_tmp3 = true;
            		}
HXDLIN( 114)		if (_hx_tmp3) {
HXLINE( 116)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF width and height dont match",3f,49,15,70)));
            		}
HXLINE( 120)		this->mipCount = this->data->readUnsignedByte();
HXLINE( 122)		return (this->atfFormat == (int)5);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ATFReader_obj,readHeader,return )

void ATFReader_obj::readTextures( ::Dynamic uploadCallback){
            	HX_GC_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_127_readTextures)
HXLINE( 131)		int gpuFormats;
HXDLIN( 131)		if ((this->version < (int)3)) {
HXLINE( 131)			gpuFormats = (int)3;
            		}
            		else {
HXLINE( 131)			gpuFormats = (int)4;
            		}
HXLINE( 132)		int sideCount;
HXDLIN( 132)		if (this->cubeMap) {
HXLINE( 132)			sideCount = (int)6;
            		}
            		else {
HXLINE( 132)			sideCount = (int)1;
            		}
HXLINE( 134)		{
HXLINE( 134)			int _g1 = (int)0;
HXDLIN( 134)			int _g = sideCount;
HXDLIN( 134)			while((_g1 < _g)){
HXLINE( 134)				_g1 = (_g1 + (int)1);
HXDLIN( 134)				int side = (_g1 - (int)1);
HXLINE( 135)				{
HXLINE( 135)					int _g3 = (int)0;
HXDLIN( 135)					int _g2 = this->mipCount;
HXDLIN( 135)					while((_g3 < _g2)){
HXLINE( 135)						_g3 = (_g3 + (int)1);
HXDLIN( 135)						int level = (_g3 - (int)1);
HXLINE( 137)						{
HXLINE( 137)							int _g5 = (int)0;
HXDLIN( 137)							int _g4 = gpuFormats;
HXDLIN( 137)							while((_g5 < _g4)){
HXLINE( 137)								_g5 = (_g5 + (int)1);
HXDLIN( 137)								int gpuFormat = (_g5 - (int)1);
HXLINE( 139)								int blockLength;
HXDLIN( 139)								if ((this->version == (int)0)) {
HXLINE( 139)									blockLength = this->_hx___readUInt24(this->data);
            								}
            								else {
HXLINE( 139)									blockLength = this->_hx___readUInt32(this->data);
            								}
HXLINE( 141)								int a = (this->data->position + blockLength);
HXDLIN( 141)								int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->data);
HXDLIN( 141)								bool aNeg = (a < (int)0);
HXDLIN( 141)								bool bNeg = (b < (int)0);
HXDLIN( 141)								bool _hx_tmp;
HXDLIN( 141)								if ((aNeg != bNeg)) {
HXLINE( 141)									_hx_tmp = aNeg;
            								}
            								else {
HXLINE( 141)									_hx_tmp = (a > b);
            								}
HXDLIN( 141)								if (_hx_tmp) {
HXLINE( 143)									HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Block length exceeds ATF file length",15,23,c0,24)));
            								}
HXLINE( 147)								bool aNeg1 = (blockLength < (int)0);
HXDLIN( 147)								bool bNeg1 = ((int)0 < (int)0);
HXDLIN( 147)								bool _hx_tmp1;
HXDLIN( 147)								if ((aNeg1 != bNeg1)) {
HXLINE( 147)									_hx_tmp1 = aNeg1;
            								}
            								else {
HXLINE( 147)									_hx_tmp1 = (blockLength > (int)0);
            								}
HXDLIN( 147)								if (_hx_tmp1) {
HXLINE( 149)									 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(blockLength);
HXLINE( 150)									{
HXLINE( 150)										 ::openfl::utils::ByteArrayData this1 = this->data;
HXDLIN( 150)										this1->readBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(bytes),(int)0,blockLength);
            									}
HXLINE( 152)									int _hx_tmp2 = ((int)this->width >> (int)level);
HXDLIN( 152)									uploadCallback(side,level,gpuFormat,_hx_tmp2,((int)this->height >> (int)level),blockLength,bytes);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,readTextures,(void))

int ATFReader_obj::_hx___readUInt24( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_164___readUInt24)
HXLINE( 166)		int value = ((int)data->readUnsignedByte() << (int)(int)16);
HXLINE( 168)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)8));
HXLINE( 169)		value = ((int)value | (int)data->readUnsignedByte());
HXLINE( 170)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt24,return )

int ATFReader_obj::_hx___readUInt32( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_175___readUInt32)
HXLINE( 177)		int value = ((int)data->readUnsignedByte() << (int)(int)24);
HXLINE( 179)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)16));
HXLINE( 180)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)8));
HXLINE( 181)		value = ((int)value | (int)data->readUnsignedByte());
HXLINE( 182)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt32,return )


hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__new( ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	hx::ObjectPtr< ATFReader_obj > __this = new ATFReader_obj();
	__this->__construct(data,byteArrayOffset);
	return __this;
}

hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	ATFReader_obj *__this = (ATFReader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ATFReader_obj), true, "openfl._internal.formats.atf.ATFReader"));
	*(void **)__this = ATFReader_obj::_hx_vtable;
	__this->__construct(data,byteArrayOffset);
	return __this;
}

ATFReader_obj::ATFReader_obj()
{
}

void ATFReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ATFReader);
	HX_MARK_MEMBER_NAME(atfFormat,"atfFormat");
	HX_MARK_MEMBER_NAME(cubeMap,"cubeMap");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mipCount,"mipCount");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void ATFReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atfFormat,"atfFormat");
	HX_VISIT_MEMBER_NAME(cubeMap,"cubeMap");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mipCount,"mipCount");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(width,"width");
}

hx::Val ATFReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { return hx::Val( cubeMap ); }
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { return hx::Val( mipCount ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { return hx::Val( atfFormat ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readHeader") ) { return hx::Val( readHeader_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readTextures") ) { return hx::Val( readTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { return hx::Val( _hx___readUInt24_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { return hx::Val( _hx___readUInt32_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ATFReader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { cubeMap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { mipCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { atfFormat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ATFReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("atfFormat","\xaa","\xd3","\x04","\x9c"));
	outFields->push(HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("mipCount","\x9b","\x6a","\x51","\x0e"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ATFReader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ATFReader_obj,atfFormat),HX_HCSTRING("atfFormat","\xaa","\xd3","\x04","\x9c")},
	{hx::fsBool,(int)offsetof(ATFReader_obj,cubeMap),HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c")},
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(ATFReader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,mipCount),HX_HCSTRING("mipCount","\x9b","\x6a","\x51","\x0e")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ATFReader_obj_sStaticStorageInfo = 0;
#endif

static ::String ATFReader_obj_sMemberFields[] = {
	HX_HCSTRING("atfFormat","\xaa","\xd3","\x04","\x9c"),
	HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("mipCount","\x9b","\x6a","\x51","\x0e"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("readHeader","\x83","\xed","\x7b","\xf6"),
	HX_HCSTRING("readTextures","\xae","\x44","\x04","\xa1"),
	HX_HCSTRING("__readUInt24","\xd2","\x98","\x1e","\x4b"),
	HX_HCSTRING("__readUInt32","\xaf","\x99","\x1e","\x4b"),
	::String(null()) };

static void ATFReader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ATFReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ATFReader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ATFReader_obj::__mClass,"__mClass");
};

#endif

hx::Class ATFReader_obj::__mClass;

void ATFReader_obj::__register()
{
	hx::Object *dummy = new ATFReader_obj;
	ATFReader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.formats.atf.ATFReader","\xb9","\x6e","\x7a","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ATFReader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ATFReader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ATFReader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ATFReader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ATFReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ATFReader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace atf
