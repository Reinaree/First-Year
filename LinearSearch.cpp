#include <stdio.h>
int main()
{
	int a,b[1000],search,temp;
	printf("Banyak angka yang diinput : ");
	scanf("%d",&a);
	printf("Masukkan angka yang diinginkan : ");
	for(int i=0; i<a; i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Masukkan angka yang ingin dicari : ");
	scanf("%d",&search);
	
	for(int i=0; i<a; i++)
	{
		if(b[i]==search)
		{
			printf("angka ditemukan\n");
			break;
		}
		if(i==a-1)
		{
			printf("angka tidak ditemukan\n");
		}
		
	}
}
