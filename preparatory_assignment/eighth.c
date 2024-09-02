//Program to store and print information of a student
#include <stdio.h>
struct student{
    char sname[30];
    char sroll[30];
    float stmarks;
}s;

void displayinfo(struct student stu){
    printf("Displaying the entered information:-\n");
    printf("Name of the student is %s", stu.sname);
    printf("Roll no. is: %s", stu.sroll);
    printf("Total marks obtained are:%.2f", stu.stmarks);
}

int main() {
  printf("Enter the student's name:");
   fgets (s.sname, sizeof(s.sname), stdin);
   
   printf("Enter the roll no.:");
   fgets(s.sroll, sizeof(s.sroll), stdin);
   
   printf("Enter total marks:");
   scanf("%f", &s.stmarks);
   
   displayinfo(s);
    return 0;
}
