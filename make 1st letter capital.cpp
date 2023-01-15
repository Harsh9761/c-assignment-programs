#include<stdio.h>
int main()
{
	char a[20];
	scanf("%[^\n]s",&a);
	if((a[0]>=97)&&(a[0]<=122))
	{
		a[0]=a[0]-32;
	}
	for(int i=0;a[i];i++)
	{
		if(a[i]==' ')
		{
			if((a[i+1]>=97)&&(a[i+1]<=122))
			{
			    a[i+1]=a[i+1]-32;
		    }
			
		}
		
	}
	for(int i=0;a[i];i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
