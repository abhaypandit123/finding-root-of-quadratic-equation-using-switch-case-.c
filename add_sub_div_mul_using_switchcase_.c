/*WRITE A PROGRAM TO PERFORM ADD/SUB/MULT/DIV OPERATION USING SWITCH CASE*/


#include<stdio.h>
int main(){
  char x;
  int a,b;
  printf("\nEnter a two number=");
  scanf("%d%d",&a,&b);
  printf("Enter mentioned operator (+,*,-,/)=");
  scanf(" %c",&x);
  switch(x){
    case '+':
    printf("%d",a+b);
    break;
    case '-':
    printf("%d",a-b);
    break;
    case '/':
    printf("%d",a/b);
    break;
    case '*':
    printf("%d",a*b);
    break;
  }

  return 0;
}