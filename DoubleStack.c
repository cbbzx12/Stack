#include<stdio.h>
#include<stdlib.h>
#define error 0
#define ok 1
#define MAXSIZE 20
typedef int Status;
typedef int SElemtype;
typedef struct
{
	SElemtype data[MAXSIZE];
	int top1;
	int top2;
}SqDoubleStack;
Status InitStack(SqDoubleStack* S)
{
	S->top1 = -1;
	S->top2 = MAXSIZE - 1;
	return ok;
}
Status Push(SqDoubleStack* S, SElemtype e, int StackNumber)
{
	if (S->top1 + 1 == S->top2)
		return error;
	if (StackNumber == 1)
		S->data[++S->top1] = e;
	else if (StackNumber == 2)
		S->data[--S->top2] = e;
	return ok;
}
Status visit(SElemtype j)
{
	printf("%d ", j);
	return ok;
}
Status StackTraverse(SqDoubleStack S)
{
	int j = 0;
	while (j <= S.top1)
	{
		visit(S.data[j++]);
	}
	j = S.top2;
	while (j < MAXSIZE-1)
	{
		visit(S.data[j++]);
	}
	printf("\n");
	return ok;
}
Status StackLength(SqDoubleStack S)
{
	return(S.top1 + 1) + (MAXSIZE - S.top2);
}
Status Pop(SqDoubleStack* S, SElemtype* e,int StackNumber)
{
	if (S->top1 == -1 || S->top2 == MAXSIZE - 1)
		return error;
	if (StackNumber == 1)
		*e = S->data[S->top1--];
	else if (StackNumber == 2)
		*e = S->data[S->top2++];
	return ok;
}
Status StackEmpty(SqDoubleStack S)
{
	if (S.top1 == -1 && S.top2 == MAXSIZE)
		return ok;
	else
		return error;
}
Status ClearStack(SqDoubleStack* S)
{
	S->top1 = -1;
	S->top2 = MAXSIZE ;
	return ok;
}
int main()
{
	int i, e;
	SqDoubleStack S;
	if (InitStack(&S) == ok)
	{
		for (int i = 1; i <= 5; i++)
			Push(&S, i, 1);
		for (i = MAXSIZE; i >= MAXSIZE - 2; i--)
			Push(&S, i, 2);
	}
	printf("栈中的元素依次为：");
	StackTraverse(S);
	printf("当前栈中元素有：%d \n", StackLength(S));
	Pop(&S, &e, 2);
	printf("弹出的栈顶元素 e=%d\n", e);
	printf("栈中的元素依次为：");
	StackTraverse(S);
	printf("栈空否：%d(1:是 0:否)\n", StackEmpty(S));
	for (int j = 6; j <= MAXSIZE - 2; j++)
		Push(&S, j, 1);
	printf("栈中元素依次为：");
	StackTraverse(S);
	printf("栈满否：%d(1:否 0:满)\n", Push(&S, 100, 1));
	ClearStack(&S);
	printf("清空栈后，栈空否：%d(1:是 0:否)\n", StackEmpty(S));
	return 0;

}