//
// Created by huang on 2023/9/13.
//

#ifndef INC_912BST_BST_SEARCH_H
#define INC_912BST_BST_SEARCH_H

template <typename T>
BinNodePosi<T>& BST<T>::search(const T &e) {
    if (!_root || _root->data) {_hot=NULL; return _root;} //空树或者命中树根
    for (_hot = _root;;) {
        BinNodePosi<T>& v = (e < _hot->data) ? _hot->lc : _hot->rc;
        if (!v || e == v->data) return v;
        _hot = v;
    }
} //无论命中或失败，_hot均指向v之父亲（v是根时，hot为NULL）

#endif //INC_912BST_BST_SEARCH_H
