#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,num;
	clrscr();
	printf("enter any no:-");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		i++;
	}
	printf("total digit of no is %d",i);
	getch();
}