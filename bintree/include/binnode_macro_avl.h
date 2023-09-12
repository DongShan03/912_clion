//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_MACRO_AVL_H
#define INC_912BINTREE_BINNODE_MACRO_AVL_H

#define Balanced( x ) ( stature( ( x ).lc ) == stature( ( x ).rc ) ) //����ƽ������
#define BalFac( x ) ( stature( ( x ).lc ) - stature( ( x ).rc ) ) //ƽ������
#define AvlBalanced( x ) ( ( -2 < BalFac( x ) ) && ( BalFac( x ) < 2 ) ) // AVLƽ������

#endif //INC_912BINTREE_BINNODE_MACRO_AVL_H
