//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_INCREASE_H
#define INC_912VECTOR_VECTOR_INCREASE_H

template <typename T>
struct Increase{ //��������ͨ�����ز�����"()"ʵ��
            virtual void operator()(T& e) {e++;}
        };

template <typename T>
void increase(Vector<T>& V) {
    V.traverse(Increase<T>());   //��������һ
}

#endif //INC_912VECTOR_VECTOR_INCREASE_H
