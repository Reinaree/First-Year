#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d",&a);
	a=((a+3)/3*2) + ((a+3)%3);
	printf("%d\n",a);
}
