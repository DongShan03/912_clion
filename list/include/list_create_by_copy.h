//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_CREATE_BY_COPY_H
#define INC_912LIST_LIST_CREATE_BY_COPY_H

template <typename T>
List<T>::List(const List<T> &L) {   //整体复制列表L
    copyNodes(L.first(), L._size);
}

template <typename T>       //复制列表中自位置p起的n项（assert: p为合法位置，且至少有n-1个后继节点）
List<T>::List(ListNodePosi<T> p, Rank n) {
    copyNodes(p, n);
}

template <typename T>
List<T>::List(const List<T> &L, Rank r, Rank n) {
    copyNodes ( L[r], n );
}

#endif //INC_912LIST_LIST_CREATE_BY_COPY_H
