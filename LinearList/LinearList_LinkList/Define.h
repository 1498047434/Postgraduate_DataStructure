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

//ͷ�巨����������������������
LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;

    L = new LNode (); //ͷ���
    L->next = NULL;      //��ʼ����Ϊ��

    scanf("%d", &x);
    while (x != 9999){ //����9999��ʾ����
        s = new LNode();
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}


//β�巨����������
LinkList List_TailInsert(LinkList &L){
    L = new LNode (); //ͷ���
    LNode *r = L; //rΪβ���ָ��

    int x;
    LNode *s;

    scanf("%d", &x);
    while (x != 9999){ //����9999��ʾ����
        s = new LNode();
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }

    r->next = NULL;      //��ʼ����Ϊ��
    return L;
}

//�����齨��������
LinkList testList(LinkList &L, ElemType elems[], int length){
    L = new LNode (); //ͷ���
    LNode *r = L; //rΪβ���ָ��

    LNode *s;
    for (int i = 0; i < length; ++i) {
        s = new LNode();
        s->data = elems[i];
        r->next = s;
        r = s;
    }
    r->next = NULL;      //��ʼ����Ϊ��
    return L;
}

//�����齨������������ͷָ�룩
LinkList testListNoHeadPoint(LinkList &L, ElemType elems[], int length){
    L = NULL; //ͷָ��
    LNode *r; //βָ��

    LNode *s; //�½ڵ�
    for (int i = 0; i < length; ++i) {
        s = new LNode();
        s->data = elems[i];

        if (L == NULL)
            L = s; //�������һ���ڵ�
        else{
            r->next = s; //����ĵڶ����ڵ�����ǰһ���ڵ���һ�ڵ�ָ��s
        }
        r = s; //����βָ��ָ��s�ڵ�
    }
    if (r != NULL){
        r->next = NULL; //β������һ��ָ��ָ��ΪNULL
    }
    return L;
}

//��ֵ����
LNode *LocateElem(LinkList L, int e){
    LNode *p = L->next;
    while (p){
        if (p->data == e)
            return p;
        p = p->next;
    }
    return NULL;
}

//����Ų��ҽڵ�ֵ
LNode *GetElem(LinkList L, int i){
    int j = 1; //����
    LNode *p = L->next;

    if (i == 0){ //����ͷ���
        return L;
    }
    if (i < 1){ //i���Ϸ�������NULL
        return NULL;
    }
    while (p && j < i){
        p = p->next;
        j ++;
    }
    return p; // ��i������ ����NULL��
}

/**
 * �κ���********************************************
 * @param L
 * @param x
 */

//�ݹ�ɾ��ֵΪx�Ľڵ�
void del_x_equals_nodeValue(LinkList &L, ElemType x){
    LNode *p; //ָ��ɾ���ӵ�
    if (L == NULL){
        //�ձ�
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


//ɾ��ֵΪx�Ľڵ�(hasHead)
void del_x_hasHead(LinkList &L, ElemType x){

    LNode *p; //ָ��ɾ���ڵ�
    LNode *prior = L; //��ǰ�ڵ�ǰ���ڵ�
//    LNode *cur = L->next; //��ǰ�ڵ�
    if (prior->next == NULL){
        //�ձ�
        return;
    }
    while (prior->next != NULL){
        if (prior->next->data == x){

            p = prior->next;
            //Ҫɾ���ڵ��ǰ���ڵ��ָ����ָ����һ���ڵ�
            prior->next = prior->next->next;

            free(p);
        }else{
            prior = prior->next;
        }
    }
}

#endif //POSTGRADUATE_DATESTRUCTURE_DEFINE_H
