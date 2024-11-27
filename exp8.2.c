#include<stdio.h>


 int main(){
  char str[100];
  int length = 0;

  printf("\t\t *** string length finder *** \n\n");

  printf("Enter Your String:");
  gets(str);

  // 012345678
  //malayam
  for(i=0;<strlen(str) -1; i++){
    if(str[i] != str[strlen(str) -1 -i]){
        printf("The string is NOT A Palidrome");
        return 0;
    }
  }
  
