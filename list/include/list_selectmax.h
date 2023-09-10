//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_SELECTMAX_H
#define INC_912LIST_LIST_SELECTMAX_H

template <typename T>
ListNodePosi<T> List<T>::selectMax(ListNodePosi<T> p, Rank n) { //从后n个节点中选出最大的节点
    ListNodePosi<T> max = p;
    while (n--) {
        if ((p = p->succ)->data >= max->data) max = p;
    }
    return max;
}

#endif //INC_912LIST_LIST_SELECTMAX_H
