#include <stdio.h>
#include <limits.h>
int main(void)
{
printf("Ukuran memory untuk tipe data char: %d byte \n", sizeof(char));
printf("Ukuran memory untuk tipe data short: %d byte \n", sizeof(short));
printf("Ukuran memory untuk tipe data int: %d byte \n", sizeof(int));
printf("Ukuran memory untuk tipe data long: %d byte \n", sizeof(long));
printf("\n");
printf("Nilai minimal tipe data char: %d \n", SCHAR_MIN);
printf("Nilai minimal tipe data short: %d \n", SHRT_MIN);
printf("Nilai minimal tipe data int: %d \n", INT_MIN);
printf("Nilai minimal tipe data long: %d \n", LONG_MIN);
printf("\n");
printf("Nilai maksimal tipe data char: %d \n", SCHAR_MAX);
printf("Nilai maksimal tipe data short: %d \n", SHRT_MAX);
printf("Nilai maksimal tipe data int: %d \n", INT_MAX);
printf("Nilai maksimal tipe data long: %d \n", LONG_MAX);
printf("\n");
return 0;
}
