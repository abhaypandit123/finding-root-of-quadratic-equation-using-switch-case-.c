//NUMBER OF TIMES OF OCCURANCE OF CHARACTER

#include<stdio.h>

int main(){
  int count_1=0;
  char count;
  printf("The number of %c character:",count);
  scanf("%c",&count);
  char charc[30]="abhay kumar prajapati";
  int i=0;
  while(charc[i]!=0){
    if(charc[i]==count)
    count_1+=1;
    i++;
  }
  printf("The number of %c character is letter is %d",count,count_1);
  
  return 0;
}