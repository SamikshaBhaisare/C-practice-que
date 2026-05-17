#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("enter name:");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    int count=0;
    while(name[count]!='\0'){
        count++;
    }
    printf("%d",count);
    return 0;
}