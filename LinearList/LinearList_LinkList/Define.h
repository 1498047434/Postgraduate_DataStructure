//
// Created by dingmengdi on 2020/5/21.
//

#ifndef POSTGRADUATE_DATESTRUCTURE_DEFINE_H
#define POSTGRADUATE_DATESTRUCTURE_DEFINE_H
#include <iostream>
using namespace std;


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

/**
 * 课后题********************************************
 * @param L
 * @param x
 */

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


//删除值为x的节点(hasHead)
void del_x_hasHead(LinkList &L, ElemType x){

    LNode *p; //指向被删除节点
    LNode *prior = L; //当前节点前驱节点
//    LNode *cur = L->next; //当前节点
    if (prior->next == NULL){
        //空表
        return;
    }
    while (prior->next != NULL){
        if (prior->next->data == x){

            p = prior->next;
            //要删除节点的前驱节点的指针域指向下一个节点
            prior->next = prior->next->next;

            free(p);
        }else{
            prior = prior->next;
        }
    }
}

//单链表从表尾部开始打印输出(递归实现)
void printL_of_rearStart(LinkList L, bool flag){ //flag 是否为头结点
    if (L->next != NULL){
        printL_of_rearStart(L->next, false);
    }
    if (L!= NULL && !flag){
        cout << L->data <<endl;
    }
}
//带头结点单链表删除最小值
void del_min(LinkList &L){
    if (L->next == NULL){
        return;
    }
    LNode *pre = L; //当前指针的前驱
    LNode *cur = L->next; //当前指针
    LNode *preMin = pre; //保存最小节点前驱
    LNode *curMin = cur; //保存最小节点

    while (cur != NULL){
        if (cur->data < curMin->data ){
            preMin = pre;
            curMin = cur;
        }
        pre = pre->next;
        cur = cur->next;
    }

    //删除最小值节点
    preMin->next = curMin->next;
    free(curMin);
}
#endif //POSTGRADUATE_DATESTRUCTURE_DEFINE_H
