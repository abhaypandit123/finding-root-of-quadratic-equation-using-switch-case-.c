/*MAXIMUM OF THREE NUMBERS USING FUNCTION AND POINTER*/

#include<stdio.h>
void max_of_three(int*p_1,int*p_2,int*p_3);
 void max_of_three(int*p_1,int*p_2,int*p_3){
if(*p_1>*p_2 && *p_1>*p_3){
  printf(" X is grater");
}
if(*p_2>*p_1 && *p_2>*p_3){
  printf(" Y is grater");
}
else{
printf(" Z is grater");
}
 }
int main(){
  int X,Y,Z;
  printf("enter X,Y & Z number respectivily\n");
  scanf("%d%d%d",&X,&Y,&Z);
  max_of_three(&X,&Y,&Z);
  return 0;
}