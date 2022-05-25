#include"SeqList.h"

void menu()
{
	printf("******0.exit********1.pushback****************\n");
	printf("******2.popback*****3.pushfront***************\n");
	printf("******4.popfront****5.insert******************\n");
	printf("******6.erase*******7.find********************\n");
	printf("**********************************************\n");

}
void SeqListPushBack(SL* ps,SLDataType x)
{
	/*if(ps->size==ps->capacity)
	{
		int newcapacity=ps->capacity==0?4:ps->capacity*2;
		SLDataType* tmp=(SLDataType*)realloc(ps->a,newcapacity*sizeof(SLDataType));
		if(tmp==NULL)
		{
			printf("realloc failed\n");
			exit(-1);
		}
		ps->a=tmp;
		ps->capacity=newcapacity;
	}*/
	SeqListCheck(ps);
	ps->a[ps->size]=x;
	ps->size++;
}
void SeqListInit(SL* ps)
{
	ps->a=NULL;
	ps->capacity=ps->size=0;
}
void SeqListPrint(SL* ps)
{
	int i;
	for(i=0;i<ps->size;i++)
	{
	printf("%d ",ps->a[i]);
	}
	printf("\n");
}
void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps->a=NULL;
	ps->size=ps->capacity=0;
}
 void SeqListPopBack(SL* ps)
 {
	 if(ps->size>0)
	 {
	 ps->size--;
	 }
 }

void SeqListCheck(SL* ps)
 {
	 if(ps->size>=ps->capacity)
	{
		int newcapacity=ps->capacity==0?4:2*ps->capacity;
		SLDataType* tmp=(SLDataType*)realloc(ps->a,newcapacity*sizeof(SL));
		if(tmp==NULL)
		{
			printf("realloc failed");
			exit(-1);
		}
		
		ps->a=tmp;
		ps->capacity=newcapacity;
	 }
}
void SeqListPushFront(SL* ps,SLDataType x)
{
	int end=ps->size-1;
	SeqListCheck(ps);
	while(end>=0)
	{
		ps->a[end+1]=ps->a[end];
		end--;
	}
	ps->a[0]=x;
	ps->size++;
}
void SeqListpopFront(SL* ps)
{
	int begin=0;
	assert(ps->size>0);
	while(begin<ps->size-1)
	{
		ps->a[begin]=ps->a[begin+1];
		begin++;
	}
	ps->size--;
}

void SeqListFind(SL* ps,SLDataType x)
{
	int i;
	for(i=0;i<ps->size;i++)
	{
		if(x==ps->a[i])
		{
			printf("找到了，下标是%d",i);
			break;
		}
	}
	if(i==ps->size)
		printf("找不到 ");
}
void SeqListInsert(SL* ps,int pos,SLDataType x)
{
	int po=ps->size-1;
if(pos>ps->size||pos<0)//pos等于size 相当于尾插
{
	printf("pos invalied\n");
	return ;
}
	SeqListCheck(ps);
	while(po>=pos)
	{
		ps->a[po+1]=ps->a[po];
		po--;
	}
	ps->a[pos]=x;
	ps->size++;
}
void SeqListErase(SL* ps,int pos)
{
	assert(ps->size>0);
	if(pos<ps->size)
	{
		while(pos<ps->size)
		{
			ps->a[pos-1]=ps->a[pos];
			pos++;
		}
	ps->size--;
	}
}