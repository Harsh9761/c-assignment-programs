#include<stdio.h>

int main()
{
	char a[20];
	char b[20];
	scanf("%[^\n]s",&a);
	scanf("\n%[^\n]s",&b);
	int i,j;
	for(i=0;a[i];i++);
	for(j=0;b[j];j++);
	if(i==j)
	{
		int c=0;
		for(int k=0;a[k];k++)
		{
			if(a[k]==b[k])
			{
				c=c+1;
			}
		}
		if(c==i)
		{
			printf("equal");
		}
	}
	else
	printf("not equal");
	printf("%d%d",i,j);
	return 0;
}
