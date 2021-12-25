#include <stdio.h>

int main(void) {
	//a
	//int x;
	//switch (x)
	//{
	//case 5: x++; break;
	//case x>0: x--; break; - ОШИБКА В СТРОКЕ
	//default: x += 66;
	//}
	//printf("%d \n", x);

	//b
	int x;
	scanf("%d", &x);
	switch (x)
	{
	case 5: x += 7; break;
	case 6: case 11: --x; break;
	}
	printf("%d \n", x); //Программа работает верно
    //c
    int x1;
    scanf("%d",&x1);
    switch (x1)
    {
    case 5: x1*=16;
    case 6: case 11: x1-=23; break;
    }
    printf("%d \n", x1);//Программа работает верно
	
	//d
	//int x;
    //switch (5) -ОШИБКА В СТРОКЕ (должно быть switch(x))
    //{
    // case 5: x+=7; break;
    // case 6: case 11: --x; break;
    //}

	return 0;
}