//COUNT FACTORS OF NUMBERS BETWEEN 1 TO 100
#include <stdio.h>
int main() {

int sum;
 
 for(int i=1;i<=20;i++){
    sum=0;
    
    for(int j=1; j<=20;j++){
    if(i%j==0){
    sum=sum+1;
    }
    }
    printf("the number of factors of %d is %d\n",i,sum);
    }
    return 0;
      }