//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_SHRINK_H
#define INC_912VECTOR_VECTOR_SHRINK_H

template <typename T>
void Vector<T>::shrink() {
    if (_capacity < DEFAULT_CAPACITY << 1) return; //ʹ���������ڵ�����ͱ�׼
    if (_size << 2 > _capacity) return; //���4*_size > _capacity ˵��װ�����Ӵ���25%����������
    T* oldElem = _elem; _elem = new T[_capacity >>= 1]; //��������
    for(Rank i = 0; i < _size; i++) _elem[i] = oldElem[i]; //����ԭ����
    delete[] oldElem;  //�ͷ�ԭ�ռ�
}

#endif //INC_912VECTOR_VECTOR_SHRINK_H
