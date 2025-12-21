/*WRITE A PROGRAM TO REVERSE A INPUT NUMBER */
#include<stdio.h>
int reverse(int);
int reverse (int a){
int rem,rev=0;
while(a>0){
  rem=a%10;
  rev=rev*10+rem;
  a=a/10;
  }
  return rev;
  }
  int main (){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  printf("the reverse of %d is %d ",n, reverse(n));

  return 0;
}