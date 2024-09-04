#include<stdio.h>


//without using logical operators
/*int main(){
int year;
printf("Enter the year:");
scanf("%d", &year);
if(year%400==0)
printf("year is a leap year");
else if(year%4==0)
printf("year is not a leap year");
else
printf("the year is not a leap year");
return 0;
}*/


// using logical operators
/*
int main()
{

int year;
printf("Enter the year:");
scanf("%d",&year);
if (year%400&&year%4||year%100)
printf("The year is a leap year");
else
printf("The year is not a leap year");
return 0;
}
*/


//using conditional operators
int main(){
int year;
printf("Enter a year");
scanf("%d", &year);
year%400==0?year%100:year%4==0:printf("The year is a leap year"):printf("The year is not a leap year"):printf("The year is not a leap year"):printf("The year is a leap year");
return 0;
}
