#include <stdio.h>
int main(void)
{
	int a,pembagi,x,d,hasilakhir,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		hasilakhir=0;
		scanf("%d %d %d",&b,&c,&d);
		hasilakhir=b*c%d;
		printf("%d\n",hasilakhir);
		while(hasilakhir!=b)
		{
			b=b*2;
			hasilakhir=b*c%d;
		}
		printf("Case #%d: %d",i,hasilakhir);
	}
}
