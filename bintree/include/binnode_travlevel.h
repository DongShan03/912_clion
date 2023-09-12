//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_TRAVLEVEL_H
#define INC_912BINTREE_BINNODE_TRAVLEVEL_H

template <typename T> template <typename VST>
void BinNode<T>::travLevel(VST & visit)  {
    QueueList<BinNodePosi<T>> Q;
    Q.enqueue(this);
    while (!Q.isEmpty()) {
        BinNodePosi<T> x = Q.dequeue();
        visit(x->data);
        if (HasLChild(*x)) Q.enqueue(x->lc);
        if (HasRChild(*x)) Q.enqueue(x->rc);
    }
}

#endif //INC_912BINTREE_BINNODE_TRAVLEVEL_H
