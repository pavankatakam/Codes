#include"basic.h"

int main()
{
	int result_status,result_state,leap_status,prime_status,num;
	int ascii_value;
	int sum=0;int rev=0;
	int SOD_result,num1,num2;
	int year,range1,range2;
	int len_arm,num_arm;
	printf("enter num to do operations\n");
	scanf("%d",&num);
	printf("enter ranges\n");
	scanf("%d %d",&range1,&range2);
	printf("Enter year to check for leap\n");
	scanf("%d",&year);
	printf("enter range from which want to print ascii values\n");
	scanf("%d",&ascii_value);
	printf("Enter number to get sum of digits of it\n");
	scanf("%d",&num1);
	printf("enter number to print in reverse order\n");
	scanf("%d",&num2);
	printf("enter number to check for armstrong\n");
	scanf("%d",&num_arm);








	result_status=num_status(num);
	result_state =num_state(num);
	printf("sum of %d first natural numbers is %d\n",num,sumOfNnums(sum,num));
	printf("sum in between two numbers %d %d is %d\n",range1,range2,sumbtwnums( sum,range1,range2));
	printf("big among %d %d %d is %d\n",num,range1,range2,BIGNums(num,range1,range2));
	leap_status=leapyear(year);
	 prime_status=Primecheck(num);
	if(prime_status)
	{
	printf("%d is prime\n",num);
	}
	else
	{
	printf("%d is not a prime\n",num);
	}
	checkprimes(range1,range2);
	
	asciiprint(ascii_value);
	printf("\n");
	SOD_result=SofDigits(num1,sum);
	printf("sum of digits=%d\n",SOD_result);
	printf("reverse of number %d is %d\n",num2,reversenum(num2,rev));

	palindrome(num2);	

	len_arm=order(num_arm);
	printf("number of digits in the number %d is %d\n",num_arm,len_arm);
	if(num_arm == checkARM(num_arm))
	{
	printf("%d is armstrong\n",num_arm);
	}
	else
	{
	printf("%d is not armstrong\n",num_arm);
	}

	return 0;
}
