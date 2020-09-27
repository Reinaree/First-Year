#include<stdio.h>
int main()
{
	int angka[100000],count=0,temp=0,tempang;
	FILE *fp=fopen("testdata.txt","r");
	while(!feof(fp))
	{
		fscanf(fp,"%d ",&angka[count]);
		count++;
	}
	for(int i=0;i<count;i++)
	{
		for(int j=0;j<=angka[i];j++)
		{
			tempang = j*j;
			if(tempang==angka[i])
			{
				angka[i]=-angka[i];
			}
		}
		temp= temp + angka[i];
		printf("%d\n",angka[i]);
	}
	printf("Special sum of %d datas is %d",count,temp);
}
