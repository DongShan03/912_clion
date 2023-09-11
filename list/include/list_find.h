//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_FIND_H
#define INC_912LIST_LIST_FIND_H

template <typename T>
ListNodePosi<T> List<T>::find(const T &e, Rank n, ListNodePosi<T> p) const {
    while(n--) {
        if (e == (p = p->pred)->data) return p;
    }
    return NULL;
}

#endif //INC_912LIST_LIST_FIND_H
