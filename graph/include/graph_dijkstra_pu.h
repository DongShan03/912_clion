//
// Created by huang on 2023/9/13.
//

#ifndef INC_912GRAPH_GRAPH_DIJKSTRA_PU_H
#define INC_912GRAPH_GRAPH_DIJKSTRA_PU_H

template <typename Tv, typename Te> struct DijkPU { //针对Dijkstra算法的顶点优先级更新器
   virtual void operator()( Graph<Tv, Te>* g, Rank v, Rank u ) {
      if ( UNDISCOVERED == g->status( u ) ) //对于v每一尚未被发现的邻接顶点u，按Dijkstra策略
         if ( g->priority( u ) > g->priority( v ) + g->weight( v, u ) ) { //做松弛
            g->priority( u ) = g->priority( v ) + g->weight( v, u ); //更新优先级（数）
            g->parent( u ) = v; //并同时更新父节点
         }
   }
};

#endif //INC_912GRAPH_GRAPH_DIJKSTRA_PU_H
