#include<stdio.h>
void max(int a,int b)
{
	if(a>b)
	printf("max %d",a);
	else
	printf("max %d",b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	max(a,b);
	return 0;
}
