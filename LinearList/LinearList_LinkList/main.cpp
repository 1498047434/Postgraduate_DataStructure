//
// Created by dingmengdi on 2020/6/16.
//
#include "Define.h"

using namespace std;

//��ӡ����
void printL(LinkList L, string Tip){
    LNode *cur = L->next;
    cout<< Tip <<endl;
    while (cur != NULL){
        cout<< cur->data << " ";
        cur = cur->next;
    }
    cout<<endl;
}

//��ӡ����
void printLNoHeadPoint(LinkList L, string Tip){
    LNode *cur = L;
    cout<< Tip <<endl;
    while (cur != NULL){
        cout<< cur->data << " ";
        cur = cur->next;
    }
    cout<<endl;
}

//��������
void createLinkList(){
//    //ͷ�巨
//    LinkList L;
//    List_HeadInsert(L);
//    printL(L,ͷ�巨�������£�);

    //β�巨
    LinkList L1;
    List_TailInsert(L1);
    printL(L1,"β�巨�������£�");
}

//�����ɾ��һ���ڵ�
void GetElem(){
    //β�巨���ʻ�����
    LinkList L1;
    List_TailInsert(L1);
    printL(L1,"β�巨�������£�");

    cout<< "������Ҫ��ѯ�������ţ�"<<endl;
    int i;
    scanf("%d", &i);
    LNode *node = GetElem(L1, i);
    cout<< "��ѯ����ֵΪ��"<< node->data <<endl;
}
//��ֵ����
void LocateElem(){
    LinkList L;
    testList(L,
            new ElemType[10]{1,2,3,4,8,5,1,4,7,5},
            10);
    printL(L,"�������£�");

    cout<< "������Ҫ��ѯ��ֵ��"<<endl;
    int i;
    scanf("%d", &i);
    LNode *node = LocateElem(L, i);
    cout<< "��ѯ����ֵΪ��"<< node->data <<endl;
}
void del_x_equals_nodeValue(){
    LinkList L;
    testListNoHeadPoint(L,
             new ElemType[13]{1,2,3,6,44,8,5,1,4,2,7,5,5},
             13);
    printLNoHeadPoint(L,"�������£�");
    cout<< "������Ҫdel��ֵ��"<<endl;
    int i;
    scanf("%d", &i);
    del_x_equals_nodeValue(L, i);
    printLNoHeadPoint(L,"ɾ������������£�");
}


int main(){

//    createLinkList(); //��������
//    GetElem(); //�����ɾ��һ���ڵ�
//    LocateElem();//��ֵ����
//    del_x_equals_nodeValue();//�ݹ�ɾ��

}