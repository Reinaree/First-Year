#include <stdio.h>
#include <string.h>
int main(void)
{
	
	int a,b,c,d;
	long long int pangkat1;
	long long int total;
	char x[100000];
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		total = 0;
		pangkat1=1;
		scanf("%s",x);
		for(int j=strlen(x)-1; j>=0;j--)
		{
			if(x[j]==')')
			{
				total=total-pangkat1;
				j=j-3;
			}
			else if(x[j]=='1')
			{
				total=total+pangkat1;
			}
			else if(x[j]=='0')
			{
				total = total;
			}
			pangkat1=pangkat1*2;				
		}
		printf("Case #%d: %lld\n",i,total);
	}
}
