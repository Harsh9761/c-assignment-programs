#include<stdio.h>
int main()
{
	char a[20];
	scanf("%[^\n]s",&a);
	printf("%s ",a);
	for(int i=19;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
