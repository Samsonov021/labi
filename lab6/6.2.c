#include <stdio.h>

#include <conio.h>

void main()

{ double arrDbl[]={1.3,1.5,2.8,1.7,1.1,2.1,2.2};

 int i,size;

 size=sizeof(arrDbl)/sizeof(arrDbl[i]);

 printf("Razmer dannogo massiva=%d\n",size);

 for (i=0;i<size;i++)

printf("arrDbl[%d]=%.3f\t razmer=%f\n",i,*(arrDbl+i),sizeof(*(arrDbl+i)));

getch();

}