//
// Created by huang on 2023/9/13.
//

#ifndef INC_912GRAPH_GRAPH_DIJKSTRA_PU_H
#define INC_912GRAPH_GRAPH_DIJKSTRA_PU_H

template <typename Tv, typename Te> struct DijkPU { //���Dijkstra�㷨�Ķ������ȼ�������
   virtual void operator()( Graph<Tv, Te>* g, Rank v, Rank u ) {
      if ( UNDISCOVERED == g->status( u ) ) //����vÿһ��δ�����ֵ��ڽӶ���u����Dijkstra����
         if ( g->priority( u ) > g->priority( v ) + g->weight( v, u ) ) { //���ɳ�
            g->priority( u ) = g->priority( v ) + g->weight( v, u ); //�������ȼ�������
            g->parent( u ) = v; //��ͬʱ���¸��ڵ�
         }
   }
};

#endif //INC_912GRAPH_GRAPH_DIJKSTRA_PU_H
