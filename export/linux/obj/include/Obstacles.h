// Generated by Haxe 3.4.7
#ifndef INCLUDED_Obstacles
#define INCLUDED_Obstacles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Obstacles)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Obstacles_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Obstacles_obj OBJ_;
		Obstacles_obj();

	public:
		enum { _hx_ClassId = 0x28f9fb24 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Obstacles")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Obstacles"); }
		static hx::ObjectPtr< Obstacles_obj > __new();
		static hx::ObjectPtr< Obstacles_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Obstacles_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Obstacles","\x24","\xfb","\xf9","\x28"); }

		 ::Obstacles init(hx::Null< int >  X,hx::Null< int >  Y,hx::Null< Float >  VelocityX,hx::Null< Float >  VelocityY);
		::Dynamic init_dyn();

};


#endif /* INCLUDED_Obstacles */ 
