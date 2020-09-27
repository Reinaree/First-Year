#include <stdio.h>

int main(void)
{
	int T;
	long long int N;
	long long int temp;
	long long int tong;
	long long int dor;
	scanf("%d",&T);
	for(int i=1; i<=T;i++)
	{
		temp = 0;
		tong = 0;
		dor = 0;
		scanf("%lld",&N);
		printf("Case #%d:",i);
		printf(" %lld",N);
		while(N>9)
		{
			tong=N;
			N=0;
			while(tong!=0)
			{
				temp = tong%10;
				N = N+temp;
				tong/=10;
			}
			printf(" %lld",N);		
		}
		printf("\n");
	}
}
