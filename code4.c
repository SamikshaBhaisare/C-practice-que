#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int k;
    printf("enter the value of k:");
    scanf("%d",&k);
    int n1=n|(1<<k); //set bit
    printf("n1:%d\n",n1);
    int n2=n&~(1<<k);//clear bit
     printf("n2:%d\n",n2);
    int n3=n^(1<<k);//toggle bit
      printf("n3:%d\n",n3);
      return 0;
}