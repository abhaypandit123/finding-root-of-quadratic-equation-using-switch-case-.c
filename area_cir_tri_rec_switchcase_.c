/*WRITE A PROGRAM TO CALCULATE AREA OF CIRCLE/RECTANGLE/TRIANGLE USING SWITCH CASE*/

#include<stdio.h>
int main(){
  float r=2,L=2,B=4,H=5;
  int a;
  printf("for getting circle,triangle,rectangle area put 1,2&3 respectively=");
  scanf("%d",&a);
  switch(a){
case 1:
    printf("\nArea of the circle=%.2f",3.14*r*r);
    break;
case 2:
    printf("\nArea of the triangle=%.2f",(1.0/2.0)*B*H);
    break;
case 3:
  printf("\nArea of the Rectangle=%.2f",L*B);
  break;
  }
  return 0;
}