#include"basic.h"
extern int leapyear(int num)
{
if((num % 400 ==0) || ((num % 4 ==0) && (num %100 !=0)))
{
printf("%d  is leapyear\n",num);
}
else
{
printf("%d is not a leap year\n",num);
}
}
 

