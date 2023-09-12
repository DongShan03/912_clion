//
// Created by huang on 2023/9/11.
//


#include "../include/bintree.h"


int main() {
    visitData<int> visitor;
    BinNode<int>* root = new BinNode<int>(1);
    root->lc = new BinNode<int>(2);
    root->rc = new BinNode<int>(3);
    root->lc->lc = new BinNode<int>(4);
    root->lc->rc = new BinNode<int>(5);

    root->travPre(visitor);
    return 0;
}