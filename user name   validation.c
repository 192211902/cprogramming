#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	printf("enter the user name:");
	scanf("%s",&b);
	printf("reenter the user name:");
	scanf("%s",&b);
	if(swS2trcmp(a,b)==0)
	{
		printf("the user name is valid");
	}
	else
	{
		printf("the user name is invalid");
}
}
