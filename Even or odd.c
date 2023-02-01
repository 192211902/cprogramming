#include <stdio.h>
main()
{
	int a,b,c,d,e,f;
	printf("Enter The Start Range:");
	scanf("%d",&a);
	printf("Enter The End Range:");
	scanf("%d",&b);
	printf("The Odd Numbers:\n");
	for(c=a+1;c<b;c++)
	{
		if(c%2!=0)
		{
			printf("%d\n",c);
		}
	}
	printf("The Even Numbers are:\n");
	for(c=a+1;c<b;c++)
	{
		if(c%2==0)
		{
			printf("%d\n",c);
		}
	}
}
