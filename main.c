#include"basic.h"
int main()
{
	int result_status,result_state,leap_status,prime_status,num;
	int sum=0;
	int year,range1,range2;
	printf("enter num to do operations\n");
	scanf("%d",&num);
	printf("enter ranges\n");
	scanf("%d %d",&range1,&range2);
	printf("Enter year to check for leap\n");
	scanf("%d",&year);

	result_status=num_status(num);
	result_state =num_state(num);
	printf("sum of %d first natural numbers is %d\n",num,sumOfNnums(sum,num));
	printf("sum in between two numbers %d %d is %d\n",range1,range2,sumbtwnums( sum,range1,range2));
	printf("big among %d %d %d is %d\n",num,range1,range2,BIGNums(num,range1,range2));
	leap_status=leapyear(year);
	prime_status=Primecheck(num);
	return 0;
}
