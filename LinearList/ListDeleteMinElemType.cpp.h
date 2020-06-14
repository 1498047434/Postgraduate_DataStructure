//
// Created by dingmengdi on 2020/5/21.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_LISTDELETEMINELEMTYPE_CPP_H
#define POSTGRADUATE_DATESTRUCTURE_LISTDELETEMINELEMTYPE_CPP_H


#include "Define.h"
bool listDeleteMinElemType(SqList &L, ElemType &retval){

    if (L.length == 0) return false; //如果表空返回错误值
    retval = L.data[0]; //retval记录当前最小值
    int pos = 0; //pos记录当前最小值 “索引”

    for (int i = 1; i< L.length; i++){
        if (retval > L.data[i]){
            retval = L.data[i];
            pos = i;
        }
    }
    //把最后一个元素放到最小值元素的位置填补
    L.data[pos] = L.data[L.length - 1];
    L.length --;  //最后L的长度-1
    return true;
}



#endif //POSTGRADUATE_DATESTRUCTURE_LISTDELETEMINELEMTYPE_CPP_H
