#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int d,e,f=0;
	printf("enter the word to check the vowels:");
	scanf("%[^\n]s",&a);
	e=strlen(a);
	for(d=0;d<e;d++)
	{
	     if(a[d]=='a'|| a[d]=='e'|| a[d]=='i'|| a[d]=='o'|| a[d]=='a'|| a[d]=='e'|| a[d]=='i'|| a[d]=='o'|| a[d]=='u')
	     {
	     	f=f+1;
		 }
	}
	printf("the number of vowels in the given sentenceis:%d",f);
}
