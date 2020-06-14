//
// Created by dingmengdi on 2020/5/22.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_DELX_H
#define POSTGRADUATE_DATESTRUCTURE_DELX_H

#include "Define.h"
void delX(SqList &L, ElemType x){

    int k = 0; //当前等于X的个数
    for (int i = 0; i < L.length; ++i) {
        if (x == L.data[i]){
            k ++;
        }else{
            L.data[i-k] = L.data[i];
        }
    }
    L.length = L.length-k;
}

void delX_2(SqList &L, ElemType x){

    int k = 0; //当前 !等于X 的个数

    for (int i = 0; i < L.length; ++i) {
        if (x != L.data[i]){
            L.data[k] = L.data[i];
            k ++;
        }
    }
    L.length = k;
}

#endif //POSTGRADUATE_DATESTRUCTURE_DELX_H
