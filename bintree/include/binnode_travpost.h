//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_TRAVPOST_H
#define INC_912BINTREE_BINNODE_TRAVPOST_H

template <typename T>
static void gotoLeftmostLeaf(StackVector<BinNodePosi<T>>& S)
{
    while (BinNodePosi<T> x = S.top()) {
        if (HasLChild(*x)) {
            if (HasRChild(*x))
                S.push(x->rc);
            S.push(x->lc);
        }
        else {
            S.push(x->rc);
        }
    }
    S.pop();
}

template <typename T, typename VST>
void travPost_I1(BinNodePosi<T> x, VST& visit) {
    StackVector<BinNodePosi<T>> S;
    if (x) S.push(x);
    while (!S.empty()) {
        if (S.top() != x->parent) {
            gotoLeftmostLeaf(S);
        }
        x = S.pop();
        visit(x->data);
    }
}

template <typename T> template <typename VST>  //µü´ú°æ
void BinNode<T>::travPost(VST& visit) {
    travPost_I1(this, visit);
}
#endif //INC_912BINTREE_BINNODE_TRAVPOST_H
