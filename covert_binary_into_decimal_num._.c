/*WRITE A PROGRAM TO CONVERT BINARY NUMBER INTO DECIMAL NUMBER*/

#include<stdio.h>
int Binary_to_decimal(int);
int Binary_to_decimal(int a){
int rem, conversion=0,base=1;
while(a>0){
  rem=a%10;
  conversion=conversion+rem*base;
  a=a/10;
  base=base*2;
  }
  return conversion;
  }
  int main (){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  printf("the reverse of %d is %d ",n, Binary_to_decimal(n));

  return 0;
}