//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_DISORDER_H
#define INC_912VECTOR_VECTOR_DISORDER_H

template <typename T> int Vector<T>::disordered() const { //������������������Ԫ�ضԵ�����
   int n = 0; //������
   for ( int i = 1; i < _size; i++ ) //��һ���_size - 1������Ԫ��
      if ( _elem[i - 1] > _elem[i] ) n++; //���������
   return n; //���������ҽ���n = 0
}

#endif //INC_912VECTOR_VECTOR_DISORDER_H
