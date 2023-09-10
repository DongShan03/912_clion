//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_REVERSE_H
#define INC_912LIST_LIST_REVERSE_H

template <typename T>
void List<T>::reverseA() {
    if (_size < 2) return;          //ƽ��
    ListNodePosi<T> p = header, q = trailer;
    for (Rank i = 1; i < _size; i +=2 )
    {
        swap((p=p->succ)->data, (q=q->pred)->data); //�����Գƽڵ��������
    }
}
���ƻ�������
template <typename T>
void List<T>::reverseB() {
    if (_size < 2) return;
    ListNodePosi<T> p, q;
    for (p = header, q = p->succ; p != trailer; p = q, q = q->succ) p->pred = q;
    trailer->pred = NULL;
    for (p = header, q = p->pred; p != trailer; p = q, q = q->pred) q->succ = p;
    header->succ = NULL;
    swap(header, trailer);
}

#endif //INC_912LIST_LIST_REVERSE_H
