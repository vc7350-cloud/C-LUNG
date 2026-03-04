#include<stdio.h>
void main()
{
	int a,b,ans;
	
	printf("\n enter number=");
	scanf("%d",&a);
	
	printf("enter number=");
	scanf("%d",&b);
	
	ans=a/b;
	
	printf("\n Quotient=%d",ans);
	
	ans=a%b;
	
	printf("\n remainder=%d",ans);
}
