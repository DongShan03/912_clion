//
// Created by huang on 2023/9/13.
//

#ifndef INC_912GRAPH_GRAPH_BFS_PU_H
#define INC_912GRAPH_GRAPH_BFS_PU_H

template <typename Tv, typename Te> struct BfsPU { //���BFS�㷨�Ķ������ȼ�������
   virtual void operator()( Graph<Tv, Te>* g, int uk, int v ) {
      if ( g->status( v ) == UNDISCOVERED ) //����ukÿһ��δ�����ֵ��ڽӶ���v
         if ( g->priority( v ) > g->priority( uk ) + 1 ) { //���䵽���ľ�����Ϊ���ȼ���
            g->priority( v ) = g->priority( uk ) + 1; //�������ȼ�������
            g->parent( v ) = uk; //���¸��ڵ�
         } //���Ч����ͬ�ڣ��ȱ�����������
   }
};

#endif //INC_912GRAPH_GRAPH_BFS_PU_H
