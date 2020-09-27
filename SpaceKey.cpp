#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,looping;
	int temp;
	char kalimat[300];
	scanf("%d",&T);
	for(int i=1; i<=T; i++)
	{
		temp=0;
		scanf("%d",&looping);
		getchar();
		scanf("%[^\n]",kalimat);
		printf("Case #%d: ",i);
		for(int j=0;j<strlen(kalimat);j++)
		{
			if(kalimat[j]==' ')
			{
				temp+=1;
			}
			if(temp%2==0)
			{
				printf("%c",kalimat[j]);
			}
		}
		printf("\n");
	}
	
}
