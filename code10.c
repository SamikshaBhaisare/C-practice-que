#include<stdio.h>
struct student{
    char name[50];
    int marks;
};
int main(){
    struct student s1,s2;
    printf("Enter the student name 1:");
    scanf("%s",s1.name);
    printf("Enter the student marks 1:");
    scanf("%d",&s1.marks);
     printf("Enter the student name 2:");
    scanf("%s",s2.name);
    printf("Enter the student marks 2:");
    scanf("%d",&s2.marks);
    if(s1.marks>s2.marks){
        printf("%s highest score is:%d\n",s1.name,s1.marks);
    }
    else{
        printf("%s highest score is:%d\n",s2.name,s2.marks);
    }
    return 0;
}