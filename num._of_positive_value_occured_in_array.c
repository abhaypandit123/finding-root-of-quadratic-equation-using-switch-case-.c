#include<stdio.h>
void positive(int a[],int n,int sum){
  //int sum=0; fuction me initialise kro ya yaha hai
  for(int i=0;i<n;i++){
    if(a[i]>0){
    sum++;
    }
  }
  printf("The number positive value in given array=%d",sum);
}
int main(){
  int arrayvalue[]={1,-2,-7,6,3,-31,0,7,67,9};
  positive(arrayvalue,9,0);             
  
  return 0;
}