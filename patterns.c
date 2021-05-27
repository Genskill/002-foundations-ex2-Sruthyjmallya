#include<stdio.h>
#include<stdlib.h>
void main(){
  int pattern,row;
  char str[30];
  pattern = atoi(fgets(str,11,stdin));
  row = atoi(fgets(str,11,stdin));
 if(pattern == 1){
    for(int i=row;i>0;i--){
       for(int j=0;j<i;j++){
           printf("#");
       }
       if(i > 1){
        printf("\n")
       }
   }
  }
  else if(pattern == 2){
    for(int i=0;i<row;i++){
       for(int j=0;j<=row-i-1;j++){
           printf(" ");
       }
       for(int j=0;j<=i;j++){
           printf("#");
       }
       printf("\n");
       if(i<row-1){
          printf("\n");
       }
 
   }
  }
  else{
    printf("Invalid Option\n");
  }
}
