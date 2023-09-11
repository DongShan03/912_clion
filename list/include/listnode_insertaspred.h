//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LISTNODE_INSERTASPRED_H
#define INC_912LIST_LISTNODE_INSERTASPRED_H

template <typename T>
ListNodePosi<T> ListNode<T>::insertAsPred(const T &e) {
    ListNodePosi<T> x = new ListNode<T>(e, pred, this);
    pred->succ = x; pred = x;
    return x;
}

#endif //INC_912LIST_LISTNODE_INSERTASPRED_H
