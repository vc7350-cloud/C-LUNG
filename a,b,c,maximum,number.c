#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && b>c)
	{
		printf("a is maximum");
	}
	else if(b>a && b>c)
	{
		printf("b is maximum");
	}
	else 
	{
		printf("c is cret");
	} 
}
