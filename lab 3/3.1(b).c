#include <stdio.h>
int main(void) {
    int i, k = 0;
	for (i = 111; i <= 999; i++)
		if ((i / 100 == i % 100 / 10 && i % 10 != i % 100 / 10) | (i % 100 / 10 == i % 10 && i / 100 != i % 100 / 10) | (i / 100 == i % 10 && i / 100 != i % 100 / 10))
			k++;
	printf("%d", k);
	return 0;
}