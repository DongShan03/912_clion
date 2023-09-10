//
// Created by huang on 2023/9/10.
//

#ifndef INC_912VECTOR_VECTOR_MERGESORT_H
#define INC_912VECTOR_VECTOR_MERGESORT_H

template <typename T>
void Vector<T>::mergeSort(Rank lo, Rank hi) {       //�鲢����
    assert(0 <= lo); assert(lo < hi); assert(hi <= size());
    if (hi - lo < 2) return;
    Rank mi = (lo + hi) >> 1;                       //�е�
    mergeSort(lo, mi);                          //��ǰ�������
    mergeSort(mi, hi);                          //�Ժ�������
    if (_elem[mi - 1] > _elem[mi]) merge(lo, mi, hi); //�鲢
}

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi) {
    T* A = _elem + lo; //�ϲ��������A[0, hi - lo) = _elem[lo, hi)
    Rank lb = mi - lo; T* B = new T[lb];  //ǰ������B�ĳ��ȣ���Χ��[lo, mi)
    for (Rank i = 0; i < lb; B[i] = A[i++]); //��B������ֵ
    Rank lc = hi - mi; T* C = _elem + mi; //��������C�ĳ���,��Χ��[mi, hi)
    for (Rank i = 0, j = 0, k = 0; (j < lb) || (k < lc);) {
        if (            (lc <= k || (B[j] <= C[k]))) A[i++] = B[j++];
        if ((k < lc) &&             (C[k] <  B[j]))  A[i++] = C[k++];
    }
    delete[] B;  //�ͷ�B
}

#endif //INC_912VECTOR_VECTOR_MERGESORT_H
