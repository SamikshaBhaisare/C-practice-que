#include<stdio.h>
int main(){
    int arr[5];
    int largest;
    printf("Enter 5 elements:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("the largest value:%d",largest);
    return 0;
}