//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_DEDUPLICATE_H
#define INC_912VECTOR_VECTOR_DEDUPLICATE_H

//ɾ���ظ�Ԫ�أ������ر�ɾ��Ԫ�صĸ���
template <typename T>
int Vector<T>::deduplicate()
{   //O(n2)
    int oldSize = _size;  //��¼ԭ��ģ
    Rank i = 1;  //�ӵ�1�ʼ����ǰ׺���Ƿ�����ͬԪ��
    while ( i < _size ) {
        (find(_elem[i], 0, i) < 0) ?  //���û��������һ��Ԫ��
        i++ : remove(i);                //��������Ƴ���Ԫ��
    }
    return oldSize - _size;              //�����Ƴ��ĸ���
}


#endif //INC_912VECTOR_VECTOR_DEDUPLICATE_H
