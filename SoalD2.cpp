#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a== 111 || a==222 || a==333|| a==444 || a==555 || a==666 || a==777 || a==888 || a==999 )
	{
		a=a/111;
		printf("0.%d...\n",a);
	}
	else
	{
		if(a>=500)
		{
		printf("%.3f...\n",(float)a/999-0.001);
		}
		else
		{
		printf("%.3f...\n",(float)a/999);
		}
	}
	if(b== 111 || b==222 || b==333|| b==444 || b==555 || b==666 || b==777 || b==888 || b==999 )
	{
		b=b/111;
		printf("0.%d...\n",b);
	}
	else 
	{
		if(b>=500)
		{
		printf("%.3f...\n",(float)b/999-0.001);
		}
		else
		{
		printf("%.3f...\n",(float)b/999);
		}
	}
	if(c== 111 || c==222 || c==333|| c==444 || c==555 || c==666 || c==777 || c==888 || c==999 )
	{
		c=c/111;
		printf("0.%d...\n",c);
	}
	else 
	{
		if(c>=500)
		{
		printf("%.3f...\n",(float)c/999-0.001);
		}
		else
		{
		printf("%.3f...\n",(float)c/999);
		}
	}
	getchar();
	return 0;
}
