#include<stdio.h>
int main(void)
{
	int a,b,c;
	int tmpL;
	int tmpB;
	char nama[200];
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		tmpL=0;
		tmpB=0;
		scanf("%d",&b);
		for(int j=0; j<=b; j++)
		{
			//getchar();
			scanf("%c",&nama);
			for(int x=0; x<=b;x++)
			{
				if(nama[x]=='L')
				{
					tmpL+=1;
				}
				else if(nama[x]=='B')
				{
					tmpB+=1;
				}
				else if(nama[x]=='T')
				{
					tmpL+=1;
					tmpB+=1;
			}
			}
		}
		//printf("BIBI %d LILI %d\n",tmpB,tmpL);
		if(tmpL==tmpB)
		{
			printf("None\n");
		}
		else if(tmpL>tmpB)
		{
			printf("Lili\n");
		}
		else if(tmpB>tmpL)
		{
			printf("Bibi\n");
		}
	}
}
