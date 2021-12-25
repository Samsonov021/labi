#include <stdio.h>
int main(void){
    int n = 0, i;
    for (i = 102; i <= 987; i++) 
        if (i / 100 != i % 100 / 10 && i / 100 != i % 10 && i % 100 / 10 != i % 10)
            n++;
    printf("%d", n);
    return 0;
}
