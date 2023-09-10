//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_SEARCH_H
#define INC_912LIST_LIST_SEARCH_H

template <typename T>
ListNodePosi<T> List<T>::search(const T &e, Rank n, ListNodePosi<T> p) const { //在有序列表内节点p的n个（真）前驱中，找到不大于e的最后者
    while(0 <= n--)     //自右向左
        if (((p = p->pred) -> data) <= e) break; //找到不大于目标值的最后节点
    return p;
}

#endif //INC_912LIST_LIST_SEARCH_H
