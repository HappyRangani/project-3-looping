#include<stdio.h>

main()
{
	char ch='A';
	do\
	{
		printf("%c ",ch);
		ch+=4;
	}
	while(ch<='Z');
	
	printf("\n");
	
}