#include<stdio.h>
int main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int A[n],B[n];
    int *p1=A;
      int *p2=B;
      printf("Enter Element A:");
      for(int i=0;i<n;i++){
        scanf("%d",(p1+i));
      }
      printf("Enter Element B:");
      for(int i=0;i<n;i++){
scanf("%d",(p2+i));
      }
      for(int i=0;i<n;i++){
        int temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;
       

      }
       printf("A after swap:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p1+i) );
    }

    
    printf("B after swap:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p2+i));
    }
return 0;
}