//
// Created by huang on 2023/9/9.
//
long long fib ( int n, long long& prev ) { //����Fibonacci���е�n����Եݹ�棩�������ʽfib(n, prev)
   if ( 0 == n ) //������ݹ������
      { prev = 1; return 0; } //ֱ��ȡֵ��fib(-1) = 1, fib(0) = 0
   else { //����
      long long prevPrev; prev = fib ( n - 1, prevPrev ); //�ݹ����ǰ����
      return prevPrev + prev; //��ͼ�Ϊ����
   }
} //�ø���������¼ǰһ��������еĵ�ǰ�O(n)