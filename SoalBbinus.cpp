#include <stdio.h>
int main(void)
{
	int input,b,total;
	scanf("%d",&input);
	total=input+3;
	b=total/3*2 + total%3;
	printf("%d",b);
	printf("\n");
	getchar();
	return 0;
}
