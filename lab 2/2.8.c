#include <stdio.h>
int main(void) {
	float a, b, c, e, f;
	printf("Введите три числа:\n");
	scanf("%f %f %f", &a, &b, &c);
	printf("Введите границы отрезка:\n");
	scanf("%f %f", &e, &f);
	if (a >= e && a <= f)
	    printf("%f \n",a);
	if (b >= e && b <= f)
	    printf("%f \n",b);
	if (c >= e && c <= f)
	    printf("%f \n",c);
return 0;
}
