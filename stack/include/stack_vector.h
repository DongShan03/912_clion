//
// Created by huang on 23-9-11.
//

#ifndef INC_912STACK_STACK_VECTOR_H
#define INC_912STACK_STACK_VECTOR_H

#include "../../vector/include/vector.h"

template <typename T>
class StackVector : public Vector<T> {
public:
    void push(T const& e) { this->insert(this->size(), e);}
    T pop() {return this->remove(this->size() - 1);}
    T& top() {return (*this)[this->size() - 1];}
};

#endif //INC_912STACK_STACK_VECTOR_H
