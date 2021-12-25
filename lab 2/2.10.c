#include <stdio.h>
int main(void) {
    int a,b,c;
    printf("Введите три числа\n");
    scanf("%d %d %d", &a, &b, &c);
    int i = 0;
    if (a>i)
        i=a;
    if (b>i)
        i=b;
    if (c>i)
        i=c;
printf("Наибольшее число: %d \n",i);
return 0;
}