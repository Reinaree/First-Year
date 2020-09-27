#include <stdio.h>
int main()
{
	int a,b,n[10000],c[10000][10000];
	int color,friends;
	char size[10000];
	int disc;
	int m;
	int l;
	int s;
//	for(int i=0; i<=10001; i++)
//	{
//		n[i]= 0;
//		size[i]=' ';
//		for(int j=0; j<=10001; j++)
//		{
//			c[i][j]=0;
//		}
//	}
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		scanf("%d",&friends);
		for(int j=1; j<=friends; j++)
		{
			scanf("%s %d",size[j],&color);
			c[color][j]=color;
		}
	}
}
