//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_TRAVERSE_H
#define INC_912BINTREE_BINNODE_TRAVERSE_H


template <typename T>
struct visitData{ //��������ͨ�����ز�����"()"ʵ��
            virtual void operator()(T& e) {std::cout << e << "\t";}
        };

//template <typename T>
//void traverse(BinTree<T>& S) {
//    S.travPre(visitData<T>());   //��������һ
//}

#endif //INC_912BINTREE_BINNODE_TRAVERSE_H
