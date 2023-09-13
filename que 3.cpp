#include<stdio.h>
main()
{
	int a,count=0;
	printf("enter value of count");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		count++;
    }
    printf("%d",count);
}
