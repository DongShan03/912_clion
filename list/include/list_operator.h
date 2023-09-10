//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_OPERATOR_H
#define INC_912LIST_LIST_OPERATOR_H

template <typename T>
ListNodePosi<T> List<T>::operator[](Rank r) const {
    ListNodePosi<T> p = first();
    while (0 < r--) p = p -> succ;  //����������
    return p;                       //���ؽڵ�
}

#endif //INC_912LIST_LIST_OPERATOR_H
