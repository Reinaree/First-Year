#include <stdio.h>
int main(void)
{
	long long int a,b,c,i,j,k,l,s,t,u,v,awalan[50][50],simpan[50][50],hasilakhir[50][50];
	
	scanf("%lld",&a);
	for(v=1; v<=a; v++)
	{
		scanf("%lld",&b);
		for(j=0;j<b;j++)
		{
			for(k=0;k<b;k++)
			{
				scanf("%lld", &awalan[j][k]);
			}
		}
		for(i=0;i<b;i++)
		{
			for(j=0;j<b;j++)
			{
				simpan[i][j]=awalan[i][j];
			}
		}
		for(i=2;i<=b;i++)
		{
			for(j=0;j<b;j++)
			{
				for(k=0;k<b;k++)
				{
					hasilakhir[j][k]=0;
				}
			}
			for(i=0;i<b;i++)
			{
				for(j=0;j<b;j++)
				{
					for(k=0;k<b;k++)
					{
						hasilakhir[i][j]=(hasilakhir[i][j]+(simpan[i][k]*awalan[k][j])%1000000007)%1000000007;
					}
				}
			}
			for(i=0;i<b;i++)
			{
				for(j=0;j<b;j++)
				{
					simpan[i][j]=hasilakhir[i][j];
				}
			}
		}
		printf("Case #%lld:\n",v);
		for(i=0;i<b;i++)
		{
			for(j=0;j<b;j++)
			{
				if(j==b-1)
				{
					printf("%lld ",hasilakhir[i][j]);
				}
				else
				{
					printf("%lld ",hasilakhir[i][j]);
				}
			}
			printf("\n");
		}
	}
}
