#include <stdio.h>
int main(void)
{
	long long int a,b,c,d,i,l,m,hasil,hasil2;
	scanf("%lld",&a);
	for(i=1; i<=a; i++)
	{		
		hasil=1;
		hasil2=1;
		m=3;
		l=2;
		scanf("%lld %lld",&b,&c);		
		while(b!=0)
		{
			printf("INI B %d\n",b);
			if(b%2==0)
			{
				l=l*l%1000000007;
				b=b/2;
			}
			else
			{
				b = b-1;
				hasil= hasil*l%1000000007;
			}
		}
		
		while(c!=0)
		{
			printf("INI C %d\n",c);
			if(c%2==0)
			{
				m=m*m%1000000007;
				c=c/2;
			}
			else
			{
				c = c-1;
				hasil2= hasil2*m%1000000007;
			}
		}
		printf("%lld\n",hasil*hasil2%1000000007);
	}	
}
