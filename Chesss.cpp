#include <stdio.h>
int main(void)
{
	int a,b,c;
	int count;
	char chess[100][100];
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		count = 0;
		for(int j=0; j<8; j++)
		{
			scanf("%s",chess[j]);
		}
				
		for(int l=0; l<8; l++)
		{
			for(int m=0; m<8; m++)
			{
				if(chess[l][m]=='P');
				{
					if( chess[l-1][m+1] =='.' && chess[l-1][m-1] =='.' )
					{
						count+=1;
						printf("%c",chess[l][m]);
					}
					if(count == 2)
					{
						break;
					}
				}
			}
			printf("\n");
		}
		
		printf("%d",count);
		
		
	}
	
	
}
