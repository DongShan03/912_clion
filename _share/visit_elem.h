//
// Created by huang on 2023/9/12.
//

#ifndef INC_912_CLION_VISIT_ELEM_H
#define INC_912_CLION_VISIT_ELEM_H

#include <iostream>

template <typename T> struct visitData //函数对象：递增一个T类对象
   {
    virtual void operator()( T& e ) { std::cout << e << "\t"; }
   }; //假设T可直接递增或已重载++

#endif //INC_912_CLION_VISIT_ELEM_H
