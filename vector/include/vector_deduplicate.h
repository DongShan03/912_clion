//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_DEDUPLICATE_H
#define INC_912VECTOR_VECTOR_DEDUPLICATE_H

//删除重复元素，并返回被删除元素的个数
template <typename T>
int Vector<T>::deduplicate()
{   //O(n2)
    int oldSize = _size;  //记录原规模
    Rank i = 1;  //从第1项开始查找前缀中是否有相同元素
    while ( i < _size ) {
        (find(_elem[i], 0, i) < 0) ?  //如果没有则检查下一个元素
        i++ : remove(i);                //如果有则移除该元素
    }
    return oldSize - _size;              //返回移除的个数
}


#endif //INC_912VECTOR_VECTOR_DEDUPLICATE_H
