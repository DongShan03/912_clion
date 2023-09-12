//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_INSERT_H
#define INC_912BINTREE_BINNODE_INSERT_H

template <typename T> BinNodePosi<T> BinNode<T>::insertAsLC( T const& e )
   { return lc = new BinNode( e, this ); } //将e作为当前节点的左孩子插入二叉树

template <typename T> BinNodePosi<T> BinNode<T>::insertAsRC( T const& e )
   { return rc = new BinNode( e, this ); } //将e作为当前节点的右孩子插入二叉树

#endif //INC_912BINTREE_BINNODE_INSERT_H
