//
// Created by dingmengdi on 2020/6/15.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_DEL_SAMEORDEREDELEMTALL_H
#define POSTGRADUATE_DATESTRUCTURE_DEL_SAMEORDEREDELEMTALL_H


#include "Define.h"
bool del_SameOrderedElemtAll(SqList &L){
    if (L.length <= 0){
        return false;
    }

    //当前i下标为不重复元素的最后一个（初始是第一个元素下标==最后一个元素下标）
    //j为检查下标
    int i,j;
    for (i= 0, j=1; j <L.length ; j++) {
        if (L.data[i] != L.data[j]) {
            //若，发现j下标元素和i下标元素不等
            //i的下标+1（i++）
            i++;
            //i目前索==j 【或者i目前下标为重复需要删除元素的头一个下标位置】
            swap(L.data[i], L.data[j]);
            //交换后，循环j检查下标++，i下标再次为下为不重复元素的最后一个
        }
    }
    L.length = i + 1;
}


#endif //POSTGRADUATE_DATESTRUCTURE_DEL_SAMEORDEREDELEMTALL_H
