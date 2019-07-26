// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#define INCLUDED_openfl_display3D_IndexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES IndexBuffer3D_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IndexBuffer3D_obj OBJ_;
		IndexBuffer3D_obj();

	public:
		enum { _hx_ClassId = 0x36314040 };

		void __construct( ::openfl::display3D::Context3D context3D,int numIndices, ::Dynamic bufferUsage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.IndexBuffer3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.IndexBuffer3D"); }
		static hx::ObjectPtr< IndexBuffer3D_obj > __new( ::openfl::display3D::Context3D context3D,int numIndices, ::Dynamic bufferUsage);
		static hx::ObjectPtr< IndexBuffer3D_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D,int numIndices, ::Dynamic bufferUsage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexBuffer3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("IndexBuffer3D","\xc3","\x32","\x41","\xc0"); }

		 ::openfl::display3D::Context3D _hx___context;
		int _hx___elementType;
		 ::lime::graphics::opengl::GLObject _hx___id;
		int _hx___memoryUsage;
		int _hx___numIndices;
		 ::lime::utils::ArrayBufferView _hx___tempUInt16Array;
		int _hx___usage;
		void dispose();
		::Dynamic dispose_dyn();

		void uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startOffset,int count);
		::Dynamic uploadFromByteArray_dyn();

		void uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< int >  byteLength);
		::Dynamic uploadFromTypedArray_dyn();

		void uploadFromVector( ::openfl::_Vector::IntVector data,int startOffset,int count);
		::Dynamic uploadFromVector_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_IndexBuffer3D */ 
