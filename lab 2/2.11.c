#include <stdio.h>
int main(void){
int x,y;
printf("input point (x,y):\n");
scanf("%d %d", &x,&y);
if (x>0){
if (y>0) printf("1 четверть");
else if (y<0) printf("4 четверть");
else printf("точка лежит на оси X");
}
else if (x<0){
if (y>0) printf("2 четверть");
else if (y<0) printf("3 четверть");
else printf("точка лежит на оси X");
}
else if(y==0) printf("точка лежит в центре");
else printf("точка лежит на оси Y");
return 0;
}