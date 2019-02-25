/*exact values , even value*/
#include<stdio.h>
#include<conio.h>
void func(int *,int *,int *);
void main()
{
	int n,a[100],i,b[100],j;
	clrscr();
	printf("Enter num of elements\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	func(&n,a,b);         //catch the output
	{
	for(i=0;i<n;i++)
	{
	if(b[i]!=a[j])
	printf("%d",b[i]);			 //print here
	}
	}
	getch();
}
void func(int *size, int *in, int *out)
{
	int i,j,c=0;
	for(i=0;i<*size;i++)
	{
		for(j=0;j<*size;j++)
		{
		if(in[i]==out[j])

		c++;

		if(c==0)
		{
		out[i]=in[i];
		}
		}
		c=0;


	}
				 // no prnt stmts no return value


}
