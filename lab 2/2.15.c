#include <stdio.h>
int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    if ((m*60+n)*16 > 6*1024)
        printf("Места не хватит");
    else
        printf("Места хватит");
}