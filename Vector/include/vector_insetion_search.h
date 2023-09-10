//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_INSETION_SEARCH_H
#define INC_912VECTOR_VECTOR_INSETION_SEARCH_H

template <typename T>
Rank insertionSearch(T* _elem, T const&e, Rank lo, Rank hi)
{
    while(lo < hi) {
        Rank mi = lo + (hi - lo) * (e - _elem[lo]) / (_elem[hi] - _elem[lo]);
        (e < _elem[mi]) ? hi = mi : lo = mi + 1;
    }
    return --lo;
}

#endif //INC_912VECTOR_VECTOR_INSETION_SEARCH_H
