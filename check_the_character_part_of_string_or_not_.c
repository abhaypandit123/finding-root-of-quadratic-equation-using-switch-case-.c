//CHARACTER IS PART OF STRING OR NOT 
#include<stdio.h>
int main(){
  int found;
  char count;
  printf("The number of %c character:",count);
  scanf("%c",&count);
  char charac[30]="abhay kumar prajapati";
  int i=0;
  while(charac[i]!=0){
    if(charac[i]==count){
     found=1;
     break;
    } 
    i++;
    }
  if(found==1){
    printf(" %c is part of string",count);
  }
  else{
    printf(" %c is not part of string",count);
  }
  
  return 0;
}