//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_SEARCH_H
#define INC_912VECTOR_VECTOR_SEARCH_H

template <typename T>
Rank Vector<T>::search(const T &e, Rank lo, Rank hi) const {
    assert(lo <= hi);
    return (rand() % 2) ?
        binSearch(_elem, e, lo, hi)
        :fibSearch(_elem, e, lo, hi)
}

#endif //INC_912VECTOR_VECTOR_SEARCH_H
