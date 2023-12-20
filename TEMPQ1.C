#include<stdio.h>
#include<conio.h>

void main()
{
	char i='a';
	clrscr();
	do{
		printf("%c\n",i);
		i=i+4;
	}while(i<='z');
	getch();
}