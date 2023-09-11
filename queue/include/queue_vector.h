//
// Created by huang on 23-9-11.
//

#ifndef INC_912QUEUE_QUEUE_VECTOR_H
#define INC_912QUEUE_QUEUE_VECTOR_H

#include "../../vector/include/vector.h"

template <typename T>
class QueueVector: public Vector<T> {
public:
    void enqueue(T const& e) {this->insert(0, e);}
    T dequeue() {return this->remove(this->size() - 1);}
    T& front() {return (this->_elem)[this->size() - 1];}
    T& last() {return (this->_elem)[0];}
};


#endif //INC_912QUEUE_QUEUE_VECTOR_H
