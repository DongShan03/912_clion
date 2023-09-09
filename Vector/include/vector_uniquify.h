//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_UNIQUIFY_H
#define INC_912VECTOR_VECTOR_UNIQUIFY_H

template <typename T>
int Vector<T>::uniquify()           //有序向量剔除重复元素
{
    Rank i = 0, j = 0;              //双指针  一旦发现雷同者
    while(++j < _size) {            //每一轮j都加一
        if (_elem[i] != _elem[j])   //i加一并将i指向的元素复制为j指向的
            _elem[++i] = _elem[j];
    }
    _size = ++i;shrink();           //如果有必要则缩减
    return j - i;
}

#endif //INC_912VECTOR_VECTOR_UNIQUIFY_H
