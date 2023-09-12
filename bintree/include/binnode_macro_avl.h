//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_MACRO_AVL_H
#define INC_912BINTREE_BINNODE_MACRO_AVL_H

#define Balanced( x ) ( stature( ( x ).lc ) == stature( ( x ).rc ) ) //理想平衡条件
#define BalFac( x ) ( stature( ( x ).lc ) - stature( ( x ).rc ) ) //平衡因子
#define AvlBalanced( x ) ( ( -2 < BalFac( x ) ) && ( BalFac( x ) < 2 ) ) // AVL平衡条件

#endif //INC_912BINTREE_BINNODE_MACRO_AVL_H
