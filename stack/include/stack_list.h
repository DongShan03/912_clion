//
// Created by huang on 23-9-11.
//

#ifndef INC_912STACK_STACK_LIST_H
#define INC_912STACK_STACK_LIST_H

#include "../../list/include/list.h"

template <typename T>
class StackList : public List<T> {
public:
    void push(T const& e) { this->insertAsLast(e);}
    T pop() {return this->remove(this->last());}
    T& top() {return this->last()->data;}
};

#endif //INC_912STACK_STACK_LIST_H
