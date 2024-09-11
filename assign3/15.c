#include<stdio.h>
int main(){
	float num1,num2;
	int flag=1;
	
do{
   
	printf("Enter value 1:");
	scanf("%f",&num1);
	enum choice{EXIT,ADD,SUB,MUL,DIV}op;
	printf("Choose out of the following: 0 EXIT\n1 ADD\n2 SUB\n3 MUL\n4 DIV");
	scanf("%d", &op);
	printf("Enter the second value:");
	scanf("%f",&num2);
	switch(op)
	{		
		case EXIT:
		flag=0;
		break;

		case ADD:printf("%f+%f=%f",num1,num2,num1+num2);
		break;

		case SUB:printf("%f+%f=%f",num1,num2,num1-num2);
		break;

		case MUL:printf("%f+%f=%f",num1,num2,num1*num2);
		break;

		case DIV:
			if(num2==0)
			printf("INVALID INPUT");

			else
			printf("%f/%f=%f",num1,num2,num1/num2);
		break;
		
		default: printf("Invalid operater entered");
		break;
		}
	}while(flag==1);
  return 0;
}
