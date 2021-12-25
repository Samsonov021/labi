#include <stdio.h>
#include <math.h>
int main()
{
    float num, eps = 0.01;
    scanf("%f", &num);
    float root = num / 2;
    int i = 0;
    while (root - num / root > eps) {
        i++;
        root = 0.5 * (root + num / root);
    }
    printf("%f %f", num, root);
}
