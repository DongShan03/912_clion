//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_DESTRUCTOR_H
#define INC_912LIST_LIST_DESTRUCTOR_H

template <typename T>
List<T>::~List() //�б�������
    { clear(); delete header; delete trailer; } //����б��ͷ�ͷ��β�ڱ��ڵ�

#endif //INC_912LIST_LIST_DESTRUCTOR_H
