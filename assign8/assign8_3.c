#include<stdio.h>
typedef struct student{
				int roll;
				char name[20];
				float marks;
				}stu;



void accept_stu(stu *s){
	for(int i=1;i<5;i++){
	printf("Enter student info:1.Roll number\n2.Name\n3.Marks");
	scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
	}}
void printf_stu(stu *s){

	for(int i=1;i<5;i++){
		printf("roll no:%d, name:%s, marks: %f",s[i].roll, s[i].name, s[i].marks);
	
		}}



int main(){
stu s[5];
accept_stu(s);
printf_stu(s);
return 0;
}
