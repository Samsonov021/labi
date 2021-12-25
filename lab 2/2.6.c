//Если Х равно 5, то присвоить Y квадрат Х, если 7, то У присвоить 
//остаток от деления Х на 2, в остальных случаях значение Y увеличить на 1.
#include <stdio.h>
int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	switch (x)
	{
	case 5: printf("%d \n", y = x * x); break;
	case 7: printf("%d \n", y = x % 2); break;
	default: printf("%d \n", y += 1);
		break;
	}
}