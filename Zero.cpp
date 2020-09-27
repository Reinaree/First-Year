#include<stdio.h>
int main()
{
	int t = 0,s=0,o=0,n=0,len=0,max1=0,max0=0;
	char a[100001];
	scanf("%d",&t);
	for(int i = 1; i <= t;i++)
	{
		scanf("%d",&n);
		for(int j = 0; j <= n; j++)
		{
			scanf("%c",&a[j]);
			len++;
		}
		for(int k = 0 ; k < len;k++)
		{
			if(a[k] == '1')
			{
				s++;
				if(s > max1)
				{
					max1 = s;
				}
				if(a[k+1] != '1')
				{
					s = 0;
					continue;
				}
			}
			if(a[k] == '0')
			{
				o++;
				if(o > max0)
				{
					max0 = o;
				}
				if(a[k+1] != '0')
				{
					o = 0;
					continue;
				}
			}
		}
		if(max1 > max0)
		{
			printf("Case #%d: 1 %d\n",i,max1);
		}
		else if(max0 > max1)
		{
			printf("Case #%d: 0 %d\n",i,max0);
		}
		max0 = 0,max1=0,s=0,o=0,len=0;
	}
}
