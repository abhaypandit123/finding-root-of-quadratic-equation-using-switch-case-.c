//REVERSE OF NUMBER USING ARRAY 

#include<stdio.h>
void arrayp(int a[],int n){
  for(int i=0; i<n;i++){
    printf("%d",a[i]);
  }
  printf("\n"); 
}
void reverse(int arr[],int n){
  int change;
  for(int i=0;i<n/2;i++){
  change=arr[i];
  arr[i]=arr[n-i-1];
  arr[n-i-1]=change;
}
}
int main(){
  int a;
  int array[]={1,2,3,4,5,6};
  arrayp(array,6);
  reverse(array,6);
  arrayp(array,6);
  
  return 0;
}