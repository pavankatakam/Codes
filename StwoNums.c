#include"basic.h"
extern int sumbtwnums(int sum,int i, int b)
{
if(i>b)
{
return sum;
}
else
{
return i+sumbtwnums(sum,i+1,b);
}
}
