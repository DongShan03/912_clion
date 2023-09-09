//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_VECTOR_INCREASE_H
#define INC_912VECTOR_VECTOR_INCREASE_H

template <typename T>
struct Increase{ //函数对象：通过重载操作符"()"实现
            virtual void operator()(T& e) {e++;}
        };

template <typename T>
void increase(Vector<T>& V) {
    V.traverse(Increase<T>());   //遍历并加一
}

#endif //INC_912VECTOR_VECTOR_INCREASE_H
