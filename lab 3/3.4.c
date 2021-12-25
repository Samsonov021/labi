#include <stdio.h>
int main(void){
    int n, k=0;
    printf("Введите число\n");
    scanf("%d",&n);
    while (n>0){
        k+=1;
        n=n/10;
    }
    printf("Количество знаков:%d\n",k);
    return 0;
}
