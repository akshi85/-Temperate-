#include<stdio.h>
main()
{
	int i=1,n,ans=1;
	scanf("%d",&n);
	while(i<=10)
	{
		 ans=n*i;
		 printf("%d*%d=%d\n",n,i,ans);
		 i++;
	}
	
}
