//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE 100
//#define error 0
//#define ok 1
//typedef int SElemtype;
//typedef int Status;
//typedef struct
//{
//	SElemtype data[MAXSIZE];
//	int top;
//}SqStack;
//
//Status InitStack(SqStack* S)
//{
//	/*S->data = (SElemtype*)malloc(MAXSIZE * sizeof(SElemtype));*/
//	S->top = -1;
//	return ok;
//}
//Status Push(SqStack* S, SElemtype e)
//{
//	if (S->top == MAXSIZE - 1)
//		return error;
//	S->top++;
//	S->data[S->top] = e;
//	return ok;
//}
//Status visit(SElemtype c)
//{
//	printf("%d ", c);
//	return ok;
//}
//Status StackTraverse(SqStack S)
//{
//	int i=0;
//	while (i<=S.top)
//	{
//		visit(S.data[i++]);
//	}
//	printf("\n");
//	return ok;
//}
//Status Pop(SqStack * S, SElemtype* e)
//{
//	if (S->top == -1)
//		return error;
//	*e = S->data[S->top];
//	S->top--;
//}
//Status StackEmpty(SqStack S)
//{
//	if (S.top == -1)
//		return ok;
//	else
//		return error;
//}
//Status GetTop(SqStack S, SElemtype* e)
//{
//	*e = S.data[S.top];
//	return ok;
//}
//Status StackLength(SqStack S)
//{
//	return S.top + 1;
//}
//Status ClearStack(SqStack* S)
//{
//	S->top = -1;
//	return ok;
//}
//int main()
//{
//	int i,e;
//	SqStack S;
//	if(InitStack(&S)==ok)
//		for (i = 0; i < 10; i++)
//		{
//			Push(&S,i);
//		}
//	printf("插入后的元素：\n");
//	StackTraverse(S);
//	Pop(&S, &e);
//	printf("弹出栈顶元素 e=%d\n", e);
//	printf("栈是否为空 ：%d(1:空  0:否)\n", StackEmpty(S));
//	StackTraverse(S);
//	GetTop(S, &e);
//	printf("现在栈顶元素为%d\n", e);
//	printf("栈的长度为 %d\n", StackLength(S));
//	ClearStack(&S);
//	printf("栈是否为空 ：%d(1:空  0:否)\n", StackEmpty(S));
//	return 0;
//}