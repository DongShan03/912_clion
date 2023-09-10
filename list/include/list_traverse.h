//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_TRAVERSE_H
#define INC_912LIST_LIST_TRAVERSE_H

//利用函数指针机制进行访问，只读或局部性修改
template <typename T>
void List<T>::traverse(void (*visit)(T &))
{
    for (ListNodePosi<T> p = header->succ; p != trailer; p = p->succ)
        visit(p);
}

//利用函数对象机制，可全局性修改
template <typename T> template <typename VST>
void List<T>::traverse(VST &visit)
{
    for (ListNodePosi<T> p = header->succ; p != trailer; p = p->succ)
        visit(p);
}


#endif //INC_912LIST_LIST_TRAVERSE_H
