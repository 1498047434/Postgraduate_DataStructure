//
// Created by dingmengdi on 2020/5/22.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_DEL_BETWEEN_S_TO_T_FORSEQUENCELIT_H
#define POSTGRADUATE_DATESTRUCTURE_DEL_BETWEEN_S_TO_T_FORSEQUENCELIT_H

#include "Define.h"
bool del_Between_S_To_T_ForSequenceLit(SqList &L, ElemType S, ElemType T){
    if (S >= T || L.length == 0){
        return false;
    }

    int k = 0; //当前不符合条件的元素的个数
    for (int i = 0; i < L.length; ++i) {
        if(L.data[i]< S || L.data[i]> T){
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k;
}


#endif //POSTGRADUATE_DATESTRUCTURE_DEL_BETWEEN_S_TO_T_FORSEQUENCELIT_H
