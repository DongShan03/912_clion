//
// Created by huang on 23-9-11.
//

#ifndef INC_912LIST_LIST_SELECTIONSORT_H
#define INC_912LIST_LIST_SELECTIONSORT_H

template <typename T>
void List<T>::selectionSort(ListNodePosi<T> p, Rank r) {
    ListNodePosi<T> head = p->pred, tail = p;
    for (Rank i = 0; i < r; i++) {
        tail = tail->succ;
    }
    while (1 < r) {
        swap(selectMax(head->succ, r)->data, tail->pred->data);
        tail = tail->pred; r--;
    }
}

#endif //INC_912LIST_LIST_SELECTIONSORT_H
