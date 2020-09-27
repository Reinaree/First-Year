#include <stdio.h>

int main(void)
{
	int a,b,c;
	int tmp1;
	scanf("%d",&a);
	tmp1=0;
	for(int i=1; i<=a; i++)
	{
		scanf("%d",&b);
		if(b==1)
		{
			tmp1+=1;
		}
	}
	//printf("TMP 0 = %d TMP 1 = %d\n",tmp0,tmp1);
	if(tmp1!=0)
	{
		printf("not easy\n");
	}
	else
	{
		printf("easy\n");
	}
}
