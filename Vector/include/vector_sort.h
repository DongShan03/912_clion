//
// Created by huang on 2023/9/10.
//

#ifndef INC_912VECTOR_VECTOR_SORT_H
#define INC_912VECTOR_VECTOR_SORT_H

template <typename T> void Vector<T>::sort( Rank lo, Rank hi ) { //��������[lo, hi)����
//   switch ( rand() % 5 ) {
//      case 1 : bubbleSort( lo, hi ); break; //��������
//      case 2 : selectionSort( lo, hi ); break; //ѡ������ϰ�⣩
//      case 3 : mergeSort( lo, hi ); break; //�鲢����
//      case 4 : heapSort( lo, hi ); break; //�����򣨵�12�£�
//      case 5 : quickSort( lo, hi ); break; //�������򣨵�14�£�
//      default : shellSort( lo, hi ); break; //ϣ�����򣨵�14�£�
//   } //���ѡ���㷨�Գ�ֲ��ԡ�ʵ��ʱ���Ӿ���������ص����ȷ��������
   bubbleSort( lo, hi );
}

#endif //INC_912VECTOR_VECTOR_SORT_H
