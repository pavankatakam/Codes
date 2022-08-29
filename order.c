#include"basic.h"
extern int order(int num)
{
//find length of num
int len=0;
while(num)
{
len++;
num=num/10;
}
return len;
}

