//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_SEARCH_H
#define INC_912LIST_LIST_SEARCH_H

template <typename T>
ListNodePosi<T> List<T>::search(const T &e, Rank n, ListNodePosi<T> p) const { //�������б��ڽڵ�p��n�����棩ǰ���У��ҵ�������e�������
    while(0 <= n--)     //��������
        if (((p = p->pred) -> data) <= e) break; //�ҵ�������Ŀ��ֵ�����ڵ�
    return p;
}

#endif //INC_912LIST_LIST_SEARCH_H
