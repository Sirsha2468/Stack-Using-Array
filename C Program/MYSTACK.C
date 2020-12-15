#include<stdio.h>
#define LIMIT 10
int MYSTACK[LIMIT],TOP=-1;
	void push(int x);
	int pop();
	int main()
	{
		int data,choice;
	do
	{
	printf("\n\tStack \n\t1.Push\n\t2.Pop\n\t3.Exit");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter value to push:");
			scanf("%d",&data);
			push(data);
			break;
			case 2:printf("\n\tPopped Value is:%d",pop());
			break;
			case 3:break;
			default:printf("\nEnter the correct choice:");
		}
	}
	while(choice!=3);
}
void push(int x)
{
	if(TOP==LIMIT-1)
		printf("\nStack Overflow");
	else
	MYSTACK[++TOP]=x;
}
int pop()
{
	if(TOP==-1)
	{
		printf("\nStack Overflow");
		return 0;
	}
	else
	return MYSTACK[TOP--];
}
