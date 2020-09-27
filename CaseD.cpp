#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[50];
	int d,e,f;
	scanf("%d",&d);
	for(e=1;e<=d;e++)
	{	
		scanf("%d",&f);
		printf("Case #%d:\n",e);
		for(int g=1; g<=f;g++)
		{
			getchar();
			scanf("%s",a);
			if(strlen(a)>=10)
			{
				printf("%s",a);
				printf("\n");
			}
		}
		
	}
}
