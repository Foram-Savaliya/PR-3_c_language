#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,num,sum;
	clrscr();
	printf("enter any number:-");
	scanf("%d",&num);
	a=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	b=num;
	printf("the sum of first and last digit is :- %d",b+a);
	getch();
}