#include"basic.h"
extern int Primecheck(int num)
{
	int isprime=1;
	int i;
	if(num<2)//elemenating nums less than evenprime
	{	
	isprime=0;
	}
	
	else//checking for nxt conditions
	 { 
	   for(i=2;i<num;i++)
	 	{
			if(num%i==0)
			{
			isprime=0;
			break;
			}	


		}
	}
if(isprime)
{
printf("%d is prime\n",num);
}
else
{
printf("%d is not a prime\n",num);
}

}




