//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_FIND_H
#define INC_912VECTOR_VECTOR_FIND_H

//在lo hi 之间查找元素，多个相同者时命中秩最大的
template <typename T>
Rank Vector<T>::find(const T &e, Rank lo, Rank hi) const {
    assert(0 <= lo);
    assert(lo < hi);
    assert(hi <= _size);
    while ((lo < hi--) && (e != _elem[hi]));  //逆向查找
    return hi;
}

#endif //INC_912VECTOR_VECTOR_FIND_H
