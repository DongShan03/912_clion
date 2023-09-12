//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINTREE_H
#define INC_912BINTREE_BINTREE_H

#include "binnode.h"
//引入二叉树节点类


template <typename T> class BinTree { //二叉树模板类
protected:
   Rank _size; BinNodePosi<T> _root; //规模、根节点
   virtual Rank updateHeight( BinNodePosi<T> x ); //更新节点x的高度
   void updateHeightAbove( BinNodePosi<T> x ); //更新节点x及其祖先的高度
public:
   BinTree() : _size( 0 ), _root( NULL ) {} //构造函数
   ~BinTree() { if ( 0 < _size ) remove( _root ); } //析构函数
   Rank size() const { return _size; } //规模
   bool empty() const { return !_root; } //判空
   BinNodePosi<T> root() const { return _root; } //树根
   BinNodePosi<T> insert( T const& e); //插入根节点
   BinNodePosi<T> insert( T const& e, BinNodePosi<T> x); //插入左孩子
   BinNodePosi<T> insert( BinNodePosi<T> x, T const& e); //插入右孩子
   BinNodePosi<T> attach( BinTree<T>*& S, BinNodePosi<T> x); //接入左子树
   BinNodePosi<T> attach( BinNodePosi<T> x, BinTree<T>*& S); //接入右子树
   Rank remove ( BinNodePosi<T> ); //子树删除
   BinTree<T>* secede ( BinNodePosi<T> ); //子树分离
   template <typename VST> //操作器
   void travLevel( VST& visit ) { if ( _root ) _root->travLevel( visit ); } //层次遍历
   template <typename VST> //操作器
   void travPre( VST& visit ) { if ( _root ) _root->travPre( visit ); } //先序遍历
   template <typename VST> //操作器
   void travIn( VST& visit ) { if ( _root ) _root->travIn( visit ); } //中序遍历
   template <typename VST> //操作器
   void travPost( VST& visit ) { if ( _root ) _root->travPost( visit ); } //后序遍历
   bool operator<( BinTree<T> const& t ) //比较器（其余自行补充）
      { return _root && t._root && lt( _root, t._root ); }
   bool operator==( BinTree<T> const& t ) //判等器
      { return _root && t._root && ( _root == t._root ); }
}; //BinTree


#include "bintree_implementation.h"

#endif //INC_912BINTREE_BINTREE_H
