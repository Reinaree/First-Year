#include <stdio.h>
int main(void)

{
	int T;
	char temp,sym,sym1,sym2;
	scanf("%d\n",&T);
	for(int i=1; i<=T;i++)
	{
		scanf("%c %c %c",&sym,&sym1,&sym2);
		//getchar();
		//printf("%d %d %d\n",sym[1],sym1[1],sym2[1]);
//		getchar();
//		getchar();
//	for(int j=0; j<3; j++)
//	{
//	}
		if(sym>sym1)
		{
			temp=sym;
			sym=sym1;
			sym1=temp;
		}
		if(sym>sym2)
		{
			temp=sym;
			sym=sym2;
			sym2=temp;
		}
		if(sym1>sym2)
		{
			temp=sym1;
			sym1=sym2;
			sym2=temp;
		}
		//printf("%d %d %d",sym,sym1,sym2);
		printf("Case #%d: %c %c %c\n",i,sym,sym1,sym2); getchar();
	}
}
