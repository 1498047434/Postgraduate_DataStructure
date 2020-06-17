//
// Created by dingmengdi on 2020/6/16.
//
#include "Define.h"

using namespace std;

//打印链表
void printL(LinkList L, string Tip){
    LNode *cur = L->next;
    cout<< Tip <<endl;
    while (cur != NULL){
        cout<< cur->data << " ";
        cur = cur->next;
    }
    cout<<endl;
}

//打印链表
void printLNoHeadPoint(LinkList L, string Tip){
    LNode *cur = L;
    cout<< Tip <<endl;
    while (cur != NULL){
        cout<< cur->data << " ";
        cur = cur->next;
    }
    cout<<endl;
}

//创建链表
void createLinkList(){
//    //头插法
//    LinkList L;
//    List_HeadInsert(L);
//    printL(L,头插法链表如下：);

    //尾插法
    LinkList L1;
    List_TailInsert(L1);
    printL(L1,"尾插法链表如下：");
}

//按序号删除一个节点
void GetElem(){
    //尾插法舒适化链表
    LinkList L1;
    List_TailInsert(L1);
    printL(L1,"尾插法链表如下：");

    cout<< "请输入要查询链表的序号："<<endl;
    int i;
    scanf("%d", &i);
    LNode *node = GetElem(L1, i);
    cout<< "查询到的值为："<< node->data <<endl;
}
//按值查找
void LocateElem(){
    LinkList L;
    testList(L,
            new ElemType[10]{1,2,3,4,8,5,1,4,7,5},
            10);
    printL(L,"链表如下：");

    cout<< "请输入要查询的值："<<endl;
    int i;
    scanf("%d", &i);
    LNode *node = LocateElem(L, i);
    cout<< "查询到的值为："<< node->data <<endl;
}
void del_x_equals_nodeValue(){
    LinkList L;
    testListNoHeadPoint(L,
             new ElemType[13]{1,2,3,6,44,8,5,1,4,2,7,5,5},
             13);
    printLNoHeadPoint(L,"链表如下：");
    cout<< "请输入要del的值："<<endl;
    int i;
    scanf("%d", &i);
    del_x_equals_nodeValue(L, i);
    printLNoHeadPoint(L,"删除后的链表如下：");
}


int main(){

//    createLinkList(); //创建链表
//    GetElem(); //按序号删除一个节点
//    LocateElem();//按值查找
//    del_x_equals_nodeValue();//递归删除

}