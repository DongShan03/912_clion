//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_REMOVE_H
#define INC_912LIST_LIST_REMOVE_H

template <typename T>
T List<T>::remove(ListNodePosi<T> p) {
    T e = p->data;      //备份删除的值
    p->pred->succ = p->succ; p->succ->pred = p->pred; //短路相接
    delete p; _size--;
    return e;
}

#endif //INC_912LIST_LIST_REMOVE_H
