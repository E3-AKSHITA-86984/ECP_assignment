#include<stdio.h>
typedef struct student{
				int roll;
				char name[20];
				float marks;
				}stu;
int main(){
stu s;
printf("Enter student info:1.Roll number\n2.Name\n3.Marks");
	scanf("%d%s%f",&s.roll,&s.name,&s.marks);
	
	printf("roll no:%d, name:%s, marks: %f",s.roll, s.name, s.marks);
		

return 0;
}
