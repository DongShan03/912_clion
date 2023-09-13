//
// Created by huang on 2023/9/13.
//

#ifndef INC_912GRAPH_GRAPH_STORT_H
#define INC_912GRAPH_GRAPH_STORT_H


template <typename Tv, typename Te> //����DFS�����������㷨
StackVector<Tv>* Graph<Tv, Te>::tSort( Rank s ) { // assert: 0 <= s < n
   reset(); Rank clock = 0; //ȫͼ��λ
   StackVector<Tv>* S = new StackVector<Tv>; //��ջ��¼���򶥵�
   for ( Rank v = s; v < s + n; v++ ) //��s��˳�μ�����ж���
      if ( UNDISCOVERED == status( v % n ) ) //һ��������δ������
         if ( !TSort( v, clock, S ) ) { //��������������һ��TSort
            while ( !S->empty() ) //��һ��ͨ���༴��ͼ����DAG
               S->pop();
            break; //�򲻱ؼ������㣬��ֱ�ӷ���
         }
   return S; //������ΪDAG����S�ڸ������Զ�������򣻷��򣨲������������򣩣�S��
} //��˿���������ȫͼ�������帴�Ӷ���Ȼ����ΪO(n+e)

template <typename Tv, typename Te> //����DFS�����������㷨�����ˣ�
bool Graph<Tv, Te>::TSort( Rank v, Rank& clock, StackVector<Tv>* S ) { // v < n
   dTime( v ) = ++clock; status( v ) = DISCOVERED; //���ֶ���v
   for ( Rank u = firstNbr( v ); - 1 != u; u = nextNbr( v, u ) ) //ö��v�������ھ�u
      switch ( status( u ) ) { //����u��״̬�ֱ���
         case UNDISCOVERED :
            parent( u ) = v; type( v, u ) = TREE;
            if ( !TSort( u, clock, S ) ) //�Ӷ���u��������������
               return false; //��u��������������������ȫͼ�����ˣ����ʷ��ز�����
            break;
         case DISCOVERED :
            type( v, u ) = BACKWARD; //һ�����ֺ���ߣ���DAG������
            return false; //�������룬�ʷ��ز�����
         default : // VISITED (digraphs only)
            type( v, u ) = ( dTime( v ) < dTime( u ) ) ? FORWARD : CROSS;
            break;
      }
   status( v ) = VISITED; S->push( vertex( v ) ); //���㱻���ΪVISITEDʱ���漴��ջ
   return true; // v������������������
}

#endif //INC_912GRAPH_GRAPH_STORT_H