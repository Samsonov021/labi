#include <stdio.h>
#include <math.h>
int main()
{
    int n, j, i;
    scanf("%d", &n);
    for (i = 6; i < n; i++) {
        int sum = 1;
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                sum += j;
        if (sum == i)
            printf("%d ", i);
    }
}
