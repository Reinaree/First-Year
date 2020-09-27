#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		scanf("%d",&b);
		printf("Case #%d:\n",i);
		for(int j=b; j>0;j--)
		{
			if(j==b || j==5 || j==10 || j==30 || j==60)
			{
				printf("%d SECONDS TILL NEW YEAR!!\n",j);
			}
//			if(j==5)
//			{
//				printf("%d SECONDS TILL NEW YEAR!!\n",j);
//			}
//			if(j==10)
//			{
//				printf("%d SECONDS TILL NEW YEAR!!\n",j);
//			}
//			if(j==30)
//			{
//				printf("%d SECONDS TILL NEW YEAR!!\n",j);
//			}
//			if(j==60)
//			{
//				printf("%d SECONDS TILL NEW YEAR!!\n",j);
//			}
			else
			{
				printf("%d\n",j);
			}
		}
	} 
}
