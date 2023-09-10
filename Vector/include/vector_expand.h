//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_EXPAND_H
#define INC_912VECTOR_VECTOR_EXPAND_H

template <typename T>
void Vector<T>::expand() { //空间不足时扩容
    if (_size < _capacity) return; //尚未满员，无需扩容
    if ( _capacity < DEFAULT_CAPACITY ) _capacity = DEFAULT_CAPACITY;  //不低于最低容量
    T* oldElem = _elem; _elem = new T[_capacity <<= 1]; //超级加倍
    for (Rank i = 0; i < _size; i++)  //复制原向量内容
        _elem[i] = oldElem[i];
    delete[] oldElem;  //删除原空间
}

#endif //INC_912VECTOR_VECTOR_EXPAND_H
