#include<stdio.h>
void qsort(int num[],int first,int last)
{
	int i,j,temp,pivot;
	if(first<last)
	{
		i=first;
		j=last;
		pivot=first;
		while(i<j)
		{
			while(num[i]<=num[pivot]&&i<last)
			{
				i++;
			}
			while(num[j]>num[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
		temp=num[pivot];
		num[pivot]=num[j];
		num[j]=temp;
		qsort(num,first,j-1);
		qsort(num,j+1,last);
	}
}
int main()
{
	int a,b[1000],c,d,awal,search,tengah,akhir;
	scanf("%d",&a);
	for(int i=1; i<=a;i++)
	{
		scanf("%d",&c);
		for(int j=0;j<c;j++)
		{
			scanf("%d",&b[j]);	
		}
		qsort(b,0,c-1);
		printf("HASIL:");
		for(int j=0;j<c;j++)
		{
			printf(" %d",b[j]);	
		}
		printf("\n");
		printf("Masukkan angka yang di cari : ");
		scanf("%d",&search);
		
		awal = 0;
		akhir = c-1;
		tengah = (awal+akhir)/2;
		while(awal<=akhir)
		{
			if(b[tengah]<search)
			{
				awal = tengah +1;
			}
			else if(b[tengah]==search)
			{
				printf("DITEMUKAN\n");
				break;
			}
			else
			{
				akhir = tengah -1;
			}
			tengah = (awal+akhir)/2;
		}
		if(awal>akhir)
		{
			printf("TIDAK KETEMU BEB\n");
		}

	}	
		
}
