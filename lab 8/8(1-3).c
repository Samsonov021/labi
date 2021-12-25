#include <stdio.h>

#define N1 3

#define N2 3


void get_arr(int arr[][3], int);

void print_arr(int arr[][3], int);

void print_arr_second(int*, int, int, int);

int main(){

int a[N1][N2],r;

get_arr(&a[0],N2);

print_arr(&a[0],N2);

printf("\nВведите количество элементов, выводимых в строке n = ");

           scanf("%d",&r);

print_arr_second(&a[0][0],N1,N2,r);

           printf("\n");

           return 0;

}



void get_arr(int arr[][3], int len){

printf("Введите значения элементов массива:\n");

           for(int i=0;i<len;i++)

                          for(int j=0;j<len;j++){

           printf("arr[%d][%d] = ",i,j);

                          scanf("%d",&arr[i][j]);

                          }

} void print_arr(int arr[][3], int len)

{ for(int i=0;i<len;i++)

           { for(int j=0;j<len;j++)

           printf("%d ",arr[i][j]);

                          printf("\n");

           }

} void print_arr_second(int* arr, int len1, int len2, int n){

           int k=1;

           for(int i=0;i<len1;i++)

           for(int j=0;j<len2;j++,k++){

           printf("%d ",*(arr+i*len2+j));

                          if(!(k%n))

           printf("\n");

           } 
    
}