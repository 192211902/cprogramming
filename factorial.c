#include<stdio.h>
main()
{
	int fact=1,a,b,c;
	printf("Enter the number to find its factorial:");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		fact*=a;
		
	}
printf("the factorial of%dis:%d",fact);
}
