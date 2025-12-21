#include<stdio.h>
void swap(int *a,int *b){
int change;
change=*a;
*a=*b;
change=*b;
}
int main(){
  int x=2,y=4;
  swap(&x,&y);
  printf("The value x is %d and y is %d",x,y);
  
  return 0;
}