#include<stdio.h>
int main(){
int q,c;
double cost;
printf("Enter the quantity of product you want to purchase:");
scanf("%d",&q);
if(q>=30||q<=50){
cost=(90/100.0)*(q*5);
printf("\nThe total cost is %lf", cost);
}
else{
cost=(85/100.0)*(c*5);
printf("\nThe total cost is %lf", cost);
}
return 0;
}
