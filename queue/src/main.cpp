//
// Created by huang on 23-9-11.
//

#include "../include/queue_implementation.h"
int main(){
    QueueList<int> q;
    for (int i = 1; i < 10; i++){
        q.enqueue(i);
    }
    std::cout << q.last() << "\n";

    return 0;
}