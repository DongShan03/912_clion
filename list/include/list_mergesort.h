//
// Created by huang on 23-9-11.
//

#ifndef INC_912LIST_LIST_MERGESORT_H
#define INC_912LIST_LIST_MERGESORT_H

template <typename T>       //有序列表的合并 当前列表中自P起的n个元素，与列表L中自q起的s个元素 进行合并
ListNodePosi<T> List<T>::merge(ListNodePosi<T> p, Rank r, List<T> &L, ListNodePosi<T> q, Rank s) {
    ListNodePosi<T> pp = p->pred;
    while ((0 < s) && (q != p)) {
        if ( ( 0 < r ) && ( p->data <= q->data )) {
            p = p->succ; r--;
        }
        else {
            insert(L.remove((q=q->succ)->pred), p);
            s--;
        }
    }
    return  pp->succ;
}

template <typename T>
void List<T>::mergeSort(ListNodePosi<T> &p, Rank r) {
    if (r < 2) return;
    Rank mi = r >> 1;
    ListNodePosi<T> q = p; for(Rank i = 0; i < mi; i++) q = q->succ;
    mergeSort(p, mi);
    mergeSort(q, r - mi);               //对前后子表分别排序
    p = merge(p, mi, *this, q, r - mi);         //合并
}

#endif //INC_912LIST_LIST_MERGESORT_H
