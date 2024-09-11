
#include<stdio.h>
typedef struct student{
				int roll;
				char name[20];
				float marks;
				}stu;



void accept_stu(stu *s){
	for(int i=0;i<5;i++){
	printf("Enter student info:1.Roll number\n2.Name\n3.Marks");
	scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
	}}
void printf_stu(stu *s){

	for(int i=0;i<5;i++){
		printf("roll no:%d, name:%s, marks: %f",s[i].roll, s[i].name, s[i].marks);

		}}

void search_roll(stu *s, int num){
  for(int i=0;i<5;i++){
  	if(s[i].roll==num){
	printf(" Roll number %d, name %s, marks %f", s[i].roll,s[i].name,s[i].marks);
	}
}
}
void search_name(stu *s, char *name1){
for(int i=0;i<5;i++){
if(strcmp(s[i].name==name1)==0){
	printf(" Roll number %d, name %s, marks %f", s[i].roll,s[i].name,s[i].marks);
}
printf("value at %d",*name1);
}
}




int main(){
stu s[5];
int num;
char name1[20];
accept_stu(s);
printf_stu(s);
printf("\nEnter the roll number:\n");
scanf("%d",&num);
scanf("%s", name1);
search_roll(s,num);
search_name(s,name1);
return 0;
}
