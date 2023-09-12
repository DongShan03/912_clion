//
// Created by huang on 2023/9/12.
//

#ifndef INC_912HUFFMAN_HUFFCHAR_H
#define INC_912HUFFMAN_HUFFCHAR_H

#define N_CHAR (0x80 - 0x20)
struct HuffChar {
    char ch;   unsigned int weight;
    HuffChar(char c = '^', unsigned int w = 0) : ch(c), weight(w) {};

    bool operator < (HuffChar const& hc) {return weight > hc.weight;}  //�˴���С�ߵ�
    bool operator == (HuffChar const& hc) {return weight == hc.weight;}
};


#endif //INC_912HUFFMAN_HUFFCHAR_H
