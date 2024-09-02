// Program to calculate the grade of a student
#include <stdio.h>
int main() {
    int m, i=1;
printf(" Enter the total marks of the student for subject %d:", i);
while(i<6){
    scanf("%d", &m);
if(m>=90)
    printf("Grade:Ex");
else if(m<90&&m>=80)
    printf("Grade:A");
else if(m<80&&m>=70)
    printf("Grade:B");
else if(m<70&&m>=60)
    printf("Grade:C");
else
    printf("Grade:F");
    i++;
   
}}
