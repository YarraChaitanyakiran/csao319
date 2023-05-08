#include<stdio.h>
#include<stdlib.h>
#define max 5

int STK[max],top=-1;

void push()
{
	int ele;
	printf("Enter the element: ");
	scanf("%d",&ele);
	if (top==max-1)
		printf("Stack is FULL!!");
	else
	{
		top=top+1;
		STK[top]=ele;
		}	
}

void pop()
{
	int ele;
	if(top==-1)
		printf("The stack is Empty");
	else
	{
		ele=STK[top];
		top=top-1;
	}
	printf("\nThe deleted element is: %d ",ele);

}

void peek()
{
	
	if(top==-1)
		printf("The stack is Empty");
	else
	{
		printf("\nThe top element is %d ",STK[top]);
	}
}

void display()
{
	int i;
	if(top==-1)
		printf("The stack is Empty");
	else
	{
		for(i=top;i>=0;i--)
			printf("\n%d",STK[i]);
	}
}

int main()
	{
		int cho;
		do
		{
			printf("\n Main Menu\n");
			printf("\n 1.Push\n");
			printf("\n 2.Pop\n");
			printf("\n 3.Peek\n");
			printf("\n 4.Display\n");
			printf("\n 5.end\n");
			printf("Enter your choice:");
			scanf("%d",&cho);
	
			switch(cho)
			{
				case 1:push();
				break;
				case 2:pop();
				break;
				case 3:peek();
				break;
				case 4:display();
				break;
				case 5:exit(0);
				
				default:printf("\nEnter no between 1 to 5 !!!");
			}
			
		}while(cho>=1 && cho<=5);
	return 0;
	}
