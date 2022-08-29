#include"basic.h"
extern int SofDigits(int num,int sum)
{
if(num==0)
{
return sum;
}
else 
{
 sum=sum + (num%10);
 return SofDigits(num/10,sum);
}
}
