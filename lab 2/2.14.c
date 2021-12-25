#include <stdio.h>
int main(void) {
    int kod, min;
    scanf("%d %d", &kod, &min);
    switch (kod) {
        case 432:
            printf("Стоимость разговора 9,20 руб/мин: %.2f", 9.2 * min);
            break;
        case 95:
            printf("Стоимость разговора 4,10 руб/мин: %.2f", 4.1 * min);
            break;
        case 861:
            printf("Стоимость разговора 2,05 руб/мин: %.2f", 2.05 * min);
            break;
        case 844:
            printf("Стоимость разговора 2,5 руб/мин: %.2f", 2.5 * min);
            break;
        default:
            printf("Неправильный код города");
    }
}