#include<stdio.h>
#include<conio.h>

void main()
{
	int i,len;
	char str1[20] = {0}, str2[10]= {0};
	clrscr();
	printf("Enter String1\n");
	scanf("%s",str1);
	printf("Enter string2\n");
	scanf("%s",str2);
	len = strlen(str1);
	for(i=0;str2[i]!='\0';i++)
	{
		str1[len++] = str2[i];
	}
	printf("After concatenating two strings: %s\n",str1);
	getch();
}