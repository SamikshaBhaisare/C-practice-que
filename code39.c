#include<stdio.h>
struct student{
    int rollno;
    char name[50];
    float marks;
};
int main(){
    struct student s1;
    printf("enter student roll no:");
    scanf("%d",&s1.rollno);
    printf("enter student name:");
    scanf("%s",s1.name);
    printf("enter student marks:");
    scanf("%f",&s1.marks);
    printf("Student Details:\n");
    printf("Student rollno:%d\n",s1.rollno);
     printf("Student name:%s\n",s1.name);
      printf("Student marks:%f\n",s1.marks);
      return 0;

}