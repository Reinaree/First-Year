#include <stdio.h>
int main(void)
{
	int a,b,c,d,count;
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		count=0;
		scanf("%d",&b);
		for(int j=1; j*j<=b; j++ )
		{
			if(b%j==0)
			{
				if(b/j == j)
				{
					count+=1;
				}
				else
				{
					count+=2;
				}
			}
		}
		printf("Case #%d: %d\n",i,count);
	}
}
