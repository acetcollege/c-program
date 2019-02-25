#include<stdio.h>
#include<conio.h>
void main(){
	int wcnt = 0, ccnt = 0,i;
       char str[30]={0};
	clrscr();
	printf("enter a sentence\n");
	scanf("%[^\n]s",str);
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i] == ' ')
		{
			wcnt++;
		}
		else
		{
			ccnt++;
		}
	}
	printf("No of words %d\n",wcnt+1);
	printf("No of characters %d\n",ccnt);

	getch();
}