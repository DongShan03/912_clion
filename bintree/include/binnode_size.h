//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_SIZE_H
#define INC_912BINTREE_BINNODE_SIZE_H

template <typename T> Rank BinNode<T>::size() { //统计当前节点后代总数，即以其为根的子树规模
   Rank s = 1; //计入本身
   if ( lc ) s += lc->size(); //递归计入左子树规模
   if ( rc ) s += rc->size(); //递归计入右子树规模
   return s;
}
#endif //INC_912BINTREE_BINNODE_SIZE_H
