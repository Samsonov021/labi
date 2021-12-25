#include <stdio.h>
#include <math.h>
int main()
{
    int m, k = 1;
    scanf("%d", &m);
    while (pow(4, k + 1) < m) {
        k += 1;
    }
    printf("%d", k);
}
