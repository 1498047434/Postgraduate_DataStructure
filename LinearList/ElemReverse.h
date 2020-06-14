//
// Created by dingmengdi on 2020/5/21.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_ELEMREVERSE_H
#define POSTGRADUATE_DATESTRUCTURE_ELEMREVERSE_H


#include "Define.h"

void elemReversse(SqList &L){
    ElemType temp; //临时变量
    for (int i = 0; i < L.length/2; ++i) {
        temp = L.data[i];
        L.data[i] = L.data[L.length - 1 -i];
        L.data[L.length - 1 -i] =  temp;
    }
}


#endif //POSTGRADUATE_DATESTRUCTURE_ELEMREVERSE_H
