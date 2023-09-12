//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_H
#define INC_912BINTREE_BINNODE_H

#include <cstddef>
#include <assert.h>
using Rank = unsigned int;

#if defined( DSA_REDBLACK ) //�ں������
#define stature( p ) ( ( p ) ? ( p )->height : 0 ) //�ⲿ�ڵ㣨�ڣ��߶�Ϊ0�����ϵ���
#else //����BST��
#define stature( p ) ( (int)( ( p ) ? ( p )->height : -1 ) ) //�ⲿ�ڵ�߶�Ϊ-1�����ϵ���
#endif

typedef enum { RB_RED, RB_BLACK} RBColor; //�ڵ���ɫ

template <typename T> struct BinNode;
template <typename T> using BinNodePosi = BinNode<T>*; //�ڵ�λ��

template <typename T> struct BinNode { //�������ڵ�ģ����
// ��Ա��Ϊ���������ͳһ���ţ����߿ɸ�����Ҫ��һ����װ��
   T data; //��ֵ
   BinNodePosi<T> parent, lc, rc; //���ڵ㼰���Һ���
   Rank height; //�߶ȣ�ͨ�ã�
   Rank npl; //Null Path Length����ʽ�ѣ�Ҳ��ֱ����height���棩
   RBColor color; //��ɫ���������
// ���캯��
   BinNode() : parent( NULL ), lc( NULL ), rc( NULL ), height( 0 ), npl( 1 ), color( RB_RED ) {}
   BinNode( T e, BinNodePosi<T> p = NULL, BinNodePosi<T> lc = NULL,
            BinNodePosi<T> rc = NULL, int h = 0, int l = 1, RBColor c = RB_RED )
      : data( e ), parent( p ), lc( lc ), rc( rc ), height( h ), npl( l ), color( c ) {}
// �����ӿ�
   Rank size(); //ͳ�Ƶ�ǰ�ڵ����������༴����Ϊ���������Ĺ�ģ
   BinNodePosi<T> insertAsLC( T const& e); //��Ϊ��ǰ�ڵ�����Ӳ����½ڵ�
   BinNodePosi<T> insertAsRC( T const& e); //��Ϊ��ǰ�ڵ���Һ��Ӳ����½ڵ�
   BinNodePosi<T> succ(); //ȡ��ǰ�ڵ��ֱ�Ӻ��
   BinNodePosi<T> pred(); //ȡ��ǰ�ڵ��ֱ��ǰ��
   template <typename VST> void travLevel(VST& visit); //������α���
   template <typename VST> void travPre(VST& visit); //�����������
   template <typename VST> void travIn(VST& visit); //�����������
   template <typename VST> void travPost(VST& visit); //�����������
// �Ƚ������е�����������һ���������в��䣩
   bool operator< ( BinNode const& bn ) { return data < bn.data; } //С��
   bool operator== ( BinNode const& bn ) { return data == bn.data; } //����
};
#include "binnode_implementation.h"

#endif //INC_912BINTREE_BINNODE_H