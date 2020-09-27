#include<stdio.h>
int main(void) {
	int b,c,x,y,z;
	char  d,e,f,h,g,i;
	scanf("%d\n", &b);
	for (c = 1; c <= b; c++) {
	scanf("%c %c %c",&d,&e,&f);
	for(int a=0; a<3; a++){
	if (d > e); {
   	g = e;
   	h = d;
   	e = h;
   	d = g;
  	}
  	if (e > f) {
   	g = e;
   	h = f;
   	e = h;
   	f = g;
  	}
  	if (d > e) {
   	g = e;
   	h = d;
   	e = h;
   	d = g;
  	}
  	if (e > f) {
   	g = e;
  	h = f;
  	e = h;
  	f = g;
  	}
	}
  printf("Case #%d: %c %c %c\n",c,d,e,f); getchar();
 }
	return 0;
}
