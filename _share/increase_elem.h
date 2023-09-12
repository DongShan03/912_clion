//
// Created by huang on 2023/9/12.
//

#ifndef INC_912_CLION_INCREASE_ELEM_H
#define INC_912_CLION_INCREASE_ELEM_H

template <typename T> struct Increase //函数对象：递增一个T类对象
   { virtual void operator()( T& e ) { e++; } }; //假设T可直接递增或已重载++

#endif //INC_912_CLION_INCREASE_ELEM_H
