//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_REMOVE_H
#define INC_912LIST_LIST_REMOVE_H

template <typename T>
T List<T>::remove(ListNodePosi<T> p) {
    T e = p->data;      //����ɾ����ֵ
    p->pred->succ = p->succ; p->succ->pred = p->pred; //��·���
    delete p; _size--;
    return e;
}

#endif //INC_912LIST_LIST_REMOVE_H
