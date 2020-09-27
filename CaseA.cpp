#include <stdio.h>
#include <string.h>
int main(void)
{
	int a,b,c;
	char d[100];
	scanf("%d", &a);
	for(b=1;b<=a;b++)
	{
		scanf("%s",d);getchar();
		printf("Case %d:\n",b);
		for(c=0;c<strlen(d);c++)
		{
			if(c==0)
			{
			printf("%d",d[0]);
			} 
			else
			{
			printf("-%d",d[c]);
			}
		}
		printf("\n");
	}
	
}
