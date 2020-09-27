#include<stdio.h>
int main(void)
{
 	long long int a;
	long long int b; 
	long long int c; 
	long long int d;
	long long int e; 
	long long int f;
	long long int g;
	long long int k;
	long long int j;
	long long int l;
	long long int h;
	long long int i;
	long long int m;
	long long int n;
 		scanf("%lld", &a);
 			for (b = 1; b<=a; b++) {
  				scanf("%lld", &c);
  				d = c;
  				e = 0;
  				while (d > 0) {
   					f = d % 10;
   					e = e * 10 + f;
   					d = d / 10;
  				}	
  					h = c + e;
  					n = h;
  					j = 0;
  				while (n > 0) {
   					k = n % 10;
   					j = j * 10 + k;
   					n = n / 10;
  				}
  			printf("Case #%lld: %lld %lld %lld %lld\n", b,c,e,h,j);
 			}
 	getchar();
 	return 0;
}
