#include <stdio.h>
int main(void)
{
        int a,b=0;
        scanf("%d",&a);
        b=(b*2)+1;
        for(int i=0;i<a;i++)
        {
            b=(b*2)+1;
        }
        printf("%d\n",b);
        getchar();
        return 0;
}

