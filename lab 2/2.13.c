#include <stdio.h>
int main(void) {
    int x;
    scanf("%d", &x);
    if (x%10>=2 && x%10<=4)
        printf("%d рубля", x);
    else if (x%10==1)
        printf("%d рубль", x);
    else
        printf("%d рублей", x);
}