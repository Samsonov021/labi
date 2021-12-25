#include <stdio.h>
int main(void){
    int k=0, i;
    for (i = 11; i <= 100; i++)
        if (i / 10 == i % 10)
            printf("%d\n", i);
    for (int i = 101; i <= 999; i++) 
        if (i / 100 == i % 10){
            k+=1;
            printf("%d\n", i);
        }
    printf("Количество палиндромов: %d\n", k);
    return 0;
}
