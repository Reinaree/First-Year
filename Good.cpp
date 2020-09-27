#include <stdio.h>
#include <string.h>

void good()
{
	int T;
	char a[100];
	int temp;
	temp=0;
	scanf("%d",&T);
	for(int i=1; i<=T;i++)
	{
		temp =0;
		getchar();
		scanf("%[^\n]",a);
		for(int j=0; j<strlen(a); j++)
		{
			if((a[j]=='G'&&a[j+1]=='o'&&a[j+2]=='o'&&a[j+3]=='d') || (a[j]=='g'&&a[j+1]=='O'&&a[j+2]=='o'&&a[j+3]=='D') || (a[j]=='g'&&a[j+1]=='o'&&a[j+2]=='o'&&a[j+3]=='D') || (a[j]=='g'&&a[j+1]=='o'&&a[j+2]=='O'&&a[j+3]=='D') || (a[j]=='g'&&a[j+1]=='O'&&a[j+2]=='O'&&a[j+3]=='D') || (a[j]=='g'&&a[j+1]=='O'&&a[j+2]=='O'&&a[j+3]=='d') || (a[j]=='g'&&a[j+1]=='O'&&a[j+2]=='o'&&a[j+3]=='d') || (a[j]=='g'&&a[j+1]=='o'&&a[j+2]=='O'&&a[j+3]=='d') || (a[j]=='g'&&a[j+1]=='O'&&a[j+2]=='o'&&a[j+3]=='d') || (a[j]=='G'&&a[j+1]=='O'&&a[j+2]=='O'&&a[j+3]=='D') || (a[j]=='G'&&a[j+1]=='O'&&a[j+2]=='o'&&a[j+3]=='D') || (a[j]=='G'&&a[j+1]=='o'&&a[j+2]=='O'&&a[j+3]=='D') || (a[j]=='G'&&a[j+1]=='o'&&a[j+2]=='o'&&a[j+3]=='D') || (a[j]=='G'&&a[j+1]=='o'&&a[j+2]=='O'&&a[j+3]=='d') || (a[j]=='G'&&a[j+1]=='O'&&a[j+2]=='O'&&a[j+3]=='d') || (a[j]=='G'&&a[j+1]=='O'&&a[j+2]=='o'&&a[j+3]=='d')  || (a[j]=='g'&&a[j+1]=='o'&&a[j+2]=='o'&&a[j+3]=='d')  )
			{
				temp+=1;
				break;
			}
			else
			{
				temp+=0;
			}
		}
		//printf("%d",temp);
		if(temp==1)
		{
			printf("Case #%d: yes\n",i);
		}
		else
		{
			printf("Case #%d: no\n",i);
		}
	}
}


int main(void)
{
	good();
}
