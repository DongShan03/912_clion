//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_INSERT_H
#define INC_912BINTREE_BINNODE_INSERT_H

template <typename T> BinNodePosi<T> BinNode<T>::insertAsLC( T const& e )
   { return lc = new BinNode( e, this ); } //��e��Ϊ��ǰ�ڵ�����Ӳ��������

template <typename T> BinNodePosi<T> BinNode<T>::insertAsRC( T const& e )
   { return rc = new BinNode( e, this ); } //��e��Ϊ��ǰ�ڵ���Һ��Ӳ��������

#endif //INC_912BINTREE_BINNODE_INSERT_H
