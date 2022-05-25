#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;

void menu();

void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps,SLDataType x);
void SeqListpopBack(SL* ps);
void SeqListPushFront(SL* ps,SLDataType x);
void SeqListpopFront(SL* ps);
void SeqListPrint(SL* ps);
void SeqListPrint(SL* ps);
void SeqListDestroy(SL* s1);
void SeqListPopBack(SL* s1);

void SeqListCheck(SL* ps);

void SeqListFind(SL* ps,SLDataType x);
void SeqListInsert(SL* ps,int pos,SLDataType x);
void SeqListErase(SL* ps,int pos);