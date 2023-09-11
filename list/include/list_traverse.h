//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_TRAVERSE_H
#define INC_912LIST_LIST_TRAVERSE_H

//���ú���ָ����ƽ��з��ʣ�ֻ����ֲ����޸�
template <typename T>
void List<T>::traverse(void (*visit)(T &))
{
    for (ListNodePosi<T> p = header->succ; p != trailer; p = p->succ)
        visit(p);
}

//���ú���������ƣ���ȫ�����޸�
template <typename T> template <typename VST>
void List<T>::traverse(VST &visit)
{
    for (ListNodePosi<T> p = header->succ; p != trailer; p = p->succ)
        visit(p);
}


#endif //INC_912LIST_LIST_TRAVERSE_H
