#include <stdio.h>
int main(void)
{
	int a,b;
	int jam;
	int menit;
	scanf("%d",&a);
	for (int i=1; i<=a; i++)
	{
		jam=0;
		menit=0;
		scanf("%d",&menit);
		jam = menit / 60;
		menit = menit%60;
		if(jam>9)
		{
			if(menit>=10)
			{
				printf("Case #%d: %d:%d\n",i,jam,menit);
			}
			else
			{
				printf("Case #%d: %d:0%d\n",i,jam,menit);
			}
		}
		else if(jam<=9)
		{
			if(menit>=10)
			{
				printf("Case #%d: 0%d:%d\n",i,jam,menit);
			}
			else
			{
				printf("Case #%d: 0%d:0%d\n",i,jam,menit);
			}
		}
//		if(menit>=60 && menit%60>=10 && menit<720)
//		{
//			printf("Case #%d: 0%d:%d\n",i,jam,menit%60);
//		}
//		else if(menit>=60 && menit%60<=10 && menit<720)
//		{
//			printf("Case #%d: 0%d:0%d\n",i,jam,menit%60);
//		}
//		else if(menit>=720 && menit%60>=10)
//		{
//			printf("Case #%d: %d:%d\n",i,jam,menit%60);
//		}
//		else if(menit>=720 && menit%60<10)
//		{
//			printf("Case #%d: %d:0%d\n",i,jam,menit%60);
//		}
//		else if(menit <10 )
//		{
//			printf("Case #%d: 00:0%d\n",i,menit);
//		}
//		else if(menit>=10 && menit<60)
//		{
//			printf("Case #%d: 00:%d\n",i,menit);
//		}
	}
}
