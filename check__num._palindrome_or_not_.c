/*WRITE A PROGRAM TO CHECK A PALINDROME NUMBER USING FUNCTION*/
#include<stdio.h>
void palindrome(int);
void palindrome(int a){
 int original=a;
int rem,rev=0;
while(a>0){
  rem=a%10;
  rev=rev*10+rem;
  a=a/10;
  }
  if(original==rev){
  printf("PALINDROME NUMBER");
  }
  else{
  printf("NOT A PALINDROME NUMBER ");
  }
  }
  int main (){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  palindrome(n);

  return 0;
}