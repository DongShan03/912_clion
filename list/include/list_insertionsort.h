//
// Created by huang on 23-9-11.
//

#ifndef INC_912LIST_LIST_INSERTSORT_H
#define INC_912LIST_LIST_INSERTSORT_H

template <typename T>
void List<T>::insertionSort(ListNodePosi<T> p, Rank r) {
    for (Rank i = 0; i < r; i++) {
        insert(search(p->data, i, p), p->data);
        p = p->succ; remove(p->pred);
    }
}

#endif //INC_912LIST_LIST_INSERTSORT_H
