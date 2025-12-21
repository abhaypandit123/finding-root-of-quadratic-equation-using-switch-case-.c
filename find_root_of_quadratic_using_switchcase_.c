//FIND ROOT OF QUADRATIC EQUATION

#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c;
  float x_1,x_2;
  printf("Enter the cofficient of quadratic equation:\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a==0){
printf("Not a quadratic equation\n");
  }
  else{
  float D=b*b-4*a*c;
  x_1=(-b+sqrt(D))/2*a;
  x_2=(-b-sqrt(D))/2*a;
  switch(D>0?1:D==0?0:2){
    case 0:
  printf("Equal root\n");
  printf("root1 is %.2f and root2 is %.2f ",x_1,x_2);
  break;
  case 1:
   printf("Distinct root\n");
   printf("roo1=%.2f and root2=%.2f\n",x_1,x_2);
   break;
   case 2:
  printf("Imaginary root\n");
  break;
  }
}
  return 0;
}