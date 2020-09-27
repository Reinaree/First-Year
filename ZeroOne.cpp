#include <stdio.h>
#include <string.h>
int main(void)
{
	int a,b,c,d;
	char zero[100000];
	int temp0,temp1;
	int simpantemp1,simpantemp0;
	int max1,max2;
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		simpantemp0=0;
		simpantemp1=0;
		max1=0;
		max2=0;
		temp0=0;
		temp1=0;
		scanf("%d",&b);
		for(int x=0; x<=b; x++)
		{
			scanf("%c",&zero[x]);
		}
		for(int j=1; j<=b ;j++)
		{
			if(zero[j]=='1')
			{
				temp1+=1;
				if(zero[j+1]!='1')
				{
					simpantemp1 = temp1;
					if(simpantemp1>max1)
					{
						max1=simpantemp1;
						temp1=0;
						simpantemp1=0;
					}
				}					
			}
			else if(zero[j]=='0')
			{
				temp0+=1;
				if(zero[j+1]!='0')
				{
					simpantemp0 = temp0;
					if(simpantemp0>max2)
					{
						max2=simpantemp0;
						simpantemp0 = 0;
						temp0=0;
					}
				}
			}
			printf("TEMP 1 %d\n",max1);
			printf("TEMP 2 %d\n",max2);
		}
		printf("Case #%d: ",i);
		if(max1>max2)
		{
			printf("1 %d\n",max1);
		}
		else if(max2>max1)
		{
			printf("0 %d\n",max2);
		}
		max1 = 0,max2=0;
	}
}
