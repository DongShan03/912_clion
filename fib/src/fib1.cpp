//
// Created by huang on 2023/9/9.
//
long long fib ( int n ) { //����Fibonacci���еĵ�n����ֵݹ�棩��O(2^n)
   return ( 2 > n ) ?
          ( long long ) n //������ݹ����ֱ��ȡֵ
          : fib ( n - 1 ) + fib ( n - 2 ); //���򣬵ݹ����ǰ�����ͼ�Ϊ����
}