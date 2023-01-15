#include<stdio.h>
void perfect(int n,int m)
{
	for(int i=n;i<m;i++)
	{
		int sum=0;
		for(int j=1;j<i;j++)
		{
			
			if(i%j==0)
			{
				sum=sum+j;
			}
			
		}
		if(sum==i)
		printf("%d\n",i);
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	perfect(n,m);
	return 0;
}

