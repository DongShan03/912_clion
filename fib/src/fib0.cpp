//
// Created by huang on 2023/9/9.
//
long long fibI ( int n ) { //����Fibonacci���еĵ�n������棩��O(n)
   long long f = 1, g = 0; //��ʼ����fib(-1)��fib(0)
   while ( 0 < n-- ) { g += f; f = g - f; } //����ԭʼ���壬ͨ��n�μӷ��ͼ�������fib(n)
   return g; //����
}
