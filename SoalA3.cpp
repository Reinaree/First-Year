#include <stdio.h>
int main(void)
{
	int a,b,c[100000],d,doubleclick,y,ss,x,z,v,f,ulang;
	scanf("%d",&a);
	y=0;
	doubleclick=0;
	for(x=1 ; x<=a; x++ )
	{
		y=0;
		scanf("%d",&ss);
		for(z=0; z<ss; z++)
		{
			scanf("%d",&c[y]);
			for(v=0;v<y;v++)
			{
				if(c[v]==c[y])
				{	
					y=y-1;
				}
			}
			y=y+1;
			doubleclick=y;
		}
//		
//		
//		
//		
//		for(z=0;z<=y;z++)
//		{
//			printf("%d ",c[z]);
//		}
//		printf("\n");
//		
//		
//		
//		
//		
//		
//		
//		
//		
//		
//		
		for(f=0;f<y;f++)
		{
			for(ulang = f+1; ulang<y; ulang++)
		//	if(c[f]==0)
		//	{
		//		continue;
			//}
			//else
			//{
			if(c[f]-c[ulang]== 1 || c[f]-c[ulang]== -1)
			{
			// 	printf("%d & %d\n",c[f],c[ulang]);
				c[ulang]=0;
				doubleclick=doubleclick-1;
			}
		//}
	}
		printf("Case #%d: %d\n",x,doubleclick);
		y=0;
		doubleclick=0;
	}
	getchar();
	return 0;
}
