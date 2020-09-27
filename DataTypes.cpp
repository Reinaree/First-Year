#include <stdio.h>
int main(void)
{
	long long int a,b,c;
	scanf("%lld",&a);
	for(int i=1; i<=a; i++)
	{
		scanf("%lld",&b);
		if(b<214743647 && b> -214743647 )
		{
			printf("Case #%lld: integer\n",i);
		}
		else
		{
			printf("Case #%lld: long long\n",i);
		}
	}
}
