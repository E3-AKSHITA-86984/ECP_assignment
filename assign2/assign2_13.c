#include<stdio.h>
int main(){
float num1,num2;
printf("Enter two co-ordinates:");
scanf("%f%f",&num1,&num2);
if(num1>0&&num2>0)
printf("\n1st Quadrant");
else if(num1<0&&num2>0)
printf("\n2nd quadrant");
else if(num1<0&&num2<0)
printf("\n3rd quadrant");
else if(num1>0&&num2<0)
printf("\n4th quadrant");
else if(num1==0&&num2!=0)
printf("Point lies on y-axis");
else if(num1!=0&&num2==0)
printf("Point lies on x-axis");
else
printf("Point lies on origin");
return 0;
}
