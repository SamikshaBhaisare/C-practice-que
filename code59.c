#include<stdio.h>
#include<string.h>
int main(){
    char s1[10];
    char s2[10];
    printf("Enter value of s1:");
    scanf("%s",s1);
     printf("Enter value of s2:");
    scanf("%s",s2);
    strcmp(s1,s2);
    if(strcmp(s1,s2)==0){
        printf("string are equal");

    }else{
            printf("string are not equal");
    }
    return 0;
}