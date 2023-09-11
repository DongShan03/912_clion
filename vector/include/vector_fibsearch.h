//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_FIBSEARCH_H
#define INC_912VECTOR_VECTOR_FIBSEARCH_H

template <typename T>
static Rank fibSearch(T* _elem, T const& e, Rank lo, Rank hi)
{
    Fib fib(hi - lo);
    while (lo < hi) {
        while (hi - lo < fib.get()) fib.prev();
        Rank mi = lo + fib.get() + 1;
        if      (e < _elem[mi]) hi = mi;
        else if (_elem[mi] < e) lo = mi + 1;
        else    return mi;
    }
}

#endif //INC_912VECTOR_VECTOR_FIBSEARCH_H
