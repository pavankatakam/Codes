#include"basic.h"
extern int reversenum(int num,int rev)
{
if(num==0)
{
return rev;
}
else
{
int rem =num%10;
rev=rev*10 + rem;
return reversenum(num/10,rev);
}
}

