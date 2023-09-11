//
// Created by huang on 23-9-11.
//

#ifndef INC_912QUEUEQUEUE_LIST_H
#define INC_912QUEUEQUEUE_LIST_H

#include "../../list/include/list.h"

template <typename T>
class QueueList: public List<T> {
public:
    void enqueue(T const& e) {this->insertAsFirst(e);}
    T dequeue() {return this->remove(this->last());}
    T& front() {return this->last()->data;}
    T& last() {return this->first()->data;}
};

#endif //INC_912QUEUEQUEUE_LIST_H
