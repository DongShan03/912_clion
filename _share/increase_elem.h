//
// Created by huang on 2023/9/12.
//

#ifndef INC_912_CLION_INCREASE_ELEM_H
#define INC_912_CLION_INCREASE_ELEM_H

template <typename T> struct Increase //�������󣺵���һ��T�����
   { virtual void operator()( T& e ) { e++; } }; //����T��ֱ�ӵ�����������++

#endif //INC_912_CLION_INCREASE_ELEM_H
