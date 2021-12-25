#include <stdio.h>

#include <conio.h>

const int ARRAY_LENGTH=7;

void print_arr(int arr[],int len);

void get_arr(int *arr,int len);

void main()

{

 int x[ARRAY_LENGTH],len;

 get_arr(x,ARRAY_LENGTH);

 print_arr(x,len);

 getch();

}

void print_arr(int *a,int len)

{ int i, COLUMS,cout;

 do

{

printf("\nKolichestvo elementov v stroke=");

scanf("%d",&COLUMS);}

while (COLUMS<0);

for(i=0,cout=0;i!=len;i++,cout++)

{

if (cout==COLUMS) {cout=0; printf("\n");} printf("arr[%d]=%d\t",i,*(a+i));

}  printf("\n\n");

printf("sizeof(a)=%d",sizeof(a)/sizeof(int));

 return;

}

void get_arr(int *arr,int len)

{

 int i;

 printf("Vvedite znacheniya elementov:\n");

 for(i=0;i<=len;i++)

{ printf("arr[%d]=\t",i);scanf("%d",&arr[i]);

} return; }