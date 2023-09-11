//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LISTNODE_INSERTASSUCC_H
#define INC_912LIST_LISTNODE_INSERTASSUCC_H

template <typename T>
ListNodePosi<T> ListNode<T>::insertAsSucc(const T &e) {
    ListNodePosi<T> x = new ListNode(e, this, succ);    //初始化方法
    succ->pred = x; succ = x;                           //修改链接指针
    return x;
}

#endif //INC_912LIST_LISTNODE_INSERTASSUCC_H
