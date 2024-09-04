#include<stdio.h>
int main(){
int empid,deptno;
char descd;
printf("Enter the Employee Id:");
scanf("%d",&empid);
printf("Enter the Department number:");
scanf("%d",&deptno);
printf("Enter the Designation code:");
scanf("%*c%c",&descd);
switch(deptno){
case 10: printf("Employee with employee id %d is working in \"Marketing\" department",empid);
break;
case 20: printf("Employee with employee id %d is working in \"Management\" department",empid);
break;
case 30: printf("Employee with employee id %d is working in \"Sales\" department",empid); 
break;
case 40: printf("Employee with employee id %d is working in \"Designing\" department",empid); 
break;
default:printf("Invalid detaills entered");
break;
}

switch(descd){
case 'M': printf(" as \"Manager.\"");
break;
case 'S': printf(" as \"Supervisor.\""); 
break;
case 's': printf(" as \"Security officer\"."); 
break;
case 'C': printf(" as \"Clerk\"."); 
break;
default: printf("Invalid details entered");
break;
}
 return 0;
 }
