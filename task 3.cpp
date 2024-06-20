#include<stdio.h>

main()
{
	int number,firstDigit,lastDigit,sum;
	printf("Enter the number =");
	scanf("%d",&number);
	
	lastDigit=number%10;
	firstDigit=number;	
	
	while(firstDigit>=10)
	{
		firstDigit/=10;
	}
	
	sum=firstDigit+lastDigit;
	printf("sum of first and last digit is = %d",sum);
		
	
}