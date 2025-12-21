#include<stdio.h>
int main(){
  int a,prime;
  printf("Enter a number ");
  scanf("%d",&a);
  if(a==1 || a==0){
    printf("not a prime number");
  }
  else{
    for(int i=2;i<=a/2;i++){
      if(a%i==0){
        prime=1;
        break;
      }
    }
  }
  if(prime==1){
    printf(" not prime number");
  }
  else {
    printf("prime number");
  }
  return 0;
}