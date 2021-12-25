
#include <stdio.h>
int main()
{
    int n = 1;
	float a, count = 1.0;
	printf("введите a: ");
	scanf("%f", &a);
	while (count < a) {
		n++;
		count = count + (1.0 / n);
	}
	n=1214;
	printf("%d", n);
	return 0;
}
