//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_DEDUP_H
#define INC_912LIST_LIST_DEDUP_H

template <typename T>
Rank List<T>::dedup() {
    if (_size < 2) return 0; //平凡情况
    Rank oldSize = _size;       //记录原规模
    ListNodePosi<T> p = first();    Rank r = 1; //从1开始即可
    while( trailer != (p = p->succ)) {
        ListNodePosi<T> q = find(p->data, r, p); //从前r个节点里查找
        q ? remove(q) : r++;            //若找到就删除该节点,若是找不到则前缀加一
    }
    return oldSize - _size;
}

#endif //INC_912LIST_LIST_DEDUP_H
