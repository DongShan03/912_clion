//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_TRAVPRE_H
#define INC_912BINTREE_BINNODE_TRAVPRE_H

//template <typename T> template <typename VST>  //递归版
//void BinNode<T>::travPre(BinNodePosi<T> x, VST& visit) {
//    if (!x) return ;
//    visit(x->data);
//    travPre(x->lc, visit);
//    travPre(x->rc, visit);
//}

template <typename T, typename VST>  //迭代版
void travPre_I1(BinNodePosi<T> x, VST& visit) {
    StackVector<BinNodePosi<T>> S;
    if(x) S.push(x);
    while(!S.empty()) {
        x = S.pop(); visit(x->data);
        if(HasRChild(*x)) S.push(x->rc);   //先压入右孩子使其访问后于左孩子
        if(HasLChild(*x)) S.push(x->lc);
    }
}


template <typename T> template <typename VST>  //迭代版
void BinNode<T>::travPre(VST& visit) {
    travPre_I1(this, visit);
}

#endif //INC_912BINTREE_BINNODE_TRAVPRE_H
