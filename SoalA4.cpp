#include <stdio.h>
int main()
{
	int a,b,c,d[100000],max = -1000000000, min = 1000000001,j,i;
	
	scanf("%d",&a);
	for(i=1; i<=a;i++)
	{
		max=-1000000000;
		min=1000000001;
		scanf("%d %d",&b,&c);
		for( j=0; j<b; j++)
		{
			scanf("%d",&d[j]);
			if(d[j]>max )
			{
				max=d[j];
			}
			if(d[j]<min )
			{
				min=d[j];
			}
		}
		if(max-min < c )
		{
			printf("Case #%d: YES\n",i);
		}
		else
		{
			printf("Case #%d: NO\n",i);
		}
		//printf("%d %d", max,min);
	}
	return 0;
}
