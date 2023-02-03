#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the number of rows:");
	scanf("%d",&a);
	for(b=1;b<a;b++)
	{
		for(c=0;c<b;c++)
		{
			printf("%d",b-c);
		}
		printf("\n");
	}
}
     
