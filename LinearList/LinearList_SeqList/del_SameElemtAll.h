//
// Created by dingmengdi on 2020/6/14.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_DEL_SAMEELEMTALL_H
#define POSTGRADUATE_DATESTRUCTURE_DEL_SAMEELEMTALL_H



#include "Define.h"

void del_SameElemtAll(SqList &L){
//    L.data = new int [11] {7,7,9,5,2,3,2,4,5,6,6};
//    L.data = new int [11] {7,9,5,2,3,2,4,5,6,6};
    int k = 0; //当前重复元素的个数
    for (int i = 0; i <L.length ; ++i) {
        for (int j = i+1; j < L.length; ++j) {
            if (L.data[j] == L.data[i]){
                k++; //重复·元素个数+1
            }else{
                //(假设data[1] = data[0],k=1)
                //(假设data[2] = data[0],k=1)
                L.data[j-k] = L.data[j]; //把当前不重复元素放到重复元素上
            }
        }
        L.length = L.length - k;
        k = 0;
    }
}


#endif //POSTGRADUATE_DATESTRUCTURE_DEL_SAMEELEMTALL_H
