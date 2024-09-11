#include<stdio.h>
int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
printf("\nTable:\n");
int i=1;
while(i<=10){
printf("%d x %d = %d",num,i,num*i);
printf("\n");
i++;
}

return 0;
}
