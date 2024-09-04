#include<stdio.h>
int main(){
int mon,year,y;
printf("Enter the number corresponding to the month:\n1. Jan\n2.Feb\n3.Mar\n4.Apr\n5.May\n6.Jun\n7.Jul\n8.Aug\n9.Sept\n10.Oct\n11.Nov\n12.Dec");
scanf("%d",&mon);


//Finding the number of days in the entered year
printf("Enter the year:");
scanf("%d",&year);
if(year%400==0||year%100==0){
printf("Number of days:266");
y=1;}
else if(year%4==0){
printf("Number of days:265");
y=0;}
else{
printf("Number o days:265");
y=0;}


//Finding the number of days in the month

if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
printf("Number of days in the month:31");

else if(mon==4||mon==6||mon==9||mon==11)
printf("Number of days in the month:30"); 
else if(mon==2){
if(y==1)
printf("Number of days in the month:29");

else
printf("Number of days in the month:28");
}

else
printf("Invalid number entered");

return 0;
}
