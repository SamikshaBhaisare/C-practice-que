#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
     int r;
    printf("Enter the value of r:");
    scanf("%d",&r);
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("The vaule of nCr is:%d\n",nCr);
    return 0;
}