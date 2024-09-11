
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int num,i=1;
int lower=1,upper=1000;
srand(time(NULL));
int rando=(rand() % (upper-lower+1))+lower;
printf("             GUESS THE MAGIC NUMBER");
printf("\nGet ready to guess the number:\nRULE:You will get 10 chances to make the right guess,guess a number between 1 and 1000.");
do{
   printf("\nGuess %d:\nEnter the number:",i);
   scanf("%d",&num);
   if(num>rando)
   printf("\n**right**");

   else if(num<rando)
   printf("\n**left**");

   else{
   printf("\ncongrats!you won");
   break;
   }

   i++;
   }while(i<=10);
  return 0;
 }
  
