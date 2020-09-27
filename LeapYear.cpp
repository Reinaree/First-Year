#include <stdio.h>
int main(void)
{
	int a,b;
	int nom1,nom2,nom3;
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		scanf("%d",&b);
		nom1 = b/4;
		nom2 = b/100;
		nom3 = b/400;
		printf("Case #%d: %d\n",i,nom1-nom2+nom3);
	}
}
