#include <stdio.h>

int main()
{
	int a,b[1000];
	int temp,count=0;
	printf("Input banyak angka : ");
	scanf("%d",&a);	
	for(int i=0; i<a; i++)
	{
		scanf("%d",&b[i]);
		for(int j=0; j<a; j++)
		{
			for(int k=0; k<a; k++)
			{
				if(b[k]>b[k+1])
				{
					temp = b[k];
					b[k] = b[k+1];
					b[k+1]= temp;
					count+=1;
				}
			}
		}
	}
	for(int i=0; i<a; i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n\nCount = %d",count);
	
	
}
