#include <stdio.h>
int main()
{
	int X,N,N1,Pi[10000];
	int i;
	scanf("%d",&X);
	scanf("%d",&N);
	for(i = 0; i<N; i++)
	{
		scanf("%d",&Pi[i]);
	}
	N1 = X*(N+1);
	for(i = 0; i<N; i++)
	{
		N1=N1-Pi[i];
	}
	printf("%d",N1);
}
