#include<stdio.h>
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	
	return gcd(b%a,a);
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int main()  
{  
    int a = 15, b = 21;  
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));  
    return 0;  
}  
