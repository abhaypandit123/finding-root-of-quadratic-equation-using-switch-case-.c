//without <string.h> use calculate number of letter
 //if user enter letter
 
 #include<stdio.h>
 int main(){
  char a[50];
//printf("Enter a character:");
scanf(" %s",&a);
int count=0,i=0;
while(a[i]!=0){
printf("%c",a[i]);
count=count+1;
i++;
}
printf("\nThe sum of the chracter %d ",count);
  return 0;
 }