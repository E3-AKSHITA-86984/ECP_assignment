#include<stdio.h>
int main(){
int ace;
float temp;
printf("             TEMPERATURE CONVERTER\n");
printf("Type:\n1. Type 1 if you want to convert celcius to fahreneit.\n2.Type 2 if you want to convert fahrenite to celcius.");
scanf("%d", &ace);
scanf("%f",&temp);
if(ace==2){
printf("\nEnter the temperature:");
scanf("%f",&temp);
printf("\nUsing the formula :degree C=5/9*(degree F-32)");
printf("\nAns. degree C=%lf",(5/9.0)*(temp-32));
}
else if(ace==1){
printf("\nEnter the temperature:");
scanf("%f",&temp);
printf("\nUsing the formula :degree F= degree C*(9/5)+32");
printf("\nAns.degree F=%lf", (temp*(9/5.0))+32);
}
else
printf("\nNOT A VALID OPTION");
return 0;
}
