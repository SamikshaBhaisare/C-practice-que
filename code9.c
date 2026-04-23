#include<stdio.h>
struct Date{
    int day,month,year;
};
struct student{
    char name[20];
struct Date dob;
};
int main(){
    struct student s;
    printf("Enter name:");
    scanf("%s",s.name);
    printf("Enter DOB:");
    scanf("%d %d %d",&s.dob.day,&s.dob.month,&s.dob.year);
    printf("%s-%d/%d/%d",s.name,s.dob.day,s.dob.month,s.dob.year);
    return 0;
}