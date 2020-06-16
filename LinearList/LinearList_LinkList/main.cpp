//
// Created by dingmengdi on 2020/6/16.
//
#include "Define.h"

using namespace std;

//打印链表
void printL(LinkList L){
    LNode *cur = L->next;
    while (cur != NULL){
        cout<< cur->data << " ";
        cur = cur->next;
    }
}

//创建链表
void createLinkList(){
//    //头插法
//    LinkList L;
//    List_HeadInsert(L);
//    printL(L);

    //尾插法
    LinkList L1;
    List_TailInsert(L1);
    printL(L1);
}


int main(){

    createLinkList(); //创建链表
}