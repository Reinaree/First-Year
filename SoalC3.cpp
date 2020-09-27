#include <stdio.h>
int main(void)
{
	int a;
	int c;
	float x,xx,xxx,y,yy,yyy,z,zz,zzz;
	float hasilx,hasily,hasilz;
	float hasilxx,hasilyy,hasilzz;
	float totalx,totaly,totalz;
	float totalxx,totalyy,totalzz;
	scanf("%d",&a);
	for(c=1; c<=a; c++)
	{
		scanf("%f %f %f",&x,&y,&z);
		scanf("%f %f %f",&xx,&yy,&zz);
		printf("Case #%d:\n",c);
		hasilx  = x  * yy; //x setelah dikali yy
		hasily  = y  * yy; //y setelah dikali yy 
		hasilz  = z  * yy; //z setelah dikali yy
		hasilxx = xx * y; // xx setelah dikali y
		hasilyy = yy * y; // yy setelah dikali y
		hasilzz = zz * y; // zz setelah dikali y
		totalx = hasilx-hasilxx; // x1 - x2
		totaly = hasily-hasilyy; // y1 - y2
		totalz = hasilz-hasilzz; // z1 - z2
		if(totaly == 0 )
		{
			totalx = totalz/totalx;
			hasilx  = x  * xx; //x setelah dikali xx
			hasily  = y  * xx; //y setelah dikali xx
			hasilz  = z  * xx; //z setelah dikali xx
			hasilxx = xx * x; // xx setelah dikali x
			hasilyy = yy * x; // yy setelah dikali x
			hasilzz = zz * x; // zz setelah dikali x
			totalxx = hasilx-hasilxx; //hasil x ketika x terhitung
			totalzz = hasilz-hasilzz; // hasil z ketika x terhitung
			totalyy = hasily-hasilyy; //hasil y setelah x terhitung
			totalyy = totalzz/totalyy;
			printf("x = %.4f\n",totalx);
			printf("y = %.4f\n",totalyy);
		}
	}
	getchar();
	return 0;
}
