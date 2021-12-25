#include <stdio.h>

int main(void) {
	//a
	int x;
    scanf("%d", &x);
	if (!(x <= 0))
		if (x % 2 == 0)
			x = x * x;
		else x %= 3;
	printf("%d \n", x);//Фрагмент a соответствует решению задачи
	return 0;
}
//Остальные фрагменты не соответствуют решению задачи