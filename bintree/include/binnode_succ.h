//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_SUCC_H
#define INC_912BINTREE_BINNODE_SUCC_H

template <typename T> BinNodePosi<T> BinNode<T>::succ() { //��λ�ڵ�v��ֱ�Ӻ��
   BinNodePosi<T> s = this; //��¼��̵���ʱ����
   if ( rc ) { //�����Һ��ӣ���ֱ�Ӻ�̱����������У�����ؾ���
      s = rc; //��������
      while ( HasLChild( *s ) ) s = s->lc; //�����С���Ľڵ�
   } else { //����ֱ�Ӻ��Ӧ�ǡ�����ǰ�ڵ���������������е�������ȡ�������ؾ���
      while ( IsRChild( *s ) ) s = s->parent; //������������֧�����ϳ����Ϸ��ƶ�
      s = s->parent; //����ٳ����Ϸ��ƶ�һ�������ִ�ֱ�Ӻ�̣�������ڣ�
   }
   return s;
}

#endif //INC_912BINTREE_BINNODE_SUCC_H
