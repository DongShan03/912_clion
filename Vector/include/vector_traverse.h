//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_TRAVERSE_H
#define INC_912VECTOR_VECTOR_TRAVERSE_H


//利用函数指针机制进行访问，只读或局部性修改
template <typename T>
void Vector<T>::traverse(void (*visit)(T &))
{
    for (int i = 0; i < _size; i++)
        visit(_elem[i]);
}

//利用函数对象机制，可全局性修改
template <typename T> template <typename VST>
void Vector<T>::traverse(VST &visit)
{
    for (int i = 0; i < _size; i++)
        visit(_elem[i]);
}



#endif //INC_912VECTOR_VECTOR_TRAVERSE_H
