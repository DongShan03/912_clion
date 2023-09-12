//
// Created by huang on 23-9-12.
//

#ifndef INC_912VECTOR_VECTOR_MAX_H
#define INC_912VECTOR_VECTOR_MAX_H
template <typename T>
Rank Vector<T>::max ( Rank lo, Rank hi ) {
    Rank max = lo;
    for (Rank i = lo + 1; i <= hi; i++) {
        if (_elem[i] >= _elem[max]) max = i;
    }
    return max;  //返回最大值的且秩最大
}

#endif //INC_912VECTOR_VECTOR_MAX_H
