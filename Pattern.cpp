#include <stdio.h>

int repeat(int x)
{
	if(x==1)
	{
		printf("A");
	}
	else
	{
		repeat(x-1);
		printf("%c",x+64);
		repeat(x-1);
	}
}

int main(void)
{
	int a,b;
	
	scanf("%d",&a);
	for(int i = 1; i<=a; i++)
	{
		scanf("%d",&b);
		printf("Case #%d: ",i);
		repeat(b);
		printf("\n");
	}
}
