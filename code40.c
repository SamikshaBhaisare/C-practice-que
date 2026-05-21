#include<stdio.h>
int main(){
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    int n;
    printf("Enter the position of n:");
    scanf("%d",&n);
    num=(num>>n)&1;
    if(num==1){
        printf("Led is on");
    }
    else{
        printf("Led is off");
    }
    return 0;
}