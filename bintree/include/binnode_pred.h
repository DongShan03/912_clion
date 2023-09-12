//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_PRED_H
#define INC_912BINTREE_BINNODE_PRED_H

template <typename T>
BinNodePosi<T> BinNode<T>::pred() { //��λ�ڵ�v��ֱ�Ӻ��
    BinNodePosi<T> s = this; //��¼��̵���ʱ����
   if ( lc ) { //�������ӣ���ֱ�Ӻ�̱����������У�����ؾ���
      s = lc; //��������
      while ( HasRChild( *s ) ) s = s->rc; //��ң���󣩵Ľڵ�
   } else { //����ֱ�Ӻ��Ӧ�ǡ�����ǰ�ڵ���������������е�������ȡ�������ؾ���
      while ( IsLChild( *s ) ) s = s->parent; //������������֧�����ϳ����Ϸ��ƶ�
      s = s->parent; //����ٳ����Ϸ��ƶ�һ�������ִ�ֱ�Ӻ�̣�������ڣ�
   }
   return s;
}

#endif //INC_912BINTREE_BINNODE_PRED_H
