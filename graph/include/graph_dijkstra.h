//
// Created by huang on 2023/9/13.
//

#ifndef INC_912GRAPH_GRAPH_DIJKSTRA_H
#define INC_912GRAPH_GRAPH_DIJKSTRA_H

template <typename Tv, typename Te> //���·��Dijkstra�㷨��������һ�������ͼ
void Graph<Tv, Te>::dijkstra( Rank s ) { // s < n
   reset(); priority( s ) = 0;
   for ( Rank i = 0; i < n; i++ ) { //��������n�������n-1����
      status( s ) = VISITED;
      if ( -1 != parent( s ) ) type( parent( s ), s ) = TREE; //���뵱ǰ��s
      for ( Rank j = firstNbr( s ); - 1 != j; j = nextNbr( s, j ) ) //ö��s�������ھ�j
         if ( ( status( j ) == UNDISCOVERED ) && ( priority( j ) > priority( s ) + weight( s, j ) ) ) //���ڽӶ���j���ɳ�
            { priority( j ) = priority( s ) + weight( s, j ); parent( j ) = s; } //��Prim�㷨Ψһ�Ĳ�֮ͬ��
      int shortest = INT_MAX;
      for ( Rank j = 0; j < n; j++ ) //ѡ����һ�������
         if ( ( status( j ) == UNDISCOVERED ) && ( shortest > priority( j ) ) )
            { shortest = priority( j ); s = j; }
   }
} //����������ͨͼ������ÿһ���߱�ʾΪ�����桢Ȩ����ȵ�һ�Ա�

#endif //INC_912GRAPH_GRAPH_DIJKSTRA_H