
#include <stdio.h>

int main()
{int n, c = 1;
    scanf("%d", &n);
    while (c < n) {
        c *= 3;
    }
    if (c == n | n == 1)
        printf("Является");
    else
        printf("Не является");
    return 0;
}
