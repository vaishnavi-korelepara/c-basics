#include<stdio.h>
void main()
{
	int num,div1,div2;
	scanf("%d%d%d",&num,&div1,&div2);
	if(num%div1==0 && num%div2==0)
	{
	
	printf(" num is divisible" );
  }
  else
  {
  	printf(" num is not divisible");
  }
}
