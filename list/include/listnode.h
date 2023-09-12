//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LISTNODE_H
#define INC_912LISTNODE_H

#include <cstddef>
#include "../../_share/swap.h"
using Rank = unsigned int; //��

template <typename T> struct ListNode;
template <typename T> using ListNodePosi = ListNode<T>*; //�б�ڵ�λ��
template <typename T> struct ListNode { //�б�ڵ�ģ���ࣨ��˫��������ʽʵ�֣�
// ��Ա
   T data; ListNodePosi<T> pred, succ; //��ֵ��ǰ�������
// ���캯��
   ListNode() {} //���header��trailer�Ĺ���
   ListNode ( T e, ListNodePosi<T> p = NULL, ListNodePosi<T> s = NULL )
      : data( e ), pred( p ), succ( s ) {} //Ĭ�Ϲ�����
// �����ӿ�
   ListNodePosi<T> insertAsPred( T const& e ); //������ǰ�ڵ�֮ǰ�����½ڵ�
   ListNodePosi<T> insertAsSucc( T const& e ); //���浱ǰ�ڵ�֮������½ڵ�
};
#include "listnode_implementation.h"
#endif //INC_912LISTNODE_H
