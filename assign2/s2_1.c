#include<stdio.h>
int main(){
int mon, year;
printf("Enter the year corresponding to the month:\n1.JAn\n2.Feb\n3.Mar\n4.April\n5.May\n6.June\n7.July\n8.August\n9.Sept\n10.Oct\n11.Nov\n12.Dec");
scanf("%d",&mon);
printf("Enter the year:");
scanf("%d",&year);
switch(mon)
{
 case 1: printf("Number of days in the month:31\n"); 
         break;
 case 3: printf("Number of days in the month:31\n"); 
         break;
 case 5: printf("Number of days in the month:31\n"); 
 break;
 case 7: printf("Number of days in the month:31\n"); 
 break;
 case 8: printf("Number of days in the month:31\n"); 
 break;
 case 10: printf("Number of days in the month:31\n"); 
 break;
 case 12: printf("Number of days in the month:31\n"); 
 break;
 case 4: printf("Number of days in the month:30\n"); 
 break;
 case 6: printf("Number of days in the month:30\n"); 
 break;
 case 9: printf("Number of days in the month:30\n"); 
 break;
 case 11: printf("Number of days in the month:30\n"); 
 break;
 case 2: if(year%400==0&&year%4==0||year%100!=0)
 printf("Number of days in month:29\n");
 else 
 printf("Number of days in month:28\n");
 break;
 default:printf("Not a valid input");
 break;
 }
 if(year%400==0&&year%4==0||year%100!=0)
 printf("Year is a leap year");
 else
 printf("Year is not a leap year");
 return 0;
 }
