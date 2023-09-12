//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_TRAVERSE_H
#define INC_912BINTREE_BINNODE_TRAVERSE_H


template <typename T>
struct visitData{ //函数对象：通过重载操作符"()"实现
            virtual void operator()(T& e) {std::cout << e << "\t";}
        };

//template <typename T>
//void traverse(BinTree<T>& S) {
//    S.travPre(visitData<T>());   //遍历并加一
//}

#endif //INC_912BINTREE_BINNODE_TRAVERSE_H
