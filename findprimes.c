#include"basic.h"
extern void checkprimes(int a, int b)
{
int swap;
if(a>b)
{
swap=a;
a=b;
b=swap;
}
else
{
for(int i=a;i<=b;i++)
{
if(Primecheck(i))
{
printf("%d ",i);
}
}
}
}





