#include <stdio.h>
int main(void)
{
	char a[10],b[10],c[10],d[8],e[8],f[8];
	scanf("%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]",a,d,b,e,c,f);
	printf("%-11s%s\n%-11s%s\n%-11s%s",a,d,b,e,c,f);
	printf("\n");
	getchar();
	return 0;
}
