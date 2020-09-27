#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int h;
	int i;
	int j;
	b=400;
	c=100;
	scanf("%d",&a);
	for(e=1; e<=a; e++)
	{
		scanf("%d",&d);
		f=d/b;
		h=d/c;
		i=d/4;
		printf("Case #%d: %d\n",e,f-h+i);			
	}
	
	getchar();
	return 0;
}
