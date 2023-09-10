//
// Created by huang on 2023/9/10.
//
/******************************************************************************************
 * ����λͼ
 ******************************************************************************************/
#include "../include/bitmap.h"


#define max(a, b) ((a > b) ? (a) : (b))
int testBitmap( int n, int t ) {
   bool* B = new bool[n]; //����λͼ
   Bitmap M ( n ); //��Чλͼ
   while ( t-- > 0 ) { //�ظ�ʹ��λͼ���
      memset ( B, 0, n * sizeof ( bool ) ); //��λ���㣬O(n)
//      M.reset(); //�߼����㣬O(1)
      for ( int i = 0; i < 3 * n; i++ ) { //������
         Rank k = dice ( n ); //�����λ����
         if ( dice ( 2 ) ) { //��50%�ĸ��ʲ���
            B[k] = true; M.set ( k );
         } else { //��50%�ĸ������
            B[k] = false; M.clear ( k );
         }
      }
      //M.set( 29 ); //��ʱ�������������Է�����Ա����Գ���
      int k;
      for ( k = 0; k < n; k++ ) //��λ�ضԱ�
         if ( B[k] != M.test ( k ) ) //һ�����ֲ���
            break; //�漴�˳�
      if ( k < n ) { //�����棨assert:: k == n+1��
         printf ( "\n B[]: " );
         for ( int j = 0; j <= k; j++ ) printf ( "%6c", B[j] ? 'x' : ' ' );
         printf ( "\n M[]: " );
         for ( int j = 0; j <= k; j++ ) printf ( "%6c", M.test ( j ) ? 'x' : ' ' );
         printf ( "\n" );
      } else
         printf( "Test %4d OK\n", t );
   }
   delete [] B;
   return 0;
}

/******************************************************************************************
 * ����λͼ
 ******************************************************************************************/
int main( int argc, char* argv[] ) {
   return testBitmap( max(0, 100), max(0, 20)); //��������
}