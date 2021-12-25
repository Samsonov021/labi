#include <stdio.h>
#include <math.h>
int main(void){
    int n, x, s = 0;
    scanf("%d", &n);
    x = n;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    if (pow(s, 3) == pow(x, 2))
        printf("Верно");
    else
        printf("Неверно");
    return 0;
}
