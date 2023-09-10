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
    Rank last = lo;                                 //最右侧的逆序对初始化为[lo - 1, lo]
    while (++lo < hi) {
        if (_elem[lo - 1] > _elem[lo] ) {
            swap(_elem[lo - 1], _elem[lo]);
            last = lo;
        }
    }
    return last;                                    //返回最右侧的逆序对的位置，达到hi跳跃的目的
}


//template <typename T> //向量的起泡排序（基本版）
//void Vector<T>::bubbleSort( Rank lo, Rank hi ) { //assert: 0 <= lo < hi <= size
//   while( lo < --hi ) //反复起泡扫描
//      for( Rank i = lo; i < hi; i++ ) //逐个检查相邻元素
//         if( _elem[i] > _elem[i + 1] ) //若逆序，则
//            swap( _elem[i], _elem[i + 1] ); //经交换使局部有序
//}

#endif //INC_912VECTOR_VECTOR_BUBBLESORT_H
