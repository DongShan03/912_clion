//
// Created by huang on 2023/9/13.
//

#ifndef INC_912BST_BST_SEARCH_H
#define INC_912BST_BST_SEARCH_H

template <typename T>
BinNodePosi<T>& BST<T>::search(const T &e) {
    if (!_root || _root->data) {_hot=NULL; return _root;} //����������������
    for (_hot = _root;;) {
        BinNodePosi<T>& v = (e < _hot->data) ? _hot->lc : _hot->rc;
        if (!v || e == v->data) return v;
        _hot = v;
    }
} //�������л�ʧ�ܣ�_hot��ָ��v֮���ף�v�Ǹ�ʱ��hotΪNULL��

#endif //INC_912BST_BST_SEARCH_H
