#include <stdio.h>
int main(void)
{
	long long  GPB;//gaji per bulan
	long long  GPT;//gaji per tahun
	long long  GKP;//gaji kena pajak
	long long  Tunjangan;
	long long  istri;
	long long  anak;
	long long  GB;//Gaji bersih
	long long  TP1;//TARIF PAJAK
	long long  TP2;
	long long  TP3;
	long long  TP4;
	long long  TTP;//total tarif pajak
		printf("Masukkan gaji per bulan : Rp.");
		scanf("%lld",&GPB);
		GPT = GPB*12;
		printf("Gaji per tahun anda : %lld",GPT);
		printf("\n");
		printf("Masukkan jumlah istri : ");
		scanf("%lld",&istri);
		Tunjangan = 54000000;
			if(istri>=1){
			Tunjangan = Tunjangan+4500000;
			}

			printf("Masukkan jumlah anak : ");
			scanf("%lld",&anak);
			if(anak<=0){
			Tunjangan = Tunjangan + 0;
			printf("Tunjangan anda : %lld",Tunjangan);
			}
			else if(anak==1){
			Tunjangan = Tunjangan + 4500000;
			printf("Tunjangan anda : %lld",Tunjangan);
			}
			else if(anak==2){
			Tunjangan = Tunjangan + 4500000*2;
			printf("Tunjangan anda : %lld",Tunjangan);
			}
			else if(anak>=3){
			Tunjangan = Tunjangan + 4500000*3;
			printf("Tunjangan anda : %lld",Tunjangan);
			}
			if(GPT<Tunjangan){
			TP1=0;
			TP2=0;
			TP3=0;
			TP4=0;
			}
			else if(GPT>Tunjangan){
			GKP=GPT-Tunjangan;
			}
			if(GKP>=54000000 && GKP<=300000000){
			TP1= 50000000*5/100;
			GKP= GKP - 50000000;
			TP2= GKP * 15/100;
			}
			else if(GKP>300000000 && GKP<=800000000){
			TP1= 50000000*5/100;
			TP2= 250000000*15/100;
			GKP= GKP-300000000;
			TP3= GKP*25/100;
			}
			else if(GKP>800000000){
			TP1= 50000000*5/100;
			TP2= 250000000*15/100;
			TP3= GKP*25/100;
			GKP= GKP-800000000;
			TP4= GKP*30/100; 
			}
			
			TTP = TP1+TP2+TP3+TP4;
			GB=GPT-TTP;
			printf("\nTarif pajak anda adalah :Rp.%lld",TTP);
			printf("\nGaji bersih anda adalah :Rp.%lld",GB);
			getchar();

return 0;
}

