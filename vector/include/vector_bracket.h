//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_BRACKET_H
#define INC_912VECTOR_VECTOR_BRACKET_H

template <typename T>
T & Vector<T>::operator[](Rank r) const {
    assert(0 <= r);   //�ϸ��ж����ڿ�ȡ��Χ��
    assert(r < _size);
    return _elem[r];
}

#endif //INC_912VECTOR_VECTOR_BRACKET_H
