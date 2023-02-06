#include<stdio.h>
main()
{
	int a,b,c,d;
	char s[2];
	printf("enter the number of rows to print:");
	scanf("%d",&a);
	printf("enter the character to print:");
	scanf("%s",&s);
	for(b=0;b<a;b++)
	{
		for(c=0;c<b+1;c++)
		{
			printf("%s",s);
		}
		printf("\n");
	}
0 comments on commit
