#include <stdio.h>

#include <conio.h>

int main()

{  char *p_char,*cd;

 short *p_short;

 int *p_int;

 long *p_long;

 float *p_float;

 double *p_double, *dc;

 long double *p_long_double;

printf("sizeof:\n");

printf("-char=%u\n",sizeof(char));

printf("-short=%u\n",sizeof(short));

printf("-int=%u\n",sizeof(int));

printf("-long=%u\n",sizeof(long));

printf("-float=%u\n",sizeof(float));

printf("-double=%u\n",sizeof(double));

printf("-long double=%u\n\n\n",sizeof(long double));
}