//Create a structure called employee
#include <stdio.h>
#include<string.h>
struct Employee{
    char first_name[50];
    char last_name[50];
    double mon_sal;
};
void emp_init(struct Employee* e, char *first_name, char *last_name,
double mon_sal){
    strcpy(e->first_name, first_name);
    strcpy(e->last_name, last_name);
    e->mon_sal=mon_sal;
}
void emp_display(struct Employee *e){
    printf("Name of the employee is: %s %s\n ", e->first_name, e->last_name);
    printf("Monthly salary is: %.2lf\n", e->mon_sal );
    double year_sal=e->mon_sal*12;
    printf("Yearly salary is:%.2lf\n", year_sal);
    
}
void set_salary(struct Employee *e, double sal){
 e->mon_sal=sal;
 }


int main() {
    struct Employee emp1;
    struct Employee emp2;
    
     emp_init(&emp1,"Jensen", "Ackles", 85000.32 );
    emp_init(&emp2,"Jared", "Padalecki", 84000.387 );
    
    printf(" Salary before raise\n");
     emp_display(&emp1);
     emp_display(&emp2);
    
     set_salary(&emp1, emp1.mon_sal*1.10);
     set_salary(&emp2, emp2.mon_sal*1.10);
    
    printf("Salary after rise:\n");
     emp_display(&emp1);
     emp_display(&emp2);
    
   

    return 0;
}
