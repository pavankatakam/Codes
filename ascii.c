#include"basic.h"
extern void asciiprint(int num)
{
int i=0;
for(i=num;i<256;i++)
{
printf("%d=%c\n",i,i);
}
}

