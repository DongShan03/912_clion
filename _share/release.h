//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_RELEASE_H
#define INC_912BINTREE_RELEASE_H


#include <typeinfo>

/******************************************************************************************
* �б��������Ƚṹ�ڵĽڵ��У����Դ�Ż������ͻ�������
* ���ձ���Լ��������Ч�ʵĿ��ǣ����ں�һ���ͨ��ֻ��������ָ��
* ��ˣ�������ṹ����֮ǰ����Ҫ�����ͷ���Щ��Ա������ռ�Ŀռ�
* �˴�������C++��ƫ�ػ����������������������������Ӧ����
******************************************************************************************/
template <typename T> struct Cleaner {
static void clean( T x ) { //�൱�ڵݹ��
#ifdef _DEBUG
   static int n = 0;
   if ( 7 > strlen( typeid( T ).name() ) ) { //��������һ�ź��ԣ�ֻ�����������
      printf( "\t<%s>[%d]=", typeid( T ).name(), ++n );
      print( x );
      printf( " purged\n" );
   }
#endif
}
};

template <typename T> struct Cleaner<T*> {
static void clean( T* x ) {
   if ( x ) { delete x; } //������а���ָ�룬�ݹ��ͷ�
#ifdef _DEBUG
   static int n = 0;
   printf( "\t<%s>[%d] released\n", typeid( T* ).name(), ++n );
#endif
}
};

template <typename T> void release( T x ) { Cleaner<T>::clean( x ); }

#endif //INC_912BINTREE_RELEASE_H