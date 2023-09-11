//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_PERMUTE_H
#define INC_912VECTOR_PERMUTE_H



template <typename T>
void permute ( Vector<T>& V ) { //�������������ʹ��Ԫ�صȸ��ʳ����ڸ�λ��
   for ( int i = V.size(); i > 0; i-- ) //�Ժ���ǰ
       swap( V[i - 1], V[rand() % i] ); //V[i - 1]��V[0, i)��ĳһ���Ԫ�ؽ���
}

#endif //INC_912VECTOR_PERMUTE_H
