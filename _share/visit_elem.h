//
// Created by huang on 2023/9/12.
//

#ifndef INC_912_CLION_VISIT_ELEM_H
#define INC_912_CLION_VISIT_ELEM_H

#include <iostream>

template <typename T> struct visitData //�������󣺵���һ��T�����
   {
    virtual void operator()( T& e ) { std::cout << e << "\t"; }
   }; //����T��ֱ�ӵ�����������++

#endif //INC_912_CLION_VISIT_ELEM_H
