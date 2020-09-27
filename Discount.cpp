#include <stdio.h>
int main(void)
{
	int t;
	double m,n,k;
	double temp;
	scanf("%d",&t);
	for(int i=1; i<=t;i++)
	{
		temp=0;
		scanf("%lf %lf %lf",&n,&m,&k);
		for(int j=0;j<k;j++)
		{
			if(n <= m)
			{
				temp = temp + m*(k-j);
				break;
			}
			temp=temp+n;
			n/=2;
			//printf("DEBUG %lf\n",n);
			
		}
		printf("Case #%d: %.3lf\n",i,temp);
	}
}
