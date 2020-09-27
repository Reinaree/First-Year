#include <stdio.h>
int main(void)
{
	long long int a,b,c;
	scanf("%lld %lld",&a,&b);
	c=a;
	for(int i=1; i<=b; i++)
	{ 
		c=c*2;
	}
	printf("%lld\n",c);
}
