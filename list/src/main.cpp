//
// Created by huang on 2023/9/10.
//

#include "../include/list.h"

int main() {
    List<int> x;
    for (int i = 0; i < 10; i++) {
        x.insertAsFirst(i);
    }
    x.sort();
    ListNodePosi<int> head = x.first()->pred;
    for (int i = 0; i < 10; i++) {
        std::cout << (head = head->succ)->data << "\t";
    }
    return 0;
}