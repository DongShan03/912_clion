//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_SIZE_H
#define INC_912BINTREE_BINNODE_SIZE_H

template <typename T> Rank BinNode<T>::size() { //ͳ�Ƶ�ǰ�ڵ���������������Ϊ����������ģ
   Rank s = 1; //���뱾��
   if ( lc ) s += lc->size(); //�ݹ������������ģ
   if ( rc ) s += rc->size(); //�ݹ������������ģ
   return s;
}
#endif //INC_912BINTREE_BINNODE_SIZE_H
