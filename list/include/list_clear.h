//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_CLEAR_H
#define INC_912LIST_LIST_CLEAR_H

template <typename T>
Rank List<T>::clear() {
    Rank oldSize = _size;
    while (0 < _size) remove(header->succ);
    return oldSize;
}

#endif //INC_912LIST_LIST_CLEAR_H
