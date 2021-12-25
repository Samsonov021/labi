#include <stdio.h>
int main(void) {
    int litri, kolvo, peresel;
    scanf("%d %d", &litri, &kolvo);
    if (litri<kolvo*3) {
        if ((kolvo * 3 - litri) % 3 == 0)
            peresel = (kolvo * 3 - litri) / 3;
        else
            peresel = (kolvo * 3 - litri) / 3 + 1;
        printf("Аквариум перенаселен, нужно переселить %d рыбок", peresel);
    } else
        printf("Аквариум не перенаселен");
}