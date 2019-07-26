// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math__RGBA_RGBA_Impl_
#include <lime/math/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#include <openfl/filters/_ColorMatrixFilter/ColorMatrixShader.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7545faed7dab6ee1_42_new,"openfl.filters.ColorMatrixFilter","new",0x2c3a675d,"openfl.filters.ColorMatrixFilter.new","openfl/filters/ColorMatrixFilter.hx",42,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_56_clone,"openfl.filters.ColorMatrixFilter","clone",0x2c5b239a,"openfl.filters.ColorMatrixFilter.clone","openfl/filters/ColorMatrixFilter.hx",56,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_61___applyFilter,"openfl.filters.ColorMatrixFilter","__applyFilter",0xffb635e3,"openfl.filters.ColorMatrixFilter.__applyFilter","openfl/filters/ColorMatrixFilter.hx",61,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_123___initShader,"openfl.filters.ColorMatrixFilter","__initShader",0x2d28b6d8,"openfl.filters.ColorMatrixFilter.__initShader","openfl/filters/ColorMatrixFilter.hx",123,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_140_get_matrix,"openfl.filters.ColorMatrixFilter","get_matrix",0x7ee298ad,"openfl.filters.ColorMatrixFilter.get_matrix","openfl/filters/ColorMatrixFilter.hx",140,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_145_set_matrix,"openfl.filters.ColorMatrixFilter","set_matrix",0x82603721,"openfl.filters.ColorMatrixFilter.set_matrix","openfl/filters/ColorMatrixFilter.hx",145,0xb64128b5)
static const Float _hx_array_data_760a74eb_8[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_24_boot,"openfl.filters.ColorMatrixFilter","boot",0x7ef90a95,"openfl.filters.ColorMatrixFilter.boot","openfl/filters/ColorMatrixFilter.hx",24,0xb64128b5)
namespace openfl{
namespace filters{

void ColorMatrixFilter_obj::__construct(::Array< Float > matrix){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_42_new)
HXLINE(  44)		super::__construct();
HXLINE(  46)		this->set_matrix(matrix);
HXLINE(  48)		this->_hx___numShaderPasses = (int)1;
HXLINE(  49)		this->_hx___needSecondBitmapData = false;
            	}

Dynamic ColorMatrixFilter_obj::__CreateEmpty() { return new ColorMatrixFilter_obj; }

void *ColorMatrixFilter_obj::_hx_vtable = 0;

Dynamic ColorMatrixFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColorMatrixFilter_obj > _hx_result = new ColorMatrixFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ColorMatrixFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09ed1ad5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09ed1ad5;
	} else {
		return inClassId==(int)0x4f68d692;
	}
}

 ::openfl::filters::BitmapFilter ColorMatrixFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7545faed7dab6ee1_56_clone)
HXDLIN(  56)		return  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,this->_hx___matrix);
            	}


 ::openfl::display::BitmapData ColorMatrixFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData destBitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_61___applyFilter)
HXLINE(  64)		 ::lime::graphics::Image sourceImage = sourceBitmapData->image;
HXLINE(  65)		 ::lime::graphics::Image image = destBitmapData->image;
HXLINE(  72)		 ::lime::utils::ArrayBufferView sourceData = sourceImage->get_data();
HXLINE(  73)		 ::lime::utils::ArrayBufferView destData = image->get_data();
HXLINE(  75)		int offsetX = ::Std_obj::_hx_int((destPoint->x - sourceRect->x));
HXLINE(  76)		int offsetY = ::Std_obj::_hx_int((destPoint->y - sourceRect->y));
HXLINE(  77)		int sourceStride = (sourceBitmapData->width * (int)4);
HXLINE(  78)		int destStride = (destBitmapData->width * (int)4);
HXLINE(  80)		int sourceFormat = sourceImage->buffer->format;
HXLINE(  81)		int destFormat = image->buffer->format;
HXLINE(  82)		bool sourcePremultiplied = sourceImage->buffer->premultiplied;
HXLINE(  83)		bool destPremultiplied = image->buffer->premultiplied;
HXLINE(  85)		int sourcePixel;
HXDLIN(  85)		int destPixel = (int)0;
HXLINE(  86)		int sourceOffset;
HXDLIN(  86)		int destOffset;
HXLINE(  88)		{
HXLINE(  88)			int _g1 = ::Std_obj::_hx_int(sourceRect->y);
HXDLIN(  88)			int _g = ::Std_obj::_hx_int(sourceRect->height);
HXDLIN(  88)			while((_g1 < _g)){
HXLINE(  88)				_g1 = (_g1 + (int)1);
HXDLIN(  88)				int row = (_g1 - (int)1);
HXLINE(  90)				{
HXLINE(  90)					int _g3 = ::Std_obj::_hx_int(sourceRect->x);
HXDLIN(  90)					int _g2 = ::Std_obj::_hx_int(sourceRect->width);
HXDLIN(  90)					while((_g3 < _g2)){
HXLINE(  90)						_g3 = (_g3 + (int)1);
HXDLIN(  90)						int column = (_g3 - (int)1);
HXLINE(  92)						sourceOffset = ((row * sourceStride) + (column * (int)4));
HXLINE(  93)						destOffset = (((row + offsetX) * destStride) + ((column + offsetY) * (int)4));
HXLINE(  95)						{
HXLINE(  95)							switch((int)(sourceFormat)){
            								case (int)0: {
HXLINE(  95)									int r = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourceOffset)) & (int)(int)255);
HXDLIN(  95)									int sourceData1 = sourceData->byteOffset;
HXDLIN(  95)									int g = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData1 + (sourceOffset + (int)1))) & (int)(int)255);
HXDLIN(  95)									int sourceData2 = sourceData->byteOffset;
HXDLIN(  95)									int b = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData2 + (sourceOffset + (int)2))) & (int)(int)255);
HXDLIN(  95)									int sourceData3 = sourceData->byteOffset;
HXDLIN(  95)									sourcePixel = ((int)((int)((int)((int)((int)r & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData3 + (sourceOffset + (int)3))) & (int)(int)255) & (int)(int)255));
            								}
            								break;
            								case (int)1: {
HXLINE(  95)									int sourceData4 = sourceData->byteOffset;
HXDLIN(  95)									int r1 = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData4 + (sourceOffset + (int)1))) & (int)(int)255);
HXDLIN(  95)									int sourceData5 = sourceData->byteOffset;
HXDLIN(  95)									int g1 = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData5 + (sourceOffset + (int)2))) & (int)(int)255);
HXDLIN(  95)									int sourceData6 = sourceData->byteOffset;
HXDLIN(  95)									int b1 = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData6 + (sourceOffset + (int)3))) & (int)(int)255);
HXDLIN(  95)									sourcePixel = ((int)((int)((int)((int)((int)r1 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g1 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b1 & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourceOffset)) & (int)(int)255) & (int)(int)255));
            								}
            								break;
            								case (int)2: {
HXLINE(  95)									int sourceData7 = sourceData->byteOffset;
HXDLIN(  95)									int r2 = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData7 + (sourceOffset + (int)2))) & (int)(int)255);
HXDLIN(  95)									int sourceData8 = sourceData->byteOffset;
HXDLIN(  95)									int g2 = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData8 + (sourceOffset + (int)1))) & (int)(int)255);
HXDLIN(  95)									int b2 = ((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourceOffset)) & (int)(int)255);
HXDLIN(  95)									int sourceData9 = sourceData->byteOffset;
HXDLIN(  95)									sourcePixel = ((int)((int)((int)((int)((int)r2 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g2 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b2 & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData9 + (sourceOffset + (int)3))) & (int)(int)255) & (int)(int)255));
            								}
            								break;
            							}
HXDLIN(  95)							if (sourcePremultiplied) {
HXLINE(  95)								bool _hx_tmp;
HXDLIN(  95)								if ((((int)sourcePixel & (int)(int)255) != (int)0)) {
HXLINE(  95)									_hx_tmp = (((int)sourcePixel & (int)(int)255) != (int)255);
            								}
            								else {
HXLINE(  95)									_hx_tmp = false;
            								}
HXDLIN(  95)								if (_hx_tmp) {
HXLINE(  95)									::lime::math::_RGBA::RGBA_Impl__obj::unmult = ((Float)((Float)255.0) / (Float)((int)sourcePixel & (int)(int)255));
HXDLIN(  95)									{
HXLINE(  95)										 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  95)										int r3 = ((int)::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((((int)hx::UShr(sourcePixel,(int)24) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN(  95)										 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  95)										int g3 = ((int)::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((((int)hx::UShr(sourcePixel,(int)16) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN(  95)										 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  95)										sourcePixel = ((int)((int)((int)((int)((int)r3 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g3 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((((int)hx::UShr(sourcePixel,(int)8) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)sourcePixel & (int)(int)255) & (int)(int)255));
            									}
            								}
            							}
            						}
HXLINE(  97)						if ((((int)sourcePixel & (int)(int)255) == (int)0)) {
HXLINE(  99)							destPixel = (int)0;
            						}
            						else {
HXLINE( 103)							{
HXLINE( 103)								Float value = (this->_hx___matrix->__get((int)0) * ((int)hx::UShr(sourcePixel,(int)24) & (int)(int)255));
HXDLIN( 103)								Float value1 = (value + (this->_hx___matrix->__get((int)1) * ((int)hx::UShr(sourcePixel,(int)16) & (int)(int)255)));
HXDLIN( 103)								Float value2 = (value1 + (this->_hx___matrix->__get((int)2) * ((int)hx::UShr(sourcePixel,(int)8) & (int)(int)255)));
HXDLIN( 103)								Float value3 = (value2 + (this->_hx___matrix->__get((int)3) * ((int)sourcePixel & (int)(int)255)));
HXDLIN( 103)								int value4 = ::Std_obj::_hx_int(::Math_obj::max((int)0,::Math_obj::min((value3 + this->_hx___matrix->__get((int)4)),(int)255)));
HXDLIN( 103)								destPixel = ((int)((int)((int)((int)((int)value4 & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(destPixel,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(destPixel,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)destPixel & (int)(int)255) & (int)(int)255));
            							}
HXLINE( 104)							{
HXLINE( 104)								Float value5 = (this->_hx___matrix->__get((int)5) * ((int)hx::UShr(sourcePixel,(int)24) & (int)(int)255));
HXDLIN( 104)								Float value6 = (value5 + (this->_hx___matrix->__get((int)6) * ((int)hx::UShr(sourcePixel,(int)16) & (int)(int)255)));
HXDLIN( 104)								Float value7 = (value6 + (this->_hx___matrix->__get((int)7) * ((int)hx::UShr(sourcePixel,(int)8) & (int)(int)255)));
HXDLIN( 104)								Float value8 = (value7 + (this->_hx___matrix->__get((int)8) * ((int)sourcePixel & (int)(int)255)));
HXDLIN( 104)								int value9 = ::Std_obj::_hx_int(::Math_obj::max((int)0,::Math_obj::min((value8 + this->_hx___matrix->__get((int)9)),(int)255)));
HXDLIN( 104)								destPixel = ((int)((int)((int)((int)((int)((int)hx::UShr(destPixel,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)value9 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(destPixel,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)destPixel & (int)(int)255) & (int)(int)255));
            							}
HXLINE( 105)							{
HXLINE( 105)								Float value10 = (this->_hx___matrix->__get((int)10) * ((int)hx::UShr(sourcePixel,(int)24) & (int)(int)255));
HXDLIN( 105)								Float value11 = (value10 + (this->_hx___matrix->__get((int)11) * ((int)hx::UShr(sourcePixel,(int)16) & (int)(int)255)));
HXDLIN( 105)								Float value12 = (value11 + (this->_hx___matrix->__get((int)12) * ((int)hx::UShr(sourcePixel,(int)8) & (int)(int)255)));
HXDLIN( 105)								Float value13 = (value12 + (this->_hx___matrix->__get((int)13) * ((int)sourcePixel & (int)(int)255)));
HXDLIN( 105)								int value14 = ::Std_obj::_hx_int(::Math_obj::max((int)0,::Math_obj::min((value13 + this->_hx___matrix->__get((int)14)),(int)255)));
HXDLIN( 105)								destPixel = ((int)((int)((int)((int)((int)((int)hx::UShr(destPixel,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(destPixel,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)value14 & (int)(int)255) << (int)(int)8)) | (int)((int)((int)destPixel & (int)(int)255) & (int)(int)255));
            							}
HXLINE( 106)							{
HXLINE( 106)								Float value15 = (this->_hx___matrix->__get((int)15) * ((int)hx::UShr(sourcePixel,(int)24) & (int)(int)255));
HXDLIN( 106)								Float value16 = (value15 + (this->_hx___matrix->__get((int)16) * ((int)hx::UShr(sourcePixel,(int)16) & (int)(int)255)));
HXDLIN( 106)								Float value17 = (value16 + (this->_hx___matrix->__get((int)17) * ((int)hx::UShr(sourcePixel,(int)8) & (int)(int)255)));
HXDLIN( 106)								Float value18 = (value17 + (this->_hx___matrix->__get((int)18) * ((int)sourcePixel & (int)(int)255)));
HXDLIN( 106)								int value19 = ::Std_obj::_hx_int(::Math_obj::max((int)0,::Math_obj::min((value18 + this->_hx___matrix->__get((int)19)),(int)255)));
HXDLIN( 106)								destPixel = ((int)((int)((int)((int)((int)((int)hx::UShr(destPixel,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(destPixel,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(destPixel,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)value19 & (int)(int)255));
            							}
            						}
HXLINE( 110)						{
HXLINE( 110)							if (destPremultiplied) {
HXLINE( 110)								if ((((int)destPixel & (int)(int)255) == (int)0)) {
HXLINE( 110)									if ((destPixel != (int)0)) {
HXLINE( 110)										destPixel = (int)0;
            									}
            								}
            								else {
HXLINE( 110)									if ((((int)destPixel & (int)(int)255) != (int)255)) {
HXLINE( 110)										 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 110)										int this5 = this4->byteOffset;
HXDLIN( 110)										::lime::math::_RGBA::RGBA_Impl__obj::a16 = ::__hxcpp_memory_get_ui32(this4->buffer->b,(this5 + (((int)destPixel & (int)(int)255) * (int)4)));
HXDLIN( 110)										destPixel = ((int)((int)((int)((int)((int)((int)(((int)hx::UShr(destPixel,(int)24) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)(((int)hx::UShr(destPixel,(int)16) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)(((int)hx::UShr(destPixel,(int)8) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)destPixel & (int)(int)255) & (int)(int)255));
            									}
            								}
            							}
HXDLIN( 110)							switch((int)(destFormat)){
            								case (int)0: {
HXLINE( 110)									{
HXLINE( 110)										int val = ((int)hx::UShr(destPixel,(int)24) & (int)(int)255);
HXDLIN( 110)										::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destOffset),val);
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val1 = ((int)hx::UShr(destPixel,(int)16) & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData1 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData1 + (destOffset + (int)1)),val1);
            										}
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val2 = ((int)hx::UShr(destPixel,(int)8) & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData2 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData2 + (destOffset + (int)2)),val2);
            										}
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val3 = ((int)destPixel & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData3 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData3 + (destOffset + (int)3)),val3);
            										}
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 110)									{
HXLINE( 110)										int val4 = ((int)destPixel & (int)(int)255);
HXDLIN( 110)										::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destOffset),val4);
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val5 = ((int)hx::UShr(destPixel,(int)24) & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData4 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData4 + (destOffset + (int)1)),val5);
            										}
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val6 = ((int)hx::UShr(destPixel,(int)16) & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData5 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData5 + (destOffset + (int)2)),val6);
            										}
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val7 = ((int)hx::UShr(destPixel,(int)8) & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData6 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData6 + (destOffset + (int)3)),val7);
            										}
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 110)									{
HXLINE( 110)										int val8 = ((int)hx::UShr(destPixel,(int)8) & (int)(int)255);
HXDLIN( 110)										::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destOffset),val8);
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val9 = ((int)hx::UShr(destPixel,(int)16) & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData7 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData7 + (destOffset + (int)1)),val9);
            										}
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val10 = ((int)hx::UShr(destPixel,(int)24) & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData8 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData8 + (destOffset + (int)2)),val10);
            										}
            									}
HXDLIN( 110)									{
HXLINE( 110)										int val11 = ((int)destPixel & (int)(int)255);
HXDLIN( 110)										{
HXLINE( 110)											int destData9 = destData->byteOffset;
HXDLIN( 110)											::__hxcpp_memory_set_byte(destData->buffer->b,(destData9 + (destOffset + (int)3)),val11);
            										}
            									}
            								}
            								break;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 116)		destBitmapData->image->dirty = true;
HXLINE( 118)		return destBitmapData;
            	}


 ::openfl::display::Shader ColorMatrixFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_123___initShader)
HXLINE( 125)		 ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader _hx_tmp = ::openfl::filters::ColorMatrixFilter_obj::_hx___colorMatrixShader;
HXDLIN( 125)		_hx_tmp->init(this->get_matrix());
HXLINE( 126)		return ::openfl::filters::ColorMatrixFilter_obj::_hx___colorMatrixShader;
            	}


::Array< Float > ColorMatrixFilter_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_140_get_matrix)
HXDLIN( 140)		return this->_hx___matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrixFilter_obj,get_matrix,return )

::Array< Float > ColorMatrixFilter_obj::set_matrix(::Array< Float > value){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_145_set_matrix)
HXLINE( 147)		if (hx::IsNull( value )) {
HXLINE( 149)			value = ::Array_obj< Float >::fromData( _hx_array_data_760a74eb_8,20);
            		}
HXLINE( 153)		return (this->_hx___matrix = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrixFilter_obj,set_matrix,return )

 ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader ColorMatrixFilter_obj::_hx___colorMatrixShader;


hx::ObjectPtr< ColorMatrixFilter_obj > ColorMatrixFilter_obj::__new(::Array< Float > matrix) {
	hx::ObjectPtr< ColorMatrixFilter_obj > __this = new ColorMatrixFilter_obj();
	__this->__construct(matrix);
	return __this;
}

hx::ObjectPtr< ColorMatrixFilter_obj > ColorMatrixFilter_obj::__alloc(hx::Ctx *_hx_ctx,::Array< Float > matrix) {
	ColorMatrixFilter_obj *__this = (ColorMatrixFilter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColorMatrixFilter_obj), true, "openfl.filters.ColorMatrixFilter"));
	*(void **)__this = ColorMatrixFilter_obj::_hx_vtable;
	__this->__construct(matrix);
	return __this;
}

ColorMatrixFilter_obj::ColorMatrixFilter_obj()
{
}

void ColorMatrixFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrixFilter);
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	 ::openfl::filters::BitmapFilter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorMatrixFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	 ::openfl::filters::BitmapFilter_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ColorMatrixFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_matrix() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { return hx::Val( _hx___matrix ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return hx::Val( set_matrix_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return hx::Val( _hx___initShader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return hx::Val( _hx___applyFilter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorMatrixFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__colorMatrixShader") ) { outValue = ( _hx___colorMatrixShader ); return true; }
	}
	return false;
}

hx::Val ColorMatrixFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_matrix(inValue.Cast< ::Array< Float > >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorMatrixFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__colorMatrixShader") ) { _hx___colorMatrixShader=ioValue.Cast<  ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader >(); return true; }
	}
	return false;
}

void ColorMatrixFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("__matrix","\x61","\xa1","\xf7","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ColorMatrixFilter_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ColorMatrixFilter_obj,_hx___matrix),HX_HCSTRING("__matrix","\x61","\xa1","\xf7","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ColorMatrixFilter_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::_ColorMatrixFilter::ColorMatrixShader*/ ,(void *) &ColorMatrixFilter_obj::_hx___colorMatrixShader,HX_HCSTRING("__colorMatrixShader","\x29","\xff","\xb1","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorMatrixFilter_obj_sMemberFields[] = {
	HX_HCSTRING("__matrix","\x61","\xa1","\xf7","\x63"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	::String(null()) };

static void ColorMatrixFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrixFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorMatrixFilter_obj::_hx___colorMatrixShader,"__colorMatrixShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorMatrixFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrixFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorMatrixFilter_obj::_hx___colorMatrixShader,"__colorMatrixShader");
};

#endif

hx::Class ColorMatrixFilter_obj::__mClass;

static ::String ColorMatrixFilter_obj_sStaticFields[] = {
	HX_HCSTRING("__colorMatrixShader","\x29","\xff","\xb1","\xf9"),
	::String(null())
};

void ColorMatrixFilter_obj::__register()
{
	hx::Object *dummy = new ColorMatrixFilter_obj;
	ColorMatrixFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.ColorMatrixFilter","\xeb","\x74","\x0a","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrixFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorMatrixFilter_obj::__SetStatic;
	__mClass->mMarkFunc = ColorMatrixFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ColorMatrixFilter_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColorMatrixFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorMatrixFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorMatrixFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorMatrixFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorMatrixFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorMatrixFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7545faed7dab6ee1_24_boot)
HXDLIN(  24)		_hx___colorMatrixShader =  ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters