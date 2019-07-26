// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_AbstractNoise
#include <openfl/_internal/utils/AbstractNoise.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85815fa8339ff72c_34_new,"openfl._internal.utils.AbstractNoise","new",0x67969e7d,"openfl._internal.utils.AbstractNoise.new","openfl/_internal/utils/AbstractNoise.hx",34,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_46_fill,"openfl._internal.utils.AbstractNoise","fill",0x36ed59c6,"openfl._internal.utils.AbstractNoise.fill","openfl/_internal/utils/AbstractNoise.hx",46,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_50_stitching,"openfl._internal.utils.AbstractNoise","stitching",0xa2fadeee,"openfl._internal.utils.AbstractNoise.stitching","openfl/_internal/utils/AbstractNoise.hx",50,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_86_color,"openfl._internal.utils.AbstractNoise","color",0x2284c0c0,"openfl._internal.utils.AbstractNoise.color","openfl/_internal/utils/AbstractNoise.hx",86,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_107_noiseToColor,"openfl._internal.utils.AbstractNoise","noiseToColor",0x8c2ae3b1,"openfl._internal.utils.AbstractNoise.noiseToColor","openfl/_internal/utils/AbstractNoise.hx",107,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_111_fade,"openfl._internal.utils.AbstractNoise","fade",0x36e740bf,"openfl._internal.utils.AbstractNoise.fade","openfl/_internal/utils/AbstractNoise.hx",111,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_115_mixI,"openfl._internal.utils.AbstractNoise","mixI",0x3b8de270,"openfl._internal.utils.AbstractNoise.mixI","openfl/_internal/utils/AbstractNoise.hx",115,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_119_mix,"openfl._internal.utils.AbstractNoise","mix",0x6795dfb9,"openfl._internal.utils.AbstractNoise.mix","openfl/_internal/utils/AbstractNoise.hx",119,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_123_fastfloor,"openfl._internal.utils.AbstractNoise","fastfloor",0x0aaddb8d,"openfl._internal.utils.AbstractNoise.fastfloor","openfl/_internal/utils/AbstractNoise.hx",123,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_127_dot2d,"openfl._internal.utils.AbstractNoise","dot2d",0xb5f13218,"openfl._internal.utils.AbstractNoise.dot2d","openfl/_internal/utils/AbstractNoise.hx",127,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_131_dot,"openfl._internal.utils.AbstractNoise","dot",0x678f10a6,"openfl._internal.utils.AbstractNoise.dot","openfl/_internal/utils/AbstractNoise.hx",131,0x6f8fbe56)
HX_LOCAL_STACK_FRAME(_hx_pos_85815fa8339ff72c_134_calculateOctaves,"openfl._internal.utils.AbstractNoise","calculateOctaves",0xb5f9a480,"openfl._internal.utils.AbstractNoise.calculateOctaves","openfl/_internal/utils/AbstractNoise.hx",134,0x6f8fbe56)
namespace openfl{
namespace _internal{
namespace utils{

void AbstractNoise_obj::__construct(int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold){
bool stitch = __o_stitch.Default(false);
Float stitch_threshold = __o_stitch_threshold.Default(((Float)0.05));
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_34_new)
HXLINE(  35)		this->stitch = stitch;
HXLINE(  36)		this->stitch_threshold = stitch_threshold;
HXLINE(  38)		this->octaves = octaves;
HXLINE(  40)		this->channels = channels;
HXLINE(  41)		this->grayscale = grayScale;
HXLINE(  43)		this->calculateOctaves(falloff);
            	}

Dynamic AbstractNoise_obj::__CreateEmpty() { return new AbstractNoise_obj; }

void *AbstractNoise_obj::_hx_vtable = 0;

Dynamic AbstractNoise_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AbstractNoise_obj > _hx_result = new AbstractNoise_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool AbstractNoise_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a4a4f8f;
}

void AbstractNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _scale_x,Float _scale_y,Float _scale_z){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_46_fill)
            	}


HX_DEFINE_DYNAMIC_FUNC4(AbstractNoise_obj,fill,(void))

int AbstractNoise_obj::stitching( ::openfl::display::BitmapData bitmap,int color,int px,int py,int stitch_w,int stitch_h,int width,int height){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_50_stitching)
HXLINE(  51)		int r = ((int)((int)color >> (int)(int)16) & (int)(int)255);
HXLINE(  52)		int g = ((int)((int)color >> (int)(int)8) & (int)(int)255);
HXLINE(  53)		int b = ((int)color & (int)(int)255);
HXLINE(  55)		if (((width - stitch_w) < px)) {
HXLINE(  56)			int dest = bitmap->getPixel32((width - px),py);
HXLINE(  57)			int dest_r = ((int)((int)dest >> (int)(int)16) & (int)(int)255);
HXLINE(  58)			int dest_g = ((int)((int)dest >> (int)(int)8) & (int)(int)255);
HXLINE(  59)			int dest_b = ((int)dest & (int)(int)255);
HXLINE(  61)			Float u = ((Float)(width - px) / (Float)stitch_w);
HXLINE(  62)			Float uu = (u * u);
HXLINE(  64)			r = this->mixI(dest_r,r,u);
HXLINE(  65)			g = this->mixI(dest_g,g,u);
HXLINE(  66)			b = this->mixI(dest_b,b,u);
            		}
HXLINE(  69)		if (((height - stitch_h) < py)) {
HXLINE(  70)			int dest1 = bitmap->getPixel32(px,(height - py));
HXLINE(  71)			int dest_r1 = ((int)((int)dest1 >> (int)(int)16) & (int)(int)255);
HXLINE(  72)			int dest_g1 = ((int)((int)dest1 >> (int)(int)8) & (int)(int)255);
HXLINE(  73)			int dest_b1 = ((int)dest1 & (int)(int)255);
HXLINE(  75)			Float u1 = ((Float)(height - py) / (Float)stitch_h);
HXLINE(  76)			Float uu1 = (u1 * u1);
HXLINE(  78)			r = this->mixI(dest_r1,r,u1);
HXLINE(  79)			g = this->mixI(dest_g1,g,u1);
HXLINE(  80)			b = this->mixI(dest_b1,b,u1);
            		}
HXLINE(  83)		return ((int)((int)((int)(int)-16777216 | (int)((int)r << (int)(int)16)) | (int)((int)g << (int)(int)8)) | (int)b);
            	}


HX_DEFINE_DYNAMIC_FUNC8(AbstractNoise_obj,stitching,return )

int AbstractNoise_obj::color( ::Dynamic r_noise, ::Dynamic g_noise, ::Dynamic b_noise){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_86_color)
HXLINE(  87)		int color_r = (int)0;
HXLINE(  88)		int color_g = (int)0;
HXLINE(  89)		int color_b = (int)0;
HXLINE(  91)		if (hx::IsNotNull( r_noise )) {
HXLINE(  92)			color_r = this->noiseToColor(r_noise);
            		}
HXLINE(  95)		if (hx::IsNotNull( g_noise )) {
HXLINE(  96)			color_g = this->noiseToColor(g_noise);
            		}
HXLINE(  99)		if (hx::IsNotNull( b_noise )) {
HXLINE( 100)			color_b = this->noiseToColor(b_noise);
            		}
HXLINE( 103)		return ((int)((int)((int)(int)-16777216 | (int)((int)color_r << (int)(int)16)) | (int)((int)color_g << (int)(int)8)) | (int)color_b);
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,color,return )

int AbstractNoise_obj::noiseToColor(Float noise){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_107_noiseToColor)
HXDLIN( 107)		return ::Std_obj::_hx_int((((noise * this->persistence_max) + ((Float)1.0)) * (int)128));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,noiseToColor,return )

Float AbstractNoise_obj::fade(Float t){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_111_fade)
HXDLIN( 111)		return (((t * t) * t) * ((t * ((t * ((Float)6.0)) - ((Float)15.0))) + ((Float)10.0)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,fade,return )

int AbstractNoise_obj::mixI(int x,int y,Float t){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_115_mixI)
HXDLIN( 115)		return ::Std_obj::_hx_int((((((Float)1.0) - t) * x) + (t * y)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,mixI,return )

Float AbstractNoise_obj::mix(Float x,Float y,Float t){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_119_mix)
HXDLIN( 119)		return (((((Float)1.0) - t) * x) + (t * y));
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,mix,return )

int AbstractNoise_obj::fastfloor(Float x){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_123_fastfloor)
HXDLIN( 123)		if ((x > (int)0)) {
HXDLIN( 123)			return ::Std_obj::_hx_int(x);
            		}
            		else {
HXDLIN( 123)			return ::Std_obj::_hx_int((x - (int)1));
            		}
HXDLIN( 123)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,fastfloor,return )

Float AbstractNoise_obj::dot2d(::Array< int > grad,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_127_dot2d)
HXDLIN( 127)		return ((grad->__get((int)0) * x) + (grad->__get((int)1) * y));
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,dot2d,return )

Float AbstractNoise_obj::dot(::Array< int > grad,Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_131_dot)
HXDLIN( 131)		return (((grad->__get((int)0) * x) + (grad->__get((int)1) * y)) + (grad->__get((int)2) * z));
            	}


HX_DEFINE_DYNAMIC_FUNC4(AbstractNoise_obj,dot,return )

void AbstractNoise_obj::calculateOctaves(Float fPersistence){
            	HX_STACKFRAME(&_hx_pos_85815fa8339ff72c_134_calculateOctaves)
HXLINE( 135)		Float fFreq;
HXDLIN( 135)		Float fPers;
HXLINE( 137)		this->octaves_frequencies = ::Array_obj< Float >::__new(0);
HXLINE( 138)		this->octaves_persistences = ::Array_obj< Float >::__new(0);
HXLINE( 139)		this->persistence_max = (int)0;
HXLINE( 141)		{
HXLINE( 141)			int _g1 = (int)0;
HXDLIN( 141)			int _g = this->octaves;
HXDLIN( 141)			while((_g1 < _g)){
HXLINE( 141)				_g1 = (_g1 + (int)1);
HXDLIN( 141)				int i = (_g1 - (int)1);
HXLINE( 142)				fFreq = ::Math_obj::pow(((Float)2.0),i);
HXLINE( 143)				fPers = ::Math_obj::pow(fPersistence,i);
HXLINE( 145)				 ::openfl::_internal::utils::AbstractNoise _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 145)				_hx_tmp->persistence_max = (_hx_tmp->persistence_max + fPers);
HXLINE( 146)				this->octaves_frequencies->push(fFreq);
HXLINE( 147)				this->octaves_persistences->push(fPers);
            			}
            		}
HXLINE( 150)		this->persistence_max = ((Float)((Float)1.0) / (Float)this->persistence_max);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,calculateOctaves,(void))


hx::ObjectPtr< AbstractNoise_obj > AbstractNoise_obj::__new(int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold) {
	hx::ObjectPtr< AbstractNoise_obj > __this = new AbstractNoise_obj();
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

hx::ObjectPtr< AbstractNoise_obj > AbstractNoise_obj::__alloc(hx::Ctx *_hx_ctx,int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold) {
	AbstractNoise_obj *__this = (AbstractNoise_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AbstractNoise_obj), true, "openfl._internal.utils.AbstractNoise"));
	*(void **)__this = AbstractNoise_obj::_hx_vtable;
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

AbstractNoise_obj::AbstractNoise_obj()
{
}

void AbstractNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractNoise);
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_MEMBER_NAME(stitch,"stitch");
	HX_MARK_MEMBER_NAME(stitch_threshold,"stitch_threshold");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(grayscale,"grayscale");
	HX_MARK_MEMBER_NAME(octaves_frequencies,"octaves_frequencies");
	HX_MARK_MEMBER_NAME(octaves_persistences,"octaves_persistences");
	HX_MARK_MEMBER_NAME(persistence_max,"persistence_max");
	HX_MARK_END_CLASS();
}

void AbstractNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(octaves,"octaves");
	HX_VISIT_MEMBER_NAME(stitch,"stitch");
	HX_VISIT_MEMBER_NAME(stitch_threshold,"stitch_threshold");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(grayscale,"grayscale");
	HX_VISIT_MEMBER_NAME(octaves_frequencies,"octaves_frequencies");
	HX_VISIT_MEMBER_NAME(octaves_persistences,"octaves_persistences");
	HX_VISIT_MEMBER_NAME(persistence_max,"persistence_max");
}

hx::Val AbstractNoise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mix") ) { return hx::Val( mix_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return hx::Val( dot_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return hx::Val( fill_dyn() ); }
		if (HX_FIELD_EQ(inName,"fade") ) { return hx::Val( fade_dyn() ); }
		if (HX_FIELD_EQ(inName,"mixI") ) { return hx::Val( mixI_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot2d") ) { return hx::Val( dot2d_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stitch") ) { return hx::Val( stitch ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return hx::Val( octaves ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return hx::Val( channels ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grayscale") ) { return hx::Val( grayscale ); }
		if (HX_FIELD_EQ(inName,"stitching") ) { return hx::Val( stitching_dyn() ); }
		if (HX_FIELD_EQ(inName,"fastfloor") ) { return hx::Val( fastfloor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"noiseToColor") ) { return hx::Val( noiseToColor_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"persistence_max") ) { return hx::Val( persistence_max ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stitch_threshold") ) { return hx::Val( stitch_threshold ); }
		if (HX_FIELD_EQ(inName,"calculateOctaves") ) { return hx::Val( calculateOctaves_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"octaves_frequencies") ) { return hx::Val( octaves_frequencies ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"octaves_persistences") ) { return hx::Val( octaves_persistences ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AbstractNoise_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stitch") ) { stitch=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grayscale") ) { grayscale=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"persistence_max") ) { persistence_max=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stitch_threshold") ) { stitch_threshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"octaves_frequencies") ) { octaves_frequencies=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"octaves_persistences") ) { octaves_persistences=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"));
	outFields->push(HX_HCSTRING("stitch","\x71","\x8c","\x45","\x0b"));
	outFields->push(HX_HCSTRING("stitch_threshold","\x1d","\x23","\xa0","\xc8"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("grayscale","\xc7","\x87","\x37","\xf3"));
	outFields->push(HX_HCSTRING("octaves_frequencies","\xfe","\x11","\x65","\xc0"));
	outFields->push(HX_HCSTRING("octaves_persistences","\xb0","\x63","\xf1","\x2f"));
	outFields->push(HX_HCSTRING("persistence_max","\x84","\x02","\x4b","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AbstractNoise_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AbstractNoise_obj,octaves),HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8")},
	{hx::fsBool,(int)offsetof(AbstractNoise_obj,stitch),HX_HCSTRING("stitch","\x71","\x8c","\x45","\x0b")},
	{hx::fsFloat,(int)offsetof(AbstractNoise_obj,stitch_threshold),HX_HCSTRING("stitch_threshold","\x1d","\x23","\xa0","\xc8")},
	{hx::fsInt,(int)offsetof(AbstractNoise_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsBool,(int)offsetof(AbstractNoise_obj,grayscale),HX_HCSTRING("grayscale","\xc7","\x87","\x37","\xf3")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(AbstractNoise_obj,octaves_frequencies),HX_HCSTRING("octaves_frequencies","\xfe","\x11","\x65","\xc0")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(AbstractNoise_obj,octaves_persistences),HX_HCSTRING("octaves_persistences","\xb0","\x63","\xf1","\x2f")},
	{hx::fsFloat,(int)offsetof(AbstractNoise_obj,persistence_max),HX_HCSTRING("persistence_max","\x84","\x02","\x4b","\xd2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AbstractNoise_obj_sStaticStorageInfo = 0;
#endif

static ::String AbstractNoise_obj_sMemberFields[] = {
	HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"),
	HX_HCSTRING("stitch","\x71","\x8c","\x45","\x0b"),
	HX_HCSTRING("stitch_threshold","\x1d","\x23","\xa0","\xc8"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("grayscale","\xc7","\x87","\x37","\xf3"),
	HX_HCSTRING("octaves_frequencies","\xfe","\x11","\x65","\xc0"),
	HX_HCSTRING("octaves_persistences","\xb0","\x63","\xf1","\x2f"),
	HX_HCSTRING("persistence_max","\x84","\x02","\x4b","\xd2"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("stitching","\x11","\x1d","\xbb","\x62"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("noiseToColor","\x6e","\xdd","\xc7","\x36"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("mixI","\x2d","\x57","\x5c","\x48"),
	HX_HCSTRING("mix","\x9c","\x11","\x53","\x00"),
	HX_HCSTRING("fastfloor","\xb0","\x19","\x6e","\xca"),
	HX_HCSTRING("dot2d","\xbb","\xe2","\xc8","\xdd"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("calculateOctaves","\xbd","\xc0","\xc2","\x77"),
	::String(null()) };

static void AbstractNoise_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractNoise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AbstractNoise_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractNoise_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractNoise_obj::__mClass;

void AbstractNoise_obj::__register()
{
	hx::Object *dummy = new AbstractNoise_obj;
	AbstractNoise_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.utils.AbstractNoise","\x0b","\x9c","\xf4","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AbstractNoise_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AbstractNoise_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractNoise_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AbstractNoise_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractNoise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractNoise_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace utils