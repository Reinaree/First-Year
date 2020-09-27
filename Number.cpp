#include <stdio.h>
int main(void)
{
	int a,b,c,number[100000];
	
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		number[i-1]=0;
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&number[j]);
		}	
		for(int q=0; q<b; q++)
		{
			for(int w=q+1;w<b;w++)
			{
				if(number[q]>number[w])
				{
					c=number[q];
					number[q] = number[w];
					number[w] = c;
				}
			}
		}
		for(int x=0; x<b; x++)
		{
			printf("%d ",number[x]);
		}					
	}
}
