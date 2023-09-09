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

template <typename T>
struct Decrease{ //��������ͨ�����ز�����"()"ʵ��
            virtual void operator()(T& e) {e--;}
        };

template <typename T>
void decrease(Vector<T>& V) {
    V.traverse(Decrease<T>());   //��������һ
}

#endif //INC_912VECTOR_VECTOR_INCREASE_H
