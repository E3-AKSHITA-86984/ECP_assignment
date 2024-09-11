#include<stdio.h>
typedef struct student{
				int roll;
				char name[20];
				float marks;
				}stu;



void accept_stu(stu *s){
	printf("Enter student info:1.Roll number\n2.Name\n3.Marks");
	scanf("%d%s%f",&s->roll,&s->name,&s->marks);
	}
void printf_stu(stu *s){
		printf("roll no:%d, name:%s, marks: %f",&s->roll, s->name, s->marks);
		}



int main(){
stu s;
accept_stu(&s);
printf_stu(&s);
return 0;
}
