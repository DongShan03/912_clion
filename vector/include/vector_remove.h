//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_REMOVE_H
#define INC_912VECTOR_VECTOR_REMOVE_H

//返回删除的元素个数
template <typename T>  //删除区间[lo, hi)， 0 <= lo <= hi <= size
int Vector<T>::remove(Rank lo, Rank hi) {  //O(n - hi)
    assert(0 <= lo); assert(lo <= hi); assert(hi <= _size);
    if (lo == hi) return 0;
    while (hi < _size) _elem[lo++] = _elem[hi++];
    _size = lo; shrink();
    return hi - lo;
}

template <typename T>
T Vector<T>::remove(Rank r) {
    assert(0 <= r); assert(r < _size);
    T e = _elem[r];
    remove(r, r+1);  //单个删除
    return e;   //返回被删除的元素
}

#endif //INC_912VECTOR_VECTOR_REMOVE_H
