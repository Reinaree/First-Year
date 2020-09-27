#include <stdio.h>

int main(void)
{
	char name1[200],name2[200],name3[200];
	char angka1[200],angka2[200],angka3[200];
	scanf("%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]",name1,angka1,name2,angka2,name3,angka3);
	printf("%-11s%s\n",name1,angka1);
	printf("%-11s%s\n",name2,angka2);
	printf("%-11s%s\n",name3,angka3);
}
