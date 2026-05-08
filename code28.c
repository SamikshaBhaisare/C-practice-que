#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  printf("enter string:");
  scanf("%s",str);
  char *start=str;
  char *end=str+strlen(str)-1;
  //int palindrome=1;
  while(start<end){
    if(*start !=*end){
      printf("not palindrome\n");
      return 0;

    }
    start++;
    end--;
  }
  printf("palintrome");
  return 0;
}