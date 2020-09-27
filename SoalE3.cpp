#include<stdio.h>
int main(void) 
{
	int t, q, r, l, a, n, N[100000], b, c, d, e;
	scanf("%d", &t);
	for (a = 1; a <= t; a++) 
	{
		scanf("%d %d", &n, &q);
		for (b = 0; b <= n-1; b++) 
		{
			scanf("%d", &N[b]);
		}
	for (c = 1; c <= q; c++) 
	{
		scanf("%d %d", &l, &r);
		for (d = l - 1; d <= r - 1; d++) 
		{
				e = e + N[d];
		}
			printf("%d\n", e);
			e = 0;
		}	
	}
	getchar();
	return 0;
}
