#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
const int M=50;
void check_type(int );
int main(){
           char str[M],str1[M];
           int i=0;
           printf("Введите строку:\n");
           gets(str);
           while(str[i]!='\0'){
                          check_type(str[i]);
                          i++;
           } str[0]=getc;
return 0;
}
void check_type(int c){
           if(c>='0'&&c<='9')
printf("%c - цифра, печатаемый символ.\n",c);
           else
if(c>='a'&&c<='z')
printf("%c - буква, строчная, печатаемый символ.\n",c);
else                        
if(c>='A'&&c<='Z')              
printf("%c - буква, заглавная, печатаемый символ.\n",c);
else
if(c>='!'&&c<='/') 
printf("%c - знак, печатаемый символ.\n",c);
else 
if(c==' ')
printf("%c - пробел, печатаемый символ.\n",c);
else
printf("%c - непечатаемый символ.\n",c);
}