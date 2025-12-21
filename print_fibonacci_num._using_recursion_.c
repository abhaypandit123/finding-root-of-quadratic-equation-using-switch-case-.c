/*PRINT FIBONACCI SERIES BY RECURSION*/
#include<stdio.h>
int fibonacci (int);

int main (){
int n;
printf("Enter number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("%d\t", fibonacci(i));
}
return 0;
}

int fibonacci(int a){

if(a==1){
return 0;
}
if(a==2){
return 1;
}
return fibonacci (a-1) + fibonacci(a-2);
}