#include <stdio.h>
#include <string.h>

int main(void)
{
	int a,b,temp;
	char encrypt[100000];
	
	scanf("%d",&a);
	for(int i = 1; i<=a; i++)
	{
		temp=0;
		scanf("%d",&b);	
		getchar();
		scanf("%[^\n]",encrypt);
		printf("Case #%d: ",i);
		while(b>26)
		{
			b=b%26;
		}
		for(int j = 0; j<strlen(encrypt); j++)
		{
			
			if(encrypt[j]>=65 && encrypt[j]<=90)
			{
				if(encrypt[j]+b>90)
				{
					printf("%c",((encrypt[j]+b)%90) + 64);
				}
				else
				{
					printf("%c",encrypt[j]+b);
				}
			}
			else if(encrypt[j]>=97 && encrypt[j]<=122)
			{
				if(encrypt[j]+b>122)
				{
					printf("%c",((encrypt[j]+b)%122) + 96);
				}
				else
				{
					printf("%c",encrypt[j]+b);
				}
			}
			else
			{
				printf("%c",encrypt[j]);
			}
			//printf("%d \n",encrypt[j]);
		}
		printf("\n");
	}	
}
