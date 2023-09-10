//
// Created by huang on 2023/9/10.
//
/******************************************************************************************
 * 测试位图
 ******************************************************************************************/
#include "../include/bitmap.h"


#define max(a, b) ((a > b) ? (a) : (b))
int testBitmap( int n, int t ) {
   bool* B = new bool[n]; //常规位图
   Bitmap M ( n ); //高效位图
   while ( t-- > 0 ) { //重复使用位图多次
      memset ( B, 0, n * sizeof ( bool ) ); //逐位清零，O(n)
//      M.reset(); //逻辑清零，O(1)
      for ( int i = 0; i < 3 * n; i++ ) { //反复地
         Rank k = dice ( n ); //在随机位置上
         if ( dice ( 2 ) ) { //以50%的概率插入
            B[k] = true; M.set ( k );
         } else { //或50%的概率清除
            B[k] = false; M.clear ( k );
         }
      }
      //M.set( 29 ); //有时可卖个破绽，以反向测试本测试程序
      int k;
      for ( k = 0; k < n; k++ ) //逐位地对比
         if ( B[k] != M.test ( k ) ) //一旦发现不合
            break; //随即退出
      if ( k < n ) { //并报告（assert:: k == n+1）
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
 * 测试位图
 ******************************************************************************************/
int main( int argc, char* argv[] ) {
   return testBitmap( max(0, 100), max(0, 20)); //启动测试
}