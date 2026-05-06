#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",p);
        p++;
    }
    p=arr;
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(*p%2==0){
            even++;
        }else{
            odd++;
        }
        p++;
    }
    printf("Even:%d\n",even);
     printf("Odd:%d\n",odd);
     return 0;
}