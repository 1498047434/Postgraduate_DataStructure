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

//用数组建立单链表
LinkList testList(LinkList &L, ElemType elems[], int length){
    L = new LNode (); //头结点
    LNode *r = L; //r为尾结点指针

    LNode *s;
    for (int i = 0; i < length; ++i) {
        s = new LNode();
        s->data = elems[i];
        r->next = s;
        r = s;
    }
    r->next = NULL;      //初始链表为空
    return L;
}

//用数组建立单链表（不带头指针）
LinkList testListNoHeadPoint(LinkList &L, ElemType elems[], int length){
    L = NULL; //头指针
    LNode *r; //尾指针

    LNode *s; //新节点
    for (int i = 0; i < length; ++i) {
        s = new LNode();
        s->data = elems[i];

        if (L == NULL)
            L = s; //插入的是一个节点
        else{
            r->next = s; //插入的第二个节点起，让前一个节点下一节点指向s
        }
        r = s; //再让尾指针指向s节点
    }
    if (r != NULL){
        r->next = NULL; //尾结点的下一个指针指向为NULL
    }
    return L;
}

//按值查找
LNode *LocateElem(LinkList L, int e){
    LNode *p = L->next;
    while (p){
        if (p->data == e)
            return p;
        p = p->next;
    }
    return NULL;
}

//按序号查找节点值
LNode *GetElem(LinkList L, int i){
    int j = 1; //计数
    LNode *p = L->next;

    if (i == 0){ //返回头结点
        return L;
    }
    if (i < 1){ //i不合法，返回NULL
        return NULL;
    }
    while (p && j < i){
        p = p->next;
        j ++;
    }
    return p; // 若i超过表长 返回NULL！
}

//递归删除值为x的节点
void del_x_equals_nodeValue(LinkList &L, ElemType x){
    LNode *p; //指向被删除接单
    if (L == NULL){
        //空表
        return;
    }
    if (L->data == x){
        p = L;
        L = L->next;
        del_x_equals_nodeValue(L, x);
        free(p);
    }else{
        del_x_equals_nodeValue(L->next, x);
    }
}

#endif //POSTGRADUATE_DATESTRUCTURE_DEFINE_H
