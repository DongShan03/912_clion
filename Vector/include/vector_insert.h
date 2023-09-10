//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_INSERT_H
#define INC_912VECTOR_VECTOR_INSERT_H

template <typename T>
Rank Vector<T>::insert(Rank r, const T &e) {
    assert(0 <= r);
    assert(r <= _size);
    expand();   //如果有必要，则扩容
    for (Rank i = _size; r < i; i--) //自后往前
        _elem[i] = _elem[i-1];  //将每个元素后移
    _elem[r] = e; _size++;      //将秩返回
    return r;
}

#endif //INC_912VECTOR_VECTOR_INSERT_H
