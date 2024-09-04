#include<stdio.h>
int main(){
	int num,i,res=0,temp,div;
	printf("Enter a 5 digit number to check if it is a palindrome number:");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=5;i++){
		div=num%10;
		res=res*10+div;
		num=num/10;
	}
	num=temp;
	if(num==res)
		printf("\nEntered number is a palindrome number");
	else
		printf("\nThe entered number is not a palindrome number.");
	return 0;
}

