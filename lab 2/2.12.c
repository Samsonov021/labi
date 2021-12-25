#include <stdio.h>
int main(void) {
    int x;
    scanf("%d", &x);
    if ((x>=1)&&(x<=5))
        printf("Увы – рабочий день!»");
    else if (x == 6)
        printf("Ура! Суббота!");
    else if (x == 7)
        printf("Ура! Воскресенье!");
return 0;
}