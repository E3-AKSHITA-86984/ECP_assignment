#include<stdio.h>

void print_bin(char num)
{
	unsigned char mask = 0x80;
	printf("%d : ", num);
	while(mask)
	{
	if(num & mask)
		printf("1");
	else
		printf("0");
	mask = mask>>1;
	}
	printf("\n");
}


int main()
{
char num = 127;
print_bin(num);
	return 0;
}

