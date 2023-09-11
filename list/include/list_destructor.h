//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_DESTRUCTOR_H
#define INC_912LIST_LIST_DESTRUCTOR_H

template <typename T>
List<T>::~List() //列表析构器
    { clear(); delete header; delete trailer; } //清空列表，释放头、尾哨兵节点

#endif //INC_912LIST_LIST_DESTRUCTOR_H
