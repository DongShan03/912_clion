//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_SHRINK_H
#define INC_912VECTOR_VECTOR_SHRINK_H

template <typename T>
void Vector<T>::shrink() {
    if (_capacity < DEFAULT_CAPACITY << 1) return; //使容量不至于低于最低标准
    if (_size << 2 > _capacity) return; //如何4*_size > _capacity 说明装填因子大于25%，无需扩容
    T* oldElem = _elem; _elem = new T[_capacity >>= 1]; //容量减半
    for(Rank i = 0; i < _size; i++) _elem[i] = oldElem[i]; //复制原向量
    delete[] oldElem;  //释放原空间
}

#endif //INC_912VECTOR_VECTOR_SHRINK_H
