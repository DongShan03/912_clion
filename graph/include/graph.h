//
// Created by huang on 2023/9/12.
//

#ifndef INC_912_CLION_GRAPH_H
#define INC_912_CLION_GRAPH_H

#include <limits.h>
#include "../../stack/include/stack_vector.h"
using Rank = unsigned int;
using VStatus = enum { UNDISCOVERED, DISCOVERED, VISITED }; //����״̬
using EType = enum { UNDETERMINED, TREE, CROSS, FORWARD, BACKWARD }; //���ڱ�����������������

template <typename Tv, typename Te> //�������͡�������
class Graph { //ͼGraphģ����
private:
    void reset() { //���ж��㡢�ߵĸ�����Ϣ��λ
        for (Rank v = 0; v < n; v++) { //���ж����
            status(v) = UNDISCOVERED;
            dTime(v) = fTime(v) = -1; //״̬��ʱ���ǩ
            parent(v) = -1;
            priority(v) = INT_MAX; //���ڱ������еģ����ڵ㣬���ȼ���
            for (Rank u = 0; u < n; u++) //���бߵ�
                if (exists(v, u)) type(v, u) = UNDETERMINED; //����
        }
    }

    void BFS(Rank, Rank &); //����ͨ�򣩹�����������㷨
    void DFS(Rank, Rank &); //����ͨ��������������㷨
    void BCC(Rank, Rank &, StackVector<Rank> &); //����ͨ�򣩻���DFS��˫��ͨ�����ֽ��㷨
    bool TSort(Rank, Rank &, StackVector<Tv> *); //����ͨ�򣩻���DFS�����������㷨
    template<typename PU>
    void PFS(Rank, PU); //����ͨ�����ȼ��������
public:
// ����
    Rank n; //��������
    virtual Rank insert(Tv const &) = 0; //���붥�㣬���ر��
    virtual Tv remove(Rank) = 0; //ɾ�����㼰������ߣ����ظö�����Ϣ
    virtual Tv &vertex(Rank) = 0; //��������ݣ��ö����ȷ���ڣ�
    virtual Rank inDegree(Rank) = 0; //�������ȣ��ö����ȷ���ڣ�
    virtual Rank outDegree(Rank) = 0; //����ĳ��ȣ��ö����ȷ���ڣ�
    virtual Rank firstNbr(Rank) = 0; //������׸��ڽӶ���
    virtual Rank nextNbr(Rank, Rank) = 0; //���㣨��Ե�ǰ�ھӵģ���һ�ھ�
    virtual VStatus &status(Rank) = 0; //�����״̬
    virtual Rank &dTime(Rank) = 0; //�����ʱ���ǩdTime
    virtual Rank &fTime(Rank) = 0; //�����ʱ���ǩfTime
    virtual Rank &parent(Rank) = 0; //�����ڱ������еĸ���
    virtual int &priority(Rank) = 0; //�����ڱ������е����ȼ���
// �ߣ�����Լ��������߾�ͳһת��Ϊ�������һ������ߣ��Ӷ�������ͼ��������ͼ������
    Rank e; //������
    virtual bool exists(Rank, Rank) = 0; //��(v, u)�Ƿ����
    virtual void insert(Te const &, int, Rank, Rank) = 0; //����������֮�����ָ��Ȩ�صı�
    virtual Te remove(Rank, Rank) = 0; //ɾ��һ�Զ���֮��ıߣ����ظñ���Ϣ
    virtual EType &type(Rank, Rank) = 0; //�ߵ�����
    virtual Te &edge(Rank, Rank) = 0; //�ߵ����ݣ��ñߵ�ȷ���ڣ�
    virtual int &weight(Rank, Rank) = 0; //��(v, u)��Ȩ��
// �㷨
    void bfs(Rank); //������������㷨
    void dfs(Rank); //������������㷨
    void bcc(Rank); //����DFS��˫��ͨ�����ֽ��㷨
    StackVector<Tv> *tSort(Rank); //����DFS�����������㷨
    void prim(Rank); //��С֧����Prim�㷨
    void dijkstra(Rank); //���·��Dijkstra�㷨
    template<typename PU>
    void pfs(Rank, PU); //���ȼ��������
};
#include "graph_implementation.h"

#endif //INC_912_CLION_GRAPH_H