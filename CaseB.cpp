#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,b,c;
	char d[1000];
	scanf("%d",&a);
	for(int x=1;x<=a;x++)
	{
		getchar();
		scanf("%[^\n]",d);
		printf("Case #%d : ",x);
		for(c=strlen(d)-1;c>=0;c--)
		{	
		printf("%c", d[c] );		
		}
		printf("\n");
	}
}
