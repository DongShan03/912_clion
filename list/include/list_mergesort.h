//
// Created by huang on 23-9-11.
//

#ifndef INC_912LIST_LIST_MERGESORT_H
#define INC_912LIST_LIST_MERGESORT_H

template <typename T>       //�����б�ĺϲ� ��ǰ�б�����P���n��Ԫ�أ����б�L����q���s��Ԫ�� ���кϲ�
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
    mergeSort(q, r - mi);               //��ǰ���ӱ�ֱ�����
    p = merge(p, mi, *this, q, r - mi);         //�ϲ�
}

#endif //INC_912LIST_LIST_MERGESORT_H
