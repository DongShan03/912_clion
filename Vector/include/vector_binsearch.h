//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_BINSEARCH_H
#define INC_912VECTOR_VECTOR_BINSEARCH_H

template <typename T>
Rank binSearch(T* _elem, T const&e, Rank lo, Rank hi)
{
    int i = rand() % 3;
    if (i == 0) return binSearchA(_elem, e, lo, hi);
    if (i == 1) return binSearchB(_elem, e, lo, hi);
    return binSearchC(_elem, e, lo, hi);
}


template <typename T>
Rank binSearchA(T* _elem, T const&e, Rank lo, Rank hi)
{
    while(lo < hi)
    {
        Rank mi = (lo + hi) >> 1;
        if      (_elem[mi] < e) lo = mi + 1;
        else if (e < _elem[mi]) hi = mi;
        else                    return mi;
    }
    return -1;   //δ����
}

template <typename T>
Rank binSearchB(T* _elem, T const&e, Rank lo, Rank hi)
{
    while(1 < hi - lo)  //��Ч������СΪ1ʱ�Ż�ֹͣ
    {
        Rank mi = (lo + hi) >> 1;
        (e < _elem[mi]) ? hi = mi : lo = mi;    //[lo, mi)��[mi, hi)
    }
    return (e == _elem[lo]) ? lo : -1;   //����Ԫ�ص��Ȼ�-1
}

template <typename T>
Rank binSearchC(T* _elem, T const&e, Rank lo, Rank hi)
{
    while(lo < hi)  //��Ч������СΪ1ʱ�Ż�ֹͣ
    {
        Rank mi = (lo + hi) >> 1;
        (e < _elem[mi]) ? hi = mi : lo = mi + 1;    //[lo, mi)��(mi, hi)
    }
    return --lo;   //����Ԫ�ص��Ȼ����ʧ��ʱ�ҵ�
}


#endif //INC_912VECTOR_VECTOR_BINSEARCH_H
