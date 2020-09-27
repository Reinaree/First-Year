#include <stdio.h>

int main(void)
{
	char name1[200],name2[200],name3[200];
	int a,b,c,d;
	scanf("%[A-Za-z]%d%[A-Za-z]%d%[A-Za-z]%d",name1,&a,name2,&b,name3,&c);
	printf("%-11s%d\n",name1,a);
	printf("%-11s%d\n",name2,b);
	printf("%-11s%d\n",name3,c);
}
