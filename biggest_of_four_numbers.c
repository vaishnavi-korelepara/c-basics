#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter a,b,c,d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
	 printf("%d is  greater",a);
	}
	else if(b>a && b>c && b>d)
	{
	 printf("%d is  greater",b);
	}
	else if(c>a && c>d && c>d)
	{
	 printf("%d is  greater",c);
	}
	else 
	{
	 printf("%d is  greater",d);
	}
	
}
