//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINTREE_INSERT_H
#define INC_912BINTREE_BINTREE_INSERT_H

template <typename T>
BinNodePosi<T> BinTree<T>::insert(BinNodePosi<T> x, const T &e) {
    assert(!x->rc);
    x->insertAsRC(e); _size++;
    updateHeight(x);
    return x->rc;
}

template <typename T>
BinNodePosi<T> BinTree<T>::insert(const T &e, BinNodePosi<T> x) {
    assert(!x->lc);
    x->insertAsLC(e); _size++;
    updateHeight(x);
    return x->lc;
}

template <typename T> BinNodePosi<T> BinTree<T>::insert( T const& e )
   { _size = 1; return _root = new BinNode<T>( e ); } //将e当作根节点插入空的二叉树

#endif //INC_912BINTREE_BINTREE_INSERT_H
