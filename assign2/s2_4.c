#include<stdio.h>
int main(){
int day,month,year;
int weekday;


printf("Enter the date in DD/MM/YY format:");
scanf("%d%d%d",&day,&month,&year);

if(month<3){
month=month+12;
year--;
}

weekday=(day+(13*(month+1)/5)+(year%10)+((year%100)/4)+((year/100)/4)+5*(year/100))%7;

switch(weekday){
case 0: printf("Day is Saturday"); 
break;
case 1: printf("Day is Sunday"); 
break;
case 2: printf("Day is MOnday"); 
break;
case 3: printf("Day is Tuesday"); 
break;
case 4: printf("Day is Wednesday"); 
break;
case 5: printf("Day is Thursday"); 
break;
case 6: printf("Day is Friday"); 
break;
}
return 0;
}
