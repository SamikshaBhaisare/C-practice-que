#include<stdio.h>>
struct student{
    char name[100];
    int age;
    float marks;

};
void printstudent(struct student s){
    printf("name is:%s\n",s.name);
    printf("age is:%d\n",s.age);
    printf("marks is:%f\n",s.marks);
}
int main(){
    struct student s1;
    
 printstudent(s1);

    return 0;

}