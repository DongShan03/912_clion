//
// Created by huang on 2023/9/10.
//

#ifndef INC_912LIST_LIST_DEDUP_H
#define INC_912LIST_LIST_DEDUP_H

template <typename T>
Rank List<T>::dedup() {
    if (_size < 2) return 0; //ƽ�����
    Rank oldSize = _size;       //��¼ԭ��ģ
    ListNodePosi<T> p = first();    Rank r = 1; //��1��ʼ����
    while( trailer != (p = p->succ)) {
        ListNodePosi<T> q = find(p->data, r, p); //��ǰr���ڵ������
        q ? remove(q) : r++;            //���ҵ���ɾ���ýڵ�,�����Ҳ�����ǰ׺��һ
    }
    return oldSize - _size;
}

#endif //INC_912LIST_LIST_DEDUP_H
