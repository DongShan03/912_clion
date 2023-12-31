//
// Created by huang on 2023/9/13.
//

#ifndef INC_912GRAPH_GRAPH_BFS_PU_H
#define INC_912GRAPH_GRAPH_BFS_PU_H

template <typename Tv, typename Te> struct BfsPU { //针对BFS算法的顶点优先级更新器
   virtual void operator()( Graph<Tv, Te>* g, int uk, int v ) {
      if ( g->status( v ) == UNDISCOVERED ) //对于uk每一尚未被发现的邻接顶点v
         if ( g->priority( v ) > g->priority( uk ) + 1 ) { //将其到起点的距离作为优先级数
            g->priority( v ) = g->priority( uk ) + 1; //更新优先级（数）
            g->parent( v ) = uk; //更新父节点
         } //如此效果等同于，先被发现者优先
   }
};

#endif //INC_912GRAPH_GRAPH_BFS_PU_H
