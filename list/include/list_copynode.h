//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_COPYNODE_H
#define INC_912LIST_LIST_COPYNODE_H

template <typename T>
void List<T>::copyNodes(ListNodePosi<T> p, Rank n) {
    init();
    while(n--) { insertAsLast(p->data); p = p->succ;}
}

#endif //INC_912LIST_LIST_COPYNODE_H
