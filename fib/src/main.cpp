//
// Created by huang on 2023/9/9.
//
#include<ctime>
#include<iostream>
using namespace std;

#include "../include/fib.h"

long long fibI ( int n ); //迭代版
long long  fib ( int n ); //二分递归版
long long  fib ( int n, long long& f ); //线性递归版

int main ( int argc, char* argv[] ) { //测试FIB
// 检查参数
//   if ( 2 > argc ) { fprintf ( stderr, "Usage: %s <Rank>\n", argv[0] ); return 1; }
//   int n = atoi ( argv[1] );
// 依次计算Fibonacci数列各项
    Rank n = 30;
    printf ( "\n------------- class Fib -------------\n" );
    Fib f ( 0 );
    for ( int i = 0; i < n; i++, f.next() )
       printf ( "fib(%2d) = %d\n", i, f.get() );
    for ( int i = 0; i <= n; i++, f.prev() )
       printf ( "fib(%2d) = %d\n", n - i, f.get() );
    printf ( "\n------------- Iteration -------------\n" );
    for ( int i = 0; i < n; i++ )
       printf ( "fib(%2d) = %22I64d\n", i, fibI ( i ) );
    printf ( "\n------------- Linear Recursion -------------\n" );
    for ( int i = 0; i < n; i++ ) {
       long long f;
       printf ( "fib(%2d) = %22I64d\n", i, fib ( i, f ) );
    }
    printf ( "\n------------- Binary Recursion -------------\n" );
    for ( int i = 0; i < n; i++ )
       printf ( "fib(%2d) = %22I64d\n", i, fib ( i ) );
    return 0;
}