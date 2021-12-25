#include <stdio.h>
#include <math.h>
int main()
{
    int n, k, f1 = 1, f2 = 1, m;
    scanf("%d", &n);
    printf("1 1 ");
    for (k = 2; k < n; ++k) {
        m = f1 + f2;
        f1 = f2;
        f2 = m;
        printf("%d ", f2);
    }
}
