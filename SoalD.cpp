#include <stdio.h>
#include <math.h>

int main(void)
{
	long long int n,k,l;
	scanf("%lld %lld", &n,&k);
	l= pow(2,k);
	printf("%lld", n*l);
	printf("\n");
	getchar();
	return 0;
	
}
