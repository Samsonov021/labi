
#include <stdio.h>

int main()
{
    int n, del = 1;
    scanf("%d", &n);
    while (del <= n) {
        if (n % del == 0)
            printf("%d ", del);
        del += 1;
    }
}
