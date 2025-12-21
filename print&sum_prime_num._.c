//PRINT PRIME NUMBER 
//SUM OF PRIME NUMBER 

#include<stdio.h>
int main (){
    int prime, sum = 0, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        prime = 1;
    for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime==1){
        printf("%d\n",i);
        sum = sum + i;  
        }
    }
 printf("sum of prime number %d", sum);
    return 0;
}