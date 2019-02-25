/*give array size =5
i/p 1
    2
    3
    1
    2
o/p 1-->2
    2-->2
    3-->1
    */
#include<stdio.h>
#include<conio.h>
void main()
{

	int n,a[8],i,j,count=1;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
		for(i=0;i<n;i++)
		{

			count=1;
			if(a[i]==-1)
				continue;
			for(j=i+1;j<n;j++)
			{
		       //	printf("%d",a[i]);
			if(a[i]==a[j])
			{
			count++;
			a[j]=-1;
			}
		}
		printf("\n%d-->%d",a[i],count);

		}

	getch();

}
