#include <stdio.h>

typedef struct Student {
    int roll;
    char name[20];
    int class;
    int age;
    int marks;
} stu;

void write_st(stu *t, FILE *fp) {
    fprintf(stdout, "Enter the data (roll name class age marks): ");
    fscanf(stdin, "%d %s %d %d %d", &t->roll, t->name, &t->class, &t->age, &t->marks);
    fseek(fp, 0, SEEK_SET);
    fwrite(t, sizeof(stu), 1, fp);
}

void read_st(stu *t, FILE *fp) {
    fseek(fp, 0, SEEK_SET);
    fread(t, sizeof(stu), 1, fp);
    printf("Roll: %d\nName: %s\nClass: %d\nAge: %d\nMarks: %d\n",t->roll, t->name, t->class, t->age, t->marks);
}

int main(void) {
    stu t;

    FILE *fp = fopen("student.txt", "wb+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    write_st(&t, fp);
    read_st(&t, fp);

    fclose(fp);

    return 0;
}

