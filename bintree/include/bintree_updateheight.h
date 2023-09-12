//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINTREE_UPDATEHEIGHT_H
#define INC_912BINTREE_BINTREE_UPDATEHEIGHT_H

template <typename T> Rank BinTree<T>::updateHeight( BinNodePosi<T> x ) //���½ڵ�x�߶�
   { return x->height = 1 + ((stature( x->lc ) > stature( x->rc )) ? stature( x->lc ) : stature( x->rc )); } //���������������

template <typename T> void BinTree<T>::updateHeightAbove( BinNodePosi<T> x ) //���¸߶�
   { while ( x ) { updateHeight( x ); x = x->parent; } } //��x�����������������ȡ����Ż�

#endif //INC_912BINTREE_BINTREE_UPDATEHEIGHT_H
