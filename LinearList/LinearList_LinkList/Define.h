//
// Created by dingmengdi on 2020/5/21.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_DEFINE_H
#define POSTGRADUATE_DATESTRUCTURE_DEFINE_H
#include <iostream>

typedef int ElemType ;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

void swap(ElemType &e1, ElemType &e2){
    int temp = e1;
    e1 = e2;
    e2 = temp;
}

//头插法建立单链表（逆向建立单链表）
LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;

    L = new LNode (); //头结点
    L->next = NULL;      //初始链表为空

    scanf("%d", &x);
    while (x != 9999){ //输入9999表示结束
        s = new LNode();
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}


//尾插法建立单链表
LinkList List_TailInsert(LinkList &L){
    L = new LNode (); //头结点
    LNode *r = L; //r为尾结点指针

    int x;
    LNode *s;

    scanf("%d", &x);
    while (x != 9999){ //输入9999表示结束
        s = new LNode();
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }

    r->next = NULL;      //初始链表为空
    return L;
}



#endif //POSTGRADUATE_DATESTRUCTURE_DEFINE_H
