#include<stdio.h>
main()
{
	int a,temp,s,p=0;
	printf("enter value of a=");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		s=a%10;
		p=p*10+s;
		a=a/10;
	}
	printf("revrese=%d",p);
	if(temp==p)
	{
		printf("number is palindrom");
	}
	else
	{
		printf("number is not palindrom");
	}
}
