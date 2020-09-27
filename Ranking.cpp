#include<stdio.h>
int main()
{
	int a,b,c[100000],count,s;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		count =0;
		scanf("%d",&b);
		for(int j=0; j<b;j++)
		{
			scanf("%d",&c[j]);
		}
		printf("Case #%d:",i);
		for(int j=0;j<b;j++)
		{
			for(int z=0;z<b;z++)
			{
				if(c[j]<c[z])
				{
					count++;
				}
			}
			printf(" %d",count+1);
			count =0;
		}
		printf("\n");
		
	}
}
