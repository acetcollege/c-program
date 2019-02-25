#include<stdio.h>
#include<conio.h>
void main(){
	int len1,len2,i,flag;
	char str1[20] = {0},str2[20] = {0};
	clrscr();
	printf("enter string1:\n");
	scanf("%s",str1);
	printf("enter string2:\n");
	scanf("%s",str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	if(len1==len2)
	{
		for(i=0;str1[i]='\0';i++)
		{
			if(str1[i] == str2[i])
			{
				flag = 1;
			}
			else{
				break;
			}
		}
		if(flag == 1)
		{
			printf("string1 is equal to string2");
		}else
		{
			printf("string1 is not equal to string2");
		}
	}
	else{
	printf("Strings are not equal");

	}


	getch();
}


