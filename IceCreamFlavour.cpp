#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,c,d;
	int tempc,tempv ,temps;	
	char flavour[100001];
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		tempc=0;
		tempv=0;
		temps=0;
		scanf("%d",&b);
		for(int j=0; j<b;j++)
		{
			scanf("%s",flavour);
			for(int x=0;x<strlen(flavour);x++)
			{
				if(flavour[x]=='c')
				{
					tempc+=1;
				}
				else if(flavour[x]=='s')
				{
					temps+=1;
				}
				else if(flavour[x]=='v')
				{
					tempv+=1;
				}
			}
		}
//		for(int x=0; x<strlen(flavour);x++)
//		{
//			if(flavour[x]=='c')
//			{
//				tempc+=1;
//			}
//			else if(flavour[x]=='s')
//			{
//				temps+=1;
//			}
//			else if(flavour[x]=='v')
//			{
//				tempv+=1;
//			}
//		}
//		printf("TEMP C %d\nTEMP V %d\nTEMP S %d",tempc,tempv,temps);
		printf("Case #%d:\n",i);
		if(tempc>temps && tempc > tempv)
		{
			printf("chocolate\n");
		}
		else if(temps>tempc && temps > tempv) 
		{
			printf("strawberry\n");
		}
		else if(tempv>temps && tempv > tempc)
		{
			printf("vanilla\n");
		}
		else if(tempc==temps && tempc !=tempv)	
		{
			printf("chocolate\n");
			printf("strawberry\n");
		}
		else if(tempc==tempv && tempc !=temps)
		{
			printf("chocolate\n");
			printf("vanilla\n");
		}
		else if(temps==tempv && temps != tempc)
		{
			printf("strawberry\n");
			printf("vanilla\n");
		}
		else if(tempc==temps && tempc==tempv)
		{
			printf("chocolate\n");
			printf("strawberry\n");
			printf("vanilla\n");
		}
		
	}
	return 0;
}
