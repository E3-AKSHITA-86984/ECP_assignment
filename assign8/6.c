#include<stdio.h>
typedef struct student{
				int roll;
				char name[20];
				int std;
				struct res{
					char grade;
					float percentage;
					}marks;
				}stu;



void accept_stu(stu *s){
	printf("Enter student info:1.Roll number\n2.Name\n3.Standard");
	scanf("%d%s%d",&s->roll,s->name,&s->std);
	if(s->std<5){
	printf("\nEnter grade");
	scanf("%c",&s->marks.grade);
	}
	else{
	printf("Enter percentage:");
	scanf("%f",&s->marks.percentage);
	}
}
void printf_stu(stu *s){
		printf("roll no:%d, name:%s, marks: %f",s->roll, s->name, s->marks);
		
		
s->std <= 4 ? printf("Result : %c\n", s->marks.grade) : printf("Result : %f\n", s->marks.percentage);
}


int main(){
stu s;
accept_stu(&s);
printf_stu(&s);
return 0;
}











































































































