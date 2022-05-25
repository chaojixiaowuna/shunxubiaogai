#include"SeqList.h"

//void TestSeqList1()
//{
//	int f;
//   SL s1;
//   SeqListInit(&s1);
//   printf("请输入插入的数字");
//   scanf("%d",&f);
//   SeqListPushBack(&s1,f);
//   SeqListPrint(&s1);
//   SeqListInit(&s1);
//
//   SeqListPushBack(&s1,1);
//   SeqListPushBack(&s1,2);
//   SeqListPushBack(&s1,3);
//   SeqListPushBack(&s1,4);
//   SeqListPushBack(&s1,5);
//    SeqListPrint(&s1);
//
//   SeqListPopBack(&s1);
//   SeqListPrint(&s1);
//
//   SeqListPushFront(&s1,10);
//   SeqListPushFront(&s1,20);
//   SeqListPushFront(&s1,30);
//   SeqListPushFront(&s1,40);
//    SeqListPrint(&s1);
//
//   SeqListpopFront(&s1);
//   SeqListpopFront(&s1);
//    SeqListPrint(&s1);
//	//printf("请输入要查找的数字：");
//	//scanf("%d",&f);
//	//SeqListFind(&s1,f);
//
//	SeqListInsert(&s1,4,7);
//	SeqListInsert(&s1,5,8);
//	SeqListInsert(&s1,6,9);
//	 SeqListPrint(&s1);
//
//	SeqListErase(&s1,5);
//	 SeqListPrint(&s1);
//
//   SeqListDestroy(&s1);
//}
int main()
{
	
	int o=0;
     //TestSeqList1();
	SL s1;
		SeqListInit(&s1);
	do
	{
		menu();
		printf("请输入指令：");
		scanf("%d",&o);
		switch(o)
		{
		case 1:
			{
				int a=0;
				printf("请输入要插入的数字：");
				scanf("%d",&a);
			SeqListPushBack(&s1,a);
			SeqListPrint(&s1);break;
			}
		case 2:
			SeqListPopBack(&s1);
			SeqListPrint(&s1);break;
		case 3:
			{
				int b=0;
				printf("请输入要插入的数字：");
				scanf("%d",&b);
			SeqListPushFront(&s1,b);
			SeqListPrint(&s1);break;
			}
		case 4:
			SeqListpopFront(&s1);
			SeqListPrint(&s1);break;
		case 5:
			{
				int a=0,b=0;
				printf("请输入要插入的数字：");
				scanf("%d %d",&a,&b);
			SeqListInsert(&s1,a,b);
			SeqListPrint(&s1);break;
			}
		case 6:
			{
				int a=0;
				printf("请输入要插入的数字：");
				scanf("%d",&a);
			SeqListErase(&s1,a);
			SeqListPrint(&s1);break;
			}
		case 7:
			{
				int a=0;
				printf("请输入要查找的数字：");
				scanf("%d",&a);
			SeqListFind(&s1,a);
			break;
			}
		case 0:printf("退出");break;
		default:printf("指令输入错误，请重新输入");break;

		}
	}while(o);
	return 0;
}
