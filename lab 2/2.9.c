#include <stdio.h>
int main(void) {
    int x;
    printf("Введите трехзначное число\n");
    scanf("%d", &x);
    if (x / 100 == x % 100 / 10 | x / 100 == x % 10 | x % 100 / 10 == x % 10)
        printf("Есть повторяющиеся цифры");
    else
        printf("Нет повторяющихся цифр");
}