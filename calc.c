#include<stdio.h>
#include<conio.h>
#include<math.h>

int addition(int,int);
int subtraction(int,int);
int division(int,int);
int multiplication(int,int);
int modulo(int,int);
int Printthis(int);

void main()
{
	clrscr();
	int a,b, result=0;
	char op;
	printf("Enter 1st operator and 2nd no.");
	scanf("%d%c%d",&a,&op,&b");
	if(op=='+')
	{
		result=addition(a,b);
		Printthis(result);
	}
	if(op=='-')
	{
		result=subtraction(a,b);
		Printthis(result);
	}
}

int addition(int a,int b)
	{
		return a+b;
	}
int subtraction(int a,int b)
	{
		return a-b;
	}
void Printthis(int)
	{
		printf("%d",result);
	}

