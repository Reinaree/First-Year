#include<stdio.h>
int main()
{
int a,nilai,pangkat,hasil=1;
printf("nilai : ");scanf("%d",&nilai);
printf("pangkat : ");scanf("%d",&pangkat);

for(a=1;a<=pangkat;a=a+1)
{
hasil=hasil*nilai;
}

printf("%d pangkat %d adalah %d",nilai,pangkat,hasil);

getchar();
}
