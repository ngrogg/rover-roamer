// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c4822148baac23ea_161_new,"openfl.geom.Transform","new",0x993cc92a,"openfl.geom.Transform.new","openfl/geom/Transform.hx",161,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_185_get_colorTransform,"openfl.geom.Transform","get_colorTransform",0xc8c832c8,"openfl.geom.Transform.get_colorTransform","openfl/geom/Transform.hx",185,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_190_set_colorTransform,"openfl.geom.Transform","set_colorTransform",0xa577653c,"openfl.geom.Transform.set_colorTransform","openfl/geom/Transform.hx",190,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_211_get_concatenatedMatrix,"openfl.geom.Transform","get_concatenatedMatrix",0x352d276f,"openfl.geom.Transform.get_concatenatedMatrix","openfl/geom/Transform.hx",211,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_224_get_matrix,"openfl.geom.Transform","get_matrix",0x80c3ba80,"openfl.geom.Transform.get_matrix","openfl/geom/Transform.hx",224,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_237_set_matrix,"openfl.geom.Transform","set_matrix",0x844158f4,"openfl.geom.Transform.set_matrix","openfl/geom/Transform.hx",237,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_260_get_matrix3D,"openfl.geom.Transform","get_matrix3D",0x05078731,"openfl.geom.Transform.get_matrix3D","openfl/geom/Transform.hx",260,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_274_set_matrix3D,"openfl.geom.Transform","set_matrix3D",0x1a00aaa5,"openfl.geom.Transform.set_matrix3D","openfl/geom/Transform.hx",274,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_295___setTransform,"openfl.geom.Transform","__setTransform",0x9df9f800,"openfl.geom.Transform.__setTransform","openfl/geom/Transform.hx",295,0xf4f475e6)
namespace openfl{
namespace geom{

void Transform_obj::__construct( ::openfl::display::DisplayObject displayObject){
            	HX_GC_STACKFRAME(&_hx_pos_c4822148baac23ea_161_new)
HXLINE( 163)		this->_hx___colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 164)		this->concatenatedColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 165)		this->pixelBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 167)		this->_hx___displayObject = displayObject;
HXLINE( 168)		this->_hx___hasMatrix = true;
            	}

Dynamic Transform_obj::__CreateEmpty() { return new Transform_obj; }

void *Transform_obj::_hx_vtable = 0;

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Transform_obj > _hx_result = new Transform_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Transform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48ea4500;
}

 ::openfl::geom::ColorTransform Transform_obj::get_colorTransform(){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_185_get_colorTransform)
HXDLIN( 185)		return this->_hx___colorTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

 ::openfl::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_190_set_colorTransform)
HXLINE( 192)		if (!(this->_hx___colorTransform->_hx___equals(value,false))) {
HXLINE( 194)			this->_hx___colorTransform->_hx___copyFrom(value);
HXLINE( 196)			if (hx::IsNotNull( value )) {
HXLINE( 198)				this->_hx___displayObject->set_alpha(value->alphaMultiplier);
            			}
HXLINE( 202)			{
HXLINE( 202)				 ::openfl::display::DisplayObject _this = this->_hx___displayObject;
HXDLIN( 202)				if (!(_this->_hx___renderDirty)) {
HXLINE( 202)					_this->_hx___renderDirty = true;
HXDLIN( 202)					_this->_hx___setParentRenderDirty();
            				}
            			}
            		}
HXLINE( 206)		return this->_hx___colorTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

 ::openfl::geom::Matrix Transform_obj::get_concatenatedMatrix(){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_211_get_concatenatedMatrix)
HXLINE( 213)		if (this->_hx___hasMatrix) {
HXLINE( 215)			return this->_hx___displayObject->_hx___getWorldTransform()->clone();
            		}
HXLINE( 219)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

 ::openfl::geom::Matrix Transform_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_224_get_matrix)
HXLINE( 226)		if (this->_hx___hasMatrix) {
HXLINE( 228)			return this->_hx___displayObject->_hx___transform->clone();
            		}
HXLINE( 232)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

 ::openfl::geom::Matrix Transform_obj::set_matrix( ::openfl::geom::Matrix value){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_237_set_matrix)
HXLINE( 239)		if (hx::IsNull( value )) {
HXLINE( 241)			this->_hx___hasMatrix = false;
HXLINE( 242)			return null();
            		}
HXLINE( 246)		this->_hx___hasMatrix = true;
HXLINE( 247)		this->_hx___hasMatrix3D = false;
HXLINE( 249)		if (hx::IsNotNull( this->_hx___displayObject )) {
HXLINE( 251)			this->_hx___setTransform(value->a,value->b,value->c,value->d,value->tx,value->ty);
            		}
HXLINE( 255)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

 ::openfl::geom::Matrix3D Transform_obj::get_matrix3D(){
            	HX_GC_STACKFRAME(&_hx_pos_c4822148baac23ea_260_get_matrix3D)
HXLINE( 262)		if (this->_hx___hasMatrix3D) {
HXLINE( 264)			 ::openfl::geom::Matrix matrix = this->_hx___displayObject->_hx___transform;
HXLINE( 265)			int length = null();
HXDLIN( 265)			bool fixed = null();
HXDLIN( 265)			return  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,::Array_obj< Float >::__new(16)->init(0,matrix->a)->init(1,matrix->b)->init(2,((Float)0.0))->init(3,((Float)0.0))->init(4,matrix->c)->init(5,matrix->d)->init(6,((Float)0.0))->init(7,((Float)0.0))->init(8,((Float)0.0))->init(9,((Float)0.0))->init(10,((Float)1.0))->init(11,((Float)0.0))->init(12,matrix->tx)->init(13,matrix->ty)->init(14,((Float)0.0))->init(15,((Float)1.0)),true));
            		}
HXLINE( 269)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

 ::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_274_set_matrix3D)
HXLINE( 276)		if (hx::IsNull( value )) {
HXLINE( 278)			this->_hx___hasMatrix3D = false;
HXLINE( 279)			return null();
            		}
HXLINE( 283)		this->_hx___hasMatrix = false;
HXLINE( 284)		this->_hx___hasMatrix3D = true;
HXLINE( 286)		Float _hx_tmp = value->rawData->get((int)0);
HXDLIN( 286)		Float _hx_tmp1 = value->rawData->get((int)1);
HXDLIN( 286)		Float _hx_tmp2 = value->rawData->get((int)5);
HXDLIN( 286)		Float _hx_tmp3 = value->rawData->get((int)6);
HXDLIN( 286)		Float _hx_tmp4 = value->rawData->get((int)12);
HXDLIN( 286)		this->_hx___setTransform(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,value->rawData->get((int)13));
HXLINE( 288)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )

void Transform_obj::_hx___setTransform(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_295___setTransform)
HXDLIN( 295)		if (hx::IsNotNull( this->_hx___displayObject )) {
HXLINE( 297)			Float scaleX = ((Float)0.0);
HXLINE( 298)			Float scaleY = ((Float)0.0);
HXLINE( 300)			if ((b == (int)0)) {
HXLINE( 302)				scaleX = a;
            			}
            			else {
HXLINE( 306)				scaleX = ::Math_obj::sqrt(((a * a) + (b * b)));
            			}
HXLINE( 310)			if ((c == (int)0)) {
HXLINE( 312)				scaleY = a;
            			}
            			else {
HXLINE( 316)				scaleY = ::Math_obj::sqrt(((c * c) + (d * d)));
            			}
HXLINE( 320)			this->_hx___displayObject->_hx___scaleX = scaleX;
HXLINE( 321)			this->_hx___displayObject->_hx___scaleY = scaleY;
HXLINE( 323)			Float rotation = ((Float)(int)180 / (Float)::Math_obj::PI);
HXDLIN( 323)			Float rotation1 = ((rotation * ::Math_obj::atan2(d,c)) - (int)90);
HXLINE( 325)			if ((rotation1 != this->_hx___displayObject->_hx___rotation)) {
HXLINE( 327)				this->_hx___displayObject->_hx___rotation = rotation1;
HXLINE( 328)				Float radians = (rotation1 * ((Float)::Math_obj::PI / (Float)(int)180));
HXLINE( 329)				this->_hx___displayObject->_hx___rotationSine = ::Math_obj::sin(radians);
HXLINE( 330)				this->_hx___displayObject->_hx___rotationCosine = ::Math_obj::cos(radians);
            			}
HXLINE( 334)			this->_hx___displayObject->_hx___transform->a = a;
HXLINE( 335)			this->_hx___displayObject->_hx___transform->b = b;
HXLINE( 336)			this->_hx___displayObject->_hx___transform->c = c;
HXLINE( 337)			this->_hx___displayObject->_hx___transform->d = d;
HXLINE( 338)			this->_hx___displayObject->_hx___transform->tx = tx;
HXLINE( 339)			this->_hx___displayObject->_hx___transform->ty = ty;
HXLINE( 341)			this->_hx___displayObject->_hx___setTransformDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(Transform_obj,_hx___setTransform,(void))


hx::ObjectPtr< Transform_obj > Transform_obj::__new( ::openfl::display::DisplayObject displayObject) {
	hx::ObjectPtr< Transform_obj > __this = new Transform_obj();
	__this->__construct(displayObject);
	return __this;
}

hx::ObjectPtr< Transform_obj > Transform_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject displayObject) {
	Transform_obj *__this = (Transform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Transform_obj), true, "openfl.geom.Transform"));
	*(void **)__this = Transform_obj::_hx_vtable;
	__this->__construct(displayObject);
	return __this;
}

Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(_hx___colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(_hx___displayObject,"__displayObject");
	HX_MARK_MEMBER_NAME(_hx___hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(_hx___hasMatrix3D,"__hasMatrix3D");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(_hx___colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(_hx___displayObject,"__displayObject");
	HX_VISIT_MEMBER_NAME(_hx___hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(_hx___hasMatrix3D,"__hasMatrix3D");
}

hx::Val Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_matrix() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_matrix3D() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return hx::Val( set_matrix_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return hx::Val( pixelBounds ); }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return hx::Val( _hx___hasMatrix ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return hx::Val( get_matrix3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return hx::Val( set_matrix3D_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return hx::Val( _hx___hasMatrix3D ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_colorTransform() ); }
		if (HX_FIELD_EQ(inName,"__setTransform") ) { return hx::Val( _hx___setTransform_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { return hx::Val( _hx___displayObject ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return hx::Val( _hx___colorTransform ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_concatenatedMatrix() ); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return hx::Val( get_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return hx::Val( set_colorTransform_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return hx::Val( get_concatenatedMatrix_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return hx::Val( concatenatedColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Transform_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_matrix(inValue.Cast<  ::openfl::geom::Matrix >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_matrix3D(inValue.Cast<  ::openfl::geom::Matrix3D >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { _hx___hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { _hx___hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_colorTransform(inValue.Cast<  ::openfl::geom::ColorTransform >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { _hx___displayObject=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { _hx___colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("matrix3D","\x32","\x35","\xf3","\x66"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"));
	outFields->push(HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"));
	outFields->push(HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"));
	outFields->push(HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Transform_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,_hx___colorTransform),HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Transform_obj,_hx___displayObject),HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e")},
	{hx::fsBool,(int)offsetof(Transform_obj,_hx___hasMatrix),HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a")},
	{hx::fsBool,(int)offsetof(Transform_obj,_hx___hasMatrix3D),HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Transform_obj_sStaticStorageInfo = 0;
#endif

static ::String Transform_obj_sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"),
	HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"),
	HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"),
	HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_concatenatedMatrix","\xf9","\x39","\x31","\x52"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_matrix3D","\x3b","\xe9","\x0c","\x1c"),
	HX_HCSTRING("set_matrix3D","\xaf","\x0c","\x06","\x31"),
	HX_HCSTRING("__setTransform","\x8a","\x70","\xa3","\x8a"),
	::String(null()) };

static void Transform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Transform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Object *dummy = new Transform_obj;
	Transform_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Transform","\x38","\xac","\x4a","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Transform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Transform_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Transform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace geom
