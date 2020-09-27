#include <stdio.h>

int main()
{
	int a,b[1000],awal,tengah,akhir,search,temp;
	printf("Input banyaknya angka : ");
	scanf("%d",&a);
	printf("Input angka : ");
	for(int i=0; i<a; i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Input angka yang ingin dicari :");
	scanf("%d",&search);
	
	// ini untuk menentukan posisi
	awal = 0;
	akhir = a-1;
	tengah = (awal + akhir )/2;
	
	while(awal <= akhir)
	{
		if(b[tengah]<search) //jika nilai array yang ditengah lebih kecil dari angka yang dicari maka dia akan pindah ke index tengah + 1
		{
			awal = tengah +1;
		}
		else if(b[tengah]==search)
		{
			printf("Ditemukan\n");
			break;//kita pasang break disini agar tidak mencari lagi ketika sudah ditemukan
		}
		else 	
		{
		//kondisi ini akan jalan ketika kedua kondisi diatas tidak terpenuhi
		//yaitu saat yang pada pencarian nilai index tengah > search dan index tengah != angka yang dicari
		//maka dalam kondisi ini akan dimulai dari sebelah kiri index tengah dan dibagi 2 lagi seperti pada tahap awal
			akhir = tengah - 1;
		}
		tengah = (awal + akhir)/2;
	}
	// ketika bagian awal sudah mengecek sampai dia di posisi lebih besar daripada akhir maka sudah pasti data yang dicari tidak ditemukan
	if(awal > akhir)
	{
		printf("Tidak ditemukan\n");
	}
}

