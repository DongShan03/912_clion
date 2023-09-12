//
// Created by huang on 23-9-12.
//

#ifndef INC_912BINTREE_BINNODE_MACRO_REDBLACK_H
#define INC_912BINTREE_BINNODE_MACRO_REDBLACK_H

#define IsBlack(p) ( ! (p) || ( RB_BLACK == (p)->color ) ) //外部节点也视作黑节点
#define IsRed(p) ( ! IsBlack(p) ) //非黑即红
#define BlackHeightUpdated(x) ( /*RedBlack高度更新条件*/ \
   ( stature( (x).lc ) == stature( (x).rc ) ) && \
   ( (x).height == ( IsRed(& x) ? stature( (x).lc ) : stature( (x).lc ) + 1 ) ) \
)

#endif //INC_912BINTREE_BINNODE_MACRO_REDBLACK_H
