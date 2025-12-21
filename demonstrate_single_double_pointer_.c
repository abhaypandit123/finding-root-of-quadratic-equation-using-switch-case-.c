/*WRITE A PROGRAM DEMONSTRATE USE OF SINGLE, DOUBLES POINTER AND ALSO ADDRESS OF VARIABLE*/


#include<stdio.h>
int main(){
  int i=72;
  int*j=&i;
  int**k=&j; 
//int**k;then k=&j; same as line 5
  printf("The address of i=%p\n",&i);//address of i gives
  printf("The address of i=%p\n",j);//same 
  printf("The value of i is %d\n",*j);//value at the address store in j
  printf("The value at  of i is %d\n",*(&i));//value at the address of i
  printf("The value of j is %p\n",*(&j));//value of j is &i
  printf("The value at  of i is %d\n",(&j));//(&j)=*(&i)
  return 0;
}