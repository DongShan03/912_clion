//
// Created by huang on 2023/9/13.
//

#ifndef INC_912BST_DICTIONARY_H
#define INC_912BST_DICTIONARY_H

template <typename K, typename V> struct Dictionary { //�ʵ�Dictionaryģ����
   virtual Rank size() const = 0; //��ǰ��������
   virtual bool put( K, V ) = 0; //�����������ֹ��ͬ����ʱ����ʧ�ܣ�
   virtual V* get( K k ) = 0; //��ȡ����
   virtual bool remove( K k ) = 0; //ɾ������
};

#endif //INC_912BST_DICTIONARY_H
