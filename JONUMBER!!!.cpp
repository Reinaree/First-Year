#include<stdio.h>     
int main() {
 int a[10], n, i;
 int q;
 int temp;
 int temp2 = 0;
 int cek[10];
 int b;
 long pembagi[1000000];
 long pembagi2[1000000];
 scanf("%d", &q);
 for (i = 1; i < 1000000000; i++)
 {
  temp = i;
  for (int j = 0; j < 10; j++)
  {
   a[j] = temp % 2;
   temp = temp / 2;
  }
  for (int k = i - 1; k >= 0; i--)
  {
   if (a[k] == 1)
   {
    a[k] = 8;
   }
   else if (a[k] == 0)
   {
    a[k] = 7;
   }
  }
  a[0] = a[0] * 1;
  a[1] = a[1] * 10;
  a[2] = a[2] * 100;
  a[3] = a[3] * 1000;
  a[4] = a[4] * 10000;
  a[5] = a[5] * 100000;
  a[6] = a[6] * 1000000;
  a[7] = a[7] * 10000000;
  a[8] = a[8] * 100000000;
  a[9] = a[9] * 1000000000;
  for (int f = 10 - 1; f >= 0; f--) {
   temp2 = temp2 + a[f];
  }
  pembagi[i] = temp2;
  a[0] = a[0] / 1;
  a[1] = a[1] / 10;
  a[2] = a[2] / 100;
  a[3] = a[3] / 1000;
  a[4] = a[4] / 10000;
  a[5] = a[5] / 100000;
  a[6] = a[6] / 1000000;
  a[7] = a[7] / 10000000;
  a[8] = a[8] / 100000000;
  a[9] = a[9] / 1000000000;
  for (int r = 0; r < 10; r++) {
   if (a[r] == 7) {
    a[r] = 8;
   }
   else if (a[r] == 8) {
    a[r] == 7;
   }
  }
  a[0] = a[0] * 1;
  a[1] = a[1] * 10;
  a[2] = a[2] * 100;
  a[3] = a[3] * 1000;
  a[4] = a[4] * 10000;
  a[5] = a[5] * 100000;
  a[6] = a[6] * 1000000;
  a[7] = a[7] * 10000000;
  a[8] = a[8] * 100000000;
  a[9] = a[9] * 1000000000;
  for (int f = 10 - 1; f >= 0; f--) {
   temp2 = temp2 + a[f];
  }
  pembagi2[i] = temp2;
 }
 for (int b = 1; b <= q; b++) {
  scanf("%d", &n);
  for (int t = 0; t < 1000000000; t++) {
   if (n / pembagi[t] == 0) {
    printf("Yes\n");
    break;
   }
   else if (n / pembagi2[t] == 0) {
    printf("Yes\n");
    break;
   }
   else
    printf("No\n");
   break;
  }
 }
}
