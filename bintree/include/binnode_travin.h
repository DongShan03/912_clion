//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_TRAVIN_H
#define INC_912BINTREE_BINNODE_TRAVIN_H

template <typename T>
static void goAlongLeftBranch(BinNodePosi<T> x, StackVector<BinNodePosi<T>> & S)
{
    while (x) {S.push(x); x = x->lc;}
}

template <typename T, typename VST>
void travIn_I1(BinNodePosi<T> x, VST& visit)
{
    StackVector<BinNodePosi<T>> S;
    while (true) {
        goAlongLeftBranch(x, S);
        if (S.empty()) break;
        x = S.pop();
        visit(x->data);
        x = x->rc;
    }
}

template <typename T> template <typename VST>  //µü´ú°æ
void BinNode<T>::travIn(VST& visit) {
    travIn_I1(this, visit);
}


#endif //INC_912BINTREE_BINNODE_TRAVIN_H
