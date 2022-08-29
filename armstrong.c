#include"basic.h"
extern int  checkARM(int num)
{
if(num==0)
{
return 0;
}
int digit = num%10;//extract last digit of num
//do power with order on last digit
//break num and pass it into armfun.
int i;
i=digit*digit*digit;
return (i + checkARM(num/10));
}



