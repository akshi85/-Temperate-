#include<stdio.h>
main()
{
	int i=1,n,f;
	f=i=1;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial=%d",f);
}
