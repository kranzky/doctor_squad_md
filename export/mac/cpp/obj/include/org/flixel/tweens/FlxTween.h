#ifndef INCLUDED_org_flixel_tweens_FlxTween
#define INCLUDED_org_flixel_tweens_FlxTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS3(org,flixel,tweens,FlxTween)
namespace org{
namespace flixel{
namespace tweens{


class FlxTween_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTween_obj OBJ_;
		FlxTween_obj();
		Void __construct(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease);

	public:
		static hx::ObjectPtr< FlxTween_obj > __new(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTween"); }

		bool _backward; /* REM */ 
		Dynamic _next; /* REM */ 
		Dynamic _prev; /* REM */ 
		::org::flixel::FlxBasic _parent; /* REM */ 
		bool _finish; /* REM */ 
		Float _target; /* REM */ 
		Float _time; /* REM */ 
		Float _t; /* REM */ 
		Dynamic _ease; /* REM */ 
		Dynamic &_ease_dyn() { return _ease;}
		int _type; /* REM */ 
		virtual Float getScale( );
		Dynamic getScale_dyn();

		Float scale; /* REM */ 
		virtual Float setPercent( Float value);
		Dynamic setPercent_dyn();

		virtual Float getPercent( );
		Dynamic getPercent_dyn();

		Float percent; /* REM */ 
		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		Dynamic complete; /* REM */ 
		Dynamic &complete_dyn() { return complete;}
		bool active; /* REM */ 
		static int PERSIST; /* REM */ 
		static int LOOPING; /* REM */ 
		static int PINGPONG; /* REM */ 
		static int ONESHOT; /* REM */ 
		static int BACKWARD; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace tweens

#endif /* INCLUDED_org_flixel_tweens_FlxTween */ 
