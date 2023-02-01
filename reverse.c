#include<stdio.h>
main()
{
	int a,b,c,d=0;
	printf("enter the number to reverse:");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
	d=d*10+a%10;
	a/=10;
}
printf("the reversed number of %d is %d",b,d);
}
