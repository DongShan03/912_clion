//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_CONSTRUCTOR_BY_COPYING_H
#define INC_912VECTOR_VECTOR_CONSTRUCTOR_BY_COPYING_H
template <typename T>
void Vector<T>::copyFrom(const T *A, Rank lo, Rank hi) {
    _elem = new T[_capacity = 2 * (hi - lo)]; //����ռ�
    _size = 0;
    while (lo < hi)
        _elem[_size++] = A[lo++];  //������_elem[0,hi-lo)
}
#endif //INC_912VECTOR_VECTOR_CONSTRUCTOR_BY_COPYING_H
