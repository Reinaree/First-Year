#include <stdio.h>
int main(void)
{
	int a,b,x,y,z,m,n,p,jojo,bibi,jojo2,bibi2,x1,x2,y1,y2,z1,z2,hasilx,hasily,hasilz,hasilxx,hasilyy,hasilzz;
	int totalx,totaly,totalz;
	int totalxx,totalyy,totalzz;
	int pembanding1,pembanding2;
	scanf("%d",&a);
	for(int i=1; i<=a;i++)
	{
		x=0;
		y=0;
		z=0;
		m=0;
		n=0;
		p=0;
		jojo=1;
		bibi=1;
		jojo2=1;
		bibi2=1;
		scanf("%d %d %d %d %d %d",&x,&y,&z,&m,&n,&p);
		x1=jojo;
		y1=-(m*bibi);
		z1=x+(-x*m);
		x2=jojo2;
		y2=-(bibi2*n);
		z2=-y+(y*n);
	//	printf("x1 %d y1 %d z1%d\nx2 %d y2 %d z2  %d\n",x1,y1,z1,x2,y2,z2);
		hasilx= x1 * x2;
		hasily= y1 * x2;
		hasilz= z1 * x2;
		hasilxx= x2 * x1;
		hasilyy= y2 * x1;
		hasilzz= z2 * x1;
		totalx= hasilx - hasilxx;
		totaly= hasily - hasilyy;
		totalz= hasilz - hasilzz;
	//	printf("TOTAL X %d TOTAL Y %d TOTAL Z %d ",totalx,totaly,totalz);
		if(totalx==0)
		{
			totaly= totalz/totaly;
			hasilx= x1 * y2;
			hasily= y1 * y2;
			hasilz= z1 * y2;
			hasilxx= x2 * y1;
			hasilyy= y2 * y1;
			hasilzz= z2 * y1;
			totalxx=hasilx - hasilxx;
			totalyy=hasily - hasilyy;
			totalzz=hasilz - hasilzz;
			totalxx=totalzz/totalxx;
		}
		//printf("\n\ntotalxx %d totaly %d \n\n",totalxx,totaly);
		printf("Case #%d: ",i);
		//printf("z berapa %d p berapa %d\n",z,p);
		pembanding1= totalxx+z;
		pembanding2= (totaly+z)*p;
		//printf("1!!!!  %d  2!!!!  %d ",pembanding1,pembanding2);
		if(pembanding1==pembanding2)
		{
			printf("YES\n");	
		}	
		else
		{
			printf("NO\n");
		}
		
	}
	
}
