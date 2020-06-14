#include <iostream>
#include <cstring>
#include "Define.h"
#include "ListDeleteMinElemType.cpp.h"
#include "ElemReverse.h"
#include "delX.h"
#include "del_Between_S_To_T_ForSequenceLit.h"
#include "del_SameElemtAll.h"
using namespace std;

void printL(SqList &L, string Tip){
    std::cout << Tip << std::endl;
    for (int i = 0; i < L.length; ++i) {
        std::cout << L.data[i] << " ";
    }
}

void listDeleteMinElemType(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [7] {7,9,2,3,4,5,6};
    L.length = 7;

    int retval;
    listDeleteMinElemType(L , retval);
    std::cout << "最小元素是： " << retval <<  std::endl;
}
void elemReversse(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [7] {7,9,2,3,4,5,6};
    L.length = 7;
    elemReversse(L);
    std::cout << "元素逆序后的顺序表： "<< std::endl;
    for (int i = 0; i < L.length; ++i) {
        std::cout << L.data[i] << " ";
    }
}

void delX(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [8] {7,9,2,3,2,4,5,6};
    L.length = 8;

    delX(L, 2);
    std::cout << "删除所有为2的元素后，的顺序表： "<< std::endl;
    for (int i = 0; i < L.length; ++i) {
        std::cout << L.data[i] << " ";
    }
}

void delX_2(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [8] {7,9,2,3,2,4,5,6};
    L.length = 8;

    delX_2(L, 2);
    std::cout << "删除所有为2的元素后，的顺序表： "<< std::endl;
    for (int i = 0; i < L.length; ++i) {
        std::cout << L.data[i] << " ";
    }
}

void del_Between_S_To_T_ForSequenceLit(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [8] {7,9,2,3,2,4,5,6};
    L.length = 8;


    del_Between_S_To_T_ForSequenceLit(L, 2, 6);
    std::cout << "删除 s< x < t 的所有元素后，的顺序表： "<< std::endl;
    for (int i = 0; i < L.length; ++i) {
        std::cout << L.data[i] << " ";
    }
}


void del_SameElemtAll(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [11] {7,7,9,5,2,3,2,4,5,6,6};
    L.length = 11;

    del_SameElemtAll(L);
    printL(L, "删除所有重复元素后的顺序表");

}



int main() {
    //p19 二、1 【找到最小元素】
    //listDeleteMinElemType();

    //p19 二、2 【元素逆置】
    //elemReversse();

    //p19 二、3 【删除=？ 的所有元素】 方法1；
    //delX();

    //p19 二、4 【删除=？ 的所有元素】 方法2；
    //delX_2();

    //p19 二、5 【删除 s<= x <= t 的所有元素】
    //del_Between_S_To_T_ForSequenceLit();

    //p19 二、6 【删除所有重复元素的元素】

    del_SameElemtAll();
}



