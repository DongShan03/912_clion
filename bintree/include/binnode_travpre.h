//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_TRAVPRE_H
#define INC_912BINTREE_BINNODE_TRAVPRE_H

//template <typename T> template <typename VST>  //�ݹ��
//void BinNode<T>::travPre(BinNodePosi<T> x, VST& visit) {
//    if (!x) return ;
//    visit(x->data);
//    travPre(x->lc, visit);
//    travPre(x->rc, visit);
//}

template <typename T, typename VST>  //������
void travPre_I1(BinNodePosi<T> x, VST& visit) {
    StackVector<BinNodePosi<T>> S;
    if(x) S.push(x);
    while(!S.empty()) {
        x = S.pop(); visit(x->data);
        if(HasRChild(*x)) S.push(x->rc);   //��ѹ���Һ���ʹ����ʺ�������
        if(HasLChild(*x)) S.push(x->lc);
    }
}

template <typename T, typename VST>
static void visitAlongLeftBranch(BinNodePosi<T> x, VST& visit , StackVector<BinNodePosi<T>> S)
{
    while(x) {
        visit(x->data);
        S.push(x->rc);
        x = x->lc;
    }
}

template <typename T, typename VST>
void travPre_T2(BinNodePosi<T> x, VST& visit) {
    StackVector<BinNodePosi<T>> S;
    while (true) {
        visitAlongLeftBranch(x, visit, S);
        if (S.empty())  break;
        x = S.pop();
    }
}




template <typename T> template <typename VST>  //������
void BinNode<T>::travPre(VST& visit) {
    travPre_I1(this, visit);
}

#endif //INC_912BINTREE_BINNODE_TRAVPRE_H
