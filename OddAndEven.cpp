#include <stdio.h>
int main(void)
{
	long long int a,b,c;
	long long int tmpganjil,tmpgenap;
	scanf("%lld",&a);
	for(int i=1; i<=a; i++)
	{
		tmpganjil=0;
		tmpgenap=0;
		scanf("%lld",&b);
		for(int j=1; j<=b;j++)
		{
			scanf("%lld",&c);
			if(c%2==1)
			{
				tmpganjil+=1;
			}
			else if(c%2==0)
			{
				tmpgenap+=1;
			}
		}
		printf("Odd group : %lld integer(s).\n",tmpganjil);
		printf("Even group : %lld integer(s).\n\n",tmpgenap);
	}
}
