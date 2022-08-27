#include"basic.h"
extern int sumOfNnums(int sum,int n)
{
if(n==0)
{
return sum;
}
else if (n<0)
{
return 0;
}
else
{
return n+sumOfNnums(sum,n-1);
}

}

/*we can use n*(n+1)/2
also for loop
sum=0;
for(int i=1;i<=n;i++)
{
sum=sum+i;
}
*/

