//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_INIT_H
#define INC_912LIST_LIST_INIT_H

template <typename T>
void List<T>::init() { //�б��ʼ�����ڴ����б����ʱͳһ����
   header = new ListNode<T>; trailer = new ListNode<T>; //����ͷ��β�ڱ��ڵ�
   header->succ = trailer; header->pred = NULL; //��ǰ����
   trailer->pred = header; trailer->succ = NULL; //�������
   _size = 0; //��¼��ģ
}


#endif //INC_912LIST_LIST_INIT_H
