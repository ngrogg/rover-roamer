// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Obstacles
#include <Obstacles.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7cf74f8892b49fcc_18_new,"Obstacles","new",0x063bfe16,"Obstacles.new","Obstacles.hx",18,0xf923d61a)
HX_LOCAL_STACK_FRAME(_hx_pos_7cf74f8892b49fcc_22_init,"Obstacles","init",0x6afb0c9a,"Obstacles.init","Obstacles.hx",22,0xf923d61a)

void Obstacles_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7cf74f8892b49fcc_18_new)
HXDLIN(  18)		super::__construct(null(),null(),null());
            	}

Dynamic Obstacles_obj::__CreateEmpty() { return new Obstacles_obj; }

void *Obstacles_obj::_hx_vtable = 0;

Dynamic Obstacles_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Obstacles_obj > _hx_result = new Obstacles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Obstacles_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x28f9fb24 || inClassId==(int)0x2e105115;
	}
}

 ::Obstacles Obstacles_obj::init(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< Float >  __o_VelocityX,hx::Null< Float >  __o_VelocityY){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
Float VelocityX = __o_VelocityX.Default(0);
Float VelocityY = __o_VelocityY.Default(0);
            	HX_STACKFRAME(&_hx_pos_7cf74f8892b49fcc_22_init)
HXLINE(  23)		int spriteNum = ::flixel::FlxG_obj::random->_hx_int((int)1,(int)6,null());
HXLINE(  24)		if ((spriteNum >= (int)4)) {
HXLINE(  26)			this->loadGraphic(HX_("assets/asteroid.png",42,44,95,b1),null(),null(),null(),null(),null());
HXLINE(  27)			this->setGraphicSize((int)20,(int)20);
HXLINE(  28)			this->updateHitbox();
            		}
HXLINE(  30)		if ((spriteNum == (int)3)) {
HXLINE(  32)			this->loadGraphic(HX_("assets/alienRover.png",46,04,79,d0),null(),null(),null(),null(),null());
HXLINE(  33)			this->setGraphicSize((int)20,(int)20);
HXLINE(  34)			this->updateHitbox();
            		}
HXLINE(  36)		if ((spriteNum == (int)2)) {
HXLINE(  38)			this->loadGraphic(HX_("assets/alien.png",f6,3d,55,4f),null(),null(),null(),null(),null());
HXLINE(  39)			this->setGraphicSize((int)20,(int)20);
HXLINE(  40)			this->updateHitbox();
            		}
HXLINE(  42)		if ((spriteNum == (int)1)) {
HXLINE(  44)			this->loadGraphic(HX_("assets/bug.png",a3,91,52,fe),null(),null(),null(),null(),null());
HXLINE(  45)			this->setGraphicSize((int)20,(int)20);
HXLINE(  46)			this->updateHitbox();
            		}
HXLINE(  50)		if ((::MenuState_obj::Difficulty == (int)3)) {
HXLINE(  52)			if ((spriteNum <= (int)3)) {
HXLINE(  55)				Float _hx_tmp = ((Float)::flixel::FlxG_obj::width / (Float)(int)4);
HXDLIN(  55)				this->set_x((_hx_tmp + ::flixel::FlxG_obj::random->_hx_int((int)0,(int)400,null())));
HXLINE(  56)				this->set_y((int)356);
            			}
            			else {
HXLINE(  62)				Float _hx_tmp1 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  62)				this->set_x((_hx_tmp1 + ::flixel::FlxG_obj::random->_hx_int((int)0,(int)200,null())));
HXLINE(  63)				this->set_y((int)0);
            			}
            		}
            		else {
HXLINE(  68)			if ((spriteNum <= (int)3)) {
HXLINE(  71)				Float _hx_tmp2 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  71)				this->set_x((_hx_tmp2 + ::flixel::FlxG_obj::random->_hx_int((int)0,(int)100,null())));
HXLINE(  72)				this->set_y((int)356);
            			}
            			else {
HXLINE(  78)				Float _hx_tmp3 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  78)				this->set_x((_hx_tmp3 + ::flixel::FlxG_obj::random->_hx_int((int)0,(int)100,null())));
HXLINE(  79)				this->set_y((int)0);
            			}
            		}
HXLINE(  86)		if ((::MenuState_obj::Difficulty == (int)1)) {
HXLINE(  89)			if ((spriteNum <= (int)3)) {
HXLINE(  91)				 ::flixel::math::FlxPoint _hx_tmp4 = this->velocity;
HXDLIN(  91)				_hx_tmp4->set_x(::flixel::FlxG_obj::random->_hx_int((int)-25,(int)-75,null()));
HXLINE(  92)				this->velocity->set_y((int)0);
            			}
            			else {
HXLINE(  98)				 ::flixel::math::FlxPoint _hx_tmp5 = this->velocity;
HXDLIN(  98)				_hx_tmp5->set_x(::flixel::FlxG_obj::random->_hx_int((int)-25,(int)-75,null()));
HXLINE(  99)				 ::flixel::math::FlxPoint _hx_tmp6 = this->velocity;
HXDLIN(  99)				_hx_tmp6->set_y(::flixel::FlxG_obj::random->_hx_int((int)25,(int)75,null()));
            			}
            		}
HXLINE( 103)		if ((::MenuState_obj::Difficulty == (int)2)) {
HXLINE( 106)			if ((spriteNum <= (int)3)) {
HXLINE( 108)				 ::flixel::math::FlxPoint _hx_tmp7 = this->velocity;
HXDLIN( 108)				_hx_tmp7->set_x(::flixel::FlxG_obj::random->_hx_int((int)-50,(int)-100,null()));
HXLINE( 109)				this->velocity->set_y((int)0);
            			}
            			else {
HXLINE( 115)				 ::flixel::math::FlxPoint _hx_tmp8 = this->velocity;
HXDLIN( 115)				_hx_tmp8->set_x(::flixel::FlxG_obj::random->_hx_int((int)-50,(int)-100,null()));
HXLINE( 116)				 ::flixel::math::FlxPoint _hx_tmp9 = this->velocity;
HXDLIN( 116)				_hx_tmp9->set_y(::flixel::FlxG_obj::random->_hx_int((int)50,(int)100,null()));
            			}
            		}
HXLINE( 121)		if ((::MenuState_obj::Difficulty == (int)3)) {
HXLINE( 124)			if ((spriteNum <= (int)3)) {
HXLINE( 126)				 ::flixel::math::FlxPoint _hx_tmp10 = this->velocity;
HXDLIN( 126)				_hx_tmp10->set_x(::flixel::FlxG_obj::random->_hx_int((int)-200,(int)-75,null()));
HXLINE( 127)				this->velocity->set_y((int)0);
            			}
            			else {
HXLINE( 133)				 ::flixel::math::FlxPoint _hx_tmp11 = this->velocity;
HXDLIN( 133)				_hx_tmp11->set_x(::flixel::FlxG_obj::random->_hx_int((int)-200,(int)-100,null()));
HXLINE( 134)				 ::flixel::math::FlxPoint _hx_tmp12 = this->velocity;
HXDLIN( 134)				_hx_tmp12->set_y(::flixel::FlxG_obj::random->_hx_int((int)200,(int)100,null()));
            			}
            		}
HXLINE( 138)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Obstacles_obj,init,return )


hx::ObjectPtr< Obstacles_obj > Obstacles_obj::__new() {
	hx::ObjectPtr< Obstacles_obj > __this = new Obstacles_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Obstacles_obj > Obstacles_obj::__alloc(hx::Ctx *_hx_ctx) {
	Obstacles_obj *__this = (Obstacles_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Obstacles_obj), true, "Obstacles"));
	*(void **)__this = Obstacles_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Obstacles_obj::Obstacles_obj()
{
}

hx::Val Obstacles_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Obstacles_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Obstacles_obj_sStaticStorageInfo = 0;
#endif

static ::String Obstacles_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void Obstacles_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Obstacles_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Obstacles_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Obstacles_obj::__mClass,"__mClass");
};

#endif

hx::Class Obstacles_obj::__mClass;

void Obstacles_obj::__register()
{
	hx::Object *dummy = new Obstacles_obj;
	Obstacles_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Obstacles","\x24","\xfb","\xf9","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Obstacles_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Obstacles_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Obstacles_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Obstacles_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Obstacles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Obstacles_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

