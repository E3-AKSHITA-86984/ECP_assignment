#include<stdio.h>
void swap(int *n1, int *n2)
{
	*n1=*n1^*n2;
	*n2=*n1^*n2;
	*n1=*n1^*n2;
}

int main(void)
{
	int num1,num2;
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("before swap:n1=%d,n2=%d\n",num1,num2);
	swap(&num1, &num2);
	printf("after swap:n1= %d,n2 = %d\n",num1,num2);
	return 0;
}

