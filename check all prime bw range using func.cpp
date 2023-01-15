#include<stdio.h>
void prime(int n,int m)
{
	for(int i=n;i<m;i++)
	{
		int c=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==0)
	    printf("%d\n",i);

	}

	
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	prime(n,m);
	return 0;
}
