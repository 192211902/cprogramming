#include<stdio.h>
int reverse(int a)
{
	int b,c,d=0;
    while(a!=0)
    {
    	d=d*10+a%10;
    	a/=10;
	}
	return d;
}
main()
{
	int a,b,c,d;
	printf("enter the number to reverse:");
	scanf("%d",&a);
	printf("the reversed number is %d",reverse(a));
}
