//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_UNIQUIFY_H
#define INC_912VECTOR_VECTOR_UNIQUIFY_H

template <typename T>
int Vector<T>::uniquify()           //���������޳��ظ�Ԫ��
{
    Rank i = 0, j = 0;              //˫ָ��  һ��������ͬ��
    while(++j < _size) {            //ÿһ��j����һ
        if (_elem[i] != _elem[j])   //i��һ����iָ���Ԫ�ظ���Ϊjָ���
            _elem[++i] = _elem[j];
    }
    _size = ++i;shrink();           //����б�Ҫ������
    return j - i;
}

#endif //INC_912VECTOR_VECTOR_UNIQUIFY_H
