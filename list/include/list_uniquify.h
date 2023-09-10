//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_UNIQUIFY_H
#define INC_912LIST_LIST_UNIQUIFY_H

template <typename T>
Rank List<T>::uniquify() {  //有序列表去重
    if (_size < 2) return 0; //平凡
    Rank oldSize = _size;
    ListNodePosi<T> p = first(), q;
    while(trailer != (q = p->succ)) {
        if (p->data != q->data) p = q;
        else remove(q);
    }
    return oldSize - _size;
}

#endif //INC_912LIST_LIST_UNIQUIFY_H
