#include <stdio.h>
#include <math.h>
int main()
{
    int p=3, n;
    scanf("%d", &n);
    while (p+2<n){
        if (((p * p) % 24 == 1) && (((p+2) * (p+2)) % 24 == 1))
            printf("(%d %d) ", p, p+2);
        p+=1;
    }
}
