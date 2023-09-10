//
// Created by huang on 2023/9/9.
//
#include<ctime>
#include<iostream>
using namespace std;

#include "../include/fib.h"

long long fibI ( int n ); //������
long long  fib ( int n ); //���ֵݹ��
long long  fib ( int n, long long& f ); //���Եݹ��

int main ( int argc, char* argv[] ) { //����FIB
// ������
//   if ( 2 > argc ) { fprintf ( stderr, "Usage: %s <Rank>\n", argv[0] ); return 1; }
//   int n = atoi ( argv[1] );
// ���μ���Fibonacci���и���
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