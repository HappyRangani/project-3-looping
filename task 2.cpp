#include<stdio.h>

main()
{
	int number,count=0;
	printf("Enter the number = ");
	scanf("%d",&number);
	
	if(number==0)
	{
		count=1;
	}
	else
	{
		while(number!=0)
		{
			number/=10;
			count++;	
		}
	}
	printf("Total number of digits : %d\n",count);
}