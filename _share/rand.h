//
// Created by huang on 2023/9/9.
//

#ifndef INC_912VECTOR_RAND_H
#define INC_912VECTOR_RAND_H

#include <stdlib.h>
#include <time.h> //ͨ���õ�ǰʱ�������������

/******************************************************************************************
 * ��[0, range)���������һ����
 ******************************************************************************************/
static int dice ( int range ) { return rand() % range; } //ȡ[0, range)�е��������
static int dice ( int lo, int hi ) { return lo + rand() % ( hi - lo ); } //ȡ[lo, hi)�е��������
static float dice ( float range ) { return rand() % ( 1000 * ( int ) range ) / ( float ) 1000.; }
static double dice ( double range ) { return rand() % ( 1000 * ( int ) range ) / ( double ) 1000.; }
static char dice ( char range ) { return ( char ) ( 32 + rand() % 96 ); }

#endif //INC_912VECTOR_RAND_H
