#include<stdio.h>
int main(void) 
	{
	int a;
	int b;
	int c;
	int d; 
	int pem;
	int fak;
 	scanf("%d", &c);
 	for (d = 1; d <= c; d++) 
 	{  
  	scanf("%d", &a);
  	printf("Case #%d:\n", d);
  	for (b = 1; b <= a; b++) 
	{
  	 for (pem = 1; pem <= b; pem++) 
	   	{
    		if (b%pem == 0) 
			{
     			fak = fak + 1;
     			printf("%d",b);
    		}
   		}
   	if (fak == 2) 
	{
    printf("I will become a good boy.\n");
   	}
   	fak = 0;
  	}
 	}
 	getchar();
 	return 0;
}
