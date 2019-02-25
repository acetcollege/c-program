#include<stdio.h>
#include<conio.h>

void main(){
	char str[10]={0};
	int i,len;
	char str2[10];
	clrscr();
	printf("enter the string");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++);
	{
		len=i;
	for(i=0;i<=len;i++)
	{
		str2[i]=str[i];
		printf("%c",str2[i]);
	 }
	}
	getch();

}


	getch();
