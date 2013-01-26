#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void Atlas_obj::__construct(::String name,int width,int height,hx::Null< int >  __o_borderX,hx::Null< int >  __o_borderY,::native::display::BitmapData bitmapData)
{
HX_STACK_PUSH("Atlas::new","org/flixel/system/layer/Atlas.hx",59);
int borderX = __o_borderX.Default(1);
int borderY = __o_borderY.Default(1);
{
	HX_STACK_LINE(60)
	this->nodes = ::Hash_obj::__new();
	HX_STACK_LINE(61)
	this->name = name;
	HX_STACK_LINE(63)
	if (((bitmapData == null()))){
		HX_STACK_LINE(65)
		this->root = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new((int)0,(int)0,width,height),null(),null());
		HX_STACK_LINE(67)
		this->atlasBitmapData = ::native::display::BitmapData_obj::__new(width,height,true,(int)0,null());
		HX_STACK_LINE(71)
		this->_fromBitmapData = false;
	}
	else{
		HX_STACK_LINE(75)
		this->root = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),bitmapData->get_rect(),bitmapData,name);
		HX_STACK_LINE(76)
		this->atlasBitmapData = bitmapData;
		HX_STACK_LINE(77)
		this->nodes->set(name,this->root);
		HX_STACK_LINE(78)
		this->_fromBitmapData = true;
	}
	HX_STACK_LINE(81)
	this->borderX = borderX;
	HX_STACK_LINE(82)
	this->borderY = borderY;
	HX_STACK_LINE(85)
	this->_tileSheetData = ::org::flixel::system::layer::TileSheetData_obj::addTileSheet(this->atlasBitmapData);
	HX_STACK_LINE(88)
	::org::flixel::system::layer::Atlas_obj::_atlasCache->set(name,hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

Atlas_obj::~Atlas_obj() { }

Dynamic Atlas_obj::__CreateEmpty() { return  new Atlas_obj; }
hx::ObjectPtr< Atlas_obj > Atlas_obj::__new(::String name,int width,int height,hx::Null< int >  __o_borderX,hx::Null< int >  __o_borderY,::native::display::BitmapData bitmapData)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(name,width,height,__o_borderX,__o_borderY,bitmapData);
	return result;}

Dynamic Atlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::org::flixel::system::layer::Node Atlas_obj::findNodeToInsert( int insertWidth,int insertHeight){
	HX_STACK_PUSH("Atlas::findNodeToInsert","org/flixel/system/layer/Atlas.hx",571);
	HX_STACK_THIS(this);
	HX_STACK_ARG(insertWidth,"insertWidth");
	HX_STACK_ARG(insertHeight,"insertHeight");
	HX_STACK_LINE(573)
	Array< ::org::flixel::system::layer::Node > stack = Array_obj< ::org::flixel::system::layer::Node >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(575)
	::org::flixel::system::layer::Node current = this->root;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(577)
	while((true)){
		HX_STACK_LINE(580)
		if (((bool(current->get_isEmpty()) && bool(current->canPlace(insertWidth,insertHeight))))){
			HX_STACK_LINE(581)
			return current;
		}
		HX_STACK_LINE(585)
		if (((bool((bool((bool((current->right != null())) && bool(current->right->canPlace(insertWidth,insertHeight)))) && bool((current->left != null())))) && bool(current->left->canPlace(insertWidth,insertHeight))))){
			HX_STACK_LINE(587)
			stack->push(current->right);
			HX_STACK_LINE(588)
			current = current->left;
		}
		else{
			HX_STACK_LINE(590)
			if (((bool((current->left != null())) && bool(current->left->canPlace(insertWidth,insertHeight))))){
				HX_STACK_LINE(591)
				current = current->left;
			}
			else{
				HX_STACK_LINE(594)
				if (((bool((current->right != null())) && bool(current->right->canPlace(insertWidth,insertHeight))))){
					HX_STACK_LINE(595)
					current = current->right;
				}
				else{
					HX_STACK_LINE(599)
					if (((stack->length > (int)0))){
						HX_STACK_LINE(601)
						current = stack->pop();
					}
					else{
						HX_STACK_LINE(606)
						return null();
					}
				}
			}
		}
	}
	HX_STACK_LINE(613)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,findNodeToInsert,return )

Void Atlas_obj::deleteSubtree( ::org::flixel::system::layer::Node node){
{
		HX_STACK_PUSH("Atlas::deleteSubtree","org/flixel/system/layer/Atlas.hx",560);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(560)
		if (((node != null()))){
			HX_STACK_LINE(563)
			if (((node->left != null()))){
				HX_STACK_LINE(563)
				this->deleteSubtree(node->left);
			}
			HX_STACK_LINE(564)
			if (((node->right != null()))){
				HX_STACK_LINE(564)
				this->deleteSubtree(node->right);
			}
			HX_STACK_LINE(565)
			node->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,deleteSubtree,(void))

::org::flixel::system::layer::Atlas Atlas_obj::clone( ::String cloneName){
	HX_STACK_PUSH("Atlas::clone","org/flixel/system/layer/Atlas.hx",542);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cloneName,"cloneName");
	HX_STACK_LINE(543)
	if ((this->_fromBitmapData)){
		HX_STACK_LINE(544)
		return null();
	}
	HX_STACK_LINE(548)
	::String atlasKey = ::org::flixel::system::layer::Atlas_obj::getUniqueKey(cloneName);		HX_STACK_VAR(atlasKey,"atlasKey");
	HX_STACK_LINE(549)
	::org::flixel::system::layer::Atlas cloneAtlas = ::org::flixel::system::layer::Atlas_obj::__new(cloneName,this->get_width(),this->get_height(),this->borderX,this->borderY,null());		HX_STACK_VAR(cloneAtlas,"cloneAtlas");
	HX_STACK_LINE(550)
	cloneAtlas->createQueue();
	HX_STACK_LINE(551)
	for(::cpp::FastIterator_obj< ::org::flixel::system::layer::Node > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::Node >(this->nodes->iterator());  __it->hasNext(); ){
		::org::flixel::system::layer::Node node = __it->next();
		cloneAtlas->addToQueue(node->item,node->key);
	}
	HX_STACK_LINE(555)
	cloneAtlas->generateAtlasFromQueue();
	HX_STACK_LINE(556)
	return cloneAtlas;
}


HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,clone,return )

::org::flixel::system::layer::Node Atlas_obj::clearAndFillWith( ::native::display::BitmapData bmd){
	HX_STACK_PUSH("Atlas::clearAndFillWith","org/flixel/system/layer/Atlas.hx",516);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bmd,"bmd");
	HX_STACK_LINE(517)
	this->deleteSubtree(this->root);
	HX_STACK_LINE(518)
	this->nodes = ::Hash_obj::__new();
	HX_STACK_LINE(520)
	::org::flixel::system::layer::TileSheetData_obj::removeTileSheet(this->_tileSheetData);
	HX_STACK_LINE(522)
	if ((!(this->_fromBitmapData))){
		HX_STACK_LINE(523)
		this->atlasBitmapData->dispose();
	}
	HX_STACK_LINE(526)
	this->root = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),bmd->get_rect(),bmd,this->name);
	HX_STACK_LINE(527)
	this->atlasBitmapData = bmd;
	HX_STACK_LINE(528)
	this->nodes->set(this->name,this->root);
	HX_STACK_LINE(529)
	this->_fromBitmapData = true;
	HX_STACK_LINE(531)
	this->_tileSheetData = ::org::flixel::system::layer::TileSheetData_obj::addTileSheet(this->atlasBitmapData);
	HX_STACK_LINE(533)
	return this->root;
}


HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,clearAndFillWith,return )

Void Atlas_obj::clear( ){
{
		HX_STACK_PUSH("Atlas::clear","org/flixel/system/layer/Atlas.hx",497);
		HX_STACK_THIS(this);
		HX_STACK_LINE(498)
		int rootWidth = this->root->get_width();		HX_STACK_VAR(rootWidth,"rootWidth");
		HX_STACK_LINE(499)
		int rootHeight = this->root->get_height();		HX_STACK_VAR(rootHeight,"rootHeight");
		HX_STACK_LINE(500)
		this->deleteSubtree(this->root);
		HX_STACK_LINE(502)
		this->root = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new((int)0,(int)0,rootWidth,rootHeight),null(),null());
		HX_STACK_LINE(504)
		this->atlasBitmapData->fillRect(this->root->rect,(int)0);
		HX_STACK_LINE(508)
		this->nodes = ::Hash_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,clear,(void))

Void Atlas_obj::destroy( ){
{
		HX_STACK_PUSH("Atlas::destroy","org/flixel/system/layer/Atlas.hx",478);
		HX_STACK_THIS(this);
		HX_STACK_LINE(479)
		this->tempStorage = null();
		HX_STACK_LINE(480)
		this->deleteSubtree(this->root);
		HX_STACK_LINE(481)
		this->root = null();
		HX_STACK_LINE(482)
		if (((bool(!(this->_fromBitmapData)) && bool((this->atlasBitmapData != null()))))){
			HX_STACK_LINE(483)
			this->atlasBitmapData->dispose();
		}
		HX_STACK_LINE(486)
		this->atlasBitmapData = null();
		HX_STACK_LINE(488)
		this->_tileSheetData = null();
		HX_STACK_LINE(490)
		this->nodes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,destroy,(void))

Void Atlas_obj::generateAtlasFromQueue( ){
{
		HX_STACK_PUSH("Atlas::generateAtlasFromQueue","org/flixel/system/layer/Atlas.hx",459);
		HX_STACK_THIS(this);
		HX_STACK_LINE(459)
		if (((this->tempStorage != null()))){
			HX_STACK_LINE(462)
			Array< ::native::display::BitmapData > bitmaps = Array_obj< ::native::display::BitmapData >::__new();		HX_STACK_VAR(bitmaps,"bitmaps");
			HX_STACK_LINE(463)
			Array< ::String > keys = Array_obj< ::String >::__new();		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(464)
			{
				HX_STACK_LINE(464)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Dynamic _g1 = this->tempStorage;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(464)
				while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(464)
					Dynamic obj = _g1->__GetItem(_g);		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(464)
					++(_g);
					HX_STACK_LINE(466)
					bitmaps->push(obj->__Field(HX_CSTRING("bmd"),true));
					HX_STACK_LINE(467)
					keys->push(obj->__Field(HX_CSTRING("keyStr"),true));
				}
			}
			HX_STACK_LINE(469)
			this->addNodes(bitmaps,keys);
			HX_STACK_LINE(470)
			this->tempStorage = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,generateAtlasFromQueue,(void))

Void Atlas_obj::addToQueue( ::native::display::BitmapData data,::String key){
{
		HX_STACK_PUSH("Atlas::addToQueue","org/flixel/system/layer/Atlas.hx",446);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(key,"key");
		HX_STACK_LINE(447)
		if (((this->tempStorage == null()))){
			HX_STACK_LINE(448)
			this->tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::native::display::BitmapData &data,::String &key){
				HX_STACK_PUSH("*::closure","org/flixel/system/layer/Atlas.hx",452);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("bmd") , data,false);
					__result->Add(HX_CSTRING("keyStr") , key,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(452)
		this->tempStorage->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(data,key));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,addToQueue,(void))

Void Atlas_obj::createQueue( ){
{
		HX_STACK_PUSH("Atlas::createQueue","org/flixel/system/layer/Atlas.hx",436);
		HX_STACK_THIS(this);
		HX_STACK_LINE(436)
		this->tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,createQueue,(void))

int Atlas_obj::bitmapSorter( ::native::display::BitmapData bmd1,::native::display::BitmapData bmd2){
	HX_STACK_PUSH("Atlas::bitmapSorter","org/flixel/system/layer/Atlas.hx",407);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bmd1,"bmd1");
	HX_STACK_ARG(bmd2,"bmd2");
	HX_STACK_LINE(408)
	if (((bmd2->get_width() == bmd1->get_width()))){
		HX_STACK_LINE(409)
		if (((bmd2->get_height() == bmd1->get_height()))){
			HX_STACK_LINE(411)
			return (int)0;
		}
		else{
			HX_STACK_LINE(414)
			if (((bmd2->get_height() > bmd1->get_height()))){
				HX_STACK_LINE(415)
				return (int)1;
			}
			else{
				HX_STACK_LINE(419)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(424)
	if (((bmd2->get_width() > bmd1->get_width()))){
		HX_STACK_LINE(425)
		return (int)1;
	}
	HX_STACK_LINE(429)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,bitmapSorter,return )

int Atlas_obj::indexOf( Array< ::native::display::BitmapData > bitmaps,::native::display::BitmapData bmd){
	HX_STACK_PUSH("Atlas::indexOf","org/flixel/system/layer/Atlas.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmaps,"bitmaps");
	HX_STACK_ARG(bmd,"bmd");
	HX_STACK_LINE(395)
	{
		HX_STACK_LINE(395)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = bitmaps->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(395)
		while(((_g1 < _g))){
			HX_STACK_LINE(395)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(397)
			if (((bitmaps->__get(i) == bmd))){
				HX_STACK_LINE(398)
				return i;
			}
		}
	}
	HX_STACK_LINE(403)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,indexOf,return )

bool Atlas_obj::addNodes( Array< ::native::display::BitmapData > bitmaps,Array< ::String > keys){
	HX_STACK_PUSH("Atlas::addNodes","org/flixel/system/layer/Atlas.hx",365);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmaps,"bitmaps");
	HX_STACK_ARG(keys,"keys");
	HX_STACK_LINE(366)
	int numKeys = keys->length;		HX_STACK_VAR(numKeys,"numKeys");
	HX_STACK_LINE(367)
	int numBitmaps = bitmaps->length;		HX_STACK_VAR(numBitmaps,"numBitmaps");
	HX_STACK_LINE(369)
	if (((numBitmaps != numKeys))){
		HX_STACK_LINE(370)
		return false;
	}
	HX_STACK_LINE(374)
	Array< ::native::display::BitmapData > sortedBitmaps = bitmaps->slice((int)0,bitmaps->length);		HX_STACK_VAR(sortedBitmaps,"sortedBitmaps");
	HX_STACK_LINE(375)
	sortedBitmaps->sort(this->bitmapSorter_dyn());
	HX_STACK_LINE(377)
	::org::flixel::system::layer::Node node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(378)
	bool result = true;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(379)
	int index;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(380)
	{
		HX_STACK_LINE(380)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = numBitmaps;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(380)
		while(((_g1 < _g))){
			HX_STACK_LINE(380)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(382)
			index = this->indexOf(bitmaps,sortedBitmaps->__get(i));
			HX_STACK_LINE(383)
			node = this->addNode(sortedBitmaps->__get(i),keys->__get(index));
			HX_STACK_LINE(384)
			if (((node == null()))){
				HX_STACK_LINE(385)
				result = false;
			}
		}
	}
	HX_STACK_LINE(390)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,addNodes,return )

::org::flixel::system::layer::Node Atlas_obj::getNodeByBitmap( ::native::display::BitmapData bitmap){
	HX_STACK_PUSH("Atlas::getNodeByBitmap","org/flixel/system/layer/Atlas.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmap,"bitmap");
	HX_STACK_LINE(347)
	for(::cpp::FastIterator_obj< ::org::flixel::system::layer::Node > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::Node >(this->nodes->iterator());  __it->hasNext(); ){
		::org::flixel::system::layer::Node node = __it->next();
		if (((node->item == bitmap))){
			HX_STACK_LINE(350)
			return node;
		}
;
	}
	HX_STACK_LINE(355)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,getNodeByBitmap,return )

::org::flixel::system::layer::Node Atlas_obj::getNodeByKey( ::String key){
	HX_STACK_PUSH("Atlas::getNodeByKey","org/flixel/system/layer/Atlas.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(332)
	if (((this->hasNodeWithName(key) == true))){
		HX_STACK_LINE(333)
		return this->nodes->get(key);
	}
	HX_STACK_LINE(337)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,getNodeByKey,return )

bool Atlas_obj::hasNodeWithName( ::String nodeName){
	HX_STACK_PUSH("Atlas::hasNodeWithName","org/flixel/system/layer/Atlas.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(nodeName,"nodeName");
	HX_STACK_LINE(321)
	return this->nodes->exists(nodeName);
}


HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,hasNodeWithName,return )

int Atlas_obj::get_height( ){
	HX_STACK_PUSH("Atlas::get_height","org/flixel/system/layer/Atlas.hx",311);
	HX_STACK_THIS(this);
	HX_STACK_LINE(311)
	return this->root->get_height();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_height,return )

int Atlas_obj::get_width( ){
	HX_STACK_PUSH("Atlas::get_width","org/flixel/system/layer/Atlas.hx",301);
	HX_STACK_THIS(this);
	HX_STACK_LINE(301)
	return this->root->get_width();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_width,return )

::org::flixel::system::layer::Node Atlas_obj::addNode( ::native::display::BitmapData data,::String key){
	HX_STACK_PUSH("Atlas::addNode","org/flixel/system/layer/Atlas.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(238)
	if (((this->hasNodeWithName(key) == true))){
		HX_STACK_LINE(239)
		return this->nodes->get(key);
	}
	HX_STACK_LINE(243)
	if (((this->root->canPlace(data->get_width(),data->get_height()) == false))){
		HX_STACK_LINE(244)
		return null();
	}
	HX_STACK_LINE(248)
	int insertWidth = (  (((data->get_width() == this->get_width()))) ? int(data->get_width()) : int((data->get_width() + this->borderX)) );		HX_STACK_VAR(insertWidth,"insertWidth");
	HX_STACK_LINE(249)
	int insertHeight = (  (((data->get_height() == this->get_height()))) ? int(data->get_height()) : int((data->get_height() + this->borderY)) );		HX_STACK_VAR(insertHeight,"insertHeight");
	HX_STACK_LINE(251)
	::org::flixel::system::layer::Node nodeToInsert = this->findNodeToInsert(insertWidth,insertHeight);		HX_STACK_VAR(nodeToInsert,"nodeToInsert");
	HX_STACK_LINE(252)
	if (((nodeToInsert != null()))){
		HX_STACK_LINE(254)
		::org::flixel::system::layer::Node firstChild;		HX_STACK_VAR(firstChild,"firstChild");
		HX_STACK_LINE(255)
		::org::flixel::system::layer::Node secondChild;		HX_STACK_VAR(secondChild,"secondChild");
		HX_STACK_LINE(256)
		::org::flixel::system::layer::Node firstGrandChild;		HX_STACK_VAR(firstGrandChild,"firstGrandChild");
		HX_STACK_LINE(257)
		::org::flixel::system::layer::Node secondGrandChild;		HX_STACK_VAR(secondGrandChild,"secondGrandChild");
		HX_STACK_LINE(259)
		int dw = (nodeToInsert->get_width() - insertWidth);		HX_STACK_VAR(dw,"dw");
		HX_STACK_LINE(260)
		int dh = (nodeToInsert->get_height() - insertHeight);		HX_STACK_VAR(dh,"dh");
		HX_STACK_LINE(262)
		if (((dw > dh))){
			HX_STACK_LINE(264)
			firstChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new(nodeToInsert->get_x(),nodeToInsert->get_y(),insertWidth,nodeToInsert->get_height()),null(),null());
			HX_STACK_LINE(265)
			secondChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new((nodeToInsert->get_x() + insertWidth),nodeToInsert->get_y(),(nodeToInsert->get_width() - insertWidth),nodeToInsert->get_height()),null(),null());
			HX_STACK_LINE(267)
			firstGrandChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new(firstChild->get_x(),firstChild->get_y(),insertWidth,insertHeight),data,key);
			HX_STACK_LINE(268)
			secondGrandChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new(firstChild->get_x(),(firstChild->get_y() + insertHeight),insertWidth,(firstChild->get_height() - insertHeight)),null(),null());
		}
		else{
			HX_STACK_LINE(272)
			firstChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new(nodeToInsert->get_x(),nodeToInsert->get_y(),nodeToInsert->get_width(),insertHeight),null(),null());
			HX_STACK_LINE(273)
			secondChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new(nodeToInsert->get_x(),(nodeToInsert->get_y() + insertHeight),nodeToInsert->get_width(),(nodeToInsert->get_height() - insertHeight)),null(),null());
			HX_STACK_LINE(275)
			firstGrandChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new(firstChild->get_x(),firstChild->get_y(),insertWidth,insertHeight),data,key);
			HX_STACK_LINE(276)
			secondGrandChild = ::org::flixel::system::layer::Node_obj::__new(hx::ObjectPtr<OBJ_>(this),::native::geom::Rectangle_obj::__new((firstChild->get_x() + insertWidth),firstChild->get_y(),(firstChild->get_width() - insertWidth),insertHeight),null(),null());
		}
		HX_STACK_LINE(279)
		firstChild->left = firstGrandChild;
		HX_STACK_LINE(280)
		firstChild->right = secondGrandChild;
		HX_STACK_LINE(282)
		nodeToInsert->left = firstChild;
		HX_STACK_LINE(283)
		nodeToInsert->right = secondChild;
		HX_STACK_LINE(285)
		this->atlasBitmapData->copyPixels(data,data->get_rect(),firstGrandChild->point,null(),null(),null());
		HX_STACK_LINE(287)
		this->nodes->set(key,firstGrandChild);
		HX_STACK_LINE(289)
		return firstGrandChild;
	}
	HX_STACK_LINE(292)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,addNode,return )

Void Atlas_obj::resize( int newWidth,int newHeight){
{
		HX_STACK_PUSH("Atlas::resize","org/flixel/system/layer/Atlas.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newWidth,"newWidth");
		HX_STACK_ARG(newHeight,"newHeight");
		HX_STACK_LINE(219)
		this->root->rect->width = newWidth;
		HX_STACK_LINE(220)
		this->root->rect->height = newHeight;
		HX_STACK_LINE(221)
		this->atlasBitmapData->dispose();
		HX_STACK_LINE(223)
		this->atlasBitmapData = ::native::display::BitmapData_obj::__new(newWidth,newHeight,true,(int)0,null());
		HX_STACK_LINE(227)
		this->rebuildAtlas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,resize,(void))

Void Atlas_obj::redrawAll( ){
{
		HX_STACK_PUSH("Atlas::redrawAll","org/flixel/system/layer/Atlas.hx",201);
		HX_STACK_THIS(this);
		HX_STACK_LINE(203)
		this->atlasBitmapData->fillRect(this->atlasBitmapData->get_rect(),(int)0);
		HX_STACK_LINE(208)
		for(::cpp::FastIterator_obj< ::org::flixel::system::layer::Node > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::Node >(this->nodes->iterator());  __it->hasNext(); ){
			::org::flixel::system::layer::Node node = __it->next();
			this->atlasBitmapData->copyPixels(node->item,node->rect,node->point,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,redrawAll,(void))

Void Atlas_obj::redrawNode( ::org::flixel::system::layer::Node node){
{
		HX_STACK_PUSH("Atlas::redrawNode","org/flixel/system/layer/Atlas.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(185)
		if ((this->hasNodeWithName(node->key))){
			HX_STACK_LINE(189)
			this->atlasBitmapData->fillRect(node->rect,(int)0);
			HX_STACK_LINE(193)
			this->atlasBitmapData->copyPixels(node->item,node->rect,node->point,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,redrawNode,(void))

Void Atlas_obj::rebuildAtlas( ){
{
		HX_STACK_PUSH("Atlas::rebuildAtlas","org/flixel/system/layer/Atlas.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_LINE(170)
		this->createQueue();
		HX_STACK_LINE(171)
		for(::cpp::FastIterator_obj< ::org::flixel::system::layer::Node > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::Node >(this->nodes->iterator());  __it->hasNext(); ){
			::org::flixel::system::layer::Node node = __it->next();
			this->addToQueue(node->item,node->key);
		}
		HX_STACK_LINE(176)
		this->clear();
		HX_STACK_LINE(177)
		this->generateAtlasFromQueue();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,rebuildAtlas,(void))

::Hash Atlas_obj::_atlasCache;

::org::flixel::system::layer::Atlas Atlas_obj::getAtlas( ::String Key,::native::display::BitmapData BmData,hx::Null< bool >  __o_Unique){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("Atlas::getAtlas","org/flixel/system/layer/Atlas.hx",98);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_ARG(BmData,"BmData");
	HX_STACK_ARG(Unique,"Unique");
{
		HX_STACK_LINE(99)
		bool alreadyExist = ::org::flixel::system::layer::Atlas_obj::_atlasCache->exists(Key);		HX_STACK_VAR(alreadyExist,"alreadyExist");
		HX_STACK_LINE(101)
		if (((bool(!(Unique)) && bool(alreadyExist)))){
			HX_STACK_LINE(102)
			return ::org::flixel::system::layer::Atlas_obj::_atlasCache->get(Key);
		}
		HX_STACK_LINE(106)
		::String AtlasKey = Key;		HX_STACK_VAR(AtlasKey,"AtlasKey");
		HX_STACK_LINE(107)
		if (((bool(Unique) && bool(alreadyExist)))){
			HX_STACK_LINE(108)
			AtlasKey = ::org::flixel::system::layer::Atlas_obj::getUniqueKey(Key);
		}
		HX_STACK_LINE(112)
		::org::flixel::system::layer::Atlas atlas = ::org::flixel::system::layer::Atlas_obj::__new(AtlasKey,BmData->get_width(),BmData->get_height(),(int)1,(int)1,BmData);		HX_STACK_VAR(atlas,"atlas");
		HX_STACK_LINE(113)
		return atlas;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Atlas_obj,getAtlas,return )

::String Atlas_obj::getUniqueKey( ::String Key){
	HX_STACK_PUSH("Atlas::getUniqueKey","org/flixel/system/layer/Atlas.hx",117);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(118)
	if ((!(::org::flixel::system::layer::Atlas_obj::_atlasCache->exists(Key)))){
		HX_STACK_LINE(118)
		return Key;
	}
	HX_STACK_LINE(120)
	::String AtlasKey = Key;		HX_STACK_VAR(AtlasKey,"AtlasKey");
	HX_STACK_LINE(121)
	int i = (int)1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(122)
	while((::org::flixel::system::layer::Atlas_obj::_atlasCache->exists((Key + i)))){
		HX_STACK_LINE(123)
		(i)++;
	}
	HX_STACK_LINE(126)
	AtlasKey = (Key + i);
	HX_STACK_LINE(127)
	return AtlasKey;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,getUniqueKey,return )

Void Atlas_obj::removeAtlas( ::org::flixel::system::layer::Atlas atlas,hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(false);
	HX_STACK_PUSH("Atlas::removeAtlas","org/flixel/system/layer/Atlas.hx",136);
	HX_STACK_ARG(atlas,"atlas");
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(137)
		::org::flixel::system::layer::Atlas currAtlas;		HX_STACK_VAR(currAtlas,"currAtlas");
		HX_STACK_LINE(138)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::org::flixel::system::layer::Atlas_obj::_atlasCache->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(140)
				currAtlas = ::org::flixel::system::layer::Atlas_obj::_atlasCache->get(key);
				HX_STACK_LINE(141)
				if (((currAtlas == atlas))){
					HX_STACK_LINE(143)
					::org::flixel::system::layer::Atlas_obj::_atlasCache->remove(key);
					HX_STACK_LINE(144)
					if ((destroy)){
						HX_STACK_LINE(144)
						atlas->destroy();
					}
					HX_STACK_LINE(145)
					return null();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Atlas_obj,removeAtlas,(void))

Void Atlas_obj::clearAtlasCache( ){
{
		HX_STACK_PUSH("Atlas::clearAtlasCache","org/flixel/system/layer/Atlas.hx",154);
		HX_STACK_LINE(155)
		::org::flixel::system::layer::Atlas atlas;		HX_STACK_VAR(atlas,"atlas");
		HX_STACK_LINE(156)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::org::flixel::system::layer::Atlas_obj::_atlasCache->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(158)
				atlas = ::org::flixel::system::layer::Atlas_obj::_atlasCache->get(key);
				HX_STACK_LINE(159)
				::org::flixel::system::layer::Atlas_obj::_atlasCache->remove(key);
				HX_STACK_LINE(160)
				atlas->destroy();
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,clearAtlasCache,(void))


Atlas_obj::Atlas_obj()
{
}

void Atlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Atlas);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(_fromBitmapData,"_fromBitmapData");
	HX_MARK_MEMBER_NAME(_tileSheetData,"_tileSheetData");
	HX_MARK_MEMBER_NAME(borderY,"borderY");
	HX_MARK_MEMBER_NAME(borderX,"borderX");
	HX_MARK_MEMBER_NAME(atlasBitmapData,"atlasBitmapData");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(tempStorage,"tempStorage");
	HX_MARK_END_CLASS();
}

void Atlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(_fromBitmapData,"_fromBitmapData");
	HX_VISIT_MEMBER_NAME(_tileSheetData,"_tileSheetData");
	HX_VISIT_MEMBER_NAME(borderY,"borderY");
	HX_VISIT_MEMBER_NAME(borderX,"borderX");
	HX_VISIT_MEMBER_NAME(atlasBitmapData,"atlasBitmapData");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(tempStorage,"tempStorage");
}

Dynamic Atlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"addNode") ) { return addNode_dyn(); }
		if (HX_FIELD_EQ(inName,"borderY") ) { return borderY; }
		if (HX_FIELD_EQ(inName,"borderX") ) { return borderX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAtlas") ) { return getAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"addNodes") ) { return addNodes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"redrawAll") ) { return redrawAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addToQueue") ) { return addToQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"redrawNode") ) { return redrawNode_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_atlasCache") ) { return _atlasCache; }
		if (HX_FIELD_EQ(inName,"removeAtlas") ) { return removeAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"createQueue") ) { return createQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"tempStorage") ) { return tempStorage; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return getUniqueKey_dyn(); }
		if (HX_FIELD_EQ(inName,"bitmapSorter") ) { return bitmapSorter_dyn(); }
		if (HX_FIELD_EQ(inName,"getNodeByKey") ) { return getNodeByKey_dyn(); }
		if (HX_FIELD_EQ(inName,"rebuildAtlas") ) { return rebuildAtlas_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deleteSubtree") ) { return deleteSubtree_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tileSheetData") ) { return _tileSheetData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearAtlasCache") ) { return clearAtlasCache_dyn(); }
		if (HX_FIELD_EQ(inName,"getNodeByBitmap") ) { return getNodeByBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"hasNodeWithName") ) { return hasNodeWithName_dyn(); }
		if (HX_FIELD_EQ(inName,"_fromBitmapData") ) { return _fromBitmapData; }
		if (HX_FIELD_EQ(inName,"atlasBitmapData") ) { return atlasBitmapData; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findNodeToInsert") ) { return findNodeToInsert_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAndFillWith") ) { return clearAndFillWith_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"generateAtlasFromQueue") ) { return generateAtlasFromQueue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Atlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::org::flixel::system::layer::Node >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"borderY") ) { borderY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderX") ) { borderX=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_atlasCache") ) { _atlasCache=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempStorage") ) { tempStorage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tileSheetData") ) { _tileSheetData=inValue.Cast< ::org::flixel::system::layer::TileSheetData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fromBitmapData") ) { _fromBitmapData=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlasBitmapData") ) { atlasBitmapData=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Atlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("_fromBitmapData"));
	outFields->push(HX_CSTRING("_tileSheetData"));
	outFields->push(HX_CSTRING("borderY"));
	outFields->push(HX_CSTRING("borderX"));
	outFields->push(HX_CSTRING("atlasBitmapData"));
	outFields->push(HX_CSTRING("nodes"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("tempStorage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_atlasCache"),
	HX_CSTRING("getAtlas"),
	HX_CSTRING("getUniqueKey"),
	HX_CSTRING("removeAtlas"),
	HX_CSTRING("clearAtlasCache"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("findNodeToInsert"),
	HX_CSTRING("deleteSubtree"),
	HX_CSTRING("clone"),
	HX_CSTRING("clearAndFillWith"),
	HX_CSTRING("clear"),
	HX_CSTRING("destroy"),
	HX_CSTRING("generateAtlasFromQueue"),
	HX_CSTRING("addToQueue"),
	HX_CSTRING("createQueue"),
	HX_CSTRING("bitmapSorter"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("addNodes"),
	HX_CSTRING("getNodeByBitmap"),
	HX_CSTRING("getNodeByKey"),
	HX_CSTRING("hasNodeWithName"),
	HX_CSTRING("get_height"),
	HX_CSTRING("height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("width"),
	HX_CSTRING("addNode"),
	HX_CSTRING("resize"),
	HX_CSTRING("redrawAll"),
	HX_CSTRING("redrawNode"),
	HX_CSTRING("rebuildAtlas"),
	HX_CSTRING("_fromBitmapData"),
	HX_CSTRING("_tileSheetData"),
	HX_CSTRING("borderY"),
	HX_CSTRING("borderX"),
	HX_CSTRING("atlasBitmapData"),
	HX_CSTRING("nodes"),
	HX_CSTRING("name"),
	HX_CSTRING("root"),
	HX_CSTRING("tempStorage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Atlas_obj::_atlasCache,"_atlasCache");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Atlas_obj::_atlasCache,"_atlasCache");
};

Class Atlas_obj::__mClass;

void Atlas_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.Atlas"), hx::TCanCast< Atlas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Atlas_obj::__boot()
{
	_atlasCache= ::Hash_obj::__new();
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
