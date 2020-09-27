#include <stdio.h>

int main()
{
	int a,b[1000],temp,posisi;
	int count=0;
	scanf("%d",&a);
	for(int i=0; i<a; i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0; i<a-1; i++)
	{
		posisi = i;
		for(int j=i+1; j<a; j++)
		{
			if(b[posisi]>b[j])
			{
				posisi = j;
			}
		}
		if(posisi != i)
		{
			temp = b[i];
			b[i] = b[posisi];
			b[posisi] = temp;
			count ++;
		}
	}
	for(int i=0; i<a; i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n\nCount = %d",count);
}

