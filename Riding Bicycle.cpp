#include <stdio.h>

int main(void)
{
	int a,b,v,d,t,temph,tempm;
	int m,h;
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		v=0;
		d=0;
		h=0;
		t=0;
		m=0;
		scanf("%d %d %d:%d",&v, &d, &h,&m);
		t=d/v*60;
		printf("%d",t);
		
		
	}
}
