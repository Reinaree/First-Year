#include<stdio.h>
#include<string.h>
int main(void)
{
	int a=0;
	char leadzero[100];
	scanf("%s",leadzero);
	a = strlen(leadzero);
	for(int i=0; i<30-a; i++)
	{
		printf("0");
	}
	printf("%s\n",leadzero);
}
