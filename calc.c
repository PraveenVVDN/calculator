//sumellan
//this is my file
#include<stdio.h>
#include<conio.h>
#include<math.h>

int addition(int,int);
int subtyraction(int,int);
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
	if(op=='*')
	{
		result=multiplication(a,b);
		Printthis(result);
	}
	if(op=='/')
	{
		result=division(a,b);
		Printthis(result);
	}
	if(op=='%')
	{
		result=modulo(a,b);
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
int multiplication(int a,int b)
	{
		return a*b;
	}
int division(int a,int b)
	{
		return a/b;
	}
int modulo(int a,int b)
	{
		return a%b;
	}
void Printthis(int)
	{
		printf("%d",result);
	}

