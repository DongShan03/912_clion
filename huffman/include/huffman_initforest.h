//
// Created by huang on 2023/9/12.
//

#ifndef INC_912HUFFMAN_HUFFMAN_INITFOREST_H
#define INC_912HUFFMAN_HUFFMAN_INITFOREST_H

HuffForest* initForest ( int* freq ) { //����Ƶ��ͳ�Ʊ�Ϊÿ���ַ�����һ����
   HuffForest* forest = new HuffForest; //��Listʵ�ֵ�Huffmanɭ��
   for ( int i = 0; i < N_CHAR; i++ ) { //Ϊÿ���ַ�
      forest->insertAsLast ( new HuffTree ); //����һ�����������ַ�����Ƶ��
      forest->last()->data->insert ( HuffChar ( 0x20 + i, freq[i] ) ); //��������
   }
   return forest;
}

#endif //INC_912HUFFMAN_HUFFMAN_INITFOREST_H
