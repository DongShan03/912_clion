//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_SWAP_H
#define INC_912VECTOR_SWAP_H

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

#endif //INC_912VECTOR_SWAP_H
