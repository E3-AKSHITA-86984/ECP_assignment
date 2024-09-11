#include<stdio.h>
#include<math.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
	if(num<=0){
	  printf("\nNumber must be positive");
	  }
	else
	{
	printf("Input: %d", num);
		for(int i=1;i<=sqrt(num);i++){
		   if(num%i==0){
		   printf("\noutput: %d * %d",i, num/i);
		   }
	    }
	}
return 0;
}

