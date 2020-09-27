#include<stdio.h>
#include<string.h>
int main()
{
	/*float angka1 = 10.2;
	int tempAngka;
	
	tempAngka = (int) angka1;
								//harus (int) kalo ngga error
	printf("%.2f\n", angka1);
	printf("%d", tempAngka);
	//casting
	*/
	
	int angka1, angka2, hasil;
	char oper[2];
	
	printf("masukkan angka1: ");
	scanf("%d", &angka1);
	printf("masukkan angka2: ");
	scanf("%d", &angka2);
	printf("masukkan operator yang diinginkan [+, -, :, *]: ");
	scanf("%s", oper);
	
	if(strcmp(oper,"+") == 0){
		hasil = angka1+angka2;
		printf("%d", hasil);
	}
	else if(strcmp(oper,"-") == 0){
		hasil = angka1-angka2;
		printf("%d", hasil);
	}
	else if(strcmp(oper,":") == 0){
		hasil = angka1/angka2;
		printf("%d", hasil);
	}
	else if(strcmp(oper,"*") == 0){
		hasil = angka1*angka2;
		printf("%d", hasil);
	}
	//case2, calc
	
	return 0;
	
	}
