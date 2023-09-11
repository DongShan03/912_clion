//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_INSERT_H
#define INC_912VECTOR_VECTOR_INSERT_H

template <typename T>
Rank Vector<T>::insert(Rank r, const T &e) {
    assert(0 <= r);
    assert(r <= _size);
    expand();   //����б�Ҫ��������
    for (Rank i = _size; r < i; i--) //�Ժ���ǰ
        _elem[i] = _elem[i-1];  //��ÿ��Ԫ�غ���
    _elem[r] = e; _size++;      //���ȷ���
    return r;
}

#endif //INC_912VECTOR_VECTOR_INSERT_H
