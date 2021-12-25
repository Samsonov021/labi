#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a%2==0 || b%2==0 || c%2==0)
	    printf("Среди чисел есть четное число");
	else
	    printf("Среди чисел нет четного числа");
}