//
// Created by dingmengdi on 2020/5/21.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_DEFINE_H
#define POSTGRADUATE_DATESTRUCTURE_DEFINE_H






#define InitSize 100
//typedef struct {
//    int num;
//} ElemType;

typedef int ElemType ;

typedef struct {
    ElemType *data;
    int MaxSize, length;
} SqList;

void swap(ElemType &e1, ElemType &e2){
    int temp = e1;
    e1 = e2;
    e2 = temp;
}




#endif //POSTGRADUATE_DATESTRUCTURE_DEFINE_H
