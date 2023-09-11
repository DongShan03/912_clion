//
// Created by huang on 2023/9/10.
//

#ifndef INC_912VECTOR_VECTOR_MERGESORT_H
#define INC_912VECTOR_VECTOR_MERGESORT_H

template <typename T>
void Vector<T>::mergeSort(Rank lo, Rank hi) {       //归并排序
    assert(0 <= lo); assert(lo < hi); assert(hi <= size());
    if (hi - lo < 2) return;
    Rank mi = (lo + hi) >> 1;                       //中点
    mergeSort(lo, mi);                          //对前半段排序
    mergeSort(mi, hi);                          //对后半段排序
    if (_elem[mi - 1] > _elem[mi]) merge(lo, mi, hi); //归并
}

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi) {
    T* A = _elem + lo; //合并后的向量A[0, hi - lo) = _elem[lo, hi)
    Rank lb = mi - lo; T* B = new T[lb];  //前子向量B的长度，范围是[lo, mi)
    for (Rank i = 0; i < lb; B[i] = A[i++]); //给B向量赋值
    Rank lc = hi - mi; T* C = _elem + mi; //后子向量C的长度,范围是[mi, hi)
    for (Rank i = 0, j = 0, k = 0; (j < lb) || (k < lc);) {
        if (            (lc <= k || (B[j] <= C[k]))) A[i++] = B[j++];
        if ((k < lc) &&             (C[k] <  B[j]))  A[i++] = C[k++];
    }
    delete[] B;  //释放B
}

#endif //INC_912VECTOR_VECTOR_MERGESORT_H
