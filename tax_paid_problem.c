/*. Calculars income tax paid by an employee to the government as per the slabs mentioned below

Income Slab

Tax

2.5-5.0L

S

5.OL-100L

20%

Above 10.OL

30% */




#include<stdio.h>
int main(){
   int income;
   printf("income=₹");
   scanf("%d",& income);
   if(250000>=income){
   printf("no tax paid to the government");
   }
   else if(250000<income && income<=500000){
   printf("5%% tax paid to his entire salary ,and amount is=%d", 5*(income-250000)/100);
   }
   else if (500000<income && income<=1000000){
   printf("20%% tax paid to his entire salary ,and amount is=%d",20*(income-250000)/100);
   }
   else if(1000000<income){
   printf("30%% tax paid to his entire salary ,and amount is=%d",30*(income-250000)/100);
   }
   return 0;
   }