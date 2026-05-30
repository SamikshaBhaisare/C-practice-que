#include<stdio.h>
union student{
    int roll;
    char grade;
};
int main(){
    union student s;
    printf("enter the roll:");
    scanf("%d",&s.roll);
     printf("roll:%d\n",s.roll);
    printf("enter grade:");
    scanf(" %c",&s.grade);

    printf("grade:%c\n",s.grade);
    return 0;
}