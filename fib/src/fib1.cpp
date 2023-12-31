//
// Created by huang on 2023/9/9.
//
long long fib ( int n ) { //计算Fibonacci数列的第n项（二分递归版）：O(2^n)
   return ( 2 > n ) ?
          ( long long ) n //若到达递归基，直接取值
          : fib ( n - 1 ) + fib ( n - 2 ); //否则，递归计算前两项，其和即为正解
}