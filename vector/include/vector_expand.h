//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_EXPAND_H
#define INC_912VECTOR_VECTOR_EXPAND_H

template <typename T>
void Vector<T>::expand() { //�ռ䲻��ʱ����
    if (_size < _capacity) return; //��δ��Ա����������
    if ( _capacity < DEFAULT_CAPACITY ) _capacity = DEFAULT_CAPACITY;  //�������������
    T* oldElem = _elem; _elem = new T[_capacity <<= 1]; //�����ӱ�
    for (Rank i = 0; i < _size; i++)  //����ԭ��������
        _elem[i] = oldElem[i];
    delete[] oldElem;  //ɾ��ԭ�ռ�
}

#endif //INC_912VECTOR_VECTOR_EXPAND_H
