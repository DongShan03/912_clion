//
// Created by huang on 2023/9/10.
//

#ifndef INC_912VECTOR_VECTOR_BUBBLESORT_H
#define INC_912VECTOR_VECTOR_BUBBLESORT_H

template <typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi) {
    assert(0 <= lo); assert(lo < hi); assert(hi <= size());
    while (lo < (hi = bubble(lo, hi)));
}

template <typename T>
Rank Vector<T>::bubble(Rank lo, Rank hi) {
    Rank last = lo;                                 //���Ҳ������Գ�ʼ��Ϊ[lo - 1, lo]
    while (++lo < hi) {
        if (_elem[lo - 1] > _elem[lo] ) {
            swap(_elem[lo - 1], _elem[lo]);
            last = lo;
        }
    }
    return last;                                    //�������Ҳ������Ե�λ�ã��ﵽhi��Ծ��Ŀ��
}


//template <typename T> //�������������򣨻����棩
//void Vector<T>::bubbleSort( Rank lo, Rank hi ) { //assert: 0 <= lo < hi <= size
//   while( lo < --hi ) //��������ɨ��
//      for( Rank i = lo; i < hi; i++ ) //����������Ԫ��
//         if( _elem[i] > _elem[i + 1] ) //��������
//            swap( _elem[i], _elem[i + 1] ); //������ʹ�ֲ�����
//}

#endif //INC_912VECTOR_VECTOR_BUBBLESORT_H
