#include <stdio.h>
int main(void)
{
	int b;
	int x;
	int d;
	scanf("%d",&b);
	int a[b];
	for(int c=0;c<=b;c++)
	{
		scanf("%d",&a[c]);
	}
	for(d=0;d<=b;d++)
	{
		scanf("%d",&x[a[d]]);
	}
	for(int d=0;d<=b;d++)
	{
		printf("%d",x[a[d]]);
	}
}
