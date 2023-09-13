#include<stdio.h>
main()
{
	int a,sum,first,last;
	sum=0;
    printf("enter value of=");
	scanf("%d",	&a);
	last=a%10;
	while(a>=10)
	{
		a=a/10;
	}
	first=a;
	sum=last+first;
	printf("%d",sum);
}
