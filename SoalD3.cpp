#include <stdio.h>
int main(void)
{
	char a[100][100];
	int b,c,d,e,f,g,h,i,j,k,l,makan,kurang;
	scanf("%d",&b);
	makan = 0;
	for(c=1;c<=b;c++)
	{
		scanf("%d %d",&d,&e);
		for(f=0;f<d;f++)
		{
			scanf("%s",a[f]);
		}
		for(g=0;g<d;g++)
		{
			for(h=0;h<e;h++)
			{
				kurang = 1;
				if(a[g][h]=='S')
				{
					kurang = 0;
				}
				break;
			}
			if(kurang==1)
			{
				makan = makan + 1;
			}
		}
		printf("Case #%d: %d\n",c,makan);
		makan=0;
	}
}
