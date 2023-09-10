//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_INIT_H
#define INC_912LIST_LIST_INIT_H

template <typename T>
void List<T>::init() { //列表初始化，在创建列表对象时统一调用
   header = new ListNode<T>; trailer = new ListNode<T>; //创建头、尾哨兵节点
   header->succ = trailer; header->pred = NULL; //向前链接
   trailer->pred = header; trailer->succ = NULL; //向后链接
   _size = 0; //记录规模
}


#endif //INC_912LIST_LIST_INIT_H
