//
// Created by huang on 2023/9/13.
//

#ifndef INC_912GRAPH_GRAPH_BCC_H
#define INC_912GRAPH_GRAPH_BCC_H


template <typename Tv, typename Te> void Graph<Tv, Te>::bcc( Rank s ) { //����DFS��BCC�ֽ��㷨
   reset(); Rank clock = 0; Rank v = s; StackVector<Rank> S; //ջS���Լ�¼�ѷ��ʵĶ���
   do
      if ( UNDISCOVERED == status( v ) ) { //һ������δ���ֵĶ��㣨����ͨ������
         BCC( v, clock, S ); //���Ӹö����������һ��BCC
         S.pop(); //�������غ󣬵���ջ�����һ�����㡪����ǰ��ͨ������
      }
   while ( s != ( v = ( ++v % n ) ) );
}
#define hca(x) (fTime(x)) //���ô˴����õ�fTime[]�䵱hca[]
template <typename Tv, typename Te> //�������͡�������
void Graph<Tv, Te>::BCC( Rank v, Rank& clock, StackVector<Rank>& S ) { // assert: 0 <= v < n
   hca( v ) = dTime( v ) = ++clock; status( v ) = DISCOVERED; S.push( v ); // v�����ֲ���ջ
   for ( int u = firstNbr( v ); - 1 != u; u = nextNbr( v, u ) ) //ö��v�������ھ�u
      switch ( status( u ) ) { //����u��״̬�ֱ���
         case UNDISCOVERED:
            parent( u ) = v; type( v, u ) = TREE; BCC( u, clock, S ); //�Ӷ���u������
            if ( hca( u ) < dTime( v ) ) //�������غ�������u��ͨ������ߣ���ָ��v��������
               hca( v ) = min( hca( v ), hca( u ) ); //��v������
            else //������vΪ�ؽڵ㣨u���¼���һ��BCC�������ж����ʱ��������ջS�Ķ�����
               while ( u != S.pop() ); //������ǰBCC�У���v�⣩�����нڵ㣬������Ҫ����һ������
            break;
         case DISCOVERED:
            type( v, u ) = BACKWARD; //���(v, u)�������ա�ԽСԽ�ߡ���׼��
            if ( u != parent( v ) ) hca( v ) = min( hca( v ), dTime( u ) ); //����hca[v]
            break;
         default: //VISITED (digraphs only)
            type( v, u ) = ( dTime( v ) < dTime( u ) ) ? FORWARD : CROSS;
            break;
      }
   status( v ) = VISITED; //��v�ķ��ʽ���
}
#undef hca

#endif //INC_912GRAPH_GRAPH_BCC_H