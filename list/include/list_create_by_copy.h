//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_CREATE_BY_COPY_H
#define INC_912LIST_LIST_CREATE_BY_COPY_H

template <typename T>
List<T>::List(const List<T> &L) {   //���帴���б�L
    copyNodes(L.first(), L._size);
}

template <typename T>       //�����б�����λ��p���n�assert: pΪ�Ϸ�λ�ã���������n-1����̽ڵ㣩
List<T>::List(ListNodePosi<T> p, Rank n) {
    copyNodes(p, n);
}

template <typename T>
List<T>::List(const List<T> &L, Rank r, Rank n) {
    copyNodes ( L[r], n );
}

#endif //INC_912LIST_LIST_CREATE_BY_COPY_H
