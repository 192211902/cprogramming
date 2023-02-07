#include <stdio.h>
main()
{
	int a[100],b[100],c[100];
	int i,j,k,l,m,n,o,p,max;
	printf("Enter The Number Of Elements You Are Entering:");
	scanf("%d",&m);
	l=m;
	printf("Enter The Elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The N Value:");
	scanf("%d",&o);
	for(i=0;i<m;i++)
	{
		max=a[0];
		n=0;
		for(j=0;j<l;j++)
		{
			if(max<a[j])
			{
				max=a[j];
			}
		}
		for(k=0;k<l;k++)
		{
			if(a[k]!=max)
			{
				b[n]=a[k];
				n+=1;
			}
		}
		c[i]=max;
		l-=1;
		for(k=0;k<l;k++)
		{
			a[k]=b[k];
		}
    }
    printf("The %dth Largest Number is %d",o,c[o-1]);
}
