//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_INSERT_H
#define INC_912LIST_LIST_INSERT_H

template <typename T>
ListNodePosi<T> List<T>::insertAsLast(const T &e) {
    _size++; return trailer->insertAsPred(e);
}

template <typename T>
ListNodePosi<T> List<T>::insertAsFirst(const T &e) {
    _size++; return header->insertAsSucc(e);
}

template <typename T>
ListNodePosi<T> List<T>::insert(const T &e, ListNodePosi<T> p) {
    _size++; return p->insertAsPred(e);         //作为p的前驱插入
}

template <typename T>
ListNodePosi<T> List<T>::insert(ListNodePosi<T> p, const T &e) {
    _size++; return p->insertAsSucc(e);
}

#endif //INC_912LIST_LIST_INSERT_H
