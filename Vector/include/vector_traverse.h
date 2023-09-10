//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_TRAVERSE_H
#define INC_912VECTOR_VECTOR_TRAVERSE_H


//���ú���ָ����ƽ��з��ʣ�ֻ����ֲ����޸�
template <typename T>
void Vector<T>::traverse(void (*visit)(T &))
{
    for (int i = 0; i < _size; i++)
        visit(_elem[i]);
}

//���ú���������ƣ���ȫ�����޸�
template <typename T> template <typename VST>
void Vector<T>::traverse(VST &visit)
{
    for (int i = 0; i < _size; i++)
        visit(_elem[i]);
}



#endif //INC_912VECTOR_VECTOR_TRAVERSE_H
