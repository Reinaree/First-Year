#include <stdio.h>
int main(void)
{
	int input;
	int i,j;
	scanf("%d", &input);
	for(i = 1; i <= input; i++)
		{
	    	for(j = 1; j <= input-i; j++)
				{
				    printf(" ");
				}	
		    for(j = 1; j <= 2*i-1; j++)
		        {
		        	printf("*");
		        }
       		printf("\n");
		}		
	for(i = 1; i < input; i++)
	   	{
	   		for(j = 1; j <= i; j++)
			    {
			    	printf(" ");
		    	}
	
			for(j = 2*input-2*i-1; j>=1; j--)
			    {
			    	printf("*");
			    }
		   printf("\n");
		}			
	getchar();
	return 0;
}
