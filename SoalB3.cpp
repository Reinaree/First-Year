n#include <stdio.h>
int main(void)
{
	int a[100][100];
	int b,c,d,maksimal,e,f,g,h,i,j,k,l,m;
	maksimal = -127;
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
		scanf("%d",&f);
		for(d=0;d<f;d++)
		{
			for(e=0;e<f;e++)
			{
				scanf("%d",&a[d][e]);
			}		
		}
		printf("Case #%d:\n",c);
		printf("Row :");
		for(g=0;g<d;g++)
		{
			maksimal = -127;
			for(h=0;h<e;h++)
			{
				if(a[g][h]>maksimal)
				{
					maksimal = a[g][h];
				}
			}
			printf(" %d",maksimal); 
		}
		printf("\n");
		printf("Col :");
		for(g=0;g<d;g++)
		{
			maksimal = -127;
			for(h=0;h<e;h++)
			{
				if(a[h][g]>maksimal)
				{
					maksimal = a[h][g];
				}
			}
			printf(" %d",maksimal);
		}
		printf("\n");
	}
}
