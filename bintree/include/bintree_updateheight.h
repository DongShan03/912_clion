//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINTREE_UPDATEHEIGHT_H
#define INC_912BINTREE_BINTREE_UPDATEHEIGHT_H

template <typename T> Rank BinTree<T>::updateHeight( BinNodePosi<T> x ) //更新节点x高度
   { return x->height = 1 + ((stature( x->lc ) > stature( x->rc )) ? stature( x->lc ) : stature( x->rc )); } //具体规则，因树而异

template <typename T> void BinTree<T>::updateHeightAbove( BinNodePosi<T> x ) //更新高度
   { while ( x ) { updateHeight( x ); x = x->parent; } } //从x出发，覆盖历代祖先。可优化

#endif //INC_912BINTREE_BINTREE_UPDATEHEIGHT_H
