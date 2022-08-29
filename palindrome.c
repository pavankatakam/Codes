#include"basic.h"
extern void palindrome(int num)
{
int result,temp;
temp=num;
result=reversenum(temp,0);
if(result==num)
{
printf("number %d is palindrome\n",num);
}
else
{
printf("number %d is not palindrome\n",num);
}
}
