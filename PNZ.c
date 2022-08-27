#include"basic.h"
int num_status(int num)
{
	if(num==0)
	{
		printf("number is not positive nor negative\n");
	}
	else
	{
		(num>0)?printf("num %d is positive\n",num):printf("num %d is negative\n",num);
	}

}
