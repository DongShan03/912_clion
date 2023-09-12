//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_PRED_H
#define INC_912BINTREE_BINNODE_PRED_H

template <typename T>
BinNodePosi<T> BinNode<T>::pred() { //定位节点v的直接后继
    BinNodePosi<T> s = this; //记录后继的临时变量
   if ( lc ) { //若有左孩子，则直接后继必在右子树中，具体地就是
      s = lc; //左子树中
      while ( HasRChild( *s ) ) s = s->rc; //最靠右（最大）的节点
   } else { //否则，直接后继应是“将当前节点包含于其右子树中的最低祖先”，具体地就是
      while ( IsLChild( *s ) ) s = s->parent; //逆向地沿左向分支，不断朝右上方移动
      s = s->parent; //最后再朝左上方移动一步，即抵达直接后继（如果存在）
   }
   return s;
}

#endif //INC_912BINTREE_BINNODE_PRED_H
