#include <stdio.h>
int main()
{
	int a,b,c,d;
	a=0;
	b=0;
	c=0;
	d=0;
	scanf("%d %d",&a,&b);
	c=a/b;
	d=a%b;
	printf("%d %d",c,d);
	printf("\n");
	return 0;
}
