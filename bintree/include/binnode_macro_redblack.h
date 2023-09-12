//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_MACRO_REDBLACK_H
#define INC_912BINTREE_BINNODE_MACRO_REDBLACK_H

#define IsBlack(p) ( ! (p) || ( RB_BLACK == (p)->color ) ) //�ⲿ�ڵ�Ҳ�����ڽڵ�
#define IsRed(p) ( ! IsBlack(p) ) //�Ǻڼ���
#define BlackHeightUpdated(x) ( /*RedBlack�߶ȸ�������*/ \
   ( stature( (x).lc ) == stature( (x).rc ) ) && \
   ( (x).height == ( IsRed(& x) ? stature( (x).lc ) : stature( (x).lc ) + 1 ) ) \
)

#endif //INC_912BINTREE_BINNODE_MACRO_REDBLACK_H
