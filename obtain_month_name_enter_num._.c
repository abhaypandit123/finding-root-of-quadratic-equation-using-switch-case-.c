/*WRITE A PROGRAM TO PRINT MONTH NAME 
USING SWITCH WHEN USER ENTER A NUMBER*/

#include<stdio.h>
int main(){
  int a;
  printf("Enter a Month number:");
  scanf("%d",&a);
  switch (a)
  {
  case 1:
  printf("JAN");
  break;
  case 2:
  printf("FEB");
  break;
  case 3:
  printf("MAR");
  break;
  case 4:
  printf("APR");
  break;
  case 5:
  printf("MAY");
  break;
  case 6:
  printf("JUN");
  break;
  case 7:
  printf("JUL");
  break;
  case 8:
  printf("AUG");
  break;
  case 9:
  printf("SEP");
  break;
  case 10:
  printf("OCT");
  break;
  case 11:
  printf("NOV");
  break;
  case 12:
  printf("DEC");
  break;
  }
  return 0;
}