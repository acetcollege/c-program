/*diamond pattern*/ /*output error*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l;
	clrscr();
	for(i=1; i<=5; i++)
	{
	for(j=4; j>=i; j--)
	{
	printf(" ");
	}
	for(k=1; k<=(2*i-1); k++)
	{
	printf("*");
	}
	printf("\n");
	}

	for(l=4; l>=1; l--)
	{
	for(j=4; j>=1; j--)
	{
	printf(" ");
	}
	for(k=1; k<=(2*l-1); k++)
	{
	printf("*");
	}
	printf("\n");
	}

	getch();
}