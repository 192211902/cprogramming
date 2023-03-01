#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the number for which you want multiplication:");
	scanf("%d",&a);
	printf("enter the multiplier up to which u want multiplication:");
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
		printf("%dx%d=%d\n",a,c,a*c);
	}
}
