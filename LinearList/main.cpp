#include <iostream>
#include "Define.h"
#include "ListDeleteMinElemType.cpp.h"
#include "ElemReverse.h"
#include "delX.h"
#include "del_Between_S_To_T_ForSequenceLit.h"

void listDeleteMinElemType(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [7] {7,9,2,3,4,5,6};
    L.length = 7;

    int retval;
    listDeleteMinElemType(L , retval);
    std::cout << "��СԪ���ǣ� " << retval <<  std::endl;
}
void elemReversse(){
    SqList L;
    L.MaxSize = InitSize;
    L.data = new int [7] {7,9,2,3,4,5,6};
    L.length = 7;
    elemReversse(L);
    std::cout << "Ԫ��������˳����� "<< std::endl;
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
    std::cout << "ɾ������Ϊ2��Ԫ�غ󣬵�˳����� "<< std::endl;
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
    std::cout << "ɾ������Ϊ2��Ԫ�غ󣬵�˳����� "<< std::endl;
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
    std::cout << "ɾ�� s< x < t ������Ԫ�غ󣬵�˳����� "<< std::endl;
    for (int i = 0; i < L.length; ++i) {
        std::cout << L.data[i] << " ";
    }
}




int main() {
    //p19 ����1 ���ҵ���СԪ�ء�
    //listDeleteMinElemType();

    //p19 ����2 ��Ԫ�����á�
    //elemReversse();

    //p19 ����3 ��ɾ��=�� ������Ԫ�ء� ����1��
    //delX();

    //p19 ����3 ��ɾ��=�� ������Ԫ�ء� ����2��
    //delX_2();

    //p19 ����5 ��ɾ�� s<= x <= t ������Ԫ�ء�
    del_Between_S_To_T_ForSequenceLit();
}

git config -globaluser��email"you@example��com"
git config -globaluser��name"YourName"
